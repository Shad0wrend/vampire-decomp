// CSoundScheme: declared by pcdecomp transplant for 0x1022a1d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CAI_BaseNPC;

class CSoundScheme : public CBaseEntity
{
public:
	CSoundScheme *vfunc5(unsigned int flags);
	void sub_1000bccb();
	void sub_1000cb8a();
	void sub_1022a200();	// destructor body (stub 0x1000bccb): resets the vtable, purges the vectors at +0x580 and +0x594
	CSoundScheme *sub_1022a0f0();	// as in CKeepUpright (transplant)
	CAI_BaseNPC *sub_101cda50();	// stub 0x1000ab23: the NPC the scheme is attached to (0 when none)
	void sub_1022b590(float flDelay);	// when not started yet (byte at +0x455): hands the NPC this scheme, registers the sounds with the global at 0x10750d78 (lists at +0x460, +0x4f0, +0x4a8, +0x538), sets the think function and the start flag and schedules the next think 0.1 s ahead; the delay is at least 0.5
};
