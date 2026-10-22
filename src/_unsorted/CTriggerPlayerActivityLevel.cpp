// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
