// CGameMovement (RTTI .?AVCGameMovement@@): player movement. Declared flat; only the vtable head is modelled.
#pragma once

class CGameMovement
{
public:
	virtual CGameMovement *vfunc0(unsigned int flags);
	virtual void vfunc1();
	virtual float *vfunc2(char flag, int unused);	// returns the sub-object at +0x2c when flag is set, else the one at +0x14
	void sub_100102f3();	// as in CDataObjectAccessSystem (transplant)
	float *vfunc3(char flag, int unused);	// as in CGameMovement (transplant)
	float *vfunc4(char flag, int unused);	// as in CGameMovement (transplant)

	void *m_pPlayer;	// 0x04
	void *m_pMove;	// 0x08

	float sub_101282b0();	// movement speed scale: 0.8 * a tuning value chosen by the player's state at +0xc0 (0 for other states)
};
