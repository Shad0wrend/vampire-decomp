// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x1019c330 size=0x2f4
#include "CRagdoll.h"
#include "Tier1.h"
#include <string.h>

extern char g_1070d1b0[];
extern char g_1070d9d0[];
int sub_100c6520(void *pStudioHdr, const char *pName);
void sub_100c1e20(void *pStudioHdr, int nChildBone, int nParentBone, void *pOut);
void sub_10138720(void *pMatrix, int nColumn, void *pOut);
void sub_10139a90(void *pMatrix);
void sub_10158c00(IPhysicsObject *pParent, IPhysicsObject *pChild);

struct RagObjParams
{
	void *massCenter;
	float mass, inertia, damping, rotdamping, rotInertiaLimit;
	const char *pName;
	void *pGameData;
	float volume, drag;
	int pad[2];
};

struct RagSolid
{
	int index;
	char name[512];
	char parent[512];
	char surfaceprop[512];
	float massCenterOverride[3];
	RagObjParams params;
};

struct RagAxis { float minRotation, maxRotation, angularVelocity, torque; };

struct RagConstraint
{
	char constraintToReference[0x30];
	char constraintToAttached[0x30];
	int parentIndex;
	int childIndex;
	RagAxis axes[3];
	int flags;
};

void sub_1019c330(CPhysCollideIface *pCollide, CPhysEnvIface *pEnv, CPhysSurfacePropsIface *pSurf, CRagdoll *pOut, CRagdollParams *p)
{
	pOut->m_nObjects = 0;
	pOut->m_pEnvGameData = 0;
	memset(pOut->m_Elements, 0, sizeof(pOut->m_Elements));
	if (!p->m_pCollide || p->m_pCollide->m_nSolids > RAGDOLL_MAX_ELEMENTS)
		return;
	CPhysKeyParserIface *pParse = pCollide->CreateKeyParser(p->m_pCollide->m_pKeyText);
	pOut->m_pEnvGameData = pEnv->vfunc19();
	while (!pParse->Done()) {
		const char *pBlock = pParse->GetCurrentBlockName();
		if (!strcmpi(pBlock, "solid")) {
			RagSolid solid;
			pParse->ParseSolid(&solid, 0);
			if (solid.index >= 0 && solid.index < p->m_pCollide->m_nSolids) {
				int boneIndex = sub_100c6520(p->m_pStudioHdr, solid.name);
				pOut->m_BoneToSolid[pOut->m_nObjects] = boneIndex;
				if (boneIndex >= 0) {
					solid.params.rotInertiaLimit = 0.5f;
					solid.params.pGameData = (void *)p->m_pGameData;
					int surfaceData = pSurf->GetSurfaceIndex(solid.surfaceprop);
					if (surfaceData < 0)
						surfaceData = pSurf->GetSurfaceIndex("default");
					solid.params.pName = (const char *)p->m_pStudioHdr + 0xc;
					pOut->m_Elements[pOut->m_nObjects].m_pObject = (IPhysicsObject *)pEnv->CreatePolyObjectAt7(p->m_pCollide->m_ppSolids[solid.index], surfaceData, (const float *)g_1070d1b0, (const float *)g_1070d9d0, &solid.params);
					pOut->m_Elements[pOut->m_nObjects].m_pObject->vfunc36((char *)p->m_pBoneMatrices + boneIndex * 0x30, 1);
					pOut->m_Elements[pOut->m_nObjects].m_iParent = -1;
					pOut->m_nObjects++;
				} else {
					g_109f3628("CRagdollProp::CreateObjects:  Couldn't Lookup Bone %s\n", solid.name);
				}
			}
		} else if (!strcmpi(pBlock, "ragdollconstraint")) {
			RagConstraint constraint;
			pParse->ParseConstraint(&constraint, 0);
			if (constraint.childIndex >= 0 && constraint.parentIndex >= 0) {
				CRagdollElement &child = pOut->m_Elements[constraint.childIndex];
				child.m_iParent = constraint.parentIndex;
				if (p->m_flScale > 0.0f) {
					for (int k = 0; k < 3; k++)
						constraint.axes[k].torque *= p->m_flScale;
				}
				sub_100c1e20(p->m_pStudioHdr, pOut->m_BoneToSolid[constraint.childIndex], pOut->m_BoneToSolid[constraint.parentIndex], constraint.constraintToAttached);
				sub_10138720(constraint.constraintToAttached, 3, &child);
				sub_10139a90(constraint.constraintToReference);
				sub_10158c00(pOut->m_Elements[constraint.parentIndex].m_pObject, child.m_pObject);
				child.m_pConstraint = pEnv->CreateRagdollConstraint((CPhysObjectIface *)child.m_pObject, (CPhysObjectIface *)pOut->m_Elements[constraint.parentIndex].m_pObject, pOut->m_pEnvGameData, &constraint);
			}
		} else {
			pParse->SkipBlock();
		}
	}
	pCollide->DestroyKeyParser(pParse);
}
// END FUNCTION
