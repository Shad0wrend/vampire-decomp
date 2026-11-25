// C_RopeKeyframe: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
#pragma once
#include "C_BaseEntity.h"

#include "CBaseRopePhysics.h"

class C_RopeKeyframe : public C_BaseEntity
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	class CPhysicsDelegate : public CSimplePhysics::IHelper
	{
	public:
		virtual void vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel);
		virtual void vfunc1(CRopeNode *pNodes, int nNodes);

		C_RopeKeyframe *m_pKeyframe;
	};

	C_RopeKeyframe();
    void sub_100c0850(float **pSubdivs, int *pSubdivCount);
    bool sub_100c0630(struct AttV *pEnt, int iAttachment, Vector &vPos, QAngle &angles);
    // the base slots the game's vtable fills with C_RopeKeyframe's own function
    virtual int vfunc15();
    virtual int vfunc16();
    char m_pad0014[0x414 - 0x14];
    unsigned int m_LockedPoints[2];
    bool m_bApplyWind;
    char m_pad041d[0x44c - 0x41d];
    unsigned int m_RopeFlags;
    char m_pad0450[0x6c8 - 0x450];
    unsigned char m_nSubdivs;
    char m_pad06c9[0x6f0 - 0x6c9];
    Vector m_vForce;
    float m_flCurWindTime;
    float m_flWindDuration;
    int m_pad0704;
    Vector m_vWindDir;
    char m_pad0714[0x728 - 0x714];
};
