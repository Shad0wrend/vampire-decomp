// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002bd30 size=0x6
#include "datamap.h"
#include "CPhysSlideConstraint.h"
namespace lifted {
extern char g_10538ea8;
}
datamap_t *CPhysSlideConstraint::vfunc82()
{
    return (datamap_t *)&lifted::g_10538ea8;
}
// END FUNCTION

// FUNCTION: 0x1002bdc0 size=0x2a1
#include "utlmemory.h"
#include "CPhysSlideConstraint.h"
#include "CPhysConstraint.h"
#include "matrix3x4_t.h"
#include "CUnknown10029100.h"
#include "CEntityVSlots.h"
#include "Vector.h"

void sub_10139a90(float *pMatrix);
void sub_10138630(const matrix3x4_t &in, matrix3x4_t &out);
void sub_10138df0(const matrix3x4_t &a, const matrix3x4_t &b, matrix3x4_t &out);
void sub_10138460(const float *pIn, const float (*pMatrix)[3], float *pOut);
void sub_101cf680(Vector &v, float fl);

struct PhysObj37View
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36();
	virtual void v37(const Vector *pOut, int a);
};

struct CPhysEnv15View
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void vfunc15(void *p0, void *p1, int a, void *pParams);
};

extern CPhysEnv15View *g_10723940;

struct CPhysSlideParams
{
	matrix3x4_t mat;	// 0x00
	Vector axis;		// 0x30
	float fl3c;		// 0x3c
	float fl40;		// 0x40
	float fl44;		// 0x44
	unsigned char b48;	// 0x48
	char pad49[3];
	float limitMin;		// 0x4c
	float limitMax;		// 0x50
	int n54;		// 0x54
	int n58;		// 0x58 (unused tail)
};

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))

template <class T> inline void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

void CPhysSlideConstraint::sub_1002bdc0(int pArg1, void **pObjects)
{
	CPhysSlideParams params;
	sub_10139a90((float *)&params.mat);
	params.axis.x = 0.0f;
	params.axis.y = 0.0f;
	params.axis.z = 0.0f;
	params.limitMax = 0.0f;
	params.limitMin = 0.0f;
	params.n54 = 0;
	((CUnknown10029100 *)&params.fl3c)->sub_10029100();
	params.fl40 = lbs2kg(m_fl464);
	params.fl44 = lbs2kg(m_fl468);
	params.b48 = (m_n204 & 4) ? false : true;
	params.fl3c = 1.0;

	const Vector &vecOrigin = *((CEntityVSlots *)this)->slot217();
	Vector axisDirection = m_vec488 - vecOrigin;
	VectorNormalize(axisDirection);
	sub_101cf680(axisDirection, 0.01f);

	PhysObjView *p0 = (PhysObjView *)pObjects[0];
	PhysObjView *p1 = (PhysObjView *)pObjects[1];
	matrix3x4_t matRef, matRefInv, matAttached, matRef2;
	p0->GetPositionMatrix(&matRef);
	sub_10138630(matRef, matRefInv);
	p1->GetPositionMatrix(&matAttached);
	sub_10138df0(matRefInv, matAttached, params.mat);
	p0->GetPositionMatrix(&matRef2);
	sub_10138460(axisDirection.Base(), (const float (*)[3])&matRef2, params.axis.Base());

	params.n54 = m_n494;
	if (m_n204 & 2)
	{
		Vector position;
		((PhysObj37View *)pObjects[1])->v37(&position, 0);
		params.limitMin = DotProduct(axisDirection, *((CEntityVSlots *)this)->slot217());
		params.limitMax = DotProduct(axisDirection, m_vec488);
		if (params.limitMax < params.limitMin)
			swap(params.limitMin, params.limitMax);
		float limit = DotProduct(position, axisDirection);
		if (limit < params.limitMin)
			params.limitMin = limit;
		else if (limit > params.limitMax)
			params.limitMax = limit;
		params.limitMin -= limit;
		params.limitMax -= limit;
	}
	g_10723940->vfunc15(pObjects[0], pObjects[1], pArg1, &params);
}
// END FUNCTION

// FUNCTION: 0x1002cb40 size=0x1e
#include "CPhysSlideConstraint.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysSlideConstraint::vfunc5
CPhysSlideConstraint *CPhysSlideConstraint::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
