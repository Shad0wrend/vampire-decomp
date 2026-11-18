// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10152300 size=0x6
#include "CRagdollProp.h"
namespace lifted {
extern char g_10723498;
}
int CRagdollProp::vfunc80()
{
    return (int)&lifted::g_10723498;
}
// END FUNCTION

// FUNCTION: 0x10152320 size=0x3
#include "CRagdollProp.h"
int CRagdollProp::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101525e0 size=0x6
#include "CRagdollProp.h"
#include "datamap.h"
namespace lifted {
extern char g_1057d5a8;
}
datamap_t * CRagdollProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057d5a8);
}
// END FUNCTION

// FUNCTION: 0x10154e40 size=0xe8
#include "CRagdollProp.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"

extern float g_1070d1b0[3];
extern char g_106b8540[];

struct CRagdollPropSpawnView
{
	char m_pad000[0xdc];
	float m_impactEnergyScale;	// 0xdc
	char m_pad0e0[0xd54 - 0xe0];
	int m_lastUpdateTickCount;	// 0xd54
	char m_pad0d58[0xd60 - 0xd58];
	float m_flBlendWeight;	// 0xd60
	int m_nOverlaySequence;	// 0xd64
};

void CRagdollProp::vfunc103()
{
	char bones[0x41a0];
	int nOut;
	vfunc104();
	const char *name = *vfunc9(&nOut);
	if (!name)
		name = g_106b8540;
	vfunc105(name);
	((CBaseAnimating *)this)->vfunc257((int)bones, 0xfffc);
	sub_101554a0(g_1070d1b0, 0, g_1070d1b0, bones, bones, 0, (m_flags204 >> 2) & 1, 1);
	CRagdollPropSpawnView *v = (CRagdollPropSpawnView *)this;
	v->m_lastUpdateTickCount = 0;
	v->m_flBlendWeight = 0.0f;
	v->m_nOverlaySequence = -1;
	if (v->m_impactEnergyScale == 0.0f)
		v->m_impactEnergyScale = 0.1f;
	CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
	if (pColl) {
		pColl->sub_100ddd90();
		if (!(m_flags204 & 0x20))
			sub_100b3900(2);
		else
			sub_100b3840(2);
	}
}
// END FUNCTION

// FUNCTION: 0x10154f70 size=0x20
#include "CRagdollProp.h"

void CRagdollProp::vfunc129()
{
	CBaseEntity::sub_100a6490(0);
	CBaseEntity::sub_100a6490(m_Bodies[0].m_pObject);
	CBaseEntity::vfunc129();
}
// END FUNCTION

// FUNCTION: 0x10154fa0 size=0x4a
#include "CRagdollProp.h"
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

// FUNCTION: 0x10155120 size=0x1c
#include "CBaseEntity.h"
#include "CRagdollProp.h"
// TARGET: CRagdollProp::vfunc123
void CRagdollProp::vfunc123()
{
	if (m_fDebugOverlays224 & 4)
	{
		vfunc264();
	}

	CBaseEntity::vfunc123();
}
// END FUNCTION

// FUNCTION: 0x10155150 size=0x3
#include "CRagdollProp.h"
// TARGET: CRagdollProp::vfunc158
char CRagdollProp::vfunc158() { return 0; }
// END FUNCTION

