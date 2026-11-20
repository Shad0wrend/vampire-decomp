// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a29f0 size=0x1ae
#include "CNPC_VPedestrian.h"
#include "CUnknown1070b244.h"
#include "CEntitySoundOriginView.h"

extern CUnknown1070b244 *g_1070b244;

int CNPC_VPedestrian::vfunc438()
{
	m_n1b2c = 0x1d;
	if (m_b6678)
	{
		m_b6678 = 0;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_nLine1b34 = 0x1b4;
		return 0xfe;
	}
	if (sub_10014df8(0x24) && !sub_1033e2b0())
	{
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_nLine1b34 = 0x1b9;
		return 0xfa;
	}
	if ((m_flags14b8 & 2) == 2)
	{
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_flags14b8 &= ~2;
		m_nLine1b34 = 0x1c0;
		return 0xf1;
	}
	switch (m_n5cc0)
	{
	case 1:
	case 3:
		if (sub_10014df8(0x25))
		{
			m_f623c = gpGlobals->curtime + 2.0f;
			sub_1000bff5();
			const Vector *pPos = (const Vector *)((CEntitySoundOriginView *)this)->GetOrigin();
			Vector d;
			d = *pPos - m_vec60d0;
			if (d.x * d.x + (d.y * d.y + d.z * d.z) >= 256.0f && (~m_flags14b8 & 0x100000) != 0)
			{
				if (g_1070b244->vfunc2(0, 99) < 25)
				{
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
					m_flags14b8 |= 0x100000;
					m_nLine1b34 = 0x1d7;
					return 0x158;
				}
			}
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
			m_flags14b8 = (m_flags14b8 & ~0x100000) | 0x100;
			m_nLine1b34 = 0x1de;
			return 0x157;
		}
	}
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x103a2e30 size=0x68f
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VPedestrian.h"
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"

CBaseEntity * __fastcall sub_1032e7b0(CBaseEntity *p);
int __cdecl sub_102c6350(unsigned int x);

#define PICK_STATE(line) { m_nLine1b40 = line; m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp"; return m_n5cc4 = 8; }

int CNPC_VPedestrian::vfunc461()
{
	m_n1b38 = 0x1d;
	switch (m_n5cc0) {
	case 1:
	case 3:
		if (sub_1001482b(0x4c) || sub_1001482b(0x4d) || sub_1001482b(0x4e)) {
			m_b5b80 = 0;
			vfunc596(g_10566458->sub_100290c0((const unsigned int *)&m_h5b7c));
			PICK_STATE(0x308);
		}
		if (sub_10014df8(0x6d)) {
			CBaseEntity *pEnemy;
			if (g_10566458->sub_100290c0((const unsigned int *)&m_h628c) && (pEnemy = g_10566458->sub_100290c0((const unsigned int *)&m_h628c), g_10566458->sub_100290c0((const unsigned int *)&m_h6160) == pEnemy)) {
				if (sub_1001482b(0x6d) && enginerandom->vfunc2(0, 99) < 0x32) {
					CBaseEntity *pChar = sub_1032e7b0(m_h628c.Get());
					if (pChar) {
						int *pRec = ((CBaseCombatWeapon *)pChar)->sub_102517e0();
						Vector vecPos;
						vecPos = *(Vector *)((CNPC_VPedestrian *)m_h628c.Get())->vfunc220();
						sub_1028ea60(*(int *)((char *)pRec + 0x3c4), &vecPos, m_h628c.Get());
						unsigned int seed = m_n6364;
						CBasePlayer *pPlayer = (CBasePlayer *)m_h628c.Get();
						pPlayer->sub_1017f2a0(sub_102c6350((((seed & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8 & 0x197279ca) ^ seed ^ 0xa641cacd), this, &m_vecRec6380);
					}
					vfunc596(m_h628c.Get());
					PICK_STATE(0x321);
				}
				if (m_f6264 <= 512.0f && enginerandom->vfunc2(0, 99) < 0x4b) {
					CBaseEntity *pChar = sub_1032e7b0(m_h628c.Get());
					if (pChar) {
						int *pRec = ((CBaseCombatWeapon *)pChar)->sub_102517e0();
						Vector vecPos = *(Vector *)((CNPC_VPedestrian *)m_h628c.Get())->vfunc220();
						sub_1028ea60(*(int *)((char *)pRec + 0x3c4), &vecPos, m_h628c.Get());
						unsigned int seed = m_n6364;
						CBasePlayer *pPlayer = (CBasePlayer *)m_h628c.Get();
						pPlayer->sub_1017f2a0(sub_102c6350((((seed & 0x68d8635) ^ 0xce9f66a) + 0xffa91d8 & 0x197279ca) ^ seed ^ 0xa641cacd), this, &m_vecRec6380);
					}
					vfunc596(m_h628c.Get());
					PICK_STATE(0x338);
				}
			} else if (m_h5b78.Get() && (pEnemy = m_h5b78.Get(), m_h6160.Get() == pEnemy)) {
				if (sub_1001482b(0x6d) && enginerandom->vfunc2(0, 99) < 0x32) {
					PICK_STATE(0x344);
				}
				CBaseEntity *pOther = m_h5b78.Get();
				const Vector &vecMine = *(const Vector *)vfunc220();
				if ((vecMine - *(const Vector *)((CNPC_VPedestrian *)pOther)->vfunc220()).LengthSqr() <= 262144.0f && enginerandom->vfunc2(0, 99) < 0x4b) {
					PICK_STATE(0x352);
				}
			}
		}
		if (sub_10014df8(0x70)) {
			CBaseEntity *pEnemy = m_h628c.Get();
			if (m_h618c.Get() == pEnemy && m_f6264 <= 512.0f && enginerandom->vfunc2(0, 99) < 0x4b) {
				vfunc596(m_h628c.Get());
				PICK_STATE(0x366);
			}
		}
		break;
	case 8:
		PICK_STATE(0x375);
	default:
		break;
	}
	return sub_103851e0();
}
// END FUNCTION

// FUNCTION: 0x103a3850 size=0x48
#include "CNPC_VPedestrian.h"
#include "CAI_BaseNPCTroika.h"
// TARGET: CNPC_VPedestrian::vfunc27
void CNPC_VPedestrian::vfunc27(int arg)
{
    sub_10005e43(arg);
    ((CAI_BaseNPCTroika *)this)->vfunc596(arg);
    m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
    m_nLine1b40 = 0x405;
    m_n5cc4 = 8;
    sub_102ae7f0(0x15a);
}
// END FUNCTION
