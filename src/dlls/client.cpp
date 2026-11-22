// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 46 blocks
#include "vampire.h"

// FUNCTION: 0x100d1650 size=0x51a
#include "vampire_all.h"
#include "engineserver.h"
#include "ScopeTrace.h"
#include "Tier1.h"
#include "RTTI.h"
#include "CBCCSlotViews.h"
#include "CSingleUserRecipientFilter.h"
#include <string.h>
#include <ctype.h>

class CChatIsNetClientView
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13) VIEW_SLOT10(14) VIEW_SLOT10(15)
	VIEW_SLOT(160) VIEW_SLOT(161)
	virtual char vfunc162();
};

class CChatCanSpeakView
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1) VIEW_SLOT100(2) VIEW_SLOT100(3)
	VIEW_SLOT10(40) VIEW_SLOT10(41) VIEW_SLOT10(42) VIEW_SLOT10(43) VIEW_SLOT10(44) VIEW_SLOT10(45)
	VIEW_SLOT(460) VIEW_SLOT(461) VIEW_SLOT(462)
	virtual char vfunc463();
};

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CGlobalEntityList g_106eb5d8;
extern CGameRules *g_1070ba0c;
extern int g_10726048;
extern char g_1055e9bc[];
extern void (*g_109f3628)(const char *fmt, ...);
extern CBaseEntity *sub_100ab250(void *pEdict);
extern void sub_101d10e0(const char *fmt, ...);
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);

inline void *ChatEdict(CBasePlayer *p) { return *(void **)((char *)p + 0x2e0); }
inline const char *ChatName(CBasePlayer *p) { const char *s = *(const char **)((char *)p + 0x2078); return s ? s : g_106b8540; }

inline CBasePlayer *NextEntByClass(CBasePlayer *pStart)
{
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060((CBaseEntity *)pStart); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt)) {
		CBasePlayer *pPlayer = (CBasePlayer *)__RTDynamicCast(pEnt, 0, g_10538764, g_1055e9bc, 0);
		if (pPlayer)
			return pPlayer;
	}
	return 0;
}

inline CBaseEntity *EntityInstance(void *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
	if (!pent)
		pent = engine->vfunc38(0);
	return sub_100ab250(pent);
}

void sub_100d1650(void *pEdict, int teamonly)
{
	CBasePlayer *client;
	int j;
	char *p;
	char text[128];
	char szTemp[256];
	const char *pcmd = engine->vfunc84(0);

	if (engine->vfunc85() == 0)
		return;

	if (!_strcmpi(pcmd, "say") || !_strcmpi(pcmd, "say_team")) {
		if (engine->vfunc85() >= 2)
			p = (char *)engine->vfunc83();
		else
			return;
	} else {
		if (engine->vfunc85() >= 2)
			Q_snprintf(szTemp, sizeof(szTemp), "%s %s", (char *)pcmd, (char *)engine->vfunc83());
		else
			Q_snprintf(szTemp, sizeof(szTemp), "%s", (char *)pcmd);
		p = szTemp;
	}

	if (*p == '"') {
		p++;
		p[strlen(p) - 1] = 0;
	}

	char *pc;
	for (pc = p; pc != 0 && *pc != 0; pc++) {
		if (isprint(*pc) && !isspace(*pc)) {
			pc = 0;
			break;
		}
	}
	if (pc != 0)
		return;

	CBasePlayer *pPlayer = (CBasePlayer *)EntityInstance(pEdict);

	if (!((CChatCanSpeakView *)pPlayer)->vfunc463())
		return;

	if (teamonly)
		Q_snprintf(text, sizeof(text), "%c(TEAM) %s: ", 2, ChatName(pPlayer));
	else
		Q_snprintf(text, sizeof(text), "%c%s: ", 2, ChatName(pPlayer));

	j = sizeof(text) - 2 - strlen(text);
	if ((int)strlen(p) > j)
		p[j] = 0;

	strcat(text, p);
	strcat(text, "\n");

	client = 0;
	while (((client = NextEntByClass(client)) != 0) && ChatEdict(client) && engine->vfunc35((int)ChatEdict(client))) {
		if (!ChatEdict(client))
			continue;
		if (ChatEdict(client) == pEdict)
			continue;
		if (!((CChatIsNetClientView *)client)->vfunc162())
			continue;
		if (teamonly && g_1070ba0c->vfunc65((int)client, (int)pPlayer) != 1)
			continue;

		CSingleUserRecipientFilter user(client);
		user.MakeReliable();
		engine->vfunc65(&user, g_10726048);
		engine->vfunc67(engine->vfunc35((int)ChatEdict(client)));
		engine->vfunc78(text);
		engine->vfunc66();
	}

	CSingleUserRecipientFilter user(pPlayer);
	user.MakeReliable();
	engine->vfunc65(&user, g_10726048);
	engine->vfunc67(engine->vfunc35((int)pEdict));
	engine->vfunc78(text);
	engine->vfunc66();

	g_109f3628(text);

	if (teamonly)
		sub_101d10e0("\"%s\" say_team \"%s\"\n", ChatName(pPlayer), p);
	else
		sub_101d10e0("\"%s\" say \"%s\"\n", ChatName(pPlayer), p);
}
// END FUNCTION

// FUNCTION: 0x100d1cc0 size=0x68
#include "CSingleUserRecipientFilter.h"

