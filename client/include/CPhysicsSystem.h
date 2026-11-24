// CPhysicsSystem (RTTI .?AVCPhysicsSystem@@): Source's physics game system (cl_dll/physics.cpp).
// Nine primary vtable slots (enginesystem); only what decompiled code needs is declared.
#pragma once
#include "CDirtySpatialPartitionEntityList.h"	// brings CAutoGameSystem (the game-system root)

class CPhysicsSystem : public CAutoGameSystem
{
public:
	int m_unk08;
	int m_unk0c;
	int m_unk10;
	int m_unk14;
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc7(int);
	CAutoGameSystem *vfunc8(unsigned int flags);	// as in CDirtySpatialPartitionEntityList (transplant)
};