// FUNCTION: 0x10155170 size=0x3
#include "CRagdollProp.h"
bool CRagdollProp::vfunc267()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10155190 size=0x5
#include "CRagdollProp.h"
bool CRagdollProp::vfunc269(int a0, int a1)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101551b0 size=0x5
#include "CRagdollProp.h"
bool CRagdollProp::vfunc272(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101551d0 size=0x6
#include "CRagdollProp.h"
namespace lifted {
extern char g_1070d9d0;
}
int CRagdollProp::vfunc273()
{
    return (int)&lifted::g_1070d9d0;
}
// END FUNCTION

// FUNCTION: 0x101551f0 size=0x5
#include "CRagdollProp.h"
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
#include "CRagdollProp.h"
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
#include "CRagdollProp.h"
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
#include "CRagdollProp.h"
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

// FUNCTION: 0x10155920 size=0xc2
#include "CRagdollProp.h"
#include "CBCCSlotViews.h"
#include "ehandle.h"

class CInfoSlotView
{
public:
	VIEW_SLOT100(0)
	VIEW_SLOT10(10) VIEW_SLOT10(11) VIEW_SLOT10(12) VIEW_SLOT10(13)
	VIEW_SLOT(140) VIEW_SLOT(141)
	virtual void vfunc142(const CRagdollPropDamageInfo *pInfo);
};

struct CTakeDamageInfoView : CRagdollPropDamageInfo
{
	void AddDamageType(int bitsDamageType) { m_bitsDamageType |= bitsDamageType; }
};

struct CRagdollPropView
{
	char m_pad[0xd5c];
	CHandle<CInfoSlotView> m_hDamageEntity;	// 0xd5c
};

struct CBaseEntityInfoView
{
	void sub_100a0e40(const CRagdollPropDamageInfo *pInfo);
};

// TARGET: CRagdollProp::vfunc142
void CRagdollProp::vfunc142(const CRagdollPropDamageInfo *pInfo)
{
	const CRagdollPropDamageInfo &info = *pInfo;
	if ( ((CRagdollPropView *)this)->m_hDamageEntity.Get() )
	{
		CTakeDamageInfoView subInfo = *(const CTakeDamageInfoView *)&info;
		subInfo.AddDamageType( 0x800000 );
		((CRagdollPropView *)this)->m_hDamageEntity->vfunc142( &subInfo );
		return;
	}

	((CBaseEntityInfoView *)this)->sub_100a0e40( &info );
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

// FUNCTION: 0x10155c20 size=0x1a1
#include "CGameTrace.h"
#include "CRagdollProp.h"
#include "Ray_t.h"
struct CRagdollModelInfo
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual int **vfunc18(int model);
};
struct CRagdollCollision
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
	virtual void v18(); virtual void v19(); virtual void v20();
	virtual void vfunc21(const Ray_t *pRay, int hBody, const void *pPos, const void *pAng, CGameTrace *pTrace);
};
extern CRagdollModelInfo *g_1070b250;
extern CRagdollCollision *g_1072393c;

struct CTraceCopy
{
	int d[10];
	char c28, c29;
	short s2a;
	float f2c;
	int c30;
	short s34;
	char b36, b37;
	int d38, d3c, d40, d44;
	short s48;
	int d4c, d50;
	void operator=(const CTraceCopy &o)
	{
		d[0] = o.d[0]; d[1] = o.d[1]; d[2] = o.d[2]; d[3] = o.d[3]; d[4] = o.d[4];
		d[5] = o.d[5]; d[6] = o.d[6]; d[7] = o.d[7]; d[8] = o.d[8]; d[9] = o.d[9];
		c28 = o.c28; c29 = o.c29; s2a = o.s2a; f2c = o.f2c; c30 = o.c30;
		s34 = o.s34; b36 = o.b36; b37 = o.b37;
		d38 = o.d38; d3c = o.d3c; d40 = o.d40; d44 = o.d44; s48 = o.s48; d4c = o.d4c; d50 = o.d50;
	}
};

