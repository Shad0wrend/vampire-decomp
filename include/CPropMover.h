// CPropMover: declared by pcdecomp transplant for 0x101928c0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CPropMover : public CBaseEntity
{
public:
	CPropMover *vfunc5(unsigned int flags);
	void sub_10004c3c();
	CPropMover *sub_10192870();	// as in CKeepUpright (transplant)
public:
    virtual int vfunc117();
    void vfunc103();	// as in CNPC_VBach (transplant)
    virtual void vfunc113();	// slot 113: CBaseEntity::vfunc113, then sets the use function (+0x1f0) to CBaseToggle::sub_101c1dc0
};
