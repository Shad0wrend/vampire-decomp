// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101552d0 size=0x1e
#include "CRagdollProp.h"

void sub_100aa7b0(void *p);

// TARGET: CRagdollProp::vfunc5
CRagdollProp *CRagdollProp::vfunc5(unsigned int flags)
{
	sub_10014317();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10155ae0 size=0xf1
#include "CRagdollProp.h"
#include <string.h>

struct CRagdollLayout;
struct CRagdollStudio;
bool sub_1019cae0(CRagdollLayout *pLayout, CRagdollStudio *pStudio, int i);
void sub_10138600(void *pParentMatrix, void *pMatrix);

struct CRagdollBoneX
{
	int m_nameIndex;
	int m_parent;
	char m_pad08[0xa0 - 8];
};
struct CRagdollModelX
{
	char m_pad0000[0xf0];
	int m_numBones;
	int m_boneIndex;

	CRagdollBoneX *Bone(int i) { return (CRagdollBoneX *)((char *)this + m_boneIndex) + i; }
};
struct CRagdollStudioX
{
	int m_n0;
	void *m_pBones;
	int m_n8;
	int m_nc;
};
struct CRagdollMatrixX
{
	float m[12];
};
struct CRagdollPropX
{
	char m_pad0000[0x730];
	int m_nBodies;
	char m_pad0734[0xa08 - 0x734];
	int m_boneTable[1];
};

// TARGET: CRagdollProp::vfunc257
void CRagdollProp::vfunc257(void *pMatrices, int unused)
{
	CRagdollModelX *pModel = (CRagdollModelX *)sub_100952d0(-1);
	char used[352];
	CRagdollPropX *pThis = (CRagdollPropX *)this;
	int i = 0;
	memset(used, 0, pModel->m_numBones);
	if (pThis->m_nBodies > 0) {
		CRagdollLayout *pLayout = (CRagdollLayout *)&pThis->m_nBodies;
		int *pTable = pThis->m_boneTable;
		do {
			CRagdollStudioX studio;
			studio.m_n0 = 0;
			studio.m_pBones = pMatrices;
			if (sub_1019cae0(pLayout, (CRagdollStudio *)&studio, i))
				used[*pTable] = 1;
			i++;
			pTable++;
		} while (i < *(int *)pLayout);
	}
	CRagdollMatrixX *pM = (CRagdollMatrixX *)pMatrices;
	CRagdollBoneX *pBone = pModel->Bone(0);
	int j = 0;
	if (pModel->m_numBones > 0) {
		do {
			if (!used[j])
				sub_10138600(&pM[pBone->m_parent], pM + j);
			j++;
			pBone++;
		} while (j < pModel->m_numBones);
	}
}
// END FUNCTION
