// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1022bba0 size=0x6
#include "datamap.h"
#include "CPropRadio.h"
namespace lifted {
extern char g_105b41b0;
}
datamap_t * CPropRadio::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b41b0);
}
// END FUNCTION

// FUNCTION: 0x1022bca0 size=0x86
#include "CPropRadio.h"
#include "CBaseAnimating.h"
#include "utlvector.h"

struct CPropRadioRecord {
	char m_data[0x100];
};
void sub_100aa7b0(void *pEntity);

CPropRadio *CPropRadio::vfunc5(unsigned int flags)
{
	((CUtlVector<CPropRadioRecord> *)&m_pRadioData)->~CUtlVector<CPropRadioRecord>();
	((CBaseAnimating *)this)->sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1022bf10 size=0x161
#include "CEntryX.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropRadio.h"
#include "CUnknown1073dc00.h"
#include "ScopeTrace.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

extern CUnknown1073dc00 g_1073dc00;
extern int g_10750fec;
extern int g_10750ff0;

struct NameStr
{
	const char *m_psz;
	const char *Get() const { return m_psz ? m_psz : g_106b8540; }
};

struct SoundEntry
{
	int m_nValue;
	NameStr m_name;
};

struct SoundTable
{
	char m_pad0000[0x14];
	int m_nEntries;
	SoundEntry **m_pEntries;

	int FindEntry(const char *pszName)
	{
		for (int i = 0; i < m_nEntries; i++)
		{
			if (_strcmpi(m_pEntries[i]->m_name.Get(), pszName) == 0)
				return m_pEntries[i]->m_nValue;
		}
		return -1;
	}
};

struct CPropRadioFields
{
	char m_pad0000[0xb4];
	int m_nSoundSet;
	char m_pad00b8[4];
	int m_n0bc;
	NameStr m_sound;
	char m_pad00c4[0x26c - 0xc4];
	const char *m_pszName;
};

// TARGET: CPropRadio::vfunc71
void CPropRadio::vfunc71()
{
	CPropRadioFields *f = (CPropRadioFields *)this;
	ScopeTrace trace("CPropRadio::PrecacheSoundTable",
		this ? (f->m_pszName ? f->m_pszName : g_106b8540) : g_105387dc);
	f->m_n0bc = 0;
	f->m_nSoundSet = g_1073dc00.sub_101f55a0(this, f->m_sound.Get(), 0);

	SoundTable *t = (SoundTable *)&g_1073dc00;
	g_10750fec = t->FindEntry("on");
	g_10750ff0 = t->FindEntry("off");
}
// END FUNCTION

// FUNCTION: 0x1022c0e0 size=0x7b
#include "CPropRadio.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105b49d0[];
extern char g_105387dc[];
extern char g_106b8540[];
int CPropRadio::vfunc35(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_105b49d0;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int v = *(int *)((char *)this + 0x730);
    --*g_109f3680;
    return v;
}
// END FUNCTION

// FUNCTION: 0x1022c180 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_1022c180(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CPropRadio::GetHighlightMaterial";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1022c660 size=0x6
#include "CPropRadio.h"
int CPropRadio::vfunc117()
{
    return 8;
}
// END FUNCTION

// FUNCTION: 0x1022c680 size=0x96
#include "CPropRadio.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

// TARGET: CPropRadio::vfunc173
void CPropRadio::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (name == 0)
            name = g_106b8540;
    } else
        name = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CPropRadio::Use";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (*((char *)this + 0x734))
        sub_1022c750(0);
    else
        sub_1022c750(1);
    --*g_109f3680;
}
// END FUNCTION
