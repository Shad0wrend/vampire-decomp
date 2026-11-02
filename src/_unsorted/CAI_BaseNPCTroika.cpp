// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa5d0 size=0xf
int CAI_BaseNPCTroika::vfunc586(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x6088);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101aa690 size=0x3
bool CAI_BaseNPCTroika::vfunc591()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101aa750 size=0xd
struct TroikaField63f0 { char pad[0x63f0]; char m; };
void CAI_BaseNPCTroika::vfunc416(char value)
{
	((TroikaField63f0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x101aa790 size=0x6
namespace lifted {
extern char g_10924248;
}
CAI_CondOwner * CAI_BaseNPCTroika::vfunc580()
{
    return (CAI_CondOwner *)((int)&lifted::g_10924248);
}
// END FUNCTION

// FUNCTION: 0x101aa7b0 size=0x6
namespace lifted {
extern int g_105d1060;
}
const char * CAI_BaseNPCTroika::vfunc451()
{
    return (const char *)lifted::g_105d1060;
}
// END FUNCTION

// FUNCTION: 0x1028cd10 size=0x6
extern void *g_105ce470;

void *sub_1028cd10(void)
{
    return &g_105ce470;
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

// FUNCTION: 0x1028d860 size=0x50
#define V100(p) CAI_NPC_V10(p##0) CAI_NPC_V10(p##1) CAI_NPC_V10(p##2) CAI_NPC_V10(p##3) CAI_NPC_V10(p##4) CAI_NPC_V10(p##5) CAI_NPC_V10(p##6) CAI_NPC_V10(p##7) CAI_NPC_V10(p##8) CAI_NPC_V10(p##9)
struct CTroikaSlot614 {
	V100(0) V100(1) V100(2) V100(3) V100(4) V100(5)
	CAI_NPC_V10(60) CAI_NPC_V(610) CAI_NPC_V(611) CAI_NPC_V(612) CAI_NPC_V(613)
	virtual void vfunc614();
};
void CAI_BaseNPCTroika::sub_1028d860(const Vector *pPos)
{
	const Vector *pOrigin = (const Vector *)vfunc217();
	float dx = pPos->x - pOrigin->x;
	float dy = pPos->y - pOrigin->y;
	float dz = pPos->z - pOrigin->z;
	if (dx * dx + dy * dy + dz * dz <= 4194304.0f)
		((CTroikaSlot614 *)this)->vfunc614();
}
// END FUNCTION

// FUNCTION: 0x1028d910 size=0x58
#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct STroikaSlots {
	V100(0) V100(1) V100(2) V100(3) V100(4) V100(5)
	V10(60) V(610) V(611) V(612) V(613)
	virtual void Slot614();
};
struct STroikaTimes {
	char pad0[0x178];
	float m_flTime178;
	char pad1[0x6254 - 0x17c];
	float m_flTime6254;
	float m_flTime6258;
	float m_flTime625c;
	float m_flTime6260;
};
void CAI_BaseNPCTroika::vfunc584(int unused)
{
	((STroikaSlots *)this)->Slot614();
	STroikaTimes *p = (STroikaTimes *)this;
	p->m_flTime178 = gpGlobals->curtime;
	p->m_flTime6254 = gpGlobals->curtime;
	p->m_flTime6258 = gpGlobals->curtime;
	p->m_flTime625c = gpGlobals->curtime;
	p->m_flTime6260 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1028de10 size=0x5e
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027ef20.h"
extern char g_10920534;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
struct CTroikaMsgView : CAI_BaseNPCTroika
{
	void sub_1028d990(int a, int b, char *pBuf, int nSize);
};

// TARGET: CAI_BaseNPCTroika::vfunc18
void CAI_BaseNPCTroika::vfunc18(int a, int b)
{
	char szBuf[512];
	((CTroikaMsgView *)this)->sub_1028d990(a, b, szBuf, sizeof(szBuf));
	if (g_10920534)
		((CUnknown1027ef20 *)this)->sub_1027ef20(szBuf);
	else
		DevMsg(szBuf);
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

// FUNCTION: 0x1028df30 size=0x59
#include "CUnknown1027ef20.h"
extern char g_10920534;
__declspec(dllimport) void DevMsg(const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

void CAI_BaseNPCTroika::vfunc20(const char *pszMessage)
{
	char szBuf[512];
	if (pszMessage)
	{
		if (g_10920534)
		{
			Q_strncpy(szBuf, pszMessage, 512);
			((CUnknown1027ef20 *)this)->sub_1027ef20(szBuf);
		}
		else
			DevMsg(pszMessage);
	}
}
// END FUNCTION

// FUNCTION: 0x1028dfb0 size=0x58
extern char g_10920534;
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
__declspec(dllimport) void DevMsg(const char *fmt, ...);
void sub_1027ee20(void *pNpc, char *msg);
void CAI_BaseNPCTroika::vfunc19(const char *pszMsg)
{
	if (pszMsg) {
		if (g_10920534) {
			char buf[512];
			Q_strncpy(buf, pszMsg, 512);
			sub_1027ee20(this, buf);
			return;
		}
		DevMsg(pszMsg);
	}
}
// END FUNCTION

// FUNCTION: 0x1028e310 size=0x31
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
extern char g_106b8540[];
void CAI_BaseNPCTroika::vfunc113()
{
	sub_100a0bc0();
	if (((CEntityVSlots *)this)->slot138()) {
		const char *psz = m_pszDisposition6558;
		if (!psz)
			psz = g_106b8540;
		sub_102c0f70(psz, 1);
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

// FUNCTION: 0x10293e50 size=0x1d
#include "CAI_BaseNPCTroika.h"

struct CAI_TroikaSoundPlaceholder {
	void sub_10289ee0(int a);
};

void CAI_BaseNPCTroika::vfunc588()
{
	if (vfunc251())
		((CAI_TroikaSoundPlaceholder *)this)->sub_10289ee0(0xf1);
}
// END FUNCTION

// FUNCTION: 0x10293e80 size=0x24
#include "CAI_BaseNPCTroika.h"

struct CTroikaVFunc527 {
	bool sub_10293e80(void *pArg);
};

// TARGET: CTroikaVFunc527::sub_10293e80
bool CTroikaVFunc527::sub_10293e80(void *pArg)
{
	CAI_BaseNPCTroika *pObj = *(CAI_BaseNPCTroika **)((char *)pArg + 0xa0);
	if (pObj != 0) {
		if (!pObj->sub_102d1540(this)) {
			return true;
		}
	}
	return false;
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

// FUNCTION: 0x10294070 size=0x19a
#include "CAI_BaseNPCTroika.h"
#include "StatDefault.h"

struct StatOwner
{
	StatDefault *sub_1006cff0(int id);
	int sub_1000fb46(const char *pszName);
};
extern StatOwner g_106c7c34;

struct CDialogPartnerView
{
	char m_pad0000[0xfe8];
	EHANDLE m_hfe8;
};

bool CAI_BaseNPCTroika::vfunc510()
{
	if (sub_102c1170())
		return false;
	if (m_h1538.Get() && m_n153c != -1)
		return false;
	if (((CBaseCombatCharacter *)this)->sub_10341aa0())
		return false;
	if (m_flags14b8 & 0x20000)
		return false;
	if (m_n5cc4 != 1 || m_n5cc0 != 1)
		return false;
	if (!m_h628c.Get())
		return false;
	if (((CDialogPartnerView *)m_h628c.Get())->m_hfe8.Get())
		return false;
	static int id = g_106c7c34.sub_1000fb46("Float_Sound_Info");
	static float v = g_106c7c34.sub_1006cff0(id)->sub_1006caa0(0);
	if (!(m_f6264 > v))
		return CAI_BaseNPC::vfunc510();
	return false;
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
	*(float *)((char *)this + 0x10ec) = engine->vfunc119(0) + bonus;
}
// END FUNCTION

// FUNCTION: 0x10295300 size=0x7d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
struct CEntPosView {
	PV10(a0) PV10(a1) PV10(a2) PV10(a3) PV10(a4) PV10(a5) PV10(a6) PV10(a7) PV10(a8) PV10(a9)
	PV10(b0) PV10(b1) PV10(b2) PV10(b3) PV10(b4) PV10(b5) PV10(b6) PV10(b7) PV10(b8)
	PV(c0) PV(c1) PV(c2)
	virtual Vector *vfunc193(Vector *pOut);
	PV10(d0) PV10(d1) PV(d2) PV(d3) PV(d4)
	virtual Vector *vfunc217();
};
float sub_102d61b0(int a);
void CAI_BaseNPCTroika::vfunc563(CBaseEntity *pEnt, const void *pGoal, const void *pParams, const void *pExtra)
{
	if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
		CEntPosView *pView = (CEntPosView *)pEnt;
		Vector *pVec = (Vector *)pGoal;
		const Vector *pB = pView->vfunc217();
		{
			Vector buf;
			const Vector *pA = pView->vfunc193(&buf);
			*pVec += *pA - *pB;
		}
		*(float *)pParams = sub_102d61b0(*(int *)((char *)this + 0x1568));
	}
}
// END FUNCTION

// FUNCTION: 0x102953a0 size=0x30
#include "CAI_BaseNPCTroika.h"
bool CAI_BaseNPCTroika::vfunc564()
{
	if ((vfunc513() & 0x8000) && sub_1032e7b0() && !*((char *)this + 0x6078))
		return false;
	return CAI_BaseNPC::vfunc564();
}
// END FUNCTION

// FUNCTION: 0x102953e0 size=0x59
// TARGET: CAI_BaseNPCTroika::vfunc592
bool CAI_BaseNPCTroika::vfunc592()
{
    if (sub_10014df8(0x48))
        return true;
    if (gpGlobals->curtime >= m_f607c)
        return true;
    if (m_f607c - 1.0f <= gpGlobals->curtime && !sub_10014df8(0x4f))
        return true;
    return false;
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

// FUNCTION: 0x10295a60 size=0x3
void CAI_BaseNPCTroika::vfunc465(int a0)
{
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

// FUNCTION: 0x10298ce0 size=0x32
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100ecee0.h"
extern CUnknown100ecee0 g_10924980;
void CAI_BaseNPCTroika::vfunc105(const char *pszName)
{
	sub_103409a0(pszName);
	sub_10273070(1);
	CAI_BaseNPC::sub_10274ca0();
	m_n64e8 = g_10924980.sub_100ec640((CBaseAnimating *)this);
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

// FUNCTION: 0x10299d80 size=0x6
int sub_10299d80(void)
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x10299da0 size=0x21d
struct Troika404View { char pad[0x98]; CAI_BaseNPCTroika *p98; CAI_BaseNPCTroika *p9c; };

int CAI_BaseNPCTroika::vfunc404(CBaseEntity *pOther)
{
	if (pOther == (CBaseEntity *)this)
		return 0;
	if (!pOther)
		return 0;
	CAI_BaseNPCTroika *pOwner = ((Troika404View *)pOther)->p9c;
	if (pOwner && (pOwner->m_flags14bc & 0x20000) == 0x20000 && m_h628c.Get()) {
		if (vfunc404(m_h628c.Get()) == 1 || vfunc168() == m_h628c.Get())
			return 1;
	}
	CAI_BaseNPCTroika *p98 = ((Troika404View *)pOther)->p98;
	if (p98) {
		CBaseEntity *pEnt = p98->m_h647c.Get();
		if (pEnt) {
			if (vfunc404(pEnt) == 1 || vfunc168() == pEnt)
				return 1;
		}
	}
	CBaseEntity *pFollow = m_h647c.Get();
	if (pFollow) {
		CAI_BaseNPCTroika *pFollowOwner = ((Troika404View *)pFollow)->p9c;
		if (pFollowOwner) {
			if (pFollowOwner == (CAI_BaseNPCTroika *)pOther)
				return 3;
			int r = pFollowOwner->vfunc404(pOther);
			if (r == 1 || (CBaseEntity *)pFollowOwner->vfunc167() == pOther)
				return 1;
			if (pOwner) {
				r = pOwner->vfunc404((CBaseEntity *)pFollowOwner);
				if (r == 1 || pOwner->vfunc168() == (CBaseEntity *)pFollowOwner)
					return 1;
			}
			return r;
		}
	}
	return sub_10013016(pOther);
}
// END FUNCTION

// FUNCTION: 0x1029a070 size=0x30
int CAI_BaseNPCTroika::vfunc593()
{
    *(int *)((char *)this + 0x655c) = 0x3dcccccd;
    *(int *)((char *)this + 0x6560) = 0x3f800000;
    *(int *)((char *)this + 0x6564) = 0x42480000;
    *(int *)((char *)this + 0x6568) = 0x42480000;
    *(int *)((char *)this + 0x656c) = 0x3c23d70a;
    return 0x42480000;
}
// END FUNCTION

// FUNCTION: 0x1029a8b0 size=0x51
extern char g_106b8540[];
void sub_1000f4e8();
float __fastcall sub_10293a80(CAI_BaseNPCTroika *p);

// TARGET: CAI_BaseNPCTroika::vfunc422
void CAI_BaseNPCTroika::vfunc422()
{
	CAI_BaseNPC::vfunc422();
	sub_100ac4e0((int)sub_1000f4e8, 0, 0);
	sub_102c44e0(m_psz6478 ? m_psz6478 : g_106b8540);
	sub_102c4680(*(const char **)((char *)this + 0x6480) ? *(const char **)((char *)this + 0x6480) : g_106b8540);
	sub_10293a80(this);
}
// END FUNCTION

// FUNCTION: 0x1029afc0 size=0x15f
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"
#include "CEHandleGet.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))
#define ENTF(type, p, off) (*(type *)((char *)(p) + (off)))

// TARGET: CAI_BaseNPCTroika::vfunc68
bool CAI_BaseNPCTroika::vfunc68(void *pOther)
{
	if (!NPCF(char, 0x63da))
	{
		if ((NPCF(unsigned int, 0x14b8) & 0x40) == 0x40)
		{
			if (ENTF(int, pOther, 0x94))
				return true;
			if (ENTF(int, pOther, 0xa8))
				return true;
		}
		else
		{
			void *p = (void *)ENTF(int, pOther, 0x98);
			if (p && (ENTF(unsigned int, p, 0x14b8) & 0x20000))
				return true;
		}
	}
	if (pOther == EHandle_Get(NPCF(unsigned int, 0x643c)))
		return true;
	if (ENTF(int, pOther, 0xa0))
		return true;
	void *q = (void *)NPCF(int, 0x5ddc);
	if (q)
	{
		int id = ENTF(int, q, 0x5dc);
		if (id >= 0x283c && id <= 0x283d && (ENTF(unsigned char, pOther, 0x4c) & 0x14))
			return true;
	}
	if ((unsigned char)(ENTF(unsigned int, pOther, 0x4c) >> 1) & 1)
		return true;
	if (EHandle_Get(NPCF(unsigned int, 0x1538)) && NPCF(int, 0x153c) != -1)
	{
		if (EHandle_Get(NPCF(unsigned int, 0x1538)) == pOther)
			return true;
	}
	return ((CBaseAnimating *)this)->sub_1008be20((CBaseEntity *)pOther);
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

// FUNCTION: 0x1029f890 size=0x25
#include "CAI_BaseNPCTroika.h"

struct CUnknown102bf5d0
{
    void sub_102bf5d0(int a);
};

struct CUnknown10924a6c
{
    virtual void a0();
    virtual void vfunc1();
};

extern CUnknown10924a6c *g_10924a6c;

struct CUnknown1029f890
{
    void sub_1029f890(int a);
};

// TARGET: CUnknown1029f890::sub_1029f890
void CUnknown1029f890::sub_1029f890(int a)
{
    ((CUnknown102bf5d0 *)this)->sub_102bf5d0(a);
    g_10924a6c->vfunc1();
    ((CAI_BaseNPCTroika *)this)->sub_100041b0(10);
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

// FUNCTION: 0x1029fb70 size=0x44
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c
{
	virtual void vfunc0();
	virtual void vfunc1();
};
extern CUnknown10924a6c *g_10924a6c;

bool CAI_BaseNPCTroika::vfunc317(int unused)
{
	g_10924a6c->vfunc1();
	sub_100041b0(10);
	if (sub_10269c70(12)) {
		g_10924a6c->vfunc1();
		sub_100041b0(12);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1029fdb0 size=0x5e
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
struct CTroikaOther { int sub_10349830(); };
extern float g_1049a1bc, g_1049a1b8;
bool CAI_BaseNPCTroika::vfunc319(int a, CBaseEntity *pOther, int c)
{
    sub_10272650(((CBaseCombatCharacter *)this)->sub_10345f10());
    float f = 0;
    if (pOther && ((CTroikaOther *)pOther)->sub_10349830() == 2)
        f = 1.0f;
    float flDelay = (g_1049a1bc - g_1049a1b8) * f + g_1049a1b8;
    *(float *)((char *)this + 0x1564) = flDelay + gpGlobals->curtime;
    return true;
}
// END FUNCTION

// FUNCTION: 0x1029fec0 size=0x51
#include "CAI_BaseNPCTroika.h"

struct CUnk109245e4 {
    virtual void vfunc0();
    virtual char vfunc1();
    char m_pad[0x2c - 4];
    int m_n2c;
};
extern CUnk109245e4 *g_109245e4;

struct CArg326 {
    char m_pad[0xba];
    char m_b;
};
struct CTroika326View {
    char m_pad[0x6064];
    int m_n6064;
};

bool CAI_BaseNPCTroika::vfunc326(CBaseEntity *pEnt, int b)
{
    if (sub_1000e494(pEnt, b)) {
        int n;
        if (g_109245e4->vfunc1())
            n = 0;
        else
            n = g_109245e4->m_n2c;
        if (((CTroika326View *)this)->m_n6064 <= n || ((CArg326 *)pEnt)->m_b == 2)
            return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x102ad110 size=0x20
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc616()
{
	sub_10015839(0x30);
	m_f65bc = gpGlobals->curtime + 15.0f;
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

// FUNCTION: 0x102ae140 size=0x16d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S_Slot610 {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
    V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6) V10(c7) V10(c8) V10(c9)
    V10(d0) V10(d1) V10(d2) V10(d3) V10(d4) V10(d5) V10(d6) V10(d7) V10(d8) V10(d9)
    V10(e0) V10(e1) V10(e2) V10(e3) V10(e4) V10(e5) V10(e6) V10(e7) V10(e8) V10(e9)
    V10(f0) V10(f1) V10(f2) V10(f3) V10(f4) V10(f5) V10(f6) V10(f7) V10(f8) V10(f9)
    V10(g0)
    virtual void s610(int);
};
struct S_Rnd { virtual void s0(); virtual float RandomFloat(float a, float b); };
extern S_Rnd *g_1070b244;
struct S_Holder { void sub_100cd660(CBaseEntity *a, CBaseEntity *b, int c); };
struct S_V {
    char pad0[0x5b80]; char m_b5b80;
    char pad2[0x5d8c - 0x5b81]; unsigned int m_flags5d8c;
    char pad3[0x5fbc - 0x5d90]; S_Holder m_h5fbc;
    char pad4[0x63fc - 0x5fbd]; char m_b63fc;
    char pad5[0x6474 - 0x63fd]; float m_f6474;
    char pad6[0x6494 - 0x6478]; char m_b6494;
    char pad7[0x658c - 0x6495]; int m_h658c; int m_p6590; int m_h6594;
};
void CAI_BaseNPCTroika::vfunc463(int a, int b)
{
    S_V *v = (S_V *)this;
    CUnknown1027d990 *u = (CUnknown1027d990 *)this;
    if (a != b) {
        ((S_Slot610 *)this)->s610(b);
        sub_102ae310();
        char flag = 1;
        switch (b) {
        case 2: case 3:
            v->m_b6494 = flag;
            break;
        case 0xb:
            v->m_f6474 = g_1070b244->RandomFloat(10.0f, 20.0f) + gpGlobals->curtime;
            v->m_b6494 = flag;
            break;
        case 7:
            if (v->m_p6590 != 0)
                sub_1029f5d0(&v->m_h658c);
            break;
        case 8: {
            CBaseEntity *p = (CBaseEntity *)vfunc167();
            if (!p) p = (CBaseEntity *)this;
            v->m_h5fbc.sub_100cd660(p, (CBaseEntity *)this, 0);
            v->m_b6494 = flag;
            break; }
        case 0xe:
            sub_10293d90(2.0f);
            v->m_b6494 = flag;
            break;
        }
        v->m_flags5d8c &= 0x7ffffff;
        if (u->sub_1027d990() != 3 && u->sub_1027d990() != flag)
            m_flags14b8 &= ~8u;
    }
    void *ph = &v->m_h6594;
    m_flags14b8 &= ~0x1000u;
    sub_1029f5d0(ph);
    m_flags14b8 &= ~4u;
    v->m_b63fc = 0;
    sub_10295ab0(5.0f);
    v->m_b5b80 = 0;
    CAI_BaseNPC::vfunc463(a, b);
}
// END FUNCTION

// FUNCTION: 0x102b12f0 size=0x23e
#include "CAI_BaseNPCTroika.h"

struct CTroikaHint440 { char m_pad0000[0x5dc]; int m_nType; };

int CAI_BaseNPCTroika::vfunc440(int a)
{
	int r;
	if ((m_flags5b84 & 0x100) == 0x100 && (r = sub_102b11c0(a)) != 0)
		return r;
	switch (a)
	{
	case 1:
	case 0x6b:
		return (m_flags14bc & 0x80000) != 0x80000 ? 0x6b : 0x132;
	case 2:
		return 0x46;
	case 3:
		return 0x47;
	case 6:
		return 0x4a;
	case 0x15:
		return 0xb8;
	case 0xf:
		return 0xb1;
	case 0x10:
		return 0xb7;
	case 0x28:
		return 0xc2;
	case 0x25:
		return 0xc1;
	case 0x21:
		return 0xed;
	case 0x22:
		return 0xee;
	case 0x2f:
		return 0xf2;
	case 0x30:
		return 0xf4;
	case 0x31:
		return 0xf6;
	case 0x32:
		return 0xf8;
	case 0x33:
		return 0xf9;
	case 0x77:
	{
		CTroikaHint440 *pHint = *(CTroikaHint440 **)((char *)this + 0x5ddc);
		if (pHint && pHint->m_nType == 0x2774)
			return 0x78;
		break;
	}
	case 0x94:
		if (vfunc293())
			return 0x95;
		break;
	case 0x96:
		if (vfunc293())
			return 0x97;
		break;
	}
	return CAI_BaseNPC::vfunc440(a);
}
// END FUNCTION

// FUNCTION: 0x102b39a0 size=0x24
struct CAI_BaseNPCTroikaCallee {
    void sub_10007bdf(int a);
    bool sub_10014df8(int condition);
    void sub_102b39a0(int arg);
};

// TARGET: CAI_BaseNPCTroikaCallee::sub_102b39a0
void CAI_BaseNPCTroikaCallee::sub_102b39a0(int arg)
{
    sub_10007bdf(arg);
    if (sub_10014df8(0x54)) {
        *(int *)((char *)this + 0x60a8) = *(int *)((char *)this + 0x60a8) + 1;
    }
}
// END FUNCTION

// FUNCTION: 0x102b39e0 size=0x2e4
#include "CAI_BaseNPCTroika.h"
#include "CAI_Senses.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CAI_Timer2c.h"
#include "CUnknown102c66b0.h"

struct CSenseSnap {
	int m_n00, m_n04, m_n08, m_n0c, m_n10;
	char m_b14;
	int m_n18, m_n1c;
	Vector m_vec20;
};

#define COPY_SNAP(off, type) { \
	const CSenseSnap *r = (const CSenseSnap *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(type); \
	CSenseSnap *d = (CSenseSnap *)((char *)this + off); \
	d->m_n00 = r->m_n00; d->m_n04 = r->m_n04; d->m_n08 = r->m_n08; d->m_n0c = r->m_n0c; d->m_n10 = r->m_n10; \
	d->m_b14 = r->m_b14; d->m_n18 = r->m_n18; d->m_n1c = r->m_n1c; d->m_vec20.sub_1003e4b0(r->m_vec20); }

#define FLAGS (*(unsigned int *)((char *)this + 0x5cb4))
#define TEST_BIT(n) unsigned char b##n = (unsigned char)((FLAGS >> n) & 1); if (b##n)

void CAI_BaseNPCTroika::vfunc470()
{
	CAI_BaseNPC::vfunc470();
	{ TEST_BIT(14) COPY_SNAP(0x61e4, 2) }
	{ TEST_BIT(17) COPY_SNAP(0x6134, 0x400) }
	{ TEST_BIT(10) COPY_SNAP(0x6108, 8) }
	{ TEST_BIT(15) COPY_SNAP(0x61b8, 4) }
	if (*(unsigned char *)((char *)this + 0x5cb6) & 1)
		COPY_SNAP(0x618c, 0x10)
	{ TEST_BIT(13) ((CAI_Timer2c *)((char *)this + 0x6160))->sub_102b3d90(*(CAI_Timer2c *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(1)); }
	if (((CUnknown102c66b0 *)((char *)this + 0x5ca8))->sub_102c66b0(0x72))
		((CAI_Timer2c *)((char *)this + 0x6210))->sub_102b3d90(*(CAI_Timer2c *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(0x800));
	if (sub_10014df8(0x6d))
		sub_1028e8b0((CBaseEntity *)g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x6160)), 0x3f800000);
	if (sub_10014df8(0x70))
		sub_1028e8b0((CBaseEntity *)g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x618c)), 0x3f800000);
}
// END FUNCTION

// FUNCTION: 0x102b3e00 size=0x1e5
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100290c0.h"
#include "CDevFlagObj.h"
#include "COutputEvent.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
extern CDevFlagObj *g_10924a6c;
struct EntWithPlayer { char pad[0xa8]; CBaseCombatCharacter *m_pPlayer; };

// TARGET: CAI_BaseNPCTroika::vfunc472
void CAI_BaseNPCTroika::vfunc472(CBaseEntity *pEnt)
{
	if ((~m_flags14bc & 0x4000000) && m_b6081 && sub_102b3270(pEnt, 0)) {
		if (((EntWithPlayer *)pEnt)->m_pPlayer && ((EntWithPlayer *)pEnt)->m_pPlayer->sub_101671a0()) {
			g_10924a6c->vfunc1();
			sub_100041b0(1);
			unsigned int *pCur = &m_h6088;
			if ((CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(pCur) == pEnt)
				return;
			*pCur = *(unsigned int *)pEnt->vfunc1();
			m_n60a8++;
			CUnknown100290c0 *pList = (CUnknown100290c0 *)g_10566458;
			if (pList->sub_100290c0(&m_h6088) == pList->sub_100290c0(&m_h608c)) {
				m_n60a4++;
				m_flags14b8 &= 0xfebfffff;
				return;
			}
			if (((EntWithPlayer *)pEnt)->m_pPlayer)
				((COutputEvent *)((char *)this + 0x5fa4))->sub_100cd660(pEnt, this, 0);
			m_h608c = m_h6088;
			CAI_BaseNPC *pOld = (CAI_BaseNPC *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_h608c);
			float *pPos = pOld->vfunc217();
			m_v6090[0] = pPos[0];
			m_v6090[1] = pPos[1];
			m_v6090[2] = pPos[2];
			m_n60a4 = 0;
			m_f609c = gpGlobals->curtime + enginerandom->vfunc1(10.0f, 20.0f);
			m_f60a0 = gpGlobals->curtime + enginerandom->vfunc1(5.0f, 10.0f);
			m_flags14b8 &= 0xfe9fffff;
			return;
		}
		m_flags14b8 |= 0x800000;
	}
	if ((CBaseEntity *)EHandle_Get(m_h6088) == pEnt) {
		m_h6088 = 0xffffffff;
		m_flags14b8 &= 0xfe9fffff;
	}
}
// END FUNCTION

// FUNCTION: 0x102b4070 size=0x6
int sub_102b4070(void)
{
    return 0x81f;
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

// FUNCTION: 0x102b4ab0 size=0x104
#include "CEntityVSlots.h"

struct CTroikaHint533
{
	void sub_102d1180(void *pNpc, Vector *pOut);
};

struct CTroikaView533
{
	char pad0[0x5d60];
	Vector m_vecOffset;
	char pad5d6c[0x5ddc - 0x5d6c];
	CTroikaHint533 *m_pHint;
};

struct CAI_BaseNPCTroikaUnit533 : CAI_BaseNPCTroika
{
	void sub_102b6120(Vector *pVec, int a);
};

Vector CAI_BaseNPCTroika::vfunc533(int a, int b)
{
	CTroikaView533 *pView = (CTroikaView533 *)this;
	if (pView->m_pHint)
	{
		switch (a)
		{
		case 0x1119:
		case 0x111a:
		case 0x111b:
		case 0x111c:
		case 0x111f:
		case 0x1120:
			{
				Vector vecOrigin = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroikaUnit533 *)this)->sub_102b6120(&vecOrigin, 0);
				Vector vecPos;
				pView->m_pHint->sub_102d1180(this, &vecPos);
				return (vecPos - vecOrigin) + pView->m_vecOffset;
			}
		}
	}
	return CAI_BaseNPC::vfunc533(a, b);
}
// END FUNCTION

// FUNCTION: 0x102b4c40 size=0x5d
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
#include "engineiface.h"
// TARGET: CAI_BaseNPCTroika::vfunc487
void CAI_BaseNPCTroika::vfunc487()
{
	*(float *)((char *)this + 0x5ce8) = enginerandom->vfunc1(0.25f, 0.75f) + gpGlobals->curtime;
	if (*(int *)((char *)this + 0x5bb0) <= 0) {
		char *pSquad = *(char **)((char *)this + 0x5da4);
		if (pSquad)
			*(float *)(pSquad + 0x60) = enginerandom->vfunc1(0.25f, 0.75f) + gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x102b4fb0 size=0x14
namespace lifted {
struct C10005849 { int sub_10005849(int, int, int); };
}
int CAI_BaseNPCTroika::vfunc597(int a0, int a1)
{
    return ((lifted::C10005849 *)this)->sub_10005849(a0, 1, a1);
}
// END FUNCTION

// FUNCTION: 0x102b50b0 size=0x3b
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroikaUnit54 : CAI_BaseNPCTroika
{
    bool sub_102b50b0(int a);
};

// TARGET: ?sub_102b50b0@CAI_BaseNPCTroikaUnit54@@QAE_NH@Z
bool CAI_BaseNPCTroikaUnit54::sub_102b50b0(int a)
{
    if (a != 0) {
        if (a == vfunc167()) {
            if (*(void **)((char *)this + 0x5c38) != 0) {
                if (!sub_10269c70(0x47)) {
                    return false;
                }
            }
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x102b5100 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc55
void CAI_BaseNPCTroika::vfunc55(int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x102b5120 size=0x53
void CAI_BaseNPCTroika::vfunc56(CBaseEntity *pEnt, int b, int c, int d, int e, int f, int g, int h)
{
    if (pEnt && pEnt->m_field200) {
        if (pEnt == ((EHANDLE *)((char *)this + 0x1a94))->Get())
            sub_10279b70(0);
    }
}
// END FUNCTION

// FUNCTION: 0x102b51a0 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc57
void CAI_BaseNPCTroika::vfunc57(int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x102b51c0 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc58
void CAI_BaseNPCTroika::vfunc58(int)
{
}
// END FUNCTION

// FUNCTION: 0x102b5360 size=0x4b
CBaseEntity *CAI_BaseNPCTroika::vfunc168()
{
	CBaseEntity *pEnt = (CBaseEntity *)vfunc167();
	if (!pEnt && ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 6) & 1))
		pEnt = ((EHANDLE *)((char *)this + 0x1a94))->Get();
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x102b57c0 size=0x8d
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"


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
			*(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(7.5f, 15.0f) + gpGlobals->curtime;
			g_10924edc->v1();
			return 1;
		}
		*((char *)this + 0x6078) = 0;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b5880 size=0x5b
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
#include "engineiface.h"
struct STroikaNotify { virtual void a0(); virtual void vfunc1(); };
extern STroikaNotify *g_10924edc;
// TARGET: CAI_BaseNPCTroika::vfunc601
void CAI_BaseNPCTroika::vfunc601(int a)
{
	g_10924edc->vfunc1();
	*(char *)((char *)this + 0x6078) = 0;
	if (((char (__fastcall *)(CAI_BaseNPCTroika *))(*(void ***)this)[308])(this))
		*(float *)((char *)this + 0x6070) = enginerandom->vfunc1(5.0f, 10.0f) + gpGlobals->curtime;
	CAI_NamedThing *pThing = *(CAI_NamedThing **)((char *)this + 0x65e8);
	if (pThing)
		pThing->sub_1025ddd0(this);
}
// END FUNCTION

// FUNCTION: 0x102b5900 size=0xab
#include "CAI_BaseNPCTroika.h"


struct SDifficulty {
	virtual void s0();
	virtual char s1();
	char pad[0x24];
	float m28;
};
extern SDifficulty *g_10924a1c;

#define NAMED (*(CAI_NamedThing **)((char *)this + 0x65e8))

char CAI_BaseNPCTroika::vfunc602()
{
	if ((m_flags5b84 & 2) == 2 || vfunc293() != 0 || !NAMED)
		return 0;
	if (((CAI_BaseNPC *)this)->vfunc308()) {
		if (gpGlobals->curtime >= m_f6074)
			return 1;
	} else {
		double f = g_10924a1c->s1() ? 0.0f : g_10924a1c->m28;
		if ((float)(f + f) <= m_f6268 && !NAMED->sub_1025db50())
			return 1;
	}
	return NAMED->sub_1025de90(this);
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

// FUNCTION: 0x102b5c00 size=0x131
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CTakeDamageInfo.h"
#include "CCineNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern "C" __declspec(dllimport) int RandomInt(int minVal, int maxVal);

struct CTroikaScriptHandle
{
	unsigned int m_Index;
	CCineNPC *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (int)(m_Index >> 13) ? (CCineNPC *)e->m_pEntity : 0;
	}
};

inline bool IsHandleValid(unsigned int index)
{
	if (index == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *e = &g_10566458->m_Slots[index & 0x1fff];
	return e->m_Serial == (int)(index >> 13) && e->m_pEntity != 0;
}

bool CAI_BaseNPCTroika::vfunc379(CBaseEntity *pEnt, int b, int c, int d, int e, int f, int g)
{
	int i = 0;
	if (m_nDamageRecords > 0)
	{
		do
		{
			CTakeDamageInfo *pInfo = &m_pDamageRecords[i];
			pInfo->m_pInflictor = this;
			pInfo->m_pAttacker = (CTakeDamageAttacker *)this;
			if (RandomInt(0, 1))
				pInfo->sub_101c2a10(4);
			else
				pInfo->sub_101c2a10(5);
			pEnt->sub_100a1250(pInfo);
			i++;
		} while (i < m_nDamageRecords);
	}
	if (i <= 0 && sub_10005bfa(pEnt, b, c, d, e, f, g))
	{
		if (sub_102c1170())
			sub_102c0bb0();
		CTroikaScriptHandle *h = (CTroikaScriptHandle *)&m_h5d74;
		if (IsHandleValid(m_h5d74))
		{
			h->Get()->sub_101a8c30();
			if (*(int *)((char *)this + 0x5cc0) != *(int *)((char *)this + 0x5cc4))
				sub_1026e340(*(int *)((char *)this + 0x5cc4));
		}
		sub_10280d30();
		return true;
	}
	return false;
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


struct CWeaponRangeX
{
	char m_pad0000[0x8c0];
	float m_fl8c0;
};

extern CRandomX *g_1070b244;
int __cdecl sub_102d2980(CAI_BaseNPCTroika *pNPC, int a, int b, float c, int d, int e);

// TARGET: CAI_BaseNPCTroika::vfunc609
int CAI_BaseNPCTroika::vfunc609(char bForce)
{
	if (m_p6444 && ((CTroikaSlotsX *)this)->vfunc566(m_p6444))
		return (int)m_p6444;
	if (!bForce && !(gpGlobals->curtime >= m_f6440))
		return 0;
	m_f6440 = g_1070b244->vfunc1(2.0f, 2.5f) + gpGlobals->curtime;
	float range = 1024.0f;
	if (sub_10007e19())
		range = ((CWeaponRangeX *)sub_10007e19())->m_fl8c0;
	return ::sub_102d2980(this, 8, 0x10, range, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x102b97f0 size=0x6
extern char g_105d1058;

char sub_102b97f0(void)
{
    return g_105d1058;
}
// END FUNCTION

// FUNCTION: 0x102bed30 size=0x42
#include "CAI_BaseNPCTroika.h"
#include "COutputEvent.h"
int CAI_BaseNPCTroika::vfunc142(int a)
{
	if (m_b63d8) {
		if (m_f5d98 != gpGlobals->curtime) {
			m_f5d98 = gpGlobals->curtime;
			((COutputEvent *)((char *)this + 0x5e0c))->sub_100cd660(this, this, 0.0f);
		}
		return 0;
	}
	return CAI_BaseNPC::vfunc142(a);
}
// END FUNCTION

// FUNCTION: 0x102bf340 size=0x105
#include "CAI_BaseNPCTroika.h"
#include "CAI_CsActList.h"
#include "CTakeDamageInfo.h"
#include "CEHandleGet.h"

extern "C" __declspec(dllimport) int __cdecl PyRun_SimpleString(const char *command);

struct CCsActListV : CAI_CsActList
{
	void sub_102ca2a0(int nType, CBaseEntity *pSource, Vector vecPos, int nLevel, float flDuration, CBaseEntity *pOffender, CBaseEntity *pOwner, char bExternal);
};

extern CCsActListV *g_109253f8;
const char *sub_101d3730(const char *fmt, const char *name);

// TARGET: CAI_BaseNPCTroika::vfunc144
void CAI_BaseNPCTroika::vfunc144(int a)
{
	if (!((CTakeDamageInfo *)a)->sub_101c2af0()) {
		Vector vecPos = *(Vector *)vfunc217();
		vecPos.z += 16.0f;
		g_109253f8->sub_102ca2a0(1, (CBaseEntity *)this, vecPos, 3, 100000.0f, 0, (CBaseEntity *)this, 1);
	}
	sub_10265ad0(a);
	sub_10295ab0(5.0f);
	vfunc601((int)this);
	sub_102b53d0(0, "Leaving interesting place (Event_Killed)");
	if (sub_102c1170())
		sub_102c0bb0();
	const char *pszName = *(const char **)((char *)this + 0x26c);
	if (pszName)
		PyRun_SimpleString(sub_101d3730("MarkAsDead(\"%s\")", pszName));
	CGlobalEntityList_Ent *pEnt = EHandle_Get(*(unsigned int *)((char *)this + 0x628c));
	if (pEnt)
		((CAI_BaseNPC *)pEnt)->sub_101828b0((CBaseEntity *)this, 99999.9f);
}
// END FUNCTION

// FUNCTION: 0x102bf4a0 size=0x50
#include "CBaseCombatWeapon.h"
bool CAI_BaseNPCTroika::vfunc575()
{
	if (vfunc167() && (m_flags14bc & 0x400) == 0x400 && sub_1032e7b0()) {
		if (((CBaseCombatWeapon *)sub_1032e7b0())->vfunc360() & 0x6000)
			return sub_10278c60();
	}
	return false;
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

// FUNCTION: 0x102bff20 size=0xb6
#include "CEHandleGet.h"
#include "CUnknown1070b244.h"

struct TroikaView102bff20 {
	char pad0[0x5d6c];
	float m_f5d6c;
	char pad1[0x6264 - 0x5d70];
	float m_f6264;
	char pad2[0x64d8 - 0x6268];
	float m_f64d8;
	float m_f64dc;
	char pad3[0x6570 - 0x64e0];
	float m_f6570;
};
extern CUnknown1070b244 *g_1070b244;

void CAI_BaseNPCTroika::vfunc333(float flInterval)
{
	TroikaView102bff20 *p = (TroikaView102bff20 *)this;
	if (512.0f > p->m_f6264) {
		p->m_f6570 -= flInterval;
		if (p->m_f6570 < 0.0f) {
			vfunc276();
			p->m_f6570 = g_1070b244->vfunc1(p->m_f64d8, p->m_f64dc);
		}
	}
	if (EHandle_Get(m_hfe8) != 0)
		p->m_f5d6c = gpGlobals->curtime + 2.0f;
	sub_102c0010(flInterval);
	sub_1026b810(flInterval);
}
// END FUNCTION

// FUNCTION: 0x102c04b0 size=0x4e
#include "CEHandleGet.h"
// TARGET: CAI_BaseNPCTroika::vfunc612
int CAI_BaseNPCTroika::vfunc612()
{
	int r = 0x80;
	CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hfe8);
	if (pEnt) {
		r = 0x280;
		if (!m_b654c)
			r = 0x680;
	}
	return r;
}
// END FUNCTION

// FUNCTION: 0x102c0b60 size=0x3c
#include "CEHandleGet.h"

bool __fastcall sub_102c0b60(void *self)
{
    return EHandle_Get(*(const unsigned int *)((char *)self + 0xfe8)) != 0;
}
// END FUNCTION

// FUNCTION: 0x102c12a0 size=0x10b
#include "CUnknown100ecee0.h"

extern CUnknown100ecee0 g_10924980;
extern int (*g_109f3868)(int, int);
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
        } else if (gpGlobals->curtime - ((TroikaView *)this)->m_f64e4 > fA && iB > pfnRandom(1, 100)) {
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

// FUNCTION: 0x102c1ce0 size=0x171
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CCineNPC.h"
#include "CUnknown102b5dc0.h"
#include "CBaseCombatWeapon.h"

__declspec(dllimport) void DevWarning(const char *, ...);

void CAI_BaseNPCTroika::vfunc77()
{
    if (*(int *)((char *)this + 0x5cc0) == 4 || EHandle_Get(m_h5d74)) {
        const char *pszName = EHandle_Get(m_h5d74) ? ((CCineNPC *)EHandle_Get(m_h5d74))->sub_1000b5cd() : "**UNKNOWN**";
        DevWarning("Attempting to ScriptHide an NPC (%s) playing a scripted sequence (%s).  Satan will eat your babies if you continue to do this.\n", ((CCineNPC *)this)->sub_1000b5cd(), pszName);
        DevWarning("Cancelling script...\n");
        if (EHandle_Get(m_h5d74))
            ((CCineNPC *)EHandle_Get(m_h5d74))->sub_101a8c30();
        else
            sub_1027d170();
        if (*(int *)((char *)this + 0x5cc0) != 7)
            ((CUnknown102b5dc0 *)this)->sub_102ae7f0(0x6b);
    }
    sub_100a8710();
    if (sub_10007e19())
        ((CBaseCombatWeapon *)sub_10007e19())->vfunc77();
}
// END FUNCTION

// FUNCTION: 0x102c1ec0 size=0x255
#include "CEHandleGet.h"
#include "CBaseCombatCharacter.h"
#include "CNPCSlots614.h"

struct SScriptRec
{
	char m_pad[0x5f78];
	int m_n5f78;
	int m_n5f7c;
	int m_n5f80;
	int m_n5f84;
	int m_n5f88;
	int m_n5f8c;
};

class SSlotView
{
public:
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8)
	EVS(90) EVS(91) virtual int slot92(); EVS(93) virtual int slot94(); virtual int slot95();
	EVS(96) EVS(97) EVS(98) EVS(99)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS(200) EVS(201) EVS(202) EVS(203) EVS(204) EVS(205) EVS(206) EVS(207) EVS(208) EVS(209)
	EVS(210) virtual int slot211();
};

void CAI_BaseNPCTroika::vfunc78()
{
	SSlotView *pView = (SSlotView *)this;
	if (m_b5d78 && EHandle_Get(m_h5d74)) {
		pView->slot94();
		pView->slot95();
		pView->slot92();
		pView->slot211();
	}
	sub_100a8990();
	((CNPCSlots614 *)this)->slot614();
	if (sub_1032e7b0())
		((CEntityVSlots *)sub_1032e7b0())->slot78();
	if (m_b5d78 && EHandle_Get(m_h5d74)) {
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f78 = pView->slot94();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f7c = pView->slot95();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f80 = pView->slot92();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f84 = pView->slot211();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f88 = m_flags19c;
		unsigned int h = m_h5d74;
		unsigned int flags = m_flags14b8;
		((SScriptRec *)EHandle_Get(h))->m_n5f8c = flags;
	}
	m_b5d78 = 0;
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

// FUNCTION: 0x102c2ec0 size=0x33e
void CAI_BaseNPCTroika::vfunc589(int stat, int target)
{
	CVStatListSet *pSet = CVStatListSet::Of(this);
	int cur = pSet->Find(3)->sub_10200ca0(stat);
	if (cur < target) {
		if (pSet->Find(2)->sub_10200ca0(stat) < target)
			pSet->Find(2)->sub_10200be0(stat, target);
		int diff = target - cur;
		pSet->Find(3)->sub_10200fc0(stat, diff);
		pSet->Find(3)->sub_10200be0(stat, target);
	} else if (cur > target) {
		int diff = cur - target;
		pSet->Find(3)->sub_10200be0(stat, target);
		pSet->Find(3)->sub_10201100(stat, diff);
	}
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

// FUNCTION: 0x102c4a60 size=0x4d
// TARGET: CAI_BaseNPCTroika::vfunc342
char CAI_BaseNPCTroika::vfunc342(int pEnt)
{
	if (m_b63d8)
		return 0;
	int p = (int)vfunc293();
	CBaseCombatCharacter *pBase = (CBaseCombatCharacter *)this;
	if (p && p == pEnt && !pBase->sub_1033c900(0x40000))
		return 0;
	return pBase->CBaseCombatCharacter::vfunc342(pEnt);
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

// FUNCTION: 0x102c5500 size=0x45
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc419()
{
	int pWeapon = sub_10007e19();
	if (pWeapon) {
		m_f5bbc = sub_1000cabd(pWeapon);
		m_f5bc0 = sub_10014655(pWeapon);
	} else {
		m_f5bbc = 0.3f;
		m_f5bc0 = 0.5f;
	}
}
// END FUNCTION

// FUNCTION: 0x102c5870 size=0x6
extern void *g_109248d4;

void *sub_102c5870(void)
{
    return &g_109248d4;
}
// END FUNCTION

// FUNCTION: 0x102c5890 size=0x3
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc81()
{
	return 0;
}
// END FUNCTION
