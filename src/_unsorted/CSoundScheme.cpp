// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1022a060 size=0x6
#include "CSoundScheme.h"
namespace lifted {
extern char g_105b4090;
}
datamap_t * CSoundScheme::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b4090);
}
// END FUNCTION

// FUNCTION: 0x1022a1d0 size=0x1e
#include "CSoundScheme.h"

void sub_100aa7b0(void *p);

// TARGET: CSoundScheme::vfunc5
CSoundScheme *CSoundScheme::vfunc5(unsigned int flags)
{
	sub_1000bccb();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1022a2d0 size=0x13
#include "CSoundScheme.h"
void __fastcall sub_10001f28(CSoundScheme *self);

// TARGET: CSoundScheme::vfunc103
void CSoundScheme::vfunc103()
{
	sub_10001f28(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1022a300 size=0x33
#include "CSoundScheme.h"

extern char g_10750d78[];

struct CSoundLockView {
    void sub_100115f9(void *pOwner);
};

struct CSoundCallView {
    char pad0[0x454];
    unsigned char m_b454;
    void sub_100ac4e0(void *pFunc, float flTime, const char *pszContext);
};

// TARGET: CSoundScheme::vfunc113
void CSoundScheme::vfunc113()
{
    ((CSoundLockView *)g_10750d78)->sub_100115f9(this);
    if (((CSoundCallView *)this)->m_b454 != 0) {
        sub_1022b590(2.0f);
        return;
    }
    ((CSoundCallView *)this)->sub_100ac4e0(0, 0.0f, 0);
}
// END FUNCTION

// FUNCTION: 0x1022a350 size=0x11
#include "CSoundScheme.h"
namespace lifted {
int sub_1000fe5c();
}
void CSoundScheme::vfunc129()
{
    *(char *)((char *)this + 0x454) = *(char *)((char *)this + 0x455);
    lifted::sub_1000fe5c();
}
// END FUNCTION

// FUNCTION: 0x1022a4b0 size=0x38f
#include "vampire_all.h"
#include "CSoundScheme.h"
#include "UtlMem.h"
#include "CUtlVector72.h"
#include "UtlVec72.h"
#include "Tier1.h"
extern void (*g_109f362c)(const char *, ...);
void *sub_10245660(const char *);
void sub_1022d1e0(void *, const void *);
bool sub_1022a380(const void *, int);
void sub_101cd940(CSoundScheme *);
struct CDevInner { virtual void vfunc0(); virtual bool vfunc1(); char pad[0x28]; int m2c; };
struct CDevSub { CDevInner *m_p; bool GetBool() { return !m_p->vfunc1() && m_p->m2c; } };
struct CDevView { int pad; CDevSub m_sub; };
struct CGrow1022d260 { void sub_1022d260(int); };
struct CSoundSchemeUnit : CSoundScheme { char sub_1022a930(const char *); int sub_100ab4f0(); };
struct CSoundMem1022 {
	CSoundSchemeSound *m_pMemory; int m_nAlloc; int m_nGrow;
	CSoundSchemeSound &operator[](int i) { return m_pMemory[i]; }
};
struct CSoundVec1022 {
	CSoundMem1022 m_Memory; int m_Size; CSoundSchemeSound *m_pElements;
	CSoundSchemeSound &operator[](int i) { return m_Memory[i]; }
	CSoundSchemeSound &Element(int i) { return m_Memory[i]; }
	CSoundSchemeSound *Base() { return m_Memory.m_pMemory; }
	void Remove(int elem)
	{
		int n = m_Size - elem - 1;
		if (n > 0)
			memmove(&Element(elem), &Element(elem + 1), n * sizeof(CSoundSchemeSound));
		--m_Size;
	}
};
inline bool IsSoundValid1022(const CSoundSchemeSound &s, int b) { return sub_1022a380(&s, b); }

#define APPEND594(list) \
	{ int n = v594->m_size; v594->sub_1022d0d0(1); ((UtlVec72 *)v594)->sub_1022d190(n, 1); sub_1022d1e0(&m_pListMemory594[n], list); }

void CSoundScheme::vfunc104()
{
	static CDevView *developer = (CDevView *)sub_10245660("developer");
	const char *name = m_sSchemeFile.pszValue ? m_sSchemeFile.pszValue : g_106b8540;
	CUtlVector72 *v594 = (CUtlVector72 *)&m_pListMemory594;
	v594->m_size = 0;
	((UtlMem *)v594)->sub_1022cfd0();
	v594->m_pElements = v594->m_pMemory;
	CUtlVector72 *v580 = (CUtlVector72 *)&m_pSoundMemory;
	v580->m_size = 0;
	((UtlMem *)v580)->sub_1022cf90();
	v580->m_pElements = v580->m_pMemory;
	memset(&m_lists460[2], 0, 0x48);
	memset(&m_lists460[0], 0, 0x48);
	memset(&m_lists460[1], 0, 0x48);
	memset(&m_lists460[3], 0, 0x48);
	*(float *)&m_lists460[3].m_n40 = 1.0f;
	m_lists460[3].m_n44 = 0x2800;
	g_109f3890(m_lists460[3].m_szName, "music/music/police_alert.mp3", 0x40);
	if (((CSoundSchemeUnit *)this)->sub_1022a930(name)) {
		m_bList460Valid = sub_1022a380(&m_lists460[0], 1);
		m_bList4f0Valid = sub_1022a380(&m_lists460[2], 1);
		m_bList4a8Valid = sub_1022a380(&m_lists460[1], 1);
		m_bList538Valid = sub_1022a380(&m_lists460[3], 1);
		if (!m_bList4f0Valid)
			APPEND594(&m_lists460[2])
		if (!m_bList460Valid)
			APPEND594(&m_lists460[0])
		if (!m_bList4a8Valid)
			APPEND594(&m_lists460[1])
		if (!m_bList538Valid)
			APPEND594(&m_lists460[3])
		CSoundVec1022 &sounds = *(CSoundVec1022 *)&m_pSoundMemory;
		for (int i = 0; i < m_nSoundCount; i++) {
			if (!sub_1022a380(sounds.Base() + i, 0)) {
				int n = v594->m_size;
				CSoundSchemeSound *src = sounds.m_Memory.m_pMemory;
				if (n + 1 > v594->m_allocationCount)
					((CGrow1022d260 *)v594)->sub_1022d260(n - v594->m_allocationCount + 1);
				v594->m_size++;
				v594->m_pElements = v594->m_pMemory;
				((UtlVec72 *)v594)->sub_1022d190(n, 1);
				sub_1022d1e0(&m_pListMemory594[n], src + i);
				g_109f3630("\tRandom sound %s in list %s is invalid. Removing it from the list. \n", sounds[i].m_szName, name);
				sounds.Remove(i);
			}
		}
	} else {
		if (developer && developer->m_sub.GetBool()) {
			m_bList460Valid = 0;
			*(int *)((char *)this + 0x224) |= 1;
			m_bList4f0Valid = 0;
			m_bList4a8Valid = 0;
			m_bList538Valid = 0;
			return;
		}
		g_109f362c("Could not load sound scheme file %s for entity: %s, removing it...\n", name, ((CSoundSchemeUnit *)this)->sub_100ab4f0());
		sub_101cd940(this);
	}
}
// END FUNCTION

// FUNCTION: 0x1022b690 size=0x3ac
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "IVEngineServer.h"
#include "ScopeTrace.h"
#include "CSoundScheme.h"
#include "DebugOverlay.h"
#include "Tier1.h"

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline CSoundSchemeList &ListElem(CSoundSchemeList *const &base, int i) { return base[i]; }

struct CSSView : CSoundScheme
{
	int edict() { return m_pEdict2e0; }
	int entindex() { return engine->vfunc35(edict()); }
	void EntityText(int off, const char *t, int dur) { sub_101434b0(entindex(), off, t, dur, 255, 255, 255, 255); }
};

int CSoundScheme::vfunc124()
{
	char buf[0x80];
	int i;
	int line = 0;
	int ed;
	if (m_fDebugOverlays224 & 1) {
		int (*snp)(char *, int, const char *, ...);
		line = CBaseEntity::vfunc124();

		if (m_nSoundCount == 0 && !m_bList460Valid && !m_bList4f0Valid && !m_bList4a8Valid && !m_bList538Valid) {
			const char *nm = sub_100ab4f0();
			snp = g_109f388c;
			snp(buf, 0x80, "%s: Not Playing", nm);
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
			snp(buf, 0x80, "INVALID SCHEME FILE: %s", STRINGR(m_sSchemeFile.pszValue));
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
		} else if (m_bStarted) {
			snp = g_109f388c;
			if (m_bList460Valid) {
				snp(buf, 0x80, "Ambient loop: %s  Vol: %.2f", m_lists460[0].m_szName, (double)*(float *)&m_lists460[0].m_n40);
			} else
				snp(buf, 0x80, "Invalid Ambient loop");
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
			if (m_bList4f0Valid)
				snp(buf, 0x80, "Music track: %s  Vol: %.2f", m_lists460[2].m_szName, (double)*(float *)&m_lists460[2].m_n40);
			else
				snp(buf, 0x80, "Invalid Music Track");
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
			if (m_bList4a8Valid)
				snp(buf, 0x80, "Combat track: %s  Vol: %.2f", m_lists460[1].m_szName, (double)*(float *)&m_lists460[1].m_n40);
			else
				snp(buf, 0x80, "Invalid Combat Track");
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
			if (m_bList538Valid)
				snp(buf, 0x80, "Alert track: %s  Vol: %.2f", m_lists460[3].m_szName, (double)*(float *)&m_lists460[3].m_n40);
			else
				snp(buf, 0x80, "Invalid Alsert Track");
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
		} else {
			const char *nm = sub_100ab4f0();
			snp = g_109f388c;
			snp(buf, 0x80, "%s: Not Playing", nm);
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
		}
		for (i = 0; i < m_n594Count5a0; i++) {
			snp(buf, 0x80, "Invalid file: %s \n", ListElem(m_pListMemory594, i).m_szName);
			((CSSView *)this)->EntityText(line, buf, 0);
			line++;
		}
	}
	return line;
}
// END FUNCTION
