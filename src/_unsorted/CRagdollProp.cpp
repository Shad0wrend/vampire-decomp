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

// FUNCTION: 0x10155e40 size=0x11a
#include "CRagdollProp.h"

struct Matrix3x4 { float m[12]; };

struct RagdollPhysObj
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35();
	virtual void SetPositionMatrix(const Matrix3x4 *pMatrix, int bTeleport);
	virtual void s37();
	virtual void GetPositionMatrix(Matrix3x4 *pMatrix);
};

void sub_10138630(const Matrix3x4 *pIn, Matrix3x4 *pOut);
void sub_10138df0(const Matrix3x4 *pIn1, const Matrix3x4 *pIn2, Matrix3x4 *pOut);

struct RagdollEntry
{
	RagdollPhysObj *m_pObject;
	char m_pad04[0x14];
};

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

void CRagdollProp::vfunc181(const float *pPosition, const float *pAngles, const float *pVelocity)
{
	Matrix3x4 newMatrix;
	Matrix3x4 startMatrixInv;
	Matrix3x4 xform;
	Matrix3x4 startMatrix;
	RagdollEntry *pList = (RagdollEntry *)((char *)this + 0x744);
	pList[0].m_pObject->GetPositionMatrix(&startMatrix);
	sub_10138630(&startMatrix, &startMatrixInv);
	sub_100a68f0((int)pList[0].m_pObject);
	sub_100ada20(pPosition, pAngles, pVelocity);
	if (TestBit(m_flags268, 11))
		vfunc98();
	sub_10138df0((const Matrix3x4 *)((char *)this + 0x130), &startMatrixInv, &xform);
	sub_101563b0((int)pList[0].m_pObject, 0);
	int i = 1;
	if (*(int *)((char *)this + 0x730) > i) {
		RagdollEntry *pEntry = &pList[1];
		do {
			Matrix3x4 matrix;
			pEntry->m_pObject->GetPositionMatrix(&matrix);
			sub_10138df0(&xform, &matrix, &newMatrix);
			pEntry->m_pObject->SetPositionMatrix(&newMatrix, 1);
			sub_101563b0((int)pEntry->m_pObject, i);
			i++;
			pEntry++;
		} while (i < *(int *)((char *)this + 0x730));
	}
}
// END FUNCTION
