// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10368f80 size=0xa7
#include "CNPC_VCamera.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CNPC_VCameraSlots
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15)
	PV(160) PV(161) PV(162) PV(163) PV(164) PV(165) PV(166)
	virtual void *vfunc167();
};

struct CSquadX
{
	void sub_103161a0(void *pEnemy);
};

// TARGET: CNPC_VCamera::vfunc460
int CNPC_VCamera::vfunc460()
{
	m_n1b38 = 9;
	if (m_n5bb0 <= 0 && m_p5da4 && (sub_10269aa0(0x54) || (m_flags14bc & 0x2000) == 0x2000)) {
		m_flags14bc &= 0x7fffdfff;
		if (((CNPC_VCameraSlots *)this)->vfunc167()) {
			CSquadX *pSquad = m_n5bb0 <= 0 ? (CSquadX *)m_p5da4 : 0;
			pSquad->sub_103161a0(((CNPC_VCameraSlots *)this)->vfunc167());
		}
	}
	m_p1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCamera.cpp";
	m_n1b40 = 0x19c;
	return m_n5cc4 = 3;
}
// END FUNCTION

// FUNCTION: 0x10369060 size=0x2a
#include "CNPC_VCamera.h"

int CNPC_VCamera::vfunc461()
{
	m_n1b38 = 9;
	m_p1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCamera.cpp";
	m_n1b40 = 0x1a7;
	return m_n5cc4 = 3;
}
// END FUNCTION