// VC6 writes CSingleUserRecipientFilter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSingleUserRecipientFilter *pcd_emit_100d1cc0() { return new CSingleUserRecipientFilter; }

// TARGET: ??_GCSingleUserRecipientFilter@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100d1d50 size=0x1af
#include "CStatDefault3List.h"
#include "CUnknown1070b22c.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b22c *g_1070b22c;
extern CUnknown1070b248 *g_1070b248;
extern CStatDefault3List g_10738d10;
extern char g_106b8540[];
void sub_10352e90();

struct CStatDefault3Name
{
	const char *m_psz;
};

struct CStatDefault3View : StatDefault3
{
	CStatDefault3Name sub_101d4e70(int index);	// the name at that index of the first table (stub 0x1001029e), the index is clamped to 0..5
	CStatDefault3Name sub_101d4eb0(int index);	// the same for the second table (stub 0x1000541b)
};

void sub_100d1d50()
{
	g_1070b22c->vfunc13("cable/cable.vmt", 0);
	g_1070b22c->vfunc13("cable/cable_lit.vmt", 0);
	g_1070b22c->vfunc13("cable/chain.vmt", 0);
	g_1070b22c->vfunc13("cable/rope.vmt", 0);
	for (int i = 0; i < g_10738d10.m_count; i++)
	{
		CStatDefault3View *pItem = (CStatDefault3View *)g_10738d10.sub_101d5e80(i);
		for (int j = 0; j < 6; j++)
		{
			if (pItem->sub_101d4e70(j).m_psz && pItem->m_98[2])
			{
				const char *psz = pItem->sub_101d4e70(j).m_psz;
				if (!psz)
					psz = g_106b8540;
				g_1070b22c->vfunc13(psz, 0);
			}
			if (pItem->sub_101d4eb0(j).m_psz && pItem->m_98[2])
			{
				const char *psz = pItem->sub_101d4eb0(j).m_psz;
				if (!psz)
					psz = g_106b8540;
				g_1070b22c->vfunc13(psz, 0);
			}
		}
	}
	g_1070b22c->vfunc13("materials/sprites/glowa.vmt", 0);
	g_1070b22c->vfunc13("materials/sprites/Spread_Indicator_L.vmt", 0);
	g_1070b22c->vfunc13("materials/sprites/Spread_Indicator_R.vmt", 0);
	g_1070b248->vfunc0("common/wpn_hudoff.wav", 0);
	g_1070b248->vfunc0("common/wpn_hudon.wav", 0);
	g_1070b248->vfunc0("common/wpn_moveselect.wav", 0);
	g_1070b248->vfunc0("common/wpn_select.wav", 0);
	g_1070b248->vfunc0("common/wpn_denyselect.wav", 0);
	g_1070b248->vfunc0("player/stealth_discovered.wav", 0);
	sub_10352e90();
}
// END FUNCTION

// FUNCTION: 0x100d1f70 size=0x54
extern int (*g_109f3628)(const char *, ...);
struct SPlayerCustomizeView { void sub_101771b0(int nFrames); };
struct SCustomization { int m_unk0; char pad[0x80]; int m84; char pad88[0x2c]; int mb4; };
// TARGET: sub_100d1f70
void __cdecl sub_100d1f70(SPlayerCustomizeView *pPlayer, SCustomization *pCust)
{
    if (!pPlayer) {
        g_109f3628("PlayerCustomization:  Couldn't get player!\n");
        return;
    }
    if (!pCust) {
        g_109f3628("PlayerCustomization:  NULL customization!\n");
        return;
    }
    switch (pCust->m84) {
    case 0:
        pPlayer->sub_101771b0(pCust->mb4);
        break;
    default:
        g_109f3628("PlayerCustomization:  Unknown customization type!\n");
        break;
    }
}
// END FUNCTION

// FUNCTION: 0x100d1ff0 size=0x52
#include "CBaseEntity.h"
struct SOverlayView { char pad[0x224]; unsigned int flags; };
CBaseEntity *sub_100d2070(int a, const char *name, CBaseEntity *pStart);
void sub_100d1ff0(int a, const char *name, unsigned int bit)
{
	SOverlayView *p = (SOverlayView *)sub_100d2070(a, name, 0);
	while (p) {
		if (bit & p->flags)
			p->flags &= ~bit;
		else
			p->flags |= bit;
		p = (SOverlayView *)sub_100d2070(a, name, (CBaseEntity *)p);
	}
}
// END FUNCTION

// FUNCTION: 0x100d2070 size=0x1a1
#include <string.h>
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
CBaseEntity *sub_10172710(int a1);

struct CFindStr
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual const char *vfunc5();
};

struct CFindHolder
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual CFindStr *vfunc3();
};

struct CFindEdict
{
	char pad[0x40];
	CFindHolder *m_p40;
};

static inline bool FindNameMatches(CBaseEntity *pEnt, const char *pszName, const char *volatile *ppszRaw)
{
	const char *p = *ppszRaw;
	if (!p)
		p = g_106b8540;
	if (p == pszName)
		return true;
	int len = strlen(pszName);
	int r;
	if (len == 0)
		r = (int)*(const char **)&pEnt->m_name26c;
	else if (pszName[len - 1] != '*')
	{
		p = *ppszRaw;
		if (!p)
			p = g_106b8540;
		r = _strcmpi(p, pszName);
	}
	else
	{
		p = *ppszRaw;
		if (!p)
			p = g_106b8540;
		r = _strnicmp(p, pszName, len - 1);
	}
	return r == 0;
}

