// CPointCamera: declared by pcdecomp transplant for 0x1018c260 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
// The object at +0x2d4 is the entity's CServerNetworkProperty-like object (CUnknown101ab800, edict pointer at +0x2e0).
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CPointCamera : public CBaseEntity
{
public:
	CPointCamera *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CPointCamera *sub_1018c220();	// as in CKeepUpright (transplant)
	void sub_1018c2b0();	// called directly (stub 0x1000a47f), refreshes the byte at +0x458
	bool vfunc86(int a, int b, int c, int d, int e);	// slot 86 (ShouldTransmit-like): true when the byte at +0x458 changed (copied to +0x459); else asks the engine (slot 105) whether e is visible from the camera's object and, if so, forwards (b, c, d, e) to the object at +0x2d4
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc113();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
