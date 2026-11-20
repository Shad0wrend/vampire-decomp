// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10210730 size=0x6
#include "datamap.h"
#include "CTriggerPlayerActivityLevel.h"
namespace lifted {
extern char g_105ab5dc;
}
datamap_t * CTriggerPlayerActivityLevel::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab5dc);
}
// END FUNCTION

// FUNCTION: 0x102107c0 size=0x45
#include "CTriggerPlayerActivityLevel.h"
CTriggerPlayerActivityLevel::CTriggerPlayerActivityLevel()
{
	m_nLevelA = -1;
	m_nLevelB = -1;
	m_nLevelC = -1;
}
// END FUNCTION

// FUNCTION: 0x10210830 size=0x4c
#include "CTriggerPlayerActivityLevel.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerPlayerActivityLevel::vfunc5
CBaseEntity *CTriggerPlayerActivityLevel::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x102108a0 size=0x10
#include "CTriggerPlayerActivityLevel.h"

// TARGET: CTriggerPlayerActivityLevel::vfunc103
void CTriggerPlayerActivityLevel::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x102108c0 size=0x5
#include "CTriggerPlayerActivityLevel.h"
#include "CBaseTrigger.h"

// TARGET: CTriggerPlayerActivityLevel::vfunc174
// the game's 0x102108c0: a tail call (jmp) of CBaseTrigger::vfunc174
void CTriggerPlayerActivityLevel::vfunc174(CBaseEntity *a0)
{
	CBaseTrigger::vfunc174(a0);
}
// END FUNCTION

// FUNCTION: 0x102108e0 size=0x9a
#include "CBasePlayer.h"
#include "CTriggerPlayerActivityLevel.h"

struct CPlayerLevel : CBasePlayer
{
	void sub_1017e6f0(int level);	// stub 0x1000c838
};

const char *sub_101d3730(const char *fmt, const char *name);

// TARGET: CTriggerPlayerActivityLevel::vfunc175
void CTriggerPlayerActivityLevel::vfunc175(CBaseEntity *pOther)
{
	if (m_bDisabled)
		return;
	CPlayerLevel *pPlayer = *(CPlayerLevel **)((char *)pOther + 0xa8);
	if (!pPlayer)
		return;
	if (m_nLevelA > -1)
		pPlayer->sub_1017df50(m_nLevelA, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::Touch %s", sub_100ab4f0()));
	if (m_nLevelB > -1)
		pPlayer->sub_1017e150(m_nLevelB, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::Touch %s", sub_100ab4f0()));
	if (m_nLevelC > -1)
		pPlayer->sub_1017e6f0(m_nLevelC);
}
// END FUNCTION

// FUNCTION: 0x102109b0 size=0xc7
#include "CTriggerPlayerActivityLevel.h"
#include "CBasePlayer.h"

const char *__cdecl sub_101d3730(const char *pszFormat, ...);

struct CBasePlayerAct : CBasePlayer
{
	int sub_1017dd80();	// stub 0x10003364
	int sub_1017de60();	// stub 0x100038f5
	void sub_1017e6f0(int a);	// stub 0x1000c838
};

struct CPlayerHolderView
{
	char m_pad0000[0xa8];
	CBasePlayerAct *m_pPlayer;	// 0xa8
};

// TARGET: CTriggerPlayerActivityLevel::vfunc176
void CTriggerPlayerActivityLevel::vfunc176(CBaseEntity *pOther)
{
	CBasePlayerAct *pPlayer = ((CPlayerHolderView *)pOther)->m_pPlayer;
	if (pPlayer) {
		if (m_flags204 & 0x20) {
			if (m_nLevelA > -1) {
				if (pPlayer->sub_1017dd80() == m_nLevelA)
					pPlayer->sub_1017df50(0, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::EndTouch %s", sub_100ab4f0()));
			}
			if (m_nLevelB > -1) {
				if (pPlayer->sub_1017ddd0() == m_nLevelB)
					pPlayer->sub_1017e150(0, -1.0f, sub_101d3730("CTriggerPlayerActivityLevel::EndTouch %s", sub_100ab4f0()));
			}
		}
		if (m_nLevelC > -1) {
			if (pPlayer->sub_1017de60() == m_nLevelC)
				pPlayer->sub_1017e6f0(0);
		}
	}
	sub_101c55d0(pOther);
}
// END FUNCTION