CBaseEntity *sub_100d2070(int a1, const char *pszName, CBaseEntity *pStart)
{
	if (_strcmpi(pszName, g_106b8540) == 0)
	{
		if (pStart == 0)
			return sub_10172710(a1);
	}
	else
	{
		for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(pStart); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt))
		{
			if (FindNameMatches(pEnt, pszName, (const char **)&pEnt->m_name26c))
				return pEnt;
			if (FindNameMatches(pEnt, pszName, (const char **)&pEnt->m_classname11c))
				return pEnt;
			CFindEdict *pEdict = (CFindEdict *)pEnt->m_pEdict2e0;
			if (!pEdict->m_p40 || pEdict->m_p40->vfunc3()->vfunc5())
			{
				pEdict = (CFindEdict *)pEnt->m_pEdict2e0;
				const char *pszModel = !pEdict->m_p40 ? g_106b8540 : pEdict->m_p40->vfunc3()->vfunc5();
				if (_strcmpi(pszName, pszModel) == 0)
					return pEnt;
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100d2290 size=0x70
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
void sub_101cd940(CBaseEntity *pEnt);

void sub_100d2290(const char *pszTarget)
{
    DevMsg(2, "KillTarget: %s\n", pszTarget);
    CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszTarget, 0, 0);
    while (pEnt) {
        sub_101cd940(pEnt);
        const char *pszClass = pEnt->m_classname11c;
        if (!pszClass)
            pszClass = g_106b8540;
        DevMsg(2, "killing %s\n", pszClass);
        pEnt = g_106eb5d8.sub_100f7770(pEnt, pszTarget, 0, 0);
    }
}
// END FUNCTION

// FUNCTION: 0x100d2320 size=0x5b
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);
extern "C" int _strcmpi(const char *, const char *);
extern char g_106b8540[];

class CEntNameView
{
public:
	const char *sub_100ab4f0();
};

CEntNameView *sub_10002b8a(int pPlayer);
void sub_10014614(CEntNameView *pEnt);
void sub_10011077(const char *pszName);

void sub_100d2320(int pPlayer, const char *pszName)
{
	if (_strcmpi(pszName, g_106b8540) == 0)
	{
		CEntNameView *pEnt = sub_10002b8a(pPlayer);
		if (pEnt)
		{
			sub_10014614(pEnt);
			Msg("killing %s\n", pEnt->sub_100ab4f0());
			return;
		}
	}
	sub_10011077(pszName);
}
// END FUNCTION

// FUNCTION: 0x100d23a0 size=0xc5
extern "C" double __cdecl atof(const char *);
void sub_101450e0(float *pMins, float *pMaxs, int a, int b);

void sub_100d23a0()
{
	float a[3];
	float b[3];
	a[0] = (float)atof(engine->vfunc84(1));
	a[1] = (float)atof(engine->vfunc84(2));
	a[2] = (float)atof(engine->vfunc84(3));
	b[0] = (float)atof(engine->vfunc84(4));
	b[1] = (float)atof(engine->vfunc84(5));
	b[2] = (float)atof(engine->vfunc84(6));
	sub_101450e0(a, b, 1, 1);
}
// END FUNCTION

