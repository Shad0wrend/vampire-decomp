// CPhysMotor: physics motor entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once
#include "inputdata_t.h"

struct datamap_t;
#include "Vector.h"

#define CPM_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CPhysMotor
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysMotor *vfunc5(unsigned int flags);	// scalar deleting destructor
	// slots 6..9, 10..129, 130..133
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	CPM_V10(sa0) CPM_V10(sa1) CPM_V10(sa2) CPM_V10(sa3) CPM_V10(sa4) CPM_V10(sa5)
	CPM_V10(sa6) CPM_V10(sa7) CPM_V10(sa8) virtual void sa90(); virtual void sa91(); virtual void sa92(); virtual void vfunc103(); virtual void sa94();
	virtual void sa95(); virtual void sa96(); virtual void sa97(); virtual void sa98(); virtual void sa99();
	CPM_V10(sb0) CPM_V10(sb1)
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133();
	virtual void vfunc134();	// slot 134: moves the current speed (+0x478) towards the target (+0x460) by the rate (+0x464) times the time since the last update (+0x468), and schedules the next think when it has not arrived

	virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	CPM_V10(sc0) CPM_V10(sc1) CPM_V10(sc2) CPM_V10(sc3) CPM_V10(sc4) CPM_V10(sc5) CPM_V10(sc6) CPM_V10(sc7)
	virtual const Vector *vfunc220();	// slot 220 (+0x370): a pointer to a Vector (the entity's origin)

	void sub_10013b33();	// destructor body (stub of 0x10028bb0)
	void sub_10028bb0();	// 0x10028bb0: the destructor body itself: vptr 0x10445e1c, g_10723940->vfunc23(m_pPhysObject46c), g_10723940->vfunc40(m_pController470), tail jump to sub_1000cb8a
	void sub_1000cb8a();	// CBaseEntity destructor body (stub 0x1000cb8a -> 0x1009df20), the tail jump
	void sub_10028aa0(inputdata_t *pInput);	// input handler (SetSpeed-like): when the input's float differs from the target (+0x460) stores it there, runs sub_10028b20 and sub_10028a60
	void sub_10028b20();	// stub 0x100135e8
	void sub_100ac610(float time, const char *szContext);	// CBaseEntity::SetNextThink (stub 0x1000326f)

	void sub_10028ca0();
	void sub_10028a60();	// "CPhysMotor::UpdateRate"-like (renamed from CUnk10028a60): m_flRate464 = m_flTarget460 when m_fl458 is 0, else |m_flTarget460 / m_fl458|
	char m_pad0004[0x204 - 4];
	unsigned int m_flags204;	// 0x0204: the entity flags word the vfunc113 code tests (bit 2 = no target, bit 1, bit 0)
	char m_pad0208[0x450 - 0x208];
	const char *m_pszTargetName450;	// 0x0450: the target entity name handed to FindEntityByName
	EHANDLE m_h454;	// 0x0454: the target entity handle
	float m_fl458;	// 0x0458
	float m_fl45c;	// 0x045c
	float m_flTarget460;	// 0x0460
	float m_flRate464;	// 0x0464
	float m_flLastTime468;	// 0x0468
	void *m_pPhysObject46c;	// 0x46c: handed to physenv slot 23 (DestroyConstraint-like) by the destructor body
	void *m_pController470;	// 0x470: the motion controller, destroyed through physenv slot 40 (DestroyMotionController)
	char m_ctrl474[4];	// 0x0474: passed by address to the motion controller (slot 1 and physenv slot 0x9c)
	float m_flCurrent478;	// 0x0478
	float m_fl47c;	// 0x047c
	Vector m_vec480;	// 0x0480: the three axis scales
	float m_fl48c;	// 0x048c
	char m_pad0490[0xc];	// 0x0490..0x049b
	float m_fl49c;	// 0x049c: set to 1.0f by vfunc113
public:
	virtual datamap_t * vfunc82();
};
