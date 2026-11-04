// CInspectionBrush: declared by pcdecomp transplant for 0x100fd560 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CFuncParticle.h"

struct datamap_t;

#include "CGlobalEntityList.h"

struct CInspectionBrushEdict	// the engine edict handed to slot 86: its server unknown sits at +0x40
{
	char m_pad0000[0x40];
	CGlobalEntityList_Ent *m_pUnknown;	// 0x40
};

class CInspectionBrush : public CFuncParticle
{
public:
	int m_nMinFeat;	// 0x4c0: the least feat value the character needs
	CInspectionBrush *vfunc5(unsigned int flags);
	void sub_10011ac7();
	void vfunc104();	// slot 104: precaches the two inspection brush emitters (the ids go to the globals at 0x10708e44 / 0x10708e48) and keeps the first one at +0x454
	void vfunc103();	// slot 103: slot 104 of the vtable, then CFuncParticle::vfunc103
	void sub_100fca60();	// CFuncParticle::vfunc103 (stub), called directly
	char vfunc86(int a, CInspectionBrushEdict *pEdict, int c, int d, int e);	// slot 86 override: the CEnvParticle version, then with it true and the entity behind the edict (inlined CBaseEntity::Instance) holding an object at +0xa8, hands that object to sub_100fd270
	void sub_100fd270(int pObject);
	char sub_100b5190();	// stub 0x10014da8
public:
	datamap_t * vfunc82();
};
