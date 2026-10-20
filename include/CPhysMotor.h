// CPhysMotor: physics motor entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

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
	CPM_V10(sa6) CPM_V10(sa7) CPM_V10(sa8) CPM_V10(sa9) CPM_V10(sb0) CPM_V10(sb1)
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133();
	virtual void vfunc134();	// slot 134: moves the current speed (+0x478) towards the target (+0x460) by the rate (+0x464) times the time since the last update (+0x468), and schedules the next think when it has not arrived

	void sub_10013b33();	// destructor body
	void sub_100ac610(float time, const char *szContext);	// CBaseEntity::SetNextThink (stub 0x1000326f)

	char m_pad0004[0x460 - 4];
	float m_flTarget460;	// 0x0460
	float m_flRate464;	// 0x0464
	float m_flLastTime468;	// 0x0468
	char m_pad046c[0x478 - 0x46c];
	float m_flCurrent478;	// 0x0478
};
