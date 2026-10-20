// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa750 size=0xd
struct TroikaField63f0 { char pad[0x63f0]; char m; };
void CAI_BaseNPCTroika::vfunc416(char value)
{
	((TroikaField63f0 *)this)->m = value;
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
