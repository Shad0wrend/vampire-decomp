// CSimplePhysicsProp: simple physics prop entity. Declared flat (bases not recovered).
#pragma once

#define CSPP_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CSimplePhysicsProp
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CSimplePhysicsProp *vfunc5(unsigned int flags);	// scalar deleting destructor
	// slots 6..92
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	CSPP_V10(sa1) CSPP_V10(sa2) CSPP_V10(sa3) CSPP_V10(sa4) CSPP_V10(sa5) CSPP_V10(sa6) CSPP_V10(sa7) CSPP_V10(sa8)
	virtual void s90(); virtual void s91(); virtual void s92();
	virtual void vfunc93(int moveType, int moveCollide);	// "CBaseEntity::SetMoveType"
	// slots 94..102
	virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102();
	virtual void vfunc103();	// "Spawn": base prop spawn, move type 7, solid 6 (scope traced SetSolid), take-damage mode 1, clears the bool at +0x1b0 and flag 2 of +0x438

	bool vfunc32(int a);	// slot 32 (plain member): true when the entity looked up from a (sub_104115b0(a, 0)) is this
	void sub_10004c3c();	// destructor body
	void sub_10011793();	// CBaseProp::vfunc103 (jump stub)
	void sub_100b3900(unsigned int flags);	// "CBaseEntity::RemoveFlag2"
public:
	virtual unsigned char vfunc117();
public:
	virtual int vfunc226();
public:
	virtual int vfunc39(int);
	virtual int vfunc41(int);
	virtual int vfunc42(int);
	char m_pad0004[0x730 - 0x4];
};
