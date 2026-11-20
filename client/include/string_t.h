// string_t: Source's pooled string handle (a const char * into the string pool). The user-written constructors make it a
// non-trivial class, so a function returning it takes a hidden result pointer at [esp+4] (cdecl) and returns it in eax,
// like 0x1042bff0 / 0x10203ed0 (`string_t f(const char *psz)`: `if (*psz) { p = pool.Find(psz); s = *p ? p : 0 } else s = 0`).
#pragma once

struct string_t
{
	const char *pszValue;
	string_t() {}
	string_t(const char *p) { pszValue = p; }
};
