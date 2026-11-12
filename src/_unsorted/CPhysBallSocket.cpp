// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002bb90 size=0xeb
#include "CPhysConstraintSystem.h"
#include "CPhysBallSocket.h"
#include "CPhysHinge.h"
#include "IPhysicsObject.h"

#define lbs2kg(x) ((x)*(1.0f/(2.2f)))

struct constraint_ballsocketparams_t
{
	Vector constraintPosition[2];
	CPhysBreakableParams constraint;
	inline void Defaults()
	{
		constraint.Defaults();
		constraintPosition[0].Init();
		constraintPosition[1].Init();
	}
};

struct CPhysConstraintPair { IPhysicsObject *pObjects[2]; };

struct IPhysEnvBS { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual CPhysConstraintObj *CreateBallsocketConstraint(IPhysicsObject *pReference, IPhysicsObject *pAttached, CPhysConstraintSystem *pGroup, const constraint_ballsocketparams_t &params); };
extern IPhysEnvBS *g_10723940;

class CPhysBallSocketV : public CPhysBallSocket
{
public:
	bool HasSpawnFlags(int flags) const { return (m_spawnflags204 & flags) != 0; }
	void GetBreakParams(CPhysBreakableParams &params)
	{
		params.Defaults();
		params.forceLimit = lbs2kg(m_forceLimit);
		params.torqueLimit = lbs2kg(m_torqueLimit);
		params.isActive = HasSpawnFlags(4) ? false : true;
	}
	CPhysConstraintObj *sub_1002bb90(CPhysConstraintSystem *pGroup, CPhysConstraintPair *pInfo);
};

// TARGET: CPhysBallSocketV::sub_1002bb90
CPhysConstraintObj *CPhysBallSocketV::sub_1002bb90(CPhysConstraintSystem *pGroup, CPhysConstraintPair *pInfo)
{
	constraint_ballsocketparams_t ballsocket;

	ballsocket.Defaults();

	for (int i = 0; i < 2; i++)
	{
		pInfo->pObjects[i]->vfunc27(&ballsocket.constraintPosition[i], &vfunc217());
	}
	GetBreakParams(ballsocket.constraint);
	ballsocket.constraint.torqueLimit = 0;

	return g_10723940->CreateBallsocketConstraint(pInfo->pObjects[0], pInfo->pObjects[1], pGroup, ballsocket);
}
// END FUNCTION

// FUNCTION: 0x1002cb10 size=0x1e
#include "CPhysBallSocket.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysBallSocket::vfunc5
CPhysConstraint *CPhysBallSocket::vfunc5(unsigned int flags)
{
	sub_100121ac();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
