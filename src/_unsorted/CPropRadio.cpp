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

CBaseEntity *CPropRadio::vfunc5(unsigned int flags)
{
	((CUtlVector<CPropRadioRecord> *)&m_pRadioData)->~CUtlVector<CPropRadioRecord>();
	((CBaseAnimating *)this)->sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1022bd60 size=0x144
#include "utlrbtree.h"
#include "CPropRadio.h"
#include "ScopeTrace.h"
#include "utlvector.h"
extern char g_106b8540[];
extern char g_105387dc[];

__declspec(dllimport) void DevWarning(const char *fmt, ...);
long sub_101d2850(const char *pszScript, int mode);

struct CPropRadio_Record
{
	char m_szScript[0x80];
	char m_szSound[0x80];
};

void CPropRadio::vfunc104()
{
	ScopeTrace trace("CPropRadio::Precache", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_1018e0d0();
	vfunc71();
	CUtlVector<CPropRadio_Record> &shows = *(CUtlVector<CPropRadio_Record> *)&m_pRadioData;
	m_nCurrentShow = -1;
	if (sub_1022c9e0()) {
		for (int i = 0; i < shows.Count(); i++) {
			if (sub_101d2850(shows[i].m_szScript, 0x102)) {
				m_nCurrentShow = i;
				break;
			}
		}
	} else {
		DevWarning("%s could not load radio data!!!\n", sub_100ab4f0());
	}
	if (m_nCurrentShow != -1) {
		enginesound->vfunc0(shows[m_nCurrentShow].m_szSound, 1);
	} else {
		DevWarning("%s could not find radio show to play!!!\n", sub_100ab4f0());
	}
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

// FUNCTION: 0x1022c220 size=0x1f6
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropRadio.h"
#include "CBaseProp.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define CLAMPX(val, minv, maxv) ((val) > (maxv) ? (maxv) : ((val) < (minv) ? (minv) : (val)))

// TARGET: CPropRadio::vfunc103
void CPropRadio::vfunc103()
{
	ScopeTrace trace("CPropRadio::Spawn", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	((CBaseProp *)this)->CBaseProp::vfunc103();
	m_nEffectFlags = 0xa0;
	void *pStudioHdr = ((CBaseAnimating *)this)->sub_100952d0(-1);
	if (pStudioHdr) {
		{
			ScopeTrace trace2("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(3);
		}
		sub_100adf10((float *)((char *)pStudioHdr + 0xb4), (float *)((char *)pStudioHdr + 0xc0));
		sub_100aaa40(1);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100ddd90();
		sub_100b3b00();
	}
	sub_100a9470(0);
	if (m_flags204 & 1)
		sub_1022c750(1);
	else
		sub_1022c750(0);
	*(float *)&m_nVolume750 = CLAMPX(*(float *)&m_nVolume750, 0.01f, 1.0f);
	*(float *)&m_nSoundLevelArg754 = CLAMPX(*(float *)&m_nSoundLevelArg754, 1.0f, 10000.0f);
}
// END FUNCTION

// FUNCTION: 0x1022c4a0 size=0x158
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropRadio.h"
#include "ScopeTrace.h"
#include "CPASFilter.h"
#include "CEntitySoundOriginView.h"
#include "utlvector.h"
struct CRadioRec12 { char m_szScript[0x80]; char m_szSound[0x80]; };

int sub_10228350(int a);

#define ENG10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct IEngineAmbient {
	ENG10(e0) ENG10(e1) ENG10(e2) ENG10(e3)
	virtual void e40(); virtual void e41(); virtual void e42(); virtual void e43(); virtual void e44();
	virtual void e45(); virtual void e46(); virtual void e47(); virtual void e48();
	virtual void EmitAmbientSound(int entindex, const Vector &pos, const char *pszSample, int volume, int soundlevel, int flags, int pitch);
};

struct CPropRadioEmit : CPropRadio
{
	inline void EmitShow(int entindex, int vol, int soundlevel)
	{
		((IEngineAmbient *)engine)->EmitAmbientSound(entindex, ((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), (*(CUtlVector<CRadioRec12> *)&m_pRadioData)[m_nCurrentShow].m_szSound, m_nVolume750, soundlevel, 0x188, 100);
	}
};

void CPropRadio::vfunc113()
{
	ScopeTrace trace("CPropRadio::Activate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseEntity::vfunc113();
	if (m_nCurrentShow != -1) {
		int level = sub_10228350(m_nSoundLevelArg754);
		CPASFilter filter(((CEntitySoundOriginView *)this)->WorldSpaceCenter());
		((CPropRadioEmit *)this)->EmitShow(m_pEdict2e0, m_nVolume750, level);
	}
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

// FUNCTION: 0x1022cca0 size=0x17b
#include "CPropRadio.h"
#include "ScopeTrace.h"
extern char g_106b8540[];
extern char g_105387dc[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
void sub_101434b0(int index, int line, const char *text, float duration, int r, int g, int b, int a);

int CPropRadio::vfunc124()
{
    ScopeTrace trace("CPropRadio::DrawDebugTextOverlays", this ? STRINGR(m_name26c) : g_105387dc);
    int text_offset = sub_10096100();
    if (*(unsigned char *)((char *)this + 0x224) & 1) {
        int edict;
        if (m_nCurrentShow != -1) {
            char *data = m_pRadioData;
            edict = m_pEdict2e0;
            int idx = engine->vfunc35(edict);
            sub_101434b0(idx, text_offset, data + m_nCurrentShow * 0x100, 0, 255, 255, 255, 255);
            text_offset++;
            data = m_pRadioData;
            idx = engine->vfunc35(m_pEdict2e0);
            sub_101434b0(idx, text_offset, data + m_nCurrentShow * 0x100 + 0x80, 0, 255, 255, 255, 255);
            text_offset++;
        } else {
            edict = m_pEdict2e0;
            sub_101434b0(engine->vfunc35(edict), text_offset, "COULD NOT FIND VALID STORY", 0, 255, 255, 255, 255);
            text_offset++;
        }
    }
    return text_offset;
}
// END FUNCTION
