// CPhysicsAnimlink: declared by pcdecomp transplant for 0x1014ef80 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CBaseAnimating;

struct CPhysicsAnimlinkPair	// the object embedded at +0x4c8 of a CPhysicsAnimlink
{
	int m_n0;
	int m_n4;
	EHANDLE m_hFirst;	// 0x8: handle of the first entity (-1 for none)
	EHANDLE m_hSecond;	// 0xc: handle of the second entity (-1 for none)

	void sub_1014ebd0(int n, CBaseEntity *pFirst, CBaseEntity *pSecond);	// stores n and the two entities' handles, registers the link with the global at 0x106eb5d8 when pFirst is set
};

class CPhysicsAnimlink : public CBaseEntity
{
public:
	void vfunc103();	// slot 103 \"CPhysicsAnimlink::Activate\": finds the animating entity (m_psz450) and the bone (m_psz454), then the physics object (the entity m_psz458, or the ragdoll body named m_psz45c), and attaches them (sub_1014f210)
	CPhysicsAnimlink *vfunc5(unsigned int flags);
	void sub_1000144c();
	CPhysicsAnimlink *sub_1014eef0();	// as in CKeepUpright (transplant)
	void sub_1014f210(CBaseAnimating *pAnimating, int nBone, void *pPhysObject, int a, int b);	// "CPhysicsAnimlink::Attach": the animating entity ignores collisions with the physics object's game entity, the link remembers the animating handle (+0x478), the bone (+0x47c), the physics object (+0x4c4), a shadow controller (+0x4c0, max speeds 1e8) and the 4x4 matrix (+0x480) made from (b, a); thinks right away
public:
    virtual datamap_t * vfunc82();

	// sizeof(CBaseEntity) is 0x3e0 here; the members below are the ones the destructor body 0x1014efb0 and Attach (0x1014f210) use
	char m_pad03e0[0x4c0 - 0x3e0];
	void *m_pShadowController4c0;	// 0x4c0: IPhysicsShadowController, destroyed through physenv slot 36 (DestroyShadowController) and then zeroed
	void *m_pPhysObject4c4;	// 0x4c4: the physics object (Attach)
	CPhysicsAnimlinkPair m_Pair4c8;	// 0x4c8: destroyed by the destructor body through sub_1014eba0 (stub 0x10007c11, CUnknown1014eba0::sub_1014eba0)
};
