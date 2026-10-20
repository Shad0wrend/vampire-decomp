// CGameMovement (RTTI .?AVCGameMovement@@): player movement. Declared flat; only the vtable head is modelled.
#pragma once

class CGameMovement
{
public:
	virtual CGameMovement *vfunc0(unsigned int flags);
	virtual void vfunc1(void *pMove, void *pPlayer);	// slot 1 "ProcessMovement": stores the arguments at +8 / +4, picks the frame time from the global at 0x109ef04c, runs slot 5 and sub_1011f6e0, and restores the global time step (+0x10 of 0x1070b228)
	virtual float *vfunc2(char flag, int unused);	// returns the sub-object at +0x2c when flag is set, else the one at +0x14
	virtual void slot3();
	virtual void slot4();
	virtual void vfunc5();
	void sub_100102f3();	// as in CDataObjectAccessSystem (transplant)
	float *vfunc3(char flag, int unused);	// as in CGameMovement (transplant)
	float *vfunc4(char flag, int unused);	// as in CGameMovement (transplant)
	void vfunc16(void *pSurface, float volume, char bForce);	// slot 16 "PlayStepSound"-like: in multiplayer returns when slot 1 of the global at 0x109ef094 is set or its value (+0x28) is zero; unless bForce asks slot 15(pSurface, volume); alternates the flag at +0x1ee4 of the move data, picks the surface's short at +0x2c or +0x2e and plays that step sound (channel 4, level 75, pitch 95 + rand(0, 10)) at the player's origin

	void *m_pPlayer;	// 0x04
	void *m_pMove;	// 0x08

	float sub_101282b0();	// movement speed scale: 0.8 * a tuning value chosen by the player's state at +0xc0 (0 for other states)
	void sub_10122590();	// plays a random "surfaces/wade/step*.wav" footstep sound at the player's origin (+0x70) with a clamped volume
	void sub_1011f6e0();	// copies the player's +0x24 to +0x28 and the move data's +0x3e0 / +0x3e4 to the player's +0xc8 / +0xcc
};
