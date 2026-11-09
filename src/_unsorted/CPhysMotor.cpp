// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100286c0 size=0x6
#include "datamap.h"
#include "CPhysMotor.h"
namespace lifted {
extern char g_105372ac;
}
datamap_t *CPhysMotor::vfunc82()
{
    return (datamap_t *)&lifted::g_105372ac;
}
// END FUNCTION

// FUNCTION: 0x10028c00 size=0x1e
#include "CPhysMotor.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysMotor::vfunc5
CPhysMotor *CPhysMotor::vfunc5(unsigned int flags)
{
	sub_10013b33();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10028c30 size=0x47
#include "CPhysMotor.h"
void sub_101cf680(Vector *v, float f);
// TARGET: CPhysMotor::vfunc103
void CPhysMotor::vfunc103()
{
	m_vec480 -= *vfunc220();
	VectorNormalize(m_vec480);
	sub_101cf680(&m_vec480, 0.01f);
}
// END FUNCTION

// FUNCTION: 0x10028d20 size=0x2dd
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CPhysMotor.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CUnknown10029100.h"
#include <math.h>

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern void *g_10723938;
void sub_10138460(Vector *scale, float *matrix, Vector *out);
void sub_10158c00(void *phys, void *env);

class CUnknown10029130
{
public:
	void sub_10029130(int a, int b, int c);
	int m_n0000;
	int m_n0004;
	int m_n0008;
	int m_n000c;
};

class CMotorCtrlView
{
public:
	virtual void v0();
	virtual void v1(void *pCtrl);
	virtual void v2(void *pPhys);
	virtual void v3(void *pMotor);
};

class CMotorPhysObjView
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual Vector v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37();
	virtual void v38(float *pMatrix);
};

class CMotorPhysEnvView
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual CMotorCtrlView *v13(void *pEnv, void *pPhys, int nZero, void *pParams);
	virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual CMotorCtrlView *v39(void *pCtrl);
};
extern CMotorPhysEnvView *g_10723940;

struct CMotorEntView
{
	char m_pad0000[0x36c];
	CMotorPhysObjView *m_pPhys36c;
};

struct CMotorParams
{
	Vector m_vecOrigin;
	Vector m_vecScale;
	CUnknown10029130 m_a;
	CUnknown10029100 m_b;
};

inline float FloatMakePositive(vec_t f)
{
	return (float)fabs(f);
}

inline float DotProductAbs(const Vector &v0, const Vector &v1)
{
	return FloatMakePositive(v0.x * v1.x) + FloatMakePositive(v0.y * v1.y) + FloatMakePositive(v0.z * v1.z);
}

// TARGET: CPhysMotor::vfunc113
void CPhysMotor::vfunc113()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc113();
	if (g_10566458->sub_100290c0((const unsigned int *)&m_h454) == 0)
	{
		CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, m_pszTargetName450 ? m_pszTargetName450 : g_106b8540, 0, 0);
		if (pTarget && ((CEntityVSlots *)pTarget)->slot94() == 7)
		{
			*(unsigned int *)&m_h454 = *((CEntityVSlots *)pTarget)->slot1();
			CMotorPhysObjView *pPhys = ((CMotorEntView *)g_10566458->sub_100290c0((const unsigned int *)&m_h454))->m_pPhys36c;
			sub_10028a60();
			float matrix[12];
			pPhys->v38(matrix);
			Vector motorAxis_ls;
			sub_10138460(&m_vec480, matrix, &motorAxis_ls);
			m_fl47c = DotProductAbs(pPhys->v14(), motorAxis_ls) * (m_flRate464 + m_fl45c) * m_fl48c;
			m_fl49c = 1.0f;
		}
	}
	if (m_h454.Get())
	{
		CMotorPhysObjView *pPhys = ((CMotorEntView *)m_h454.Get())->m_pPhys36c;
		if (m_flags204 & 4)
		{
			if (!m_pPhysObject46c)
			{
				CMotorParams params;
				params.m_vecOrigin.x = 0;
				params.m_vecOrigin.y = 0;
				params.m_vecOrigin.z = 0;
				params.m_vecScale.x = 0;
				params.m_vecScale.y = 0;
				params.m_vecScale.z = 0;
				params.m_a.sub_10029130(0, 0, 0);
				params.m_b.sub_10029100();
				params.m_vecScale = m_vec480;
				params.m_vecOrigin = *vfunc220();
				CMotorCtrlView *pCtrl = g_10723940->v13(g_10723938, pPhys, 0, &params);
				m_pPhysObject46c = pCtrl;
				pCtrl->v3(this);
			}
			if (m_flags204 & 2)
				sub_10158c00(pPhys, g_10723938);
		}
		else
			m_pPhysObject46c = 0;
		if (!m_pController470)
		{
			CMotorCtrlView *pCtrl = g_10723940->v39(m_ctrl474);
			m_pController470 = pCtrl;
			pCtrl->v2(((CMotorEntView *)m_h454.Get())->m_pPhys36c);
			if (m_flags204 & 1)
				sub_10028ca0();
		}
	}
	if (m_pController470)
		((CMotorCtrlView *)m_pController470)->v1(m_ctrl474);
}
// END FUNCTION

// FUNCTION: 0x10029160 size=0x7a
#include "CPhysMotor.h"

float sub_10008fe9(float a, float b, float c);

void CPhysMotor::vfunc134()
{
	float amount = (gpGlobals->curtime - m_flLastTime468) * m_flRate464;
	float current = m_flCurrent478;
	float target = m_flTarget460;
	m_flCurrent478 = sub_10008fe9(target, current, amount);
	m_flLastTime468 = gpGlobals->curtime;
	if (m_flCurrent478 != m_flTarget460)
		sub_100ac610(gpGlobals->curtime, 0);
}
// END FUNCTION
