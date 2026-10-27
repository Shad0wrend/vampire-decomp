// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10210730 size=0x6
#include "CTriggerPlayerActivityLevel.h"
namespace lifted {
extern char g_105ab5dc;
}
datamap_t * CTriggerPlayerActivityLevel::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ab5dc);
}
// END FUNCTION

// FUNCTION: 0x102108e0 size=0x9a
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
