// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10152300 size=0x6
namespace lifted {
extern char g_10723498;
}
int CRagdollProp::vfunc80()
{
    return (int)&lifted::g_10723498;
}
// END FUNCTION

// FUNCTION: 0x10152320 size=0x3
int CRagdollProp::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101525e0 size=0x6
namespace lifted {
extern char g_1057d5a8;
}
datamap_t * CRagdollProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057d5a8);
}
// END FUNCTION

// FUNCTION: 0x10154fa0 size=0x4a
void __cdecl sub_1019bf80(void *p);

void CRagdollProp::vfunc130(int a)
{
	sub_1008df10(a);
	m_Bodies[0].m_pObject = m_obj36c;
	m_Bodies[0].m_n08 = -1;
	m_n738 = 0;
	m_n73c = 0;
	m_n740 = 0;
	sub_1019bf80(&m_nBodies730);
}
// END FUNCTION

// FUNCTION: 0x10155050 size=0x57
#include "CRagdollProp.h"
struct IPhysicsEnv { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(int pObject); };
extern IPhysicsEnv *g_1053c5e0;
void sub_1019c950(int *pCount);
void CRagdollProp::vfunc180()
{
    for (int i = 0; i < m_nBodies730; i++) {
        if (m_Bodies[i].m_pObject)
            g_1053c5e0->v3(m_Bodies[i].m_pObject);
    }
    sub_100a6490(0);
    sub_1019c950(&m_nBodies730);
    CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x10155150 size=0x3
// TARGET: CRagdollProp::vfunc158
char CRagdollProp::vfunc158() { return 0; }
// END FUNCTION

// FUNCTION: 0x10155170 size=0x3
bool CRagdollProp::vfunc267()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10155190 size=0x5
bool CRagdollProp::vfunc269(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101551b0 size=0x5
bool CRagdollProp::vfunc272(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101551d0 size=0x6
namespace lifted {
extern char g_1070d9d0;
}
int CRagdollProp::vfunc273()
{
    return (int)&lifted::g_1070d9d0;
}
// END FUNCTION

// FUNCTION: 0x101551f0 size=0x5
bool CRagdollProp::vfunc274(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10155210 size=0x7a
#include "CRagdollProp.h"
#include <stdlib.h>

Vector CRagdollProp::vfunc275()
{
    Vector v;
    v.x = rand() * 0.03662221f - 600.0f;
    v.y = rand() * 0.03662221f - 600.0f;
    v.z = rand() * 0.03662221f - 600.0f;
    return v;
}
// END FUNCTION

// FUNCTION: 0x101552b0 size=0x3
char CRagdollProp::vfunc276()
{
    return 0;
}
// END FUNCTION

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

// FUNCTION: 0x10155320 size=0x26
// TARGET: CRagdollProp::vfunc104
#include "CRagdollProp.h"
#include "CEntityVSlots.h"

extern char g_106b8540[];

void CRagdollProp::vfunc104()
{
	int nOut;
	const char **pName = ((CEntityVSlots *)this)->slot9(&nOut);
	const char *pszName = *pName;
	if (pszName == 0)
		pszName = g_106b8540;
	((CBaseEntity *)this)->sub_100adfd0(pszName);
}
// END FUNCTION

// FUNCTION: 0x10155360 size=0x3
bool CRagdollProp::vfunc128()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101553f0 size=0x3b
#include "CRagdollProp.h"
#include "IPhysicsObject.h"

struct CRagdollPropBody	// 0x18 byte element of the body array at +0x744 (count at +0x730)
{
	IPhysicsObject *m_pObject;
	char m_pad0004[0x14];
};

// TARGET: CRagdollProp::vfunc270
void CRagdollProp::vfunc270(int a, int b)
{
	int i = 0;
	int nBodies = *(int *)((char *)this + 0x730);
	if (nBodies > 0) {
		CRagdollPropBody *pBody = (CRagdollPropBody *)((char *)this + 0x744);
		do {
			pBody->m_pObject->vfunc2();
			pBody->m_pObject->vfunc24(1);
			i++;
			pBody++;
		} while (i < *(int *)((char *)this + 0x730));
	}
}
// END FUNCTION

// FUNCTION: 0x10155440 size=0x3
void CRagdollProp::vfunc271(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101558b0 size=0x45
#include "CRagdollProp.h"

struct CRagdollPropHandleView
{
	char m_pad[0xd5c];
	EHANDLE m_hd5c;
};

void CRagdollProp::vfunc268(CBaseEntity *pEnt)
{
	CRagdollPropHandleView *pView = (CRagdollPropHandleView *)this;
	if (pEnt) {
		pView->m_hd5c = pEnt;
		m_nTakeDamage = pEnt->m_nTakeDamage;
	} else {
		pView->m_hd5c = (CBaseEntity *)0;
		m_nTakeDamage = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x10155a70 size=0x47
#include "CRagdollProp.h"

void CRagdollProp::vfunc141(int a, int b, void *pInfo)
{
	short nBody = *(short *)((char *)pInfo + 0x48);
	if (nBody >= 0 && nBody < m_nBodies730)
		sub_100a68f0(m_Bodies[nBody].m_pObject);
	CBaseEntity::vfunc141(a, b, pInfo);
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

// FUNCTION: 0x10156360 size=0x40
#include "vampire.h"
#include "CRagdollProp.h"

// TARGET: CRagdollProp::vfunc233
int CRagdollProp::vfunc233(int *pOut, int nMax)
{
    int i;
    for (i = 0; i < *(int *)((char *)this + 0x730); i++)
    {
        if (i < nMax)
        {
            pOut[i] = *(int *)((char *)this + 0x744 + i * 0x18);
        }
    }
    return *(int *)((char *)this + 0x730);
}
// END FUNCTION

// FUNCTION: 0x101574b0 size=0x5d
#include "CRagdollProp.h"

struct CRagdollPropBodyObj	// the body's physics object (only the slots used)
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38();
	virtual void vfunc39(int a, float *pVec);
	virtual void vfunc40(float *pVec1, float *pVec2);
};

void CRagdollProp::vfunc266(int a, int unused)
{
	for (int i = 0; i < m_nBodies730; i++)
	{
		CRagdollPropBodyObj *pObj = (CRagdollPropBodyObj *)m_Bodies[i].m_pObject;
		float vecA[3];
		float vecB[3];
		pObj->vfunc40(vecA, vecB);
		pObj->vfunc39(a, vecB);
	}
}
// END FUNCTION

// FUNCTION: 0x10158080 size=0x2e
#include "CRagdollProp.h"
// TARGET: CRagdollProp::vfunc32
void *sub_104115b0(int a, int b);

bool CRagdollProp::vfunc32(int a)
{
    if ((m_flags204 & 0x20) == 0)
    {
        return (void *)this == sub_104115b0(a, 0);
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x101580c0 size=0xe
namespace lifted {
int sub_10010ec9(int);
}
void CRagdollProp::vfunc39(CBaseEntity * a0)
{
    lifted::sub_10010ec9(*(int *)&a0);
}
// END FUNCTION

// FUNCTION: 0x10158100 size=0xe
// TARGET: sub_10158100
void sub_1040d9a0(int x);

void __stdcall sub_10158100(int x)
{
    sub_1040d9a0(x);
}
// END FUNCTION
