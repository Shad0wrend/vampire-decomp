// CPhysConvert: declared by pcdecomp transplant for 0x100500a0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"
#include "CBaseEntity.h"

struct inputdata_t;

class CPhysConvert : public CPointEntity
{
public:
	CPhysConvert *sub_100501f0();
	void sub_100502b0(inputdata_t *pInput);	// "CPhysConvert::InputConvertTarget": fires the output, finds the swap entity (+0x468) and every entity named by the target (+0x20c), and replaces each one's physics with the swap entity's
public:
    virtual datamap_t * vfunc82();

	char m_OnConvert[0x18];	// 0x450: a COutputEvent
	const char *m_swapModel468;	// 0x468: the name of the swap entity
	char m_bFlag46c;	// 0x46c: set the collision group 1 on the new entity
	char m_bFlag46d;	// 0x46d: add (else remove) flag2 bit 2 on the new entity
	CPhysConvert *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
