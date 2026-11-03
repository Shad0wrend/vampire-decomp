// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10355770 size=0x6
#include "CHalfLife2.h"
namespace lifted {
extern char g_10572c30;
}
int CHalfLife2::vfunc25()
{
    return (int)&lifted::g_10572c30;
}
// END FUNCTION

// FUNCTION: 0x10355790 size=0x24
#include "CHalfLife2.h"

extern int vt_1047a40c[];
void sub_1000d189();

// TARGET: CHalfLife2::vfunc0
CGameRules *CHalfLife2::vfunc0(unsigned int flags)
{
    *(int **)this = vt_1047a40c;
    sub_1000d189();
    if (flags & 1) {
        delete this;
    }
    return (CGameRules *)this;
}
// END FUNCTION

// FUNCTION: 0x103557d0 size=0x5
#include "CHalfLife2.h"
bool CHalfLife2::vfunc41(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103557f0 size=0x3
#include "CHalfLife2.h"
void CHalfLife2::vfunc35(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10355810 size=0x24f
#include "CHalfLife2.h"
#include "CGameRules.h"
#include "CUnknown10427700.h"

void CHalfLife2::vfunc56()
{
	m_pAmmoDef = (CUnknown10427700 *)new CGameRulesSub;
	m_pAmmoDef->sub_10427790("MediumRound", 2, 1, "sk_plr_dmg_medium_round", "sk_npc_dmg_medium_round", "sk_max_medium_round");
	m_pAmmoDef->sub_10427790("FragGrenade", 0x40, 0, "sk_plr_dmg_grenade", "sk_npc_dmg_grenade", "sk_max_grenade");
	m_pAmmoDef->sub_10427790("AnacondaRound", 2, 1, "sk_plr_dmg_anaconda_round", "sk_npc_dmg_anaconda_round", "sk_max_anaconda_round");
	m_pAmmoDef->sub_10427790("CrossbowBolt", 2, 1, "sk_plr_dmg_crossbow_bolt", "sk_npc_dmg_crossbow_bolt", "sk_max_crossbow_bolt");
	m_pAmmoDef->sub_10427790("DesertEagle_Round", 2, 1, "sk_plr_dmg_deserteagle_round", "sk_npc_dmg_deserteagle_round", "sk_max_deserteagle_round");
	m_pAmmoDef->sub_10427790("Glock_17cRound", 2, 1, "sk_plr_dmg_glock_17c_round", "sk_npc_dmg_glock_17c_round", "sk_max_glock_17c_round");
	m_pAmmoDef->sub_10427790("Ithica_M37Round", 0x4000002, 1, "sk_plr_dmg_ithica_m37_round", "sk_npc_dmg_ithica_m37_round", "sk_max_ithica_m37_round");
	m_pAmmoDef->sub_10427790("Mac_10Round", 2, 1, "sk_plr_dmg_mac10_round", "sk_npc_dmg_mac10_round", "sk_max_mac10_round");
	m_pAmmoDef->sub_10427790("Remington_M_700Round", 0x2000002, 1, "sk_plr_dmg_remington_round", "sk_npc_dmg_remington_round", "sk_max_remington_round");
	m_pAmmoDef->sub_10427790("Steyr_AugRound", 0x2000002, 1, "sk_plr_dmg_steyr_round", "sk_npc_dmg_steyr_round", "sk_max_steyr_round");
	m_pAmmoDef->sub_10427790("Super_ShotgunRound", 0x4000002, 1, "sk_plr_dmg_supershotgun_round", "sk_npc_dmg_supershotgun_round", "sk_max_supershotgun_round");
	m_pAmmoDef->sub_10427790("UziRound", 2, 1, "sk_plr_dmg_uzi_round", "sk_npc_dmg_uzi_round", "sk_max_uzi_round");
	m_pAmmoDef->sub_10427790("FlameThrowerRound", 8, 1, "sk_plr_dmg_flamethrower_round", "sk_npc_dmg_flamethrower_round", "sk_max_flamethrower_round");
	m_pAmmoDef->sub_10427790("ThirtyeightRound", 2, 1, "sk_plr_dmg_thirtyeight_round", "sk_npc_dmg_thirtyeight_round", "sk_max_thirtyeight_round");
	m_pAmmoDef->sub_10427790("BloodRound", 0, 0, "sk_plr_dmg_bloodpack_round", "sk_npc_dmg_bloodpack_round", "sk_max_bloodpack_round");
	m_pAmmoDef->sub_10427790("BlueBloodRound", 0, 0, "sk_plr_dmg_bluebloodpack_round", "sk_npc_dmg_bluebloodpack_round", "sk_max_bluebloodpack_round");
	m_pAmmoDef->sub_10427790("VitaeRound", 0, 0, "sk_plr_dmg_eldervitaepack_round", "sk_npc_dmg_eldervitaepack_round", "sk_max_eldervitaepack_round");
}
// END FUNCTION

// FUNCTION: 0x10356080 size=0x1
#include "CHalfLife2.h"
void CHalfLife2::vfunc57()
{
}
// END FUNCTION

// FUNCTION: 0x103560a0 size=0x134
#include "CHalfLife2.h"
extern char g_1062820c[];
extern char g_106281fc[];
extern char g_106281e0[];
extern char g_106281c8[];
extern char g_106281b0[];
extern char g_1062819c[];
extern char g_1062818c[];
extern char g_10628170[];
extern char g_10628160[];
extern char g_10628140[];
extern char g_10628130[];
extern char g_10628120[];
extern char g_10628104[];
extern char g_106280f4[];
extern char g_106280e0[];
extern char g_106280cc[];
extern char g_106280bc[];
extern char g_106280ac[];
extern char g_10628098[];
extern char g_10628088[];
extern char g_10628074[];
extern char g_10628064[];
extern char g_1062803c[];
const char *CHalfLife2::vfunc58(int classify)
{
    switch (classify) {
    case 0: return g_1062820c;
    case 1: return g_106281fc;
    case 2: return g_106281e0;
    case 3: return g_106281c8;
    case 4: return g_106281b0;
    case 5: return g_1062819c;
    case 6: return g_1062818c;
    case 7: return g_10628170;
    case 8: return g_10628160;
    case 10: return g_10628140;
    case 11: return g_10628130;
    case 14: return g_10628120;
    case 15: return g_10628104;
    case 16: return g_106280f4;
    case 18: return g_106280e0;
    case 19: return g_106280cc;
    case 20: return g_106280bc;
    case 21: return g_106280ac;
    case 22: return g_10628098;
    case 23: return g_10628088;
    case 24: return g_10628074;
    case 25: return g_10628064;
    default: return g_1062803c;
    }
}
// END FUNCTION

// FUNCTION: 0x10356230 size=0xb
#include "CHalfLife2.h"

struct CHL2VFunc0Obj
{
	virtual void vfunc0();
};

int sub_1042c0a0();

void CHalfLife2::vfunc77()
{
	((CHL2VFunc0Obj *)sub_1042c0a0())->vfunc0();
}
// END FUNCTION

// FUNCTION: 0x10356250 size=0x3
#include "CHalfLife2.h"
void CHalfLife2::vfunc36(int a0)
{
}
// END FUNCTION
