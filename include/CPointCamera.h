// CPointCamera: declared by pcdecomp transplant for 0x1018c260 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
// The object at +0x2d4 is the entity's CServerNetworkProperty-like object (CUnknown101ab800, edict pointer at +0x2e0).
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CPointCamera : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CPointCamera *sub_1018c220();	// as in CKeepUpright (transplant)
	void sub_1018c2b0();	// called directly (stub 0x1000a47f), refreshes the byte at +0x458
	virtual char vfunc86(int a, int b, int c, int d, int e);	// slot 86 (ShouldTransmit-like): true when the byte at +0x458 changed (copied to +0x459); else asks the engine (slot 105) whether e is visible from the camera's object and, if so, forwards (b, c, d, e) to the object at +0x2d4
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc113();
public:
    virtual int vfunc81();
    virtual int vfunc80();
	char m_pad03e0[0x450 - 0x3e0];
	float m_FOV;	// 0x0450
	float m_Resolution;	// 0x0454
	char m_pad0458[0x45c - 0x458];
	Vector m_vecLookDest;	// 0x045c
};
