// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ad140 size=0x2c
#include "CAI_RatPlaneSolver.h"



// TARGET: CAI_RatPlaneSolver::CAI_RatPlaneSolver
CAI_RatPlaneSolver::CAI_RatPlaneSolver(int owner) : CAI_PlaneSolver(owner)
{
	m_n70 = 0;
	m_f74 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x103ad180 size=0x1e
#include "CAI_RatPlaneSolver.h"

// TARGET: CAI_RatPlaneSolver::vfunc1
CAI_RatPlaneSolver *CAI_RatPlaneSolver::vfunc1(unsigned int flags)
{
	sub_100011ef();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103ad270 size=0x23b
#include "CBaseEntity.h"
#include "CAI_RatPlaneSolver.h"
#include "CAI_BaseNPC.h"
#include "globalvars.h"
#include "utlvector.h"
#include <math.h>

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm
	{
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

struct AI_Arc_t
{
	float center;
	float span;
	void Set(float newCenter, float newSpan) { center = newCenter; span = newSpan; }
};

struct Elem280_t
{
	int type;
	float weight;
	AI_Arc_t arc;
	EHANDLE hObstacle;
	unsigned int flags;
	char szName[0x100];

	Elem280_t(int newType, float newWeight, float newDir, float newSpan)
	{
		type = newType;
		weight = newWeight;
		arc.Set(newDir, newSpan);
		hObstacle = (CBaseEntity *)0;
		flags = 0;
		szName[0] = 0;
	}
	~Elem280_t() {}
};

int CAI_RatPlaneSolver::vfunc0(float *pVec, int *pEnt, float a, float b, float c, int d)
{
	int result = CAI_PlaneSolver::sub_103097c0(pVec, pEnt, a, b, c, d);
	CAI_BaseNPC *pOwner = (CAI_BaseNPC *)m_owner;
	if (pOwner && pOwner->vfunc138() == 0xd) {
		pOwner = (CAI_BaseNPC *)m_owner;
		if (pOwner) {
			if (m_f74 < gpGlobals->curtime || fabs(m_n70 - pOwner->vfunc219()[1]) > 45.0) {
				m_n70 = pOwner->vfunc219()[1];
				m_f74 = gpGlobals->curtime + 1.5f;
			}
			float s, co;
			float f = (m_f74 - gpGlobals->curtime) * 0.6666667f;
			SinCos((f + f) * 3.141592653589793, &s, &co);
			float yaw = s * 20.0f + m_n70;
			float dir = yaw;
			if (yaw < 0.0)
				dir = yaw + 360.0;
			else if (yaw >= 360.0)
				dir = yaw - 360.0;
			((CUtlVector<Elem280_t> *)((char *)this + 0x50))->AddToTail(Elem280_t(6, 1.0f, dir, 45.0f));
		}
	}
	return result;
}
// END FUNCTION
