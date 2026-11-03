// CPhysicsProp: physics-simulated prop entity (derived from CBaseEntity at +0x0 through further bases that are not modelled).
// Only the members that decompiled code needs are declared.
#pragma once

#include "CBaseEntity.h"

class CPhysicsProp : public CBaseEntity
{
public:
	virtual bool vfunc32(int a);	// slot 32 override
	void vfunc103();	// slot 103 (declared as a plain member: the base slot has no argument here): stub 0x10013782, called directly by CPhysicsPropContested::vfunc103
	void vfunc226(int a);	// slot 226 override: base implementation, then sets the byte at +0x1b1
	CPhysicsProp *vfunc5(unsigned int flags);	// as in CBaseCineCam (transplant)
	virtual bool vfunc68(void *pOther);	// slot 68 override: true for a pOther with an owner object (+0x9c) when bit 2 of +0x204 is set, or with a player object (+0xa8) when sub_100b39c0 holds, else CBaseAnimating::vfunc68
	bool sub_1008bfe0(void *pOther);	// CBaseAnimating::vfunc68 (stub 0x10003c1a), called directly
	char sub_100b39c0();
	unsigned char sub_101912d0();	// CPhysicsProp::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)	// stub 0x10012887, asked by vfunc68
	bool vfunc223();	// slot 223 override: creates the physics object (CBaseEntity::VPhysicsInitNormal-like), applies the mass / damping at +0x77c / +0x780
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc39(CBaseEntity *);
public:
    virtual int vfunc117();
    void vfunc41(int a);	// slot 41 (plain member): forwards a to sub_1040d950 (an empty function in this build)
    virtual int vfunc42(int);
};
