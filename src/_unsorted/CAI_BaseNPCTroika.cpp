// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa750 size=0xd
struct TroikaField63f0 { char pad[0x63f0]; char m; };
void CAI_BaseNPCTroika::vfunc416(char value)
{
	((TroikaField63f0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1028d6e0 size=0x66
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::vfunc180()
{
    sub_10295ab0(5.0f);
    if (*(int *)((char *)this + 0x65e8) != 0)
        vfunc601((int)this);
    sub_102b53d0(0, "Leaving interesting place (UpdateOnRemove)");
    if (sub_102c1170())
        sub_102c0bb0();
    sub_1029f5d0((char *)this + 0x658c);
    sub_1029f5d0((char *)this + 0x6594);
    sub_1027ca30();
}
// END FUNCTION

// FUNCTION: 0x1028de90 size=0x7d
#include "CAI_BaseNPCTroika.h"
extern char g_10920534;
extern __declspec(dllimport) void DevMsg(const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
void sub_10013304(CAI_BaseNPCTroika *pNpc, const char *pszText);
void CAI_BaseNPCTroika::vfunc17(const char *pszFormat, int arg)
{
	char szCopy[512];
	char szText[512];
	sub_10004011(pszFormat, arg, szText, 512);
	if (g_10920534) {
		Q_strncpy(szCopy, pszFormat, 512);
		sub_10013304(this, szCopy);
	} else {
		DevMsg(szText);
	}
}
// END FUNCTION

// FUNCTION: 0x1028ef20 size=0x76
#include "CAI_BaseNPCTroika.h"
char CAI_BaseNPCTroika::vfunc587(int unused)
{
    if (sub_10337f30())
        return 0;
    if (*(int *)((char *)this + 0x128))
        return 0;
    if (*(int *)((char *)this + 0x5bb4) > 0)
        return 0;
    if (*((unsigned char *)this + 0x5b84) & 0x10)
        return 0;
    if (sub_1033e2b0())
        return 0;
    if (*(int *)((char *)this + 0x6354) <= 2)
        return 1;
    return *(int *)((char *)this + 0x6358) <= 2;
}
// END FUNCTION

// FUNCTION: 0x1028fcc0 size=0x8d
#include "ScopeTrace.h"
#include "CAI_BaseNPCTroika.h"

void sub_102a0d20();

void CAI_BaseNPCTroika::vfunc432(int a)
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::RunAI", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
	sub_1028fc90();
	sub_102a0d20();
	sub_1026f110(a);
}
// END FUNCTION

// FUNCTION: 0x10290570 size=0xb4
#include "CAI_BaseNPCTroika.h"
#include "CAI_Navigator.h"
#include "CEntityVSlots.h"

// TARGET: CAI_BaseNPCTroika::vfunc532
void CAI_BaseNPCTroika::vfunc532(int a)
{
	switch (a) {
	case 1:
		if (m_n644c <= 0)
			break;
		if (m_n644c > 4)
			break;
		goto check;
	case 2:
	case 4:
		if (m_n644c != 4)
			break;
		((CEntityVSlots *)this)->slot448(0xe);
		m_h5d24 = 0xffffffff;
		m_b5d30 = 0;
		goto clear;
	default:
		break;
	case 8:
		if (m_n644c <= 0)
			break;
		if (m_n644c <= 3)
			goto clear;
		if (m_n644c != 4)
			break;
	check:
		if (((CAI_Navigator *)m_p5d34)->sub_102ee2e0())
			sub_102bf7e0();
	clear:
		m_n644c = 0;
		break;
	}
	sub_1027e0f0(a);
}
// END FUNCTION

// FUNCTION: 0x10293ec0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc488()
{
	static int id = FindSound("Death");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10293f80 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc489()
{
	static int id = FindSound("Target_Suspect");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294280 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc490()
{
	static int id = FindSound("Idle_Calm");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294340 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc491()
{
	static int id = FindSound("Pain");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294400 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc492()
{
	static int id = FindSound("Fear_Start");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102944c0 size=0xa0
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

extern char g_106b8540[];

struct SSoundName
{
	const char *m_psz;

	const char *Get() const { return m_psz ? m_psz : g_106b8540; }
};

struct SSoundEntry
{
	int m_id;
	SSoundName m_name;
};

struct ISoundSettings
{
	virtual void v0();
	virtual void v1();
	virtual int vfunc2(int a, int b);
};

struct CSoundPlayer
{
	void sub_100119fa(void *pEntity, int id, int flags, float volume, float pitch);
};

extern ISoundSettings *g_1070b244;
extern int g_1073dc3c;
extern SSoundEntry **g_1073dc40;
extern CSoundPlayer g_1073dc28;

static inline int LookupSoundId(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(g_1073dc40[i]->m_name.Get(), name))
			return g_1073dc40[i]->m_id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc493()
{
	if (g_1070b244->vfunc2(0, 0x63) < 0x19) {
		static int s_nSoundId = LookupSoundId("Target_Lost");
		g_1073dc28.sub_100119fa(this, s_nSoundId, 2, 1.0f, 1.25f);
	}
}
// END FUNCTION

// FUNCTION: 0x10294590 size=0x93
#include "CAI_BaseNPCTroika.h"
extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CVSoundRec {
	int m_nIndex;
	const char *m_pszName;
};

static inline const char *SafeStr(const char *const *pp)
{
	return *pp ? *pp : g_106b8540;
}

struct CVSoundTable {
	char m_pad00[0x14];
	int m_nCount;	// 0x14
	CVSoundRec **m_ppRecs;	// 0x18

	int Find(const char *pszName)
	{
		for (int i = 0; i < m_nCount; i++) {
			if (!_strcmpi(SafeStr(&m_ppRecs[i]->m_pszName), pszName))
				return m_ppRecs[i]->m_nIndex;
		}
		return -1;
	}
	void sub_101f5950(CAI_BaseNPCTroika *pEnt, int index, int a, float b, float c);
};
extern CVSoundTable g_1073dc28;

void CAI_BaseNPCTroika::vfunc494()
{
	if (!sub_1033e2b0()) {
		static int s_nSound = g_1073dc28.Find("Target_Reacquired");
		g_1073dc28.sub_101f5950(this, s_nSound, 2, 1.0f, 1.25f);
	}
}
// END FUNCTION

// FUNCTION: 0x10294660 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc495()
{
	static int id = FindSound("Surprised");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294720 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc496()
{
	static int id = FindSound("Target_Acquired");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294870 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc498()
{
	static int id = FindSound("Flee");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294930 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc499()
{
	static int id = FindSound("Idle_Agitated");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102949f0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc500()
{
	static int id = FindSound("Exert_Heavy");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294ab0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc501()
{
	static int id = FindSound("Exert_Light");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294b70 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc502()
{
	static int id = FindSound("Riled");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294c30 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc503()
{
	static int id = FindSound("Comfort");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294cf0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc504()
{
	static int id = FindSound("Upset");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294db0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc505()
{
	static int id = FindSound("Target_GiveUp");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294e70 size=0x93
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SoundRecord { int m_Id; const char *m_pszName; };
struct SoundSystem { void sub_100119fa(void *pEntity, int a, int b, float c, float d); };
extern int g_1073dc3c;
extern SoundRecord **g_1073dc40;
extern SoundSystem g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(const char *const *p)
{
	return *p ? *p : g_106b8540;
}

static inline int FindSound(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(NameOf(&g_1073dc40[i]->m_pszName), name))
			return g_1073dc40[i]->m_Id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc506()
{
	if (sub_1033e2b0())
		return;
	static int s_nSound = FindSound("Target_Reacquired");
	g_1073dc28.sub_100119fa(this, s_nSound, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294f40 size=0x12e
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1070b22c.h"
#include "StatDefault.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

struct StatOwner {
	int sub_1006cf30(const char *pszName);
	StatDefault *sub_1006cff0(int id);
};
extern StatOwner g_106c7c34;
extern CUnknown1070b22c *g_1070b22c;

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc507()
{
	static int id = FindSound("Float");
	int base = (*(int *)((char *)this + 0x128) ? 0xe : 0) + 0x42;
	float pitch = base > 0x32 ? 20 / (base - 0x32) : 4.0;
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, pitch);
	static int statId = g_106c7c34.sub_1006cf30("Float_Sound_Info");
	static int bonus = g_106c7c34.sub_1006cff0(statId)->sub_1006cb60(1);
	*(float *)((char *)this + 0x10ec) = g_1070b22c->vfunc119(0) + bonus;
}
// END FUNCTION

// FUNCTION: 0x10295590 size=0x127
#include "CAI_BaseNPCTroika.h"

struct TranslateGlobal {
    virtual void v0();
    virtual bool IsPaused();
    char pad[0x2c - 4];
    int m_nMode;
};
extern TranslateGlobal *g_10924d6c;
struct TranslateBase { int sub_10328030(int act); };

int CAI_BaseNPCTroika::sub_10295590(int act)
{
    int mode = g_10924d6c->IsPaused() ? 0 : g_10924d6c->m_nMode;
    switch (mode) {
    case 1:
        if (act == 9 || act == 0x1115)
            act = 0x13;
        break;
    case 2:
        if (act == 0x13)
            act = 9;
        break;
    }
    unsigned int flags = *(unsigned int *)((char *)this + 0x5b84);
    if ((flags & 0x40) == 0x40) {
        switch (act) {
        case 9: case 0x13: case 0x17: case 0x1115: case 0x1121:
            act = 0xf17;
            goto translated;
        case 0x16:
            act = 0xf17;
            goto translated;
        }
    } else if ((flags & 0x20) == 0x20) {
        switch (act) {
        case 9: case 0x1115: case 0x1121:
            act = 0x13;
            goto translated;
        case 0x16:
            act = 0x13;
            goto translated;
        }
    }
    if (act == 3)
        act = 1;
translated:
    if (vfunc513() & 0x8000000) {
        if (act == 0x55)
            return vfunc570(*(CBaseEntity **)((char *)this + 0x5ddc));
        if (act == 6 || (act == 1 && (*(unsigned char *)((char *)this + 0x5d8c) & 2)))
            return vfunc569(*(CBaseEntity **)((char *)this + 0x5ddc));
    }
    return ((TranslateBase *)this)->sub_10328030(act);
}
// END FUNCTION

// FUNCTION: 0x10297560 size=0xa1
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc569(CBaseEntity *pHint)
{
    if ((*(unsigned int *)((char *)this + 0x14b8) & 0x200) == 0x200)
        return 8;
    if (pHint) {
        switch (*(int *)((char *)pHint + 0x5dc)) {
        case 100:
            if (sub_10295460(0x1111, 0) != -1)
                return 0x1111;
            break;
        case 101:
            if (sub_10295460(0x110d, 0) != -1)
                return 0x110d;
            break;
        case 0x27d8:
            if (sub_10295460(0x1118, 0) != -1)
                return 0x1118;
            break;
        }
    }
    return sub_10274aa0(pHint);
}
// END FUNCTION

// FUNCTION: 0x10299700 size=0x158
#include "CAI_BaseNPCTroika.h"
#include "CRestore.h"

struct CTimerSub
{
	void sub_101b9860();
};
extern void sub_1009d960(float *, int);

int CAI_BaseNPCTroika::vfunc127(CRestore *pRestore)
{
	int result = CAI_BaseNPC::vfunc127(pRestore);
	char bFlag;
	pRestore->vfunc17(&bFlag, 1, 0);
	if (bFlag) {
		pRestore->vfunc15((int *)((char *)this + 0x6310), 1, 0);
		pRestore->vfunc15((int *)((char *)this + 0x6314), 1, 0);
	}
	sub_1009d960((float *)((char *)this + 0x607c), 3);
	sub_1009d960((float *)((char *)this + 0x6084), 2);
	sub_1009d960((float *)((char *)this + 0x6274), 2);
	sub_1009d960((float *)((char *)this + 0x62cc), 3);
	sub_1009d960((float *)((char *)this + 0x62d0), 3);
	sub_1009d960((float *)((char *)this + 0x62d4), 3);
	sub_1009d960((float *)((char *)this + 0x632c), 3);
	sub_1009d960((float *)((char *)this + 0x63d4), 2);
	sub_1009d960((float *)((char *)this + 0x63dc), 2);
	sub_1009d960((float *)((char *)this + 0x6458), 4);
	sub_1009d960((float *)((char *)this + 0x657c), 4);
	((CTimerSub *)((char *)this + 0x60b0))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x60dc))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6108))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6134))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6160))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x618c))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x61b8))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x61e4))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6210))->sub_101b9860();
	return result;
}
// END FUNCTION

// FUNCTION: 0x1029b180 size=0xce
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"

extern char *g_10566458;

struct SOtherNpc { char pad[0x14b8]; unsigned int flags; };
struct SOther {
    char pad0[0x4c];
    unsigned char b4c;
    char pad1[0x94 - 0x4d];
    int m94;
    SOtherNpc *m98;
    char pad2[4];
    int ma0;
    char pad3[4];
    int ma8;
};
struct SHandleEntry { SOther *pEnt; unsigned int serial; };
struct STroikaView {
    char pad0[0x14b8];
    unsigned int flags14b8;
    char pad1[0x63da - 0x14bc];
    char b63da;
    char pad2[0x643c - 0x63db];
    unsigned int h643c;
    char pad3[0x65f7 - 0x6440];
    char b65f7;
};

bool CAI_BaseNPCTroika::sub_1029b180(void *pOtherArg)
{
    STroikaView *t = (STroikaView *)this;
    SOther *pOther = (SOther *)pOtherArg;
    if (!t->b63da) {
        if ((t->flags14b8 & 0x40) == 0x40) {
            if (pOther->m94)
                return true;
            if (pOther->ma8)
                return true;
        } else {
            if (pOther->m98 && (pOther->m98->flags & 0x20000))
                return true;
        }
    }
    unsigned int h = t->h643c;
    SOther *pHandled;
    if (h == 0xffffffff) {
        pHandled = 0;
    } else {
        SHandleEntry *e = (SHandleEntry *)(g_10566458 + 4 + (h & 0x1fff) * 12);
        pHandled = e->serial == (h >> 13) ? e->pEnt : 0;
    }
    if (pOther == pHandled)
        return true;
    if (pOther->ma0)
        return true;
    if (t->b65f7) {
        if (pOther->b4c & 0x16)
            return true;
    } else {
        if (pOther->b4c & 0x12)
            return true;
    }
    return ((CBaseAnimating *)this)->sub_1008be20((CBaseEntity *)pOther);
}
// END FUNCTION

// FUNCTION: 0x1029f940 size=0xc1
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc590
char CAI_BaseNPCTroika::vfunc590()
{
	if (!sub_1028a190())
		return 0;
	int state = *(int *)((char *)this + 0xfec);
	switch (state)
	{
	case 1: case 9: case 0x13: case 0x30: case 0x4b: case 0x4d: case 0x51:
	case 0x73: case 0x74: case 0x75: case 0x76: case 0x77: case 0x78: case 0x79: case 0x7a:
	case 0x7b: case 0x7c: case 0x7d: case 0x7e: case 0x7f: case 0x80: case 0x81: case 0x82:
	case 0x83: case 0x84: case 0x85: case 0x86: case 0x87: case 0x88: case 0x89: case 0x8a:
	case 0xcb5: case 0xd25: case 0x1121: case 0x1157: case 0x1158:
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102ad110 size=0x20
#include "CAI_BaseNPCTroika.h"
struct CUnknownGlobals1070b228 { int m_pad[3]; float m_curtime; };
extern CUnknownGlobals1070b228 *g_1070b228;
void CAI_BaseNPCTroika::vfunc616()
{
	sub_10015839(0x30);
	m_f65bc = g_1070b228->m_curtime + 15.0f;
}
// END FUNCTION

// FUNCTION: 0x102ad140 size=0xe0
#include "CAI_BaseNPCTroika.h"
// TARGET: CAI_BaseNPCTroika::vfunc453
void CAI_BaseNPCTroika::vfunc453()
{
    sub_10280fb0();
    unsigned int flags14b8 = *(unsigned int *)((char *)this + 0x14b8);
    if (!(flags14b8 & 0x4000080)) {
        if (!sub_1033e2b0() && (m_flags14bc & 0x40000) != 0x40000) {
            char *pHint = *(char **)((char *)this + 0x5ddc);
            if (!pHint || *(int *)(pHint + 0x5dc) != 0x2774) {
                sub_10269eb0(0x1e);
                sub_10269eb0(0x1f);
                sub_10269eb0(0x21);
            }
            if (!vfunc167()) {
                if ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 4) & 1)
                    sub_10269eb0(0x72);
                if ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 5) & 1) {
                    sub_10269eb0(0x20);
                    sub_10269eb0(0x22);
                }
            }
            if (~*(unsigned int *)((char *)this + 0x14b8) & 0x400)
                sub_10269eb0(0x27);
        }
    }
    if ((m_flags14bc & 0x40) == 0x40)
        sub_10269f30(0x31);
}
// END FUNCTION

// FUNCTION: 0x102adfe0 size=0x101
#include "CAI_BaseNPCTroika.h"

struct CExprSets
{
	int sub_100ec360(int index, void *pNpc);
	int sub_100ec2e0(int index, void *pNpc);
	float sub_100ec3d0(int index);
};
extern CExprSets g_10924980;

struct CTroikaExprView
{
	char m_pad0[0x10b4];
	int m_nExpression10b4;
	float m_flWeight10b8;
	char m_pad10bc[0x64d0 - 0x10bc];
	int m_nExpression64d0;
	int m_nIndex64d4;
};

// TARGET: CAI_BaseNPCTroika::vfunc610
void CAI_BaseNPCTroika::vfunc610(int emotion)
{
    CTroikaExprView *p = (CTroikaExprView *)this;
    switch (emotion) {
    case 8:
    case 10:
        p->m_nExpression10b4 = sub_10106a40("Fear");
        p->m_nExpression64d0 = sub_10106a40("Fear_NoDeform");
        p->m_flWeight10b8 = 1.0f;
        return;
    case 3:
    case 0xb:
    case 0xe:
        p->m_nExpression10b4 = sub_10106a40("Anger");
        p->m_nExpression64d0 = sub_10106a40("Anger_No Deform");
        p->m_flWeight10b8 = 0.5f;
        return;
    case 2:
        p->m_nExpression10b4 = sub_10106a40("Anger");
        p->m_nExpression64d0 = sub_10106a40("Anger_No Deform");
        p->m_flWeight10b8 = 1.0f;
        return;
    default:
        p->m_nExpression10b4 = g_10924980.sub_100ec360(p->m_nIndex64d4, this);
        p->m_nExpression64d0 = g_10924980.sub_100ec2e0(p->m_nIndex64d4, this);
        p->m_flWeight10b8 = g_10924980.sub_100ec3d0(p->m_nIndex64d4);
        return;
    }
}
// END FUNCTION

// FUNCTION: 0x102b4540 size=0xb4
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

struct SHandleSlot
{
	CBaseEntity *m_pEntity;
	int m_Serial;
};

struct SOtherEntity
{
	char m_pad0000[0x98];
	char *m_p0098;
	int m_n00a0pad;
	int m_n00a8;
};

// the CBaseCombatCharacter implementation of the slot (stub 0x10010e24)
struct SBaseCharacter
{
	char sub_10326750(SOtherEntity *pOther);
};

extern char g_10924fba;
extern char g_10924fb9;
extern CGlobalEntityList *g_10566458;

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	SHandleSlot *s = (SHandleSlot *)&g_10566458->m_Slots[h & 0x1fff].m_pEntity;
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

// CAI_BaseNPCTroika::vfunc363 as a fastcall function: ecx = this, edx unused
char __fastcall sub_102b4540(CAI_BaseNPCTroika *self, int unused, SOtherEntity *pOther)
{
	if (!pOther)
		return false;
	if (g_10924fba)
		return false;
	if (g_10924fb9 && *(int *)((char *)pOther + 0xa8))
		return false;
	if (self->vfunc293()) {
		CBaseEntity *pTarget = ResolveHandle(*(unsigned int *)((char *)self + 0x628c));
		if (self->vfunc293() == (int)pTarget && pOther->m_p0098 && *(pOther->m_p0098 + 0x6279))
			return true;
	}
	char c = ((SBaseCharacter *)self)->sub_10326750(pOther);
	return c != '\0';
}
// END FUNCTION

// FUNCTION: 0x102b4630 size=0xe8
#include "CAI_BaseNPCTroika.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot594View
{
	SV100(a) SV100(b) SV100(c) SV100(d) SV100(e)
	SV10(f0) SV10(f1) SV10(f2) SV10(f3) SV10(f4) SV10(f5) SV10(f6) SV10(f7) SV10(f8)
	SV(f90) SV(f91) SV(f92) SV(f93)
	virtual char s594(CBaseEntity *pEnt, int a, int b, int c);
};

struct CNameTable
{
	unsigned int sub_101e1590(const char *pszName);
	unsigned int sub_101e1870(unsigned int id);
};
extern CNameTable g_10739a4c;
extern char g_10924fba;
extern char g_10924fb9;

// TARGET: CAI_BaseNPCTroika::vfunc201
bool CAI_BaseNPCTroika::vfunc201(CBaseEntity *pEnt, int a, int *pOut, int d)
{
    static unsigned int s_nBrainWipe = g_10739a4c.sub_101e1870(g_10739a4c.sub_101e1590("Dominate_BrainWipe"));
    if (!pEnt)
        return false;
    if (g_10924fba) {
        if (pOut)
            *pOut = 0;
        return false;
    }
    if (g_10924fb9 && *(int *)((int)pEnt + 0xa8)) {
        if (pOut)
            *pOut = 0;
        return false;
    }
    if (!((CSlot594View *)this)->s594(pEnt, a, 0, 0))
        return false;
    if (sub_1033d2f0(s_nBrainWipe))
        return false;
    if (sub_100a6fa0(pEnt, a, pOut, d)) return true; return false;
}
// END FUNCTION

// FUNCTION: 0x102b57c0 size=0x8d
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"

struct CGlobalVarsX { char m_pad[0xc]; float m_curtime; };
extern CGlobalVarsX *g_1070b228;

struct CRandomX {
	virtual void v0();
	virtual float RandomFloat(float flMin, float flMax);
};
extern CRandomX *g_1070b244;

struct CNotifyX {
	virtual void v0();
	virtual void v1();
};
extern CNotifyX *g_10924edc;

char CAI_BaseNPCTroika::sub_102b57c0(int unused)
{
	unsigned int flags = sub_10007e19() ? ((CBaseCombatWeapon *)sub_10007e19())->vfunc360() : 0;
	if ((flags & 0x18000) && !*((char *)this + 0x6078)) {
		if ((*(CAI_NamedThing **)((char *)this + 0x65e8))->sub_1025dca0(this, 0)) {
			*((char *)this + 0x6078) = 1;
			*(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(7.5f, 15.0f) + g_1070b228->m_curtime;
			g_10924edc->v1();
			return 1;
		}
		*((char *)this + 0x6078) = 0;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b59e0 size=0xf1
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CAI_BaseNPCTroika::vfunc603
float CAI_BaseNPCTroika::vfunc603(float *pCur, float *pTarget)
{
	if (*pTarget + 32.0f < *pCur) {
		if (g_1070b244->vfunc2(0, 1))
			return g_1070b244->vfunc1(30.0f, 45.0f);
		return g_1070b244->vfunc1(-30.0f, -45.0f);
	}
	if (*pTarget - 32.0f > *pCur) {
		*pCur = *pTarget;
		if (g_1070b244->vfunc2(0, 1))
			return g_1070b244->vfunc1(170.0f, 179.0f);
		return g_1070b244->vfunc1(-170.0f, -179.0f);
	}
	if (g_1070b244->vfunc2(0, 1))
		return g_1070b244->vfunc1(80.0f, 120.0f);
	return g_1070b244->vfunc1(-80.0f, -120.0f);
}
// END FUNCTION

// FUNCTION: 0x102b6b50 size=0xaa
#include "CAI_BaseNPCTroika.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CTroikaSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1) PV100(2) PV100(3) PV100(4)
	PV10(50) PV10(51) PV10(52) PV10(53) PV10(54) PV10(55)
	PV(560) PV(561) PV(562) PV(563) PV(564) PV(565)
	virtual bool vfunc566(CBaseEntity *pHint);
};

struct CRandomX
{
	virtual void v0();
	virtual float vfunc1(float flMin, float flMax);
};

struct CGlobalVars1070b228
{
	char m_pad0000[0xc];
	float curtime;
};

struct CWeaponRangeX
{
	char m_pad0000[0x8c0];
	float m_fl8c0;
};

extern CGlobalVars1070b228 *g_1070b228;
extern CRandomX *g_1070b244;
int __cdecl sub_102d2980(CAI_BaseNPCTroika *pNPC, int a, int b, float c, int d, int e);

// TARGET: CAI_BaseNPCTroika::vfunc609
int CAI_BaseNPCTroika::vfunc609(char bForce)
{
	if (m_p6444 && ((CTroikaSlotsX *)this)->vfunc566(m_p6444))
		return (int)m_p6444;
	if (!bForce && !(g_1070b228->curtime >= m_f6440))
		return 0;
	m_f6440 = g_1070b244->vfunc1(2.0f, 2.5f) + g_1070b228->curtime;
	float range = 1024.0f;
	if (sub_10007e19())
		range = ((CWeaponRangeX *)sub_10007e19())->m_fl8c0;
	return ::sub_102d2980(this, 8, 0x10, range, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x102bf6e0 size=0x68
#include "CAI_BaseNPCTroika.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))

// TARGET: CAI_BaseNPCTroika::vfunc418
float CAI_BaseNPCTroika::vfunc418(float a)
{
	switch ((int)a)
	{
	case -1000005:
		return NPCF(float, 0x6484);
	case -1000006:
		return NPCF(float, 0x6488);
	case -1000007:
		return NPCF(float, 0x648c);
	case -1000008:
		return 10.0f;
	default:
		return CAI_BaseNPC::vfunc418(a);
	}
}
// END FUNCTION

// FUNCTION: 0x102c12a0 size=0x10b
#include "CUnknown100ecee0.h"

struct TroikaGlobals { char pad[0xc]; float curtime; };
extern CUnknown100ecee0 g_10924980;
extern int (*g_109f3868)(int, int);
extern TroikaGlobals *g_1070b228;
struct TroikaView { char pad[0x64e4]; float m_f64e4; };

#define TFIELD(type, off) (*(type *)((char *)this + (off)))

int CAI_BaseNPCTroika::vfunc611()
{
    float fA;
    int iB, iC;
    int *tbl = (int *)g_10924980.sub_100ecee0((CTableNpc_t *)this, (int *)&fA, &iB, &iC);
    int result;
    if (TFIELD(char, 0x64c0) != 0) {
        result = tbl[TFIELD(int, 0x64c8) + 2];
        TFIELD(char, 0x64e0) = 0;
        TFIELD(char, 0x64e1) = 0;
    } else if (TFIELD(char, 0x64e0) == 0 && TFIELD(char, 0x64e1) == 0) {
        int idx = TFIELD(int, 0x64c8);
        int (*pfnRandom)(int, int) = g_109f3868;
        if (tbl[idx + 2] != tbl[idx + 5] && iC > pfnRandom(1, 100)) {
            result = tbl[TFIELD(int, 0x64c8) + 5];
            TFIELD(char, 0x64e0) = 1;
            TFIELD(char, 0x64e1) = 0;
        } else if (g_1070b228->curtime - ((TroikaView *)this)->m_f64e4 > fA && iB > pfnRandom(1, 100)) {
            result = sub_102c1230();
            TFIELD(char, 0x64e0) = 0;
            TFIELD(char, 0x64e1) = 1;
        } else {
            result = tbl[TFIELD(int, 0x64c8) + 2];
            TFIELD(char, 0x64e0) = 0;
            TFIELD(char, 0x64e1) = 0;
        }
    } else {
        result = tbl[TFIELD(int, 0x64c8) + 2];
        TFIELD(char, 0x64e0) = 0;
        TFIELD(char, 0x64e1) = 0;
    }
    if (result == -1)
        result = TFIELD(int, 0x6f0);
    return result;
}
// END FUNCTION

// FUNCTION: 0x102c1c10 size=0x96
#include "CAI_BaseNPCTroika.h"
extern char *(__cdecl *g_109f3890)(char *, const char *, int);

// TARGET: CAI_BaseNPCTroika::vfunc347
bool CAI_BaseNPCTroika::vfunc347(int event, char *pszName, float *pA, float *pB, float *pC, float *pD)
{
    if (event == 1) {
        g_109f3890(pszName, "Knockback", 0x40);
        *pA = 1.0f;
        *pB = 0.25f;
        *pC = 0.8f;
        *pD = 0.5f;
        int seq = sub_1008dd30(*(int *)((char *)this + 0x6068), -1);
        if (seq >= 0)
            *pC += sub_10091080(seq);
        return true;
    }
    return sub_10107120(event, pszName, pA, pB, pC, pD);
}
// END FUNCTION

// FUNCTION: 0x102c21c0 size=0xf4
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

int sub_1023bd00();
bool __fastcall sub_10175180(CBaseCombatCharacter *pChar);

#define PV1(p) virtual void p();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CTroikaSlots404
{
	PV100(ta) PV100(tb) PV100(tc) PV100(td)
	PV1(te0) PV1(te1) PV1(te2) PV1(te3)
	virtual int vfunc404(CBaseCombatCharacter *pOther);
};

struct CTroikaCheckView : public CBaseCombatCharacter
{
	char sub_100b5190();	// stub 0x10014da8
};

struct CTroikaOtherView : public CBaseCombatCharacter
{
	char sub_10146b20(CAI_BaseNPCTroika *pNPC);	// stub 0x1000983b
};

struct CTroikaWorldView
{
	char pad[0x4ac];
	int m_n4ac;
};
CTroikaWorldView *sub_1023bd00_w();

// TARGET: CAI_BaseNPCTroika::vfunc295
bool CAI_BaseNPCTroika::vfunc295(CBaseCombatCharacter *pOther)
{
	CTroikaCheckView *pSelf = (CTroikaCheckView *)this;
	if (!pOther)
		return false;
	if (!*(int *)((char *)this + 0x128))
		return false;
	if (!pSelf->vfunc158())
		return false;
	if (!pOther->vfunc158())
		return false;
	if (pSelf->sub_10341aa0())
		return false;
	if (pSelf->sub_100b5190())
		return false;
	if (!*((char *)this + 0x1088))
		return false;
	if ((unsigned char)(*(unsigned int *)((char *)this + 0x5b64) >> 2) & 1)
		return false;
	if (*(unsigned int *)((char *)this + 0x14b8) & 0x80000)
		return false;
	if (sub_102c1170())
		return false;
	if (sub_10175180(pOther))
		return false;
	if (!((CTroikaOtherView *)pOther)->sub_10146b20(this))
		return false;
	if (pSelf->sub_1033e2b0())
		return false;
	if (*(unsigned int *)((char *)this + 0x14bc) & 0x10000000)
		return false;
	CTroikaWorldView *pWorld = (CTroikaWorldView *)sub_1023bd00();
	if (pWorld && pWorld->m_n4ac)
		return false;
	int r = ((CTroikaSlots404 *)this)->vfunc404(pOther);
	if (r == 1 || r == 2)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102c48b0 size=0x146
#include "CAI_BaseNPCTroika.h"

#pragma intrinsic(strcmp)
extern "C" int __cdecl strcmp(const char *, const char *);

extern CAI_NamedThing *g_1090fbec;
extern CAI_NamedThing *g_1090fbf0;
extern CAI_NamedThing *g_1090fbf4;

// TARGET: CAI_BaseNPCTroika::vfunc608
bool CAI_BaseNPCTroika::vfunc608(const char *pszName)
{
	CAI_NamedThing *pObj;
	if (!pszName || !*pszName)
		return false;
	if (g_1090fbec && strcmp(pszName, g_1090fbec->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbec;
		pObj = g_1090fbec;
		goto done;
	}
	if (g_1090fbf0 && strcmp(pszName, g_1090fbf0->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbf0;
		pObj = g_1090fbf0;
		goto done;
	}
	if (g_1090fbf4 && strcmp(pszName, g_1090fbf4->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbf4;
		pObj = g_1090fbf4;
done:
		const char *pName = pObj->sub_1025e120();
		*(const char **)((char *)this + 0x65ec) = *pName ? pName : 0;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102c5470 size=0x38
#include "CAI_BaseNPCTroika.h"

struct EntObj {
	char pad[0x9c];
	int field9c;
};
struct EntSlot {
	EntObj *ent;
	int serial;
	int pad;
};
extern char *g_10566458;

static inline EntObj *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *slot = (EntSlot *)(g_10566458 + 4) + (h & 0x1fff);
		if (slot->serial == (int)(h >> 13))
			return slot->ent;
	}
	return 0;
}

int CAI_BaseNPCTroika::vfunc293()
{
	EntObj *ent = ResolveHandle(*(unsigned int *)(m_pad0004 + 0x647c - 4));
	return ent == 0 ? 0 : ent->field9c;
}
// END FUNCTION
