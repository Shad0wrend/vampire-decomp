// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037d290 size=0xc3c
#include "CAI_BaseNPC_vfunc461.h"
#include "CAI_Motor.h"
#include "CNPC_VGuard1.h"
#define VG_H628C (*(EHANDLE *)&m_h628c)

#define VG_STATE(line, state) \
	do { m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VGuard1.cpp"; m_nLine1b40 = (line); return (m_nNext5cc4 = (state)); } while (0)

#define VG_TAKE(cond, hOther, line, state) \
	if (sub_1001482b(cond) && VG_H628C.Get() == hOther.Get()) \
	{ \
		sub_1037e2d0(); \
		vfunc596(VG_H628C.Get()); \
		VG_STATE(line, state); \
	}

int CNPC_VGuard1::vfunc461()
{
	m_n1b38 = 0x12;
	switch (m_nState5cc0)
	{
	case 1:
		VG_TAKE(0x21, m_h6390, 0x215, 8)
		VG_TAKE(0x1f, m_h638c, 0x222, 8)
		VG_TAKE(0x22, m_h6390, 0x22f, 2)
		VG_TAKE(0x20, m_h638c, 0x23c, 2)
		if (sub_1001482b(0x1e))
			VG_STATE(0x243, 0xc);
		break;
	case 3:
		VG_TAKE(0x21, m_h6390, 0x251, 8)
		VG_TAKE(0x1f, m_h638c, 0x25e, 8)
		VG_TAKE(0x22, m_h6390, 0x26b, 2)
		VG_TAKE(0x20, m_h638c, 0x278, 2)
		if (sub_1001482b(0x1e))
			VG_STATE(0x27f, 0xc);
		if (sub_1001482b(0x54) || sub_1001482b(0x46))
			VG_STATE(0x286, 2);
		if (sub_1001482b(0x6a) || sub_1001482b(0x6d) || sub_1001482b(0x6f) || sub_1001482b(0x70))
		{
			m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VGuard1.cpp";
			if (m_b6660)
			{
				m_nLine1b40 = 0x291;
				m_nNext5cc4 = 0xb;
			}
			else
			{
				m_nLine1b40 = 0x296;
				m_nNext5cc4 = 3;
			}
			S101b9920 *pTarget = vfunc474();
			if (pTarget)
			{
				sub_102e0b40((float *)m_pMotor5d44);
				CAI_Motor *pMotor = m_pMotor5d44;
				pMotor->sub_102e2020((const float *)pTarget->sub_101b99d0(), 0);
			}
			return m_nNext5cc4;
		}
		if (vfunc462())
			VG_STATE(0x2a5, 1);
		break;
	case 0xb:
		if (m_b6660 && sub_1001482b(0x5a))
		{
			vfunc596(VG_H628C.Get());
			VG_STATE(0x2b1, 2);
		}
		break;
	case 0xc:
		VG_TAKE(0x21, m_h6390, 0x2c1, 8)
		VG_TAKE(0x1f, m_h638c, 0x2ce, 8)
		VG_TAKE(0x22, m_h6390, 0x2db, 2)
		VG_TAKE(0x20, m_h638c, 0x2e8, 2)
		VG_STATE(0x2ee, 1);
	}
	return sub_103851e0();
}
// END FUNCTION
