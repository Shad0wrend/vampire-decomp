// Ragdoll creation records (Source's ragdoll_t / ragdollparams_t / solid_t, this game's 2004 layout).
// Scouted from 0x1019c330 (the CreateObjects loop, cdecl: collision, physenv, surfaceprops, ragdoll_t *pOut, params),
// 0x1019c0b0 (the wrapper that also scales/places the bodies) and the caller CRagdollProp::sub_101554a0.
// CRagdollProp embeds the ragdoll_t at +0x730 (m_nBodies730 = numObjects, m_Bodies at +0x744 = element +0xc).
#pragma once

#include "Vector.h"
#include "CPhysicsIfaces.h"
#include "IPhysicsObject.h"

#define RAGDOLL_MAX_ELEMENTS 30

struct CRagdollVCollide		// params->pCollide: the model's collision data
{
	int m_nSolids;		// +0x00 (compared with the solid index from the key text)
	void **m_ppSolids;	// +0x04 collide pointers, indexed by solid index
	const char *m_pKeyText;	// +0x08 the text handed to collision slot 26 CreateKeyParser
};

struct CRagdollElement		// 0x18 bytes, array at ragdoll_t +0x08
{
	char m_pad00[0xc];
	IPhysicsObject *m_pObject;	// +0x0c  (CRagdollPropSlot::m_pObject)
	void *m_pConstraint;		// +0x10  from physenv slot 12
	int m_iParent;			// +0x14  parent / child element index; -1 after creation (CRagdollPropSlot::m_n08)
};

struct CRagdoll		// ragdoll_t, 0x350+ bytes: zeroed by 0x1019c330 (+0 and +4 cleared, then 0xb4 dwords from +8)
{
	int m_nObjects;				// +0x00
	int m_pEnvGameData;			// +0x04 physenv slot 19 (+0x4c) result
	CRagdollElement m_Elements[RAGDOLL_MAX_ELEMENTS];	// +0x08
	int m_BoneToSolid[RAGDOLL_MAX_ELEMENTS];	// +0x2d8 (CRagdollProp +0xa08): solid index per bone, written by the solid loop
};

struct CRagdollSolid		// solid_t, filled by key parser slot 3 (ParseSolid) into the stack
{
	int m_index;			// +0x000 solid index
	char m_name[512];		// +0x004 bone name (looked up with the studio header, sub_100c6520)
	char m_parent[512];		// +0x204
	char m_surfaceProp[512];	// +0x404 -> surface props slot 3 GetSurfaceIndex, "default" when negative
	char m_params[0x40];		// +0x604 objectparams (mass etc.)
};

struct CRagdollParams		// ragdollparams_t, the stack record built by CRagdollProp::sub_101554a0 (arg 5 / arg 2)
{
	int m_pGameData;		// +0x00 the entity (this), handed to the object params
	CRagdollVCollide *m_pCollide;	// +0x04
	void *m_pStudioHdr;		// +0x08 (sub_100c6520(hdr, name) -> bone index)
	Vector m_vecC;			// +0x0c
	int m_iForceBone;		// +0x18 element index that gets the force position (0b0), -1 none
	char m_pad1c[0x10];		// +0x1c passed to 0x1019c6f0 with +0x2c and +0x3c
	int m_n2c;			// +0x2c
	void *m_pBoneMatrices;		// +0x30 matrix3x4 array, 0x30 bytes per bone
	int m_n34, m_n38;		// +0x34 / +0x38
	int m_n3c;			// +0x3c
	float m_flScale;		// +0x40 >0 scales the +0x3c? vectors in the constraint loop
	int m_pad44;			// +0x44: the velocity Vector below starts here? (0b0 reads +0x44/+0x48/+0x4c as a vec compared with vec3_origin)
	// +0x44..+0x4f is Vector m_vecVelocity (reads +0x44,+0x48,+0x4c); keep as raw until a function needs it
};
