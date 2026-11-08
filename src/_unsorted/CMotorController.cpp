// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100283f0 size=0x239
#include "utlmemory.h"
#include "CMotorController.h"
#include "IPhysicsObject.h"
#include "matrix3x4_t.h"
#include <math.h>

extern Vector g_1070d1b0;
void sub_10138460(const float *pIn, const matrix3x4_t *pMat, float *pOut);

static inline float FAbs607(float f) { return (float)fabs(f); }

// TARGET: CMotorController::vfunc0
int CMotorController::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
	linear = g_1070d1b0;
	Vector axis = g_1070d1b0;
	angular = axis;
	if (m_flSpeed == 0.0f)
		return 0;

	IPhysicsObject *pObj = (IPhysicsObject *)pObject;

	matrix3x4_t mat;
	pObj->vfunc38((float *)&mat);

	Vector angVel;
	pObj->vfunc40(0, angVel.Base());
	sub_10138460(m_vecAxis.Base(), &mat, axis.Base());

	float flAxial = axis.x * angVel.x + angVel.y * axis.y + angVel.z * axis.z;

	Vector inertia;
	float *pInertia = pObj->vfunc14(inertia.Base());
	float flInertia = FAbs607(axis.x * pInertia[0]) + FAbs607(axis.z * pInertia[2]) + FAbs607(axis.y * pInertia[1]);

	float flValue = (m_flSpeed - flAxial) * m_flGain * flInertia;

	if ((float)fabs(m_flLastApplied) > 0.0f)
	{
		float flDiff = flAxial - m_flLastAxial;
		if ((m_flSpeed - flAxial) * flDiff > 0.0f)
		{
			float flT = flDiff / m_flLastApplied;
			if (flT > 1.0f)
				flT = 1.0f;
			else if (flT < 0.0f)
				flT = 0.0f;
			flValue += (1.0f - flT) * m_flDamping * m_flLastValue;
		}
		else if (flAxial != 0.0f && (float)fabs(flDiff / m_flLastApplied) < 0.05)
		{
			flValue += m_flDamping * m_flLastValue;
		}
	}

	if (m_flMaxValue != 0.0f)
	{
		if (flValue > m_flMaxValue)
			flValue = m_flMaxValue;
		else if (flValue < -m_flMaxValue)
			flValue = -m_flMaxValue;
	}

	m_flLastValue = flValue;
	m_flLastAxial = flAxial;
	m_flLastApplied = flValue / flInertia;

	angular = axis * flValue;
	return 2;
}
// END FUNCTION
