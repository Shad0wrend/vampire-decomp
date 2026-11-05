// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10358330 size=0x382
#include "CEntityVSlots.h"
#include "CNPC_Crow.h"
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CAI_Motor.h"
#include "engineiface.h"
#include <math.h>

extern int g_1093a118;
CBaseEntity *sub_102d1af0(CBaseEntity *pNpc, int nType, int nCount, float flRadius, int a, int b);

#define DEG2RAD(x) ((float)(x) * 0.017453292f)

// TARGET: CNPC_Crow::vfunc442
void CNPC_Crow::vfunc442(int *pTask)
{
	CEntityVSlots *pSlots = (CEntityVSlots *)this;
	switch (pTask[0]) {
	case 0x14b:
		if (enginerandom->vfunc2(1, 4) == 1)
			pSlots->slot489();
		sub_10358f70();
		((CAI_BaseNPC *)this)->sub_10272650(g_1093a118);
		break;
	case 0x40:
		if (!m_pTarget5ddc)
			m_pTarget5ddc = sub_102d1af0((CBaseEntity *)this, 0x2bc, 3, 5000.0f, 0, 0);
		if (m_pTarget5ddc) {
			m_b5f54 = 0;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			break;
		}
		m_n1b48 = 0x2d2;
		m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_crow.cpp";
		pSlots->slot448(4);
		break;
	case 0x14c:
		{
			int nAngle = enginerandom->vfunc2(-180, 180);
			float flYaw = (360.0f / 65536.0f) * ((int)((float)nAngle * (65536.0f / 360.0f)) & 0xffff);
			Vector vecNewVelocity(cos(DEG2RAD(flYaw)), sin(DEG2RAD(flYaw)), enginerandom->vfunc1(0.1f, 0.5f));
			vecNewVelocity *= 170.0f;
			((CBaseEntity *)this)->sub_100b2770(vecNewVelocity);
			((CAI_BaseNPC *)this)->sub_10272650(0x22);
		}
		break;
	case 0x14d:
		break;
	case 0x14e:
		{
			Vector vecOffset(enginerandom->vfunc1(-48.0f, 48.0f), enginerandom->vfunc1(-48.0f, 48.0f), 0);
			m_vec5dd0 = *pSlots->slot220() + vecOffset;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		}
		break;
	case 0x14f:
		{
			CEntityVSlots *pEnemy = (CEntityVSlots *)pSlots->slot167();
			if (pEnemy) {
				Vector vecEnemyOrigin = *((CEntityVSlots *)pSlots->slot167())->slot220();
				vecEnemyOrigin.z = pSlots->slot220()->z;
				m_vec5dd0 = *pSlots->slot220() - vecEnemyOrigin;
				VectorNormalize(m_vec5dd0);
				m_vec5dd0 = *pSlots->slot220() + m_vec5dd0 * (float)(32 + enginerandom->vfunc2(0, 32));
				m_pMotor5d44->sub_102e2020(&m_vec5dd0.x, 0);
				((CAI_BaseNPC *)this)->sub_10273e80(0);
			} else {
				m_n1b48 = 0x2b8;
				m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_crow.cpp";
				pSlots->slot448((int)"No enemy");
			}
		}
		break;
	case 0x150:
		((CAI_BaseNPC *)this)->sub_10272650(0x28);
		m_f5f58 = pSlots->slot220()->z;
		break;
	case 0x151:
		sub_103580d0(2);
		break;
	default:
		sub_102827f0(pTask);
		break;
	}
}
// END FUNCTION
