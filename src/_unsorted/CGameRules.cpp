// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10128370 size=0x3e
#include "CBaseCombatCharacter.h"
#include "CGameRules.h"

#define VS(n) virtual void s##n();
#define VS10(p) VS(p##0) VS(p##1) VS(p##2) VS(p##3) VS(p##4) VS(p##5) VS(p##6) VS(p##7) VS(p##8) VS(p##9)

struct CUnknownObjB
{
	int sub_1000a37b();
};

// the virtual slots of the game's object up to slot 55 (the layout is not known yet)
struct CVtblRulesHelper
{
	VS10(0) VS10(1) VS10(2) VS10(3) VS10(4)
	VS(50) VS(51) VS(52) VS(53) VS(54)
	virtual CUnknownObjB *s55(int a);
};

struct CBaseCombatCharacterView2
{
	int sub_103346c0(int a);	// CBaseCombatCharacter::sub_103346c0 (stub 0x1000ff97), called directly
};

extern CVtblRulesHelper *g_1070ba0c;

// TARGET: CGameRules::vfunc53
char CGameRules::vfunc53(CBaseCombatCharacter *pChar, int nIndex)
{
	if (nIndex > -1) {
		int nLimit = g_1070ba0c->s55(nIndex)->sub_1000a37b();
		if (((CBaseCombatCharacterView2 *)pChar)->sub_103346c0(nIndex) < nLimit) {
			return 1;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101283c0 size=0x2b
#include "CBaseCombatCharacter.h"
#include "CGameRules.h"

struct CUnkObj101283c0
{
	int sub_1000df3f();
};

// TARGET: CGameRules::vfunc52
void CGameRules::vfunc52(CBaseCombatCharacter *pChar, int nIndex)
{
	vfunc53(pChar, ((CUnkObj101283c0 *)vfunc55(nIndex))->sub_1000df3f());
}
// END FUNCTION

// FUNCTION: 0x10128400 size=0x17
#include "CGameRules.h"

// TARGET: CGameRules::sub_10128400
void *CGameRules::sub_10128400()
{
	if (*(void **)((char *)this + 4) == 0)
	{
		vfunc56();
	}
	return *(void **)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x10128430 size=0x27
#include "CGameRules.h"

// TARGET: CGameRules::vfunc56
void CGameRules::vfunc56()
{
	CGameRulesSub **ppSub = (CGameRulesSub **)((char *)this + 4);
	*ppSub = new CGameRulesSub;
}
// END FUNCTION

// FUNCTION: 0x101286d0 size=0x5
#include "CBaseEntity.h"
#include "CGameRules.h"
char CGameRules::vfunc47(CBaseEntity * a0, CBaseEntity * a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101286f0 size=0x9c
#include "CGameRules.h"
struct SkillVar { virtual void v0(); virtual bool v1(); char pad[0x28]; int m_value; };
struct SkillEntry { int pad; SkillVar *pVar; };
struct CvarSys { virtual void v0(); virtual void v1(); virtual SkillEntry *v2(const char *name); };
extern CvarSys *g_1070b234;
extern int g_1070ba3c;
extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);

// TARGET: CGameRules::vfunc15
void CGameRules::vfunc15()
{
    char cmd[256];
    SkillEntry *e = g_1070b234->v2("skill");
    int skill;
    if (e) {
        if (e->pVar->v1())
            skill = 0;
        else
            skill = e->pVar->m_value;
    } else
        skill = 1;
    g_1070ba3c = skill;
    if (skill < 1)
        skill = 1;
    else if (skill > 3)
        skill = 3;
    else
        goto L;
    g_1070ba3c = skill;
L:
    Q_snprintf(cmd, 256, "exec skill%d.cfg\n", skill);
    engine->vfunc59(cmd);
    engine->vfunc60();
}
// END FUNCTION

// FUNCTION: 0x10128f10 size=0x2e
#include "CGameRules.h"
#include "CBaseEntity.h"
#include "CVoiceGameMgr.h"
int __cdecl sub_10232400();
bool CGameRules::vfunc41(const char *pcmd, CBaseEntity *pPlayer)
{
	if (pPlayer->m_pA8 && ((CVoiceGameMgr *)sub_10232400())->sub_102325e0(pPlayer, pcmd))
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x101291f0 size=0x35
#include "CGameRules.h"
#include "CVoiceGameMgr.h"
#include "globalvars.h"

extern int g_10627728;
CVoiceGameMgr *sub_10232400();
void sub_101c2c30();

// TARGET: ??0CGameRules@@QAE@XZ
CGameRules::CGameRules()
{
    *(int *)((char *)this + 4) = 0;
    sub_10232400()->sub_102324a0((void *)g_10627728, gpGlobals->maxClients);
    sub_101c2c30();
}
// END FUNCTION

// FUNCTION: 0x10129240 size=0x3
#include "CGameRules.h"
int CGameRules::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129260 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc2()
{
}
// END FUNCTION

// FUNCTION: 0x10129280 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc3(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101292a0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc4(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101292c0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc5(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101292e0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc6(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x10129300 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc7(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129320 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc8(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129340 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc9(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10129360 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc10(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10129380 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc11()
{
}
// END FUNCTION

// FUNCTION: 0x101293a0 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc12()
{
}
// END FUNCTION

// FUNCTION: 0x101293c0 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc13()
{
}
// END FUNCTION

// FUNCTION: 0x101293e0 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc14()
{
}
// END FUNCTION

// FUNCTION: 0x10129400 size=0x3
#include "CGameRules.h"
bool CGameRules::vfunc23()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129420 size=0x6
#include "CGameRules.h"
namespace lifted {
extern char g_10572c30;
}
int CGameRules::vfunc25()
{
    return (int)&lifted::g_10572c30;
}
// END FUNCTION

// FUNCTION: 0x10129440 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc29(void * a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129460 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc31(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10129480 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc32(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101294a0 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc34(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101294c0 size=0x3
#include "CGameRules.h"
bool CGameRules::vfunc40()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101294e0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc42(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10129500 size=0x5
#include "CGameRules.h"
int CGameRules::vfunc46(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129520 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc57()
{
}
// END FUNCTION

// FUNCTION: 0x10129540 size=0x5
#include "CGameRules.h"
int CGameRules::vfunc58(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129560 size=0x7
#include "CGameRules.h"
namespace lifted {
extern float g_104454c4;
}
float CGameRules::vfunc60()
{
    return lifted::g_104454c4;
}
// END FUNCTION

// FUNCTION: 0x10129580 size=0x6
#include "CGameRules.h"
int CGameRules::vfunc66(int a0)
{
    return -1;
}
// END FUNCTION

// FUNCTION: 0x101295a0 size=0x8
#include "CGameRules.h"

const char *CGameRules::vfunc67(int)
{
	return "";
}
// END FUNCTION

// FUNCTION: 0x101295c0 size=0x5
#include "CGameRules.h"
bool CGameRules::vfunc68(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101295e0 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc69(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x10129600 size=0x8
#include "CGameRules.h"
extern char g_106b8540[];

// TARGET: CGameRules::vfunc70
const char *CGameRules::vfunc70(int index)
{
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x10129620 size=0x3
#include "CGameRules.h"
void CGameRules::vfunc71(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10129640 size=0x3
#include "CGameRules.h"
bool CGameRules::vfunc72()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10129660 size=0x5
#include "CBaseEntity.h"
#include "CGameRules.h"
bool CGameRules::vfunc73(CBaseEntity * a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10129680 size=0x1
#include "CGameRules.h"
void CGameRules::vfunc75()
{
}
// END FUNCTION

// FUNCTION: 0x101296a0 size=0x1e
#include "CGameRules.h"

// TARGET: CGameRules::vfunc0
CGameRules *CGameRules::vfunc0(unsigned int flags)
{
	sub_1000d189();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10129700 size=0x2a
#include "CGameRules.h"

void sub_10009863(int a, int b, int c, int d, int e);

// TARGET: CGameRules::vfunc78
float CGameRules::vfunc78(int a, int b, int c, int d, int e)
{
	sub_10009863(a, b, c, d, e);
	return 1.0f;
}
// END FUNCTION
