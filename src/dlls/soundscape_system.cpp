// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 2 blocks
#include "vampire.h"

// FUNCTION: 0x101ae050 size=0x95
#include "CSoundscapeSystem.h"
#include "CUnknown10248a50.h"

struct KeyValuesV
{
	char m_pad[0x1c];
	~KeyValuesV() { ((CUnknown10248a50 *)this)->sub_100046f1(); }
	bool LoadFromFile(IFileSys *fs, const char *name) { return ((CUnknown10248a50 *)this)->sub_102480f0(name, fs, 0, true); }
	KeyValuesV *GetFirstSubKey() { return (KeyValuesV *)((CUnknown10248a50 *)this)->sub_10248a10(); }
	KeyValuesV *GetNextKey() { return (KeyValuesV *)((CUnknown10248a50 *)this)->sub_10248a30(); }
	const char *sub_102480b0();
};
struct S_Mem { int m_h; unsigned short sub_10249980(const char *s, int v); };
struct S_View { void *vt; int pad4; S_Mem m_soundscapes; int m_soundscapeCount; };
extern IFileSys *g_1070b238;

bool CSoundscapeSystem::vfunc0()
{
	S_View *self = (S_View *)this;
	self->m_soundscapeCount = 0;
	KeyValuesV *pKeyValuesData = (KeyValuesV *)new CUnknown10248a50("soundscapes");
	if (pKeyValuesData->LoadFromFile(g_1070b238, "scripts/soundscapes.txt"))
	{
		KeyValuesV *pKeys = pKeyValuesData;
		while (pKeys)
		{
			if (pKeys->GetFirstSubKey())
			{
				self->m_soundscapes.sub_10249980(pKeys->sub_102480b0(), self->m_soundscapeCount);
				self->m_soundscapeCount++;
			}
			pKeys = pKeys->GetNextKey();
		}
	}
	delete pKeyValuesData;
	return true;
}
// END FUNCTION

// FUNCTION: 0x101ae170 size=0x28
#define PCD_INITIALIZERS	// the class as the initializer units see it: its real bases and inline destructor
#include "CSoundscapeSystem.h"

// VC6 writes CSoundscapeSystem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSoundscapeSystem *pcd_emit_101ae170() { return new CSoundscapeSystem; }

// TARGET: ??_GCSoundscapeSystem@@UAEPAXI@Z
// END FUNCTION
