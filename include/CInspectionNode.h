// CInspectionNode: declared by pcdecomp transplant for 0x100fd4a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "CEnvParticle.h"

class CInspectionNode : public CEnvParticle
{
public:
	CInspectionNode *vfunc5(unsigned int flags);
	void sub_10011ac7();
	char vfunc86(int a, void *pEdict, int c, int d, int e);	// slot 86: removes the node when the attach entity (+0x254) is gone (then CEnvParticle::vfunc86); else CEnvParticle::vfunc86 and, when it answers true, the owner (+0xa8) of the entity behind pEdict is handed to sub_100fc1e0
	void sub_100fc1e0(int pOwner);	// stub 0x10013ee9
	void vfunc104();	// slot 104: precaches the "Inspection_Emitter" and "Inspection_Insight_Emitter" particle systems (the first index is kept in the global at 0x10708e3c and in the field at +0x454)
	void vfunc103();	// slot 103: precaches through slot 104, stores 9 at +0x458, then CEnvParticle::vfunc103
public:
	datamap_t * vfunc82();
	char m_pad048c[0x4a4 - 0x48c];
	int m_iDetectionRating;	// 0x04a4
};