// TARGET: CRagdollProp::vfunc99
bool CRagdollProp::vfunc99(int a, int b, int c)
{
	const Ray_t *pRay = (const Ray_t *)a;
	CTraceCopy *pTrace = (CTraceCopy *)c;
	if (pRay->m_IsRay)
		return sub_100956e0(a, b, c);
	if (!sub_100952d0(-1))
		return false;
	int **list = g_1070b250->vfunc18(vfunc8());
	for (int i = 0; i < m_nBodies730; i++) {
		CTraceCopy tr;
		const char *p = (const char *)this + 0xa80 + 0xc * i;
		g_1072393c->vfunc21(pRay, list[1][i], p, p + 0x168, (CGameTrace *)&tr);
		if (tr.f2c < pTrace->f2c)
			*pTrace = tr;
	}
	if (pTrace->f2c >= 1.0f)
		return false;
	return true;
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

// FUNCTION: 0x10155fb0 size=0x2e8
#include <math.h>
#include "CRagdollProp.h"
#include "CCollisionProperty.h"
#include "CUnknown100dd990.h"
#include "CBaseEntity_ext.h"
#include "matrix3x4_t.h"
#include "QAngle.h"

struct CRagdollPropUnit : CRagdollProp
{
	char m_padUnit[0xa08 - 0x75c];
	int m_BoneIdx[30];	// 0xa08
	Vector m_ragPos[30];	// 0xa80
	QAngle m_ragAngles[30];	// 0xbe8
	int m_nd50;
	int m_lastUpdateTickCount;	// 0xd54
	char m_allAsleep;	// 0xd58
	char m_padd59[0xd68 - 0xd59];
	Vector m_ragdollMins[30];	// 0xd68
	Vector m_ragdollMaxs[30];	// 0xed0

	void sub_1009edc0(const Vector &mins, const Vector &maxs);
};

struct CRagdollBoneAccessor { int m_n0; matrix3x4_t *m_pBones; };
struct CCollOriginView { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual const Vector *s8(); };

void sub_1019cae0(void *pRagdoll, CRagdollBoneAccessor *pAcc, int index);
void sub_10137ed0(const matrix3x4_t *pMatrix, float *pAngles);
void sub_10138720(const matrix3x4_t *pMatrix, int n, float *pOrigin);
void sub_101cd940(CBaseEntity *pEnt);
char sub_1019cd10(void *pRagdoll);
void sub_1013c0e0(const matrix3x4_t *pMatrix, const float *pMins, const float *pMaxs, float *pOutMins, float *pOutMaxs);

inline void TransformAABB(const matrix3x4_t &m, const Vector &mins, const Vector &maxs, Vector &outMins, Vector &outMaxs)
{
	sub_1013c0e0(&m, &mins.x, &maxs.x, &outMins.x, &outMaxs.x);
}

struct CBoneAccessorX { int m_n0; matrix3x4_t *m_pBones; int m_ReadableBones; int m_WritableBones; CBoneAccessorX(matrix3x4_t *p) { m_n0 = 0; m_pBones = p; } };
inline void MatrixAnglesX(const matrix3x4_t &m, QAngle &angles, Vector &pos)
{
	sub_10137ed0(&m, &angles.x);
	sub_10138720(&m, 3, &pos.x);
}
void CRagdollProp::vfunc226(void *pPhysics)
{
	CRagdollPropUnit *p = (CRagdollPropUnit *)this;
	if (p->m_lastUpdateTickCount == gpGlobals->m_n18)
		return;
	p->m_lastUpdateTickCount = gpGlobals->m_n18;
	char *pChanged = &m_bChanged1b1;
	*pChanged = 1;

	matrix3x4_t boneToWorld[350];
	QAngle angles;
	int i;
	for (i = 0; i < m_nBodies730; i++)
	{
		CBoneAccessorX boneaccessor(boneToWorld);
		sub_1019cae0(&m_nBodies730, (CRagdollBoneAccessor *)&boneaccessor, i);
		Vector vNewPos;
		MatrixAnglesX(boneToWorld[p->m_BoneIdx[i]], angles, vNewPos);
		p->m_ragPos[i] = vNewPos;
		p->m_ragAngles[i] = angles;
		if (fabs(vNewPos.x) > 10000.0 || fabs(vNewPos.y) > 10000.0 || fabs(vNewPos.z) > 10000.0)
			sub_101cd940(this);
	}
	p->m_allAsleep = sub_1019cd10(&m_nBodies730);

	Vector vecFullMins, vecFullMaxs;
	vecFullMins = p->m_ragPos[0];
	vecFullMaxs = p->m_ragPos[0];
	for (i = 0; i < m_nBodies730; i++)
	{
		Vector mins, maxs;
		TransformAABB(boneToWorld[p->m_BoneIdx[i]], p->m_ragdollMins[i], p->m_ragdollMaxs[i], mins, maxs);
		for (int j = 0; j < 3; j++)
		{
			if (mins[j] < vecFullMins[j])
				vecFullMins[j] = mins[j];
			if (maxs[j] > vecFullMaxs[j])
				vecFullMaxs[j] = maxs[j];
		}
	}
	vfunc216(&p->m_ragPos[0].x);
	CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
	const Vector &vecOrigin = *((CCollOriginView *)pColl)->s8();
	pColl->AddSolidFlags(0x80);
	((CUnknown100dd990 *)pColl)->sub_100dd990(6, 0, 0);
	p->sub_1009edc0(vecFullMins - vecOrigin, vecFullMaxs - vecOrigin);
	pColl->sub_100dda20();
	sub_100a53d0(0);
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

// FUNCTION: 0x10156470 size=0xc1
#include "CRagdollProp.h"
#include "IPhysicsObject.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
const char *sub_101927c0(float flMass);

#define POUNDS_PER_KG	(2.2f)
#define kg2lbs(x)		((x)*POUNDS_PER_KG)

#include "DebugOverlay.h"

struct CRagdollPropDbg : CRagdollProp
{
	IPhysicsObject *VPhysicsGetObject() const { return (IPhysicsObject *)m_obj36c; }
	int entindex() { int e = m_pEdict2e0; return engine->vfunc35(e); }
};

int CRagdollProp::vfunc124()
{
	int text_offset = sub_10096100();
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		CRagdollPropDbg *self = (CRagdollPropDbg *)this;
		if (self->VPhysicsGetObject()) {
			char tempstr[512];
			Q_snprintf(tempstr, sizeof(tempstr), "Mass: %.2f kg / %.2f lb (%s)", self->VPhysicsGetObject()->vfunc12(), kg2lbs(self->VPhysicsGetObject()->vfunc12()), sub_101927c0(self->VPhysicsGetObject()->vfunc12()));
			sub_101434b0(self->entindex(), text_offset, tempstr, 0, 255, 255, 255, 255);
			text_offset++;
		}
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x10157390 size=0xda
#include "vampire.h"
#include "CRagdollProp.h"
#include "StudioHdr.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct StudioHdrLookup : StudioHdr
{
	int BoneIndexByName(const char *pName)
	{
		for (int i = 0; i < m_nBones; i++)
		{
			const char *psz = Bone(i)->Name();
			if (!_strcmpi(psz, pName))
				return i;
		}
		return -1;
	}
};

int CRagdollProp::vfunc265(const char *pszBone)
{
	StudioHdrLookup *pStudioHdr = (StudioHdrLookup *)sub_100952d0(-1);
	if (!pStudioHdr)
		return m_Bodies[0].m_pObject;

	int boneIndex = pStudioHdr->BoneIndexByName(pszBone);
	while (boneIndex >= 0)
	{
		for (int i = 0; i < m_nBodies730; i++)
		{
			if (((int *)((char *)this + 0xa08))[i] == boneIndex)
				return m_Bodies[i].m_pObject;
		}
		boneIndex = pStudioHdr->Bone(boneIndex)->m_iParent;
	}
	return m_Bodies[0].m_pObject;
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

// FUNCTION: 0x10158060 size=0x5
#include "CRagdollProp.h"
int __cdecl sub_102587f0();
// TARGET: CRagdollProp::vfunc36
// the game's 0x10158060: a tail call (jmp) of sub_102587f0
int CRagdollProp::vfunc36()
{
	return sub_102587f0();
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
#include "CBaseEntity.h"
#include "CRagdollProp.h"
namespace lifted {
int sub_10010ec9(int);
}
void CRagdollProp::vfunc39(CBaseEntity * a0)
{
    lifted::sub_10010ec9(*(int *)&a0);
}
// END FUNCTION

// FUNCTION: 0x101580e0 size=0xe
#include "CRagdollProp.h"

void sub_1040d950(int a);

void CRagdollProp::vfunc41(int a)
{
	sub_1040d950(a);
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
