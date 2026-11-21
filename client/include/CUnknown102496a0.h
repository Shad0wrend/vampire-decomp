// CUnknown102496a0: object initialised with a fixed 1/30 s interval; real name not yet known (Source's CSimplePhysics,
// the fixed-timestep verlet integrator of the rope).
// 0x18 bytes; its constructor is sub_102496a0 (stub 0x10013dcc).
#pragma once

struct CRopeNode;	// CBaseRopePhysics.h (which includes this header for its m_timer)
class CBaseRopePhysics;

class CUnknown102496a0
{
public:
	CUnknown102496a0();
	void sub_1012c770(CRopeNode *pNodes, int nNodes, CBaseRopePhysics *pHelper, float dt, float flDamp);	// "CSimplePhysics::Simulate": advances the predicted time by dt, runs the missing fixed steps (verlet with the helper's forces and constraints), then interpolates every node's predicted position

	double m_flPredictedTime;	// 0x00
	int m_iCurTimeStep;	// 0x08
	float m_flTimeStep;	// 0x0c
	float m_flTimeStepSq;	// 0x10
	char m_pad0014[4];
};
