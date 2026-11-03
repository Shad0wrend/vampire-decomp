// CTempEntTester: temp entity tester entity. Declared flat (bases not recovered).
#pragma once

#include "CUnknown10050860.h"

#define TET_V(n) virtual void vfunc##n();
#define TET_V10(p) TET_V(p##0) TET_V(p##1) TET_V(p##2) TET_V(p##3) TET_V(p##4) TET_V(p##5) TET_V(p##6) TET_V(p##7) TET_V(p##8) TET_V(p##9)

class CTempEntTester
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CTempEntTester *vfunc5(unsigned int flags);	// scalar deleting destructor
	TET_V(6) TET_V(7) TET_V(8) TET_V(9)
	TET_V10(1) TET_V10(2) TET_V10(3) TET_V10(4) TET_V10(5) TET_V10(6) TET_V10(7) TET_V10(8) TET_V10(9)
	TET_V(100) TET_V(101) TET_V(102)
	virtual void vfunc103();	// "Spawn": sets bit 6 of the flags at +0x19c, finds the first object of the list (sub_100507c0) whose name, lowercased, contains the filter text at +0x458 (stored at +0x450); removes the entity when there is none, else stamps the next think time (+0x17c) with the current time
	TET_V(104) TET_V(105) TET_V(106) TET_V(107) TET_V(108) TET_V(109)
	TET_V10(11) TET_V10(12) TET_V10(13) TET_V10(14) TET_V10(15) TET_V10(16) TET_V10(17) TET_V10(18) TET_V10(19)
	TET_V10(20) TET_V10(21)
	virtual float *vfunc220();	// slot 220 (+0x370) "CBaseEntity::GetOrigin": points at the entity origin (+0x41c)
	virtual float *vfunc221();	// slot 221 (+0x374) "CBaseEntity::GetAngles": points at the entity angles (+0x428)

	void sub_1000cb8a();	// destructor body
	void sub_10056e50();	// slot 134 (think): when the object at +0x450 is set calls its slot 3 with this->slot 220(this->slot 221()), schedules the next think at curtime + 1.0f (+0x17c) and returns while curtime is below the end time at +0x454; otherwise removes the entity
	CUnknown10050860 *sub_100507c0();	// stub 0x1000b6e5: the first object of the list

	char m_pad0004[0x17c - 4];
	float m_flNextThink;	// 0x017c
	char m_pad0180[0x19c - 0x180];
	unsigned int m_nFlags;	// 0x019c
	char m_pad01a0[0x450 - 0x1a0];
	CUnknown10050860 *m_pObject;	// 0x0450
	float m_flEndTime;	// 0x0454
	char m_szFilter[1];	// 0x0458
};