// FUNCTION: 0x100d24b0 size=0xa
#include "ConCommand.h"
void sub_100d23a0(void);
ConCommand g_106e7e68("drawline", sub_100d23a0, "Draws line between two 3D Points.\n\tGreen if no collision\n\tRed is collides with something\n\tArugments: x1 y1 z1 x2 y2 z2", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2540 size=0x178
#include <stdlib.h>
#include "Vector.h"

void sub_101450e0(const Vector &start, const Vector &end, bool a, bool b);

void sub_100d2540()
{
	Vector vecOrigin;
	vecOrigin.x = atof(engine->vfunc84(1));
	vecOrigin.y = atof(engine->vfunc84(2));
	vecOrigin.z = atof(engine->vfunc84(3));
	Vector mins = Vector(-5, -5, -5);
	Vector maxs = Vector(5, 5, 5);
	Vector start = mins + vecOrigin;
	Vector end = maxs + vecOrigin;
	sub_101450e0(start, end, true, true);
	start.x += 10.0f;
	end.x -= 10.0f;
	sub_101450e0(start, end, true, true);
	start.y += 10.0f;
	end.y -= 10.0f;
	sub_101450e0(start, end, true, true);
	start.x -= 10.0f;
	end.x += 10.0f;
	sub_101450e0(start, end, true, true);
}
// END FUNCTION

// FUNCTION: 0x100d2720 size=0xa
#include "ConCommand.h"
void sub_100d2540(void);
ConCommand g_106e7ae0("drawcross", sub_100d2540, "Draws a cross at the given location\n\tArugments: x y z", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d27b0 size=0x21
char *sub_10008d8c();
void sub_1001080c(int value);

// TARGET: sub_100d27b0
void sub_100d27b0()
{
    char *p = sub_10008d8c();
    if (p != 0) {
        char *pInner = *(char **)(p + 0xa8);
        if (pInner != 0) {
            sub_1001080c(*(int *)(pInner + 0x2e0));
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100d27f0 size=0xa
#include "ConCommand.h"
void sub_100d27b0(void);
ConCommand g_106e74d0("kill", sub_100d27b0, "kills the player", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2880 size=0x52
struct CPlayerObj { char m_pad[0x224]; unsigned int m_flags; };
struct CPlayerEnt { char m_pad[0xa8]; CPlayerObj *m_pObj; };
CPlayerEnt *sub_101193b0();
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

void sub_100d2880()
{
    CPlayerEnt *pPlayer = sub_101193b0();
    if (pPlayer && pPlayer->m_pObj) {
        CPlayerObj *p = pPlayer->m_pObj;
        if (p->m_flags & 0x2000000) {
            p->m_flags &= 0xfdffffff;
            Msg("Buddha Mode off...\n");
        } else {
            p->m_flags |= 0x2000000;
            Msg("Buddha Mode on...\n");
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100d2900 size=0xa
#include "ConCommand.h"
void sub_100d2880(void);
ConCommand g_106e78fc("buddha", sub_100d2880, "Toggle.  Player takes damage but won't die. (Shows red cross when health is zero)", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2990 size=0x25
char *sub_10008d8c(void);
void sub_100111f8(int, int);

// TARGET: sub_100d2990
void sub_100d2990(void)
{
    char *p = (char *)sub_10008d8c();
    if (p != 0 && *(int *)(p + 0xa8) != 0) {
        sub_100111f8(*(int *)(*(int *)(p + 0xa8) + 0x2e0), 0);
    }
}
// END FUNCTION

// FUNCTION: 0x100d29d0 size=0xa
#include "ConCommand.h"
void sub_100d2990(void);
ConCommand g_106e75ec("say", sub_100d2990, "Display player message", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2a60 size=0x25
int sub_10008d8c();
void sub_100111f8(int value, int flag);

// TARGET: sub_100d2a60
void sub_100d2a60()
{
    int *pOwner = (int *)sub_10008d8c();
    if (pOwner != 0)
    {
        int *pInner = (int *)pOwner[0xa8 / 4];
        if (pInner != 0)
        {
            sub_100111f8(pInner[0x2e0 / 4], 1);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100d2aa0 size=0xa
#include "ConCommand.h"
void sub_100d2a60(void);
ConCommand g_106e7390("say_team", sub_100d2a60, "Display player message to team", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2b30 size=0x7b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "IVEngineServer.h"
#include "ScopeTrace.h"

#define U1(n) virtual void u##n();
#define U10(n) U1(n##0) U1(n##1) U1(n##2) U1(n##3) U1(n##4) U1(n##5) U1(n##6) U1(n##7) U1(n##8) U1(n##9)

struct CCharSlots : CBaseCombatCharacter	// the slots after CBaseCombatCharacter's 0..405, up to 459
{
	U1(406) U1(407) U1(408) U1(409)
	U10(41) U10(42) U10(43) U10(44)
	U1(450) U1(451) U1(452) U1(453) U1(454) U1(455) U1(456) U1(457) U1(458)
	virtual void vfunc459(const char *pszName, int a);	// slot 459 (+0x72c)
};

struct CCmdPlayer
{
	char m_pad0000[0xa8];
	CBaseCombatCharacter *m_pChar;
};

struct CGiveWeapon
{
	void sub_10258620(int a);	// stub 0x1000519b
};

extern IVEngineServer *g_1070b22c;
extern int g_10752e9c;
CCmdPlayer *__cdecl sub_101193b0();
void __cdecl sub_10002095(const char **ppOut, int arg);

void sub_100d2b30()
{
	CCmdPlayer *pPlayer = sub_101193b0();
	if (pPlayer) {
		CBaseCombatCharacter *pChar = pPlayer->m_pChar;
		if (pChar && g_10752e9c) {
			const char *pszName;
			sub_10002095(&pszName, g_1070b22c->vfunc84(1));
			((CCharSlots *)pChar)->vfunc459(pszName ? pszName : g_106b8540, 0);
			CGiveWeapon *pWeapon = (CGiveWeapon *)pChar->sub_10335950(pszName ? pszName : g_106b8540);
			if (pWeapon)
				pWeapon->sub_10258620(0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100d2bd0 size=0xa
#include "ConCommand.h"
void sub_100d2b30(void);
void sub_100d2c30(void);
ConCommand g_106e7e40("give", sub_100d2b30, "Give item to player.\n\tArguments: <item_name>", 0, sub_100d2c30);
// END FUNCTION

// FUNCTION: 0x100d2c30 size=0xc2
#include "CUnknown1021e8e0.h"

extern "C" char *__cdecl strstr(const char *, const char *);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
extern CUnknown1021e8e0 g_1074f898;

int sub_100d2c30(const char *pszInput, char *pszOut)
{
	const char *pszPrefix;
	if (strstr(pszInput, "give "))
		pszPrefix = "give ";
	else if (strstr(pszInput, "vitem "))
		pszPrefix = "vitem ";
	else
		return 0;
	const char *pszRest = pszInput + strlen(pszPrefix);
	g_1074f898.sub_1021eaa0();
	int count = 0;
	int index = g_1074f898.sub_1021e8e0(pszRest);
	while (index != -1) {
		Q_snprintf(pszOut, 0x40, "%s%s", pszPrefix, g_1074f898.sub_1021eac0(index));
		count++;
		pszOut += 0x40;
		if (count >= 0xc0)
			break;
		index = g_1074f898.sub_1021e9c0(pszRest, index);
	}
	return count;
}
// END FUNCTION

// FUNCTION: 0x100d2d80 size=0x7b
#include <stdlib.h>
struct CFovPlayerData { char pad[0x1e78]; int m_iFOV; };
struct CFovLocalPlayer { char pad[0xa8]; CFovPlayerData *m_pData; };
extern int g_10752e9c;
CFovLocalPlayer *sub_101193b0();
char *sub_101cf720(const char *fmt, ...);
void sub_101ce620(CFovPlayerData *pPlayer, int type, const char *pszText, int a, int b, int c, int d);
void sub_100d2d80()
{
	CFovLocalPlayer *pLocal = sub_101193b0();
	if (pLocal) {
		CFovPlayerData *pData = pLocal->m_pData;
		if (pData && g_10752e9c) {
			if (engine->vfunc85() > 1) {
				pData->m_iFOV = atoi(engine->vfunc84(1));
			} else {
				sub_101ce620(pData, 2, sub_101cf720("\"fov\" is \"%d\"\n", pData->m_iFOV), 0, 0, 0, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100d2e20 size=0xa
#include "ConCommand.h"
void sub_100d2d80(void);
ConCommand g_106e7458("fov", sub_100d2d80, "Change players FOV", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d2eb0 size=0x104
#include "CBaseEntity.h"
#include <string.h>

struct S100d2eb0Owner
{
	char m_pad[0xa8];
	CBaseEntity *m_pEnt;
};

extern char g_106e7c00[256];
S100d2eb0Owner *sub_101193b0();
void sub_101cf390(CBaseEntity *pEnt, const float *mins, const float *maxs);
void sub_101cf600(CBaseEntity *pEnt);
__declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);

// TARGET: sub_100d2eb0
void sub_100d2eb0()
{
	S100d2eb0Owner *pOwner = sub_101193b0();
	if (!pOwner)
		return;
	CBaseEntity *pEnt = pOwner->m_pEnt;
	if (!pEnt)
		return;
	if (engine->vfunc85() != 2)
		return;
	Q_strncpy(g_106e7c00, "models/", 256);
	strcat(g_106e7c00, engine->vfunc84(1));
	strcat(g_106e7c00, ".mdl");
	pEnt->vfunc105(g_106e7c00);
	Vector mins, maxs;
	maxs.Init(16.0f, 16.0f, 72.0f);
	mins.Init(-16.0f, -16.0f, 0.0f);
	sub_101cf390(pEnt, &mins.x, &maxs.x);
	sub_101cf600(pEnt);
}
// END FUNCTION

// FUNCTION: 0x100d3010 size=0xa
#include "ConCommand.h"
void sub_100d2eb0(void);
ConCommand g_106e77fc("setmodel", sub_100d2eb0, "Changes's player's model", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d30a0 size=0x1c
#include "CUnknown100d30a0.h"

CUnknown100d30a0Holder *sub_10008d8c();

void sub_100d30a0()
{
	CUnknown100d30a0Holder *holder = sub_10008d8c();
	if (holder && holder->m_pObject)
		holder->m_pObject->slot456();
}
// END FUNCTION

// FUNCTION: 0x100d30d0 size=0xa
#include "ConCommand.h"
void sub_100d30a0(void);
ConCommand g_106e76b8("lastinv", sub_100d30a0, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100d3160 size=0x57
#include "CBasePlayer.h"
#include <string.h>
CBasePlayer *sub_101193b0();
typedef const char *(__fastcall *PFN_GetName)(void *pThis);
void sub_100d3160()
{
    CBasePlayer *pPlayer = sub_101193b0();
    if (pPlayer) {
        CBasePlayer *pChar = *(CBasePlayer **)((char *)pPlayer + 0xa8);
        if (pChar) {
            void *pWeapon = pChar->sub_1032e7b0();
            if (pWeapon) {
                const char *pszName = (*(PFN_GetName **)pWeapon)[348](pWeapon);
                if (!_strcmpi(pszName, "weapon_physcannon"))
                    pChar->vfunc456();
                else
                    pChar->vfunc457("weapon_physcannon", 0);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100d31e0 size=0xa
#include "ConCommand.h"
void sub_100d3160(void);
ConCommand g_106e7318("phys_swap", sub_100d3160, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x100d3270 size=0x19c
#include "CBaseLandmark.h"
#include "CChangeLevel.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "engineserver.h"

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)

extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

// the player entity: slots up to 219 and the saved position at +0x206c
struct SLevelEnt
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS(60) EVS(61) EVS(62) EVS(63)
	virtual void slot64(const float *pAngles);
	EVS(65) EVS(66) EVS(67) EVS(68) EVS(69)
	EVS10(7) EVS10(8) EVS10(9) EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16)
	EVS10(17) EVS10(18) EVS10(19) EVS10(20)
	EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216)
	virtual Vector *slot217();
	virtual void slot218(Vector *pAngles);
	virtual Vector *slot219();
	char m_pad0004[0x206c - 4];
	Vector m_vecSaved206c;	// 0x206c
	int m_pad2078;
	int m_n207c;	// 0x207c
};

struct SLevelHolder
{
	char m_pad0000[0xa8];
	SLevelEnt *m_pPlayerA8;	// 0xa8
};
SLevelHolder *sub_101193b0();
void sub_101cf5c0(SLevelEnt *pPlayer, Vector *pOrigin, int nFlag);

// TARGET: sub_100d3270
void sub_100d3270()
{
	const char *pszLandmark = engine->vfunc84(1);
	const char *pszChangeLevel = engine->vfunc84(2);
	const char *pszMap = engine->vfunc84(3);
	if (pszLandmark && pszChangeLevel && pszMap && strlen(pszLandmark) && strlen(pszChangeLevel) && strlen(pszMap)) {
		SLevelHolder *pHolder = sub_101193b0();
		SLevelEnt *pPlayer;
		if (!pHolder)
			pPlayer = 0;
		else
			pPlayer = pHolder->m_pPlayerA8;
		CBaseLandmark *pLandmark = dynamic_cast<CBaseLandmark *>(g_106eb5d8.sub_100f7770(0, pszLandmark, 0, 0));
		CChangeLevel *pChangeLevel = dynamic_cast<CChangeLevel *>(g_106eb5d8.sub_100f7770(0, pszChangeLevel, 0, 0));
		if (pPlayer && pLandmark && pChangeLevel) {
			Vector vecOrigin = *((SLevelEnt *)pLandmark)->slot219();
			pPlayer->m_vecSaved206c = vecOrigin;
			pPlayer->slot64(&vecOrigin.x);
			pPlayer->slot218(&vecOrigin);
			pPlayer->m_n207c = 1;
			sub_101cf5c0(pPlayer, ((SLevelEnt *)pLandmark)->slot217(), 0);
			Q_strncpy(pChangeLevel->m_szMapName, pszMap, 32);
			pChangeLevel->sub_101c7890((CBaseEntity *)pPlayer);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100d3480 size=0xa
#include "ConCommand.h"
void sub_100d3270(void);
ConCommand g_106e7ab8("worldmap_transition", sub_100d3270, "Transition to map\t\nArguments: <map_name>", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d3510 size=0x35
#include "CBaseEntity.h"
#include "engineserver.h"
#define V10(p) virtual int p##0(); virtual int p##1(); virtual int p##2(); virtual int p##3(); virtual int p##4(); virtual int p##5(); virtual int p##6(); virtual int p##7(); virtual int p##8(); virtual int p##9();
struct CVEngine84 { V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) virtual int i0(); virtual int i1(); virtual int i2(); virtual int i3(); virtual int i4(int, int); };
struct CVCall457 { V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u) V10(v) V10(w) V10(x) V10(y) V10(z) V10(A) V10(B) V10(C) V10(D) V10(E) V10(F) V10(G) V10(H) V10(I) V10(J) V10(K) V10(L) V10(M) V10(N) V10(O) V10(P) V10(Q) V10(R) V10(S) V10(T) virtual int T7(int); };
CBaseEntity *sub_101193b0();
void sub_100d3510()
{
	CBaseEntity *pEnt = sub_101193b0();
	if (pEnt) {
		CVCall457 *p = (CVCall457 *)pEnt->m_pA8;
		if (p)
			p->T7(((CVEngine84 *)engine)->i4(1, 0));
	}
}
// END FUNCTION

// FUNCTION: 0x100d3560 size=0xa
#include "ConCommand.h"
void sub_100d3510(void);
ConCommand g_106e76e0("use", sub_100d3510, "Use a particular weapon\t\nArguments: <weapon_name>", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d35f0 size=0x1e5
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "Tier1.h"

struct CNoclipCvar { virtual void v0(); virtual bool GetBool(); char m_pad[0x2c - 4]; int m_n2c; };
struct CNoclipCvarEntry { char m_pad[4]; CNoclipCvar *m_pImpl; };
struct CNoclipCvarSystem { virtual void v0(); virtual void v1(); virtual CNoclipCvarEntry *FindVar(const char *name); };
struct CNoclipEdict { char m_pad[0xa8]; CBasePlayer *m_pPlayer; };

extern CNoclipCvarSystem *g_1070b234;
CNoclipEdict *sub_101193b0();
void sub_101ce620(CBasePlayer *pPlayer, int type, const char *msg, int a, int b, int c, int d);
char sub_100d3860(CBasePlayer *pPlayer);
void sub_10139610(const Vector *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
int sub_100d38d0(CBasePlayer *pPlayer, const Vector *pDir, float flSign, Vector *pOrigin);

void sub_100d35f0()
{
	CNoclipCvarEntry *cheats = g_1070b234->FindVar("sv_cheats");
	if (!cheats)
		return;
	if (cheats->m_pImpl->GetBool())
		return;
	if (!cheats->m_pImpl->m_n2c)
		return;
	CNoclipEdict *pEdict = sub_101193b0();
	if (!pEdict)
		return;
	CBaseEntity *pPlayer = (CBaseEntity *)pEdict->m_pPlayer;
	if (!pPlayer)
		return;
	if (pPlayer->vfunc94() != 9)
	{
		pPlayer->vfunc93(9, 0);
		sub_101ce620((CBasePlayer *)pPlayer, 2, "noclip ON\n", 0, 0, 0, 0);
		pPlayer->m_flags268 |= 4;
		return;
	}
	pPlayer->m_flags268 &= ~4;
	pPlayer->vfunc93(3, 0);
	Vector oldorigin = *((CEntityVSlots *)pPlayer)->slot217();
	sub_101ce620((CBasePlayer *)pPlayer, 2, "noclip OFF\n", 0, 0, 0, 0);
	if (sub_100d3860((CBasePlayer *)pPlayer))
		return;
	Vector forward, right, up;
	sub_10139610(&((CBasePlayer *)pPlayer)->m_vec206c, &forward, &right, &up);
	if (!sub_100d38d0((CBasePlayer *)pPlayer, &forward, 1.0f, &oldorigin)
		&& !sub_100d38d0((CBasePlayer *)pPlayer, &right, 1.0f, &oldorigin)
		&& !sub_100d38d0((CBasePlayer *)pPlayer, &right, -1.0f, &oldorigin)
		&& !sub_100d38d0((CBasePlayer *)pPlayer, &up, 1.0f, &oldorigin)
		&& !sub_100d38d0((CBasePlayer *)pPlayer, &up, -1.0f, &oldorigin)
		&& !sub_100d38d0((CBasePlayer *)pPlayer, &forward, -1.0f, &oldorigin))
		g_109f3628("Can't find the world\n");
	((CEntityVSlots *)pPlayer)->slot216(&oldorigin);
}
// END FUNCTION

// FUNCTION: 0x100d3860 size=0x41
struct Vec3;
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct COriginEnt {
 V64(p) V64(q) V64(r) V4(s) V4(t) V4(u) V4(v) V4(w4) V4(x)
 virtual void f216(); virtual Vec3 *vfunc217(); };
struct trace_buf { char pad[0x37]; char b; char pad2[0x1c]; };
void sub_101cd110(COriginEnt *, Vec3 *, Vec3 *, int, trace_buf *);
int sub_100d3860(COriginEnt *p)
{
    trace_buf tr;
    sub_101cd110(p, p->vfunc217(), p->vfunc217(), 0x201400b, &tr);
    return tr.b == 0;
}
// END FUNCTION

// FUNCTION: 0x100d38d0 size=0xa9
#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct Vec3 { float x, y, z; };

struct COriginEnt
{
	SL100(a0) SL100(a1) SL10(a2) virtual void b10(); virtual void b11(); virtual void b12(); virtual void b13(); virtual void b14(); virtual void b15();
	virtual void v216(Vec3 *pOrigin);
	virtual Vec3 *v217();
};

extern void sub_10139500(Vec3 *, float, const Vec3 *, Vec3 *);
extern char sub_100d3860(COriginEnt *);

int sub_100d38d0(COriginEnt *pEnt, const Vec3 *pDir, float flScale, Vec3 *pOut)
{
	for (int i = 0; i < 100; i++) {
		Vec3 tmp = *pEnt->v217();
		sub_10139500(&tmp, flScale, pDir, &tmp);
		pEnt->v216(&tmp);
		if (sub_100d3860(pEnt)) {
			Vec3 *p = pEnt->v217();
			pOut->x = p->x;
			pOut->y = p->y;
			pOut->z = p->z;
			return 1;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100d39b0 size=0xa
#include "ConCommand.h"
void sub_100d35f0(void);
ConCommand g_106e7b08("noclip", sub_100d35f0, "Toggle. Player becomes non-solid and flies.", 16384, 0);
// END FUNCTION

// FUNCTION: 0x100d3a50 size=0x91
#include "CBaseEntity.h"
#include "ConVar.h"

struct ICvarView
{
	virtual void v0();
	virtual void v1();
	virtual ConVar *vfunc2(const char *pszName);	// FindVar
};

struct CGlobalVarsView
{
	char m_pad0000[0x30];
	char m_bFlag30;	// 0x30
};

extern ICvarView *g_1070b234;
extern CGlobalVarsView *g_1070b228;
CBaseEntity *sub_101193b0();
void sub_101ce620(CBaseEntity *pPlayer, int dest, const char *pszMsg, int a, int b, int c, int d);

// TARGET: sub_100d3a50
void sub_100d3a50()
{
	ConVar *pCheats = g_1070b234->vfunc2("sv_cheats");
	if (pCheats && pCheats->GetBool())
	{
		CBaseEntity *pCaller = sub_101193b0();
		if (pCaller)
		{
			CBaseEntity *pPlayer = *(CBaseEntity **)((char *)pCaller + 0xa8);
			if (pPlayer && !g_1070b228->m_bFlag30)
			{
				pPlayer->sub_100b3b90(0x4000);
				if (!(pPlayer->sub_100b3700() & 0x4000))
					sub_101ce620(pPlayer, 2, "godmode OFF\n", 0, 0, 0, 0);
				else
					sub_101ce620(pPlayer, 2, "godmode ON\n", 0, 0, 0, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100d3b20 size=0xa
#include "ConCommand.h"
void sub_100d3a50(void);
ConCommand g_106e7430("god", sub_100d3a50, "Toggle. Player becomes invulnerable.", 16384, 0);
// END FUNCTION

// FUNCTION: 0x100d3bc0 size=0x90
#include "CBaseEntity.h"
#include "ConVar.h"

struct ICvarView
{
	virtual void v0();
	virtual void v1();
	virtual ConVar *vfunc2(const char *pszName);	// FindVar
};

struct CGlobalVarsView
{
	char m_pad0000[0x30];
	char m_bFlag30;	// 0x30
};

extern ICvarView *g_1070b234;
extern CGlobalVarsView *g_1070b228;
CBaseEntity *sub_101193b0();
void sub_101ce620(CBaseEntity *pPlayer, int dest, const char *pszMsg, int a, int b, int c, int d);

// TARGET: sub_100d3bc0
void sub_100d3bc0()
{
	ConVar *pCheats = g_1070b234->vfunc2("sv_cheats");
	if (pCheats && pCheats->GetBool())
	{
		CBaseEntity *pCaller = sub_101193b0();
		if (pCaller)
		{
			CBaseEntity *pPlayer = *(CBaseEntity **)((char *)pCaller + 0xa8);
			if (pPlayer && !g_1070b228->m_bFlag30)
			{
				pPlayer->sub_100b3b90(0x8000);
				if (!(pPlayer->sub_100b3700() & 0x8000))
					sub_101ce620(pPlayer, 2, "notarget OFF\n", 0, 0, 0, 0);
				else
					sub_101ce620(pPlayer, 2, "notarget ON\n", 0, 0, 0, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100d3c80 size=0xa
#include "ConCommand.h"
void sub_100d3bc0(void);
ConCommand g_106e7d50("notarget", sub_100d3bc0, "Toggle. Player becomes hidden to NPCs.", 16384, 0);
// END FUNCTION

// FUNCTION: 0x100d3d20 size=0xa6
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CVStatList_t.h"

extern char *sub_10008d8c();
extern int sub_10431447(const char *);

void sub_100d3d20()
{
	char *p = sub_10008d8c();
	if (!p)
		return;
	void *pChar = *(void **)(p + 0xa8);
	if (!pChar)
		return;
	int value = sub_10431447(engine->vfunc84(1));
	CVStatListSet::Of(pChar)->Find(0)->sub_102008e0(0x22, value);
}
// END FUNCTION

// FUNCTION: 0x100d3e00 size=0xa
#include "ConCommand.h"
void sub_100d3d20(void);
ConCommand g_106e7480("giftxp", sub_100d3d20, "Free XP for all!", 0, 0);
// END FUNCTION

// FUNCTION: 0x100d3e90 size=0x23e
#include "CBasePlayer.h"
#include "engineserver.h"
#include <string.h>
#include <stdlib.h>
struct CCmdGameRulesView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40(); virtual char vfunc41(const char *p, CBasePlayer *pl); };
struct CCmdConsoleInner { virtual void v0(); virtual char vfunc1(); char pad[0x28]; int m_n2c; };
struct CCmdConsole { int pad; CCmdConsoleInner *m_p4; };
extern CCmdGameRulesView *g_1070ba0c;
extern CCmdConsole *g_1070af4c;
void sub_100d2320(CBasePlayer *p, const char *s);
void sub_101ce290(CBasePlayer *p, unsigned char *c, float a, float b, int f);
void sub_101ce620(CBasePlayer *p, int a, const char *s, int b, int c, int d, int e);
const char *sub_101cf720(const char *fmt, const char *a);
void sub_101cd940(void *p);
void sub_10056ba0(const Vector &a, void *b, const char *c, const char *d);
struct CTeTesterList { void *sub_100f7380(void *prev, const char *name); };
extern CTeTesterList g_106eb5d8;

void sub_100d3e90(CBasePlayer *pEntity)
{
	const char *arg0 = engine->vfunc84(0);
	if (!pEntity)
		return;
	char *p = strstr(arg0, "weapon_");
	if (p && p == arg0) {
		if (engine->vfunc85() == 2)
			pEntity->vfunc457(arg0, atoi(engine->vfunc84(1)));
		else
			pEntity->vfunc457(arg0, 0);
		return;
	}
	if (!_strcmpi(arg0, "killtarget")) {
		CCmdConsole *c = g_1070af4c;
		if (!c->m_p4->vfunc1() && c->m_p4->m_n2c)
			sub_100d2320(pEntity, engine->vfunc84(1));
	} else if (!_strcmpi(arg0, "fade")) {
		unsigned char color[4] = { 0x20, 0x3f, 0x64, 0xc8 };
		sub_101ce290(pEntity, color, 3.0f, 3.0f, 2);
	} else if (!_strcmpi(arg0, "te")) {
		const char *arg1 = engine->vfunc84(1);
		if (!_strcmpi(arg1, "stop")) {
			void *e = g_106eb5d8.sub_100f7380(0, "te_tester");
			while (e) {
				void *next = g_106eb5d8.sub_100f7380(e, "te_tester");
				sub_101cd940(e);
				e = next;
			}
		} else {
			sub_10056ba0(pEntity->vfunc192(), (char *)pEntity + 0x206c, engine->vfunc84(1), engine->vfunc84(2));
		}
	} else {
		p = strstr(arg0, "item_");
		if (p && p == arg0) {
			pEntity->vfunc457(arg0, 0);
		} else if (!g_1070ba0c->vfunc41(arg0, pEntity)) {
			sub_101ce620(pEntity, 2, sub_101cf720("Unknown command: %s\n", arg0), 0, 0, 0, 0);
		}
	}
}
// END FUNCTION
