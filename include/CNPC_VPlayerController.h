// CNPC_VPlayerController: declared by pcdecomp transplant for 0x10376f50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VPlayerController
{
public:
	CNPC_VPlayerController *vfunc5(unsigned int flags);
	void sub_100123af();
	void vfunc245(int a, int b, int c, int d, int e);	// override: forwards to the base, then to slot 245 of the object at +0xa8 of the owner (slot 97), warning when there is none
	void sub_1000cefa(int a, int b, int c, int d, int e);	// CBaseAnimating::vfunc245 (jump stub)
	int vfunc404(void *pEnt);	// slot 404 (classification of pEnt): 0 for null, 3 for the entity of the handle at +0x60ac, 1 when pEnt's object at +0x9c has its byte at +0x1480 set and sub_100b5190 is clear there, else 4
	void vfunc420();	// slot 420 (reset): base slot 420 (sub_1000c531), then the same counter/limit reset as CNPC_VNewscaster::vfunc420 (scrambled sub_10009408(0) at +0x6364), then slot 416(1), slot 97() -> +0x60ac and clearing of the flags
	void sub_1000c531();	// CAI_BaseNPCTroika::vfunc420, called directly
};
