# How the build works

`python configure.py` and `ninja` build `build/vampire.dll` from `src/`, `include/` and the tables in `config/`.
`ninja verify` compares the result with your own copy of the original DLL. Neither step needs pcdecomp or its
database. The README's [Building](../README.md#building) section lists the commands; this page explains what they
do and what each file holds.

## Steps

1. **configure.py** reads `config/build.toml` and `config/blocks.txt`, then splits every `src/**/*.cpp` into its
   blocks.
   - It writes `build/src/<address>.cpp` for each block: the prelude include (`vampire.h`) followed by the block's
     text, exactly the text pcdecomp's judge compiled.
   - A file is written only when its text changed, so ninja recompiles only the blocks that changed.
   - `config/blocks.txt` keeps a digest of each block's text as it was when `config/` was written. A block whose
     text differs gets a warning (`N listed blocks changed since config/ was written ...: run pcdecomp
     standalone`): its fix-ups, patches or known differences may need rewriting. The build still runs.
   - It then writes `build.ninja`.
   - ninja runs configure again by itself whenever `src/`, `config/`, `tools/` or `configure.py` change.
2. **Compile**: each block is compiled on its own with Visual C++ 6.0:
   `cl /nologo /c /O2 /GR /Gy /Iinclude /Fo build/obj/<k><address>.obj build/src/<address>.cpp`.
   - `k` is `b` for a function block and `i` for a static initializer.
   - After each compile, `tools/vc6.py` lists the headers the block includes (VC6's cl cannot report them) in
     `build/obj/<k><address>.obj.d`. ninja moves that list into its own log (`.ninja_deps`; `ninja -t deps
     build/obj/<k><address>.obj` shows it) and deletes the file. A change to a header in `include/` then recompiles
     every block that includes it, and only those.
   - `src/_bss/*.cpp` (the zero-initialized globals) and `build/gaps.cpp` (fillers between them) are compiled with
     the same flags, without `/Gy` and the include folder.
   - `tools/vc6.py` gives every run the environment `vcvars32.bat` would set and its own TMP folder.
3. **Data**: `tools/data_asm.py` fills the holes in each `src/_data/*.asm.in` template and writes
   `build/data/*.asm`. ml assembles each one.
   - A hole is an `ORIGBYTES 0x<address>, <count>` line. It becomes `DB` lines holding the bytes found at that
     address in your `orig/vampire.dll`.
   - The DLL's SHA-1 is checked first.
   - The game's data bytes are never stored in the repository.
4. **Fix-ups**: `tools/fixup.py` writes fixed copies of some objects to `build/link/`, following
   `config/fixups.txt` and `config/bss_layout.txt`. The compiled objects in `build/obj/` stay as cl wrote them.
   - A record names a section by its number and by the name it had when `config/` was written. If the object's
     section has another name, the block has changed since: the step stops and says to run `pcdecomp standalone`.
5. **Aliases and imports**:
   - `tools/alias_obj.py` turns `config/aliases.txt` into `build/alias.obj`, a set of COFF weak externals.
   - `lib` makes an import library from each `config/imports/*.def`.
6. **Link**: `link.exe` links the objects in `config/blocks.txt` order, then the bss objects, the gaps, the data
   objects and the aliases, then the import libraries and `LIBC.LIB KERNEL32.LIB USER32.LIB`. The options come
   from `config/build.toml`. The outputs are `build/unpatched/vampire.dll` and `build/vampire.map`.
7. **Vtable patch**: `tools/patch_vtables.py` writes the words listed in `config/vtable_patches.txt` into the
   DLL, giving `build/vampire.dll`.
   - Each word must still hold the address of the expected symbol, or the step stops.
   - This step is temporary. It covers deleting destructors and slots that the sources do not produce yet.
8. **Verify**: `tools/verify.py` (see below).

A full build compiles about 19,000 objects; on 12 threads it takes about 20 minutes. After that, ninja rebuilds
only what changed.

## Blocks

Every source file under `src/` is a list of blocks:

```cpp
// FUNCTION: 0x103158f0 size=0xab
#include "CBaseEntity.h"
...the function's source...
// END FUNCTION
```

- The block's text, includes and helper declarations included, is one translation unit. Blocks in the same file
  do not see each other.
- The address and size are the function's place in the original DLL.
- `// TARGET: <mangled name>` in a block names the symbol the block defines when it is not the obvious one
  (a template member, a header inline).
- Files are cp1252 with LF line ends; `.gitattributes` keeps clones on LF on every system.

A file's header says how its place was chosen:
- "named by the DLL's own strings": the DLL contains the original source path (`E:\Vampire\main\dlls\...`).
- "placement guessed: the reference trees' server project lists this file": the file name comes from the
  Source SDK's server project, so the grouping is a guess.
- `src/_unsorted/<Class>.cpp` and `src/_init/`: no evidence yet.

## config/

Every file except the `.def` files starts with a line naming the commit it was written from. `pcdecomp
standalone` writes all of them; do not edit them by hand. Text files hold one record per line with space-separated fields. Addresses are 8 hex
digits; sizes and offsets are 0x hex.

| File | Record |
|---|---|
| `build.toml` | target name, SHA-1 and base address; compiler prelude and flags; link options and libraries; import DLLs |
| `blocks.txt` | `address size kind target digest`: every block in link order (`b` function block, `i` initializer; the target is the mangled symbol, `-` for an initializer; the digest is the first 12 hex digits of the SHA-1 of the block's `build/src/` file) |
| `aliases.txt` | `alias canonical`: an old or second name of a symbol and the name its definition has |
| `fixups.txt` | `object localize NAME` (a same-unit copy's definition becomes static), `object promote NAME` (a file static becomes external), `object inner NAME SECTION SECTION-NAME OFFSET` (a public symbol at OFFSET in the object's section SECTION, a global that lies inside another one) |
| `bss_layout.txt` | `rename object section current-name .bss$<address>` (puts a global at its distance in the game's .bss), `gap address size` (filler) |
| `vtable_patches.txt` | `vtable slot built-symbol game-symbol`: the temporary post-link patch |
| `imports/*.def` | the names and ordinals the game imports from tier0.dll, vstdlib.dll, vampire_python21.dll (lib reads them, so they have no header line) |
| `addresses.txt` | `address symbol`: the game address of every symbol the objects define or refer to (verify reads it) |
| `known_differences.txt` | `kind place reason`: every difference verify may report, each with its reason |

## Verify

`ninja verify` (or `python -m tools.verify`) reads `orig/vampire.dll`, `build/vampire.dll`, the map and the
compiled objects, and checks:

- **functions and initializers**:
  - Every byte outside a relocation must equal the game's at the block's address. Past the game's recorded size
    only fill is allowed.
  - At every relocation, the game's word must point at the game address of the same symbol.
  - A game call into an incremental-link jump stub is followed through the stub.
  - Code that no block covers is checked under the block that reaches it. Example: the destroy of an inline
    function's local static, which every unit may have a copy of while the game has one.
  - The data a block's object defines (RTTI records, tables, function-local statics) is compared with the game's
    at its address, each symbol up to the next one. Trailing alignment zeros are not compared. A relocated word
    must point at the game address of the same symbol. A constant with no game address of its own (a string, a
    float) must have the same bytes as the place the game's word points at.
- **data**: every item of the data templates has the game's bytes over its whole extent, and every relocated word
  in the data objects points at the counterpart of the game's target.
- **vtables**: every slot of every table the build emits points at the counterpart of the game's slot.
- **tables**: the static-initializer table (`.CRT$XCU`) in the game's order, the exports (names, ordinals,
  targets) and the imports.
- **unlisted blocks**: a block in `src/` that `config/blocks.txt` does not list is built and linked but has no
  check; verify reports it (`unlisted`) until `pcdecomp standalone` lists it.

It prints a summary, writes `build/report.json` and exits 0 when every difference it finds is listed in
`config/known_differences.txt`. A listed difference it no longer finds is reported as stale. Today's list has 117
entries:
- 49 vtable slots, of which 48 words are patched after the link;
- 10 vtables of helper classes the game has no name for;
- 15 extra static-initializer entries;
- 32 SafeDisc data exports that no object exports yet, and the ordinal shift they cause;
- 10 functions whose built code differs: an inline copy that link.exe keeps from another object, and nine
  local-static destroys.

The list shrinks as those are fixed; a new entry needs a reason.

`python -m tools.verify --function 0x<address>` prints one block's check with both byte runs (disassembled when
`pip install capstone` is installed).

## After a change

Run `pcdecomp standalone <project>` after anything that changes symbol names, matches or headers. It rewrites
`config/`, `tools/` and `configure.py` and commits them (`--dry-run` lists the files it would change). If the run
would add a known difference or a vtable patch that `config/` does not list yet, it lists them and writes nothing.
Check each one, then run it again with `--allow-new-differences`. Run
`pcdecomp data` first when symbol names changed, so the data templates name the new symbols. The tools are kept
and tested in pcdecomp (`src/pcdecomp/standalone/template/`) and are the same for every project; everything
specific to vampire.dll is in `config/`.
