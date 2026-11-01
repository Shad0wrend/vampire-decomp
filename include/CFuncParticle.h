// CFuncParticle: declared by pcdecomp transplant for 0x100fd500 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CFuncParticle
{
public:
	CFuncParticle *vfunc5(unsigned int flags);
	void sub_10011ac7();
	void vfunc103();	// slot 103 "CFuncParticle::Spawn": CEnvParticle::vfunc103, sets the model from slot 9's name (slot 105), SetSolid(0) (inlined scope trace), move type (0, 0), then sub_100b3b00
	void vfunc113();	// slot 113 "CFuncParticle::Activate" (plain member): CBaseEntity::vfunc113, then the collision property (+0x270) fills the bounds at +0x4a8 / +0x4b4 (slot 15), the scale at +0x4a4 is their volume times 2^-21; a scale outside 0.01 .. 100 is reported (Warning "%s emitter's scale value(%f) is out of range, clamping!") and clamped; the flag word at +0x458 becomes 0xf
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd), called directly
public:
	int vfunc80();
	int vfunc81();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
