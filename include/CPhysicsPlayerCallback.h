// CPhysicsPlayerCallback (RTTI .?AVCPhysicsPlayerCallback@@): IPhysicsPlayerControllerEvent at +0x0.
// Only what decompiled code needs.
#pragma once

#include "IPhysicsObject.h"
#include "Vector.h"

class IPhysicsPlayerControllerEvent	// RTTI .?AVIPhysicsPlayerControllerEvent@@, the interface CPhysicsPlayerCallback implements (Source's public/vphysics_interface.h, 1 slot)
{
public:
	virtual int vfunc0(IPhysicsObject *pObject, const Vector &position) = 0;	// slot 0
};

class CPhysicsPlayerCallback : public IPhysicsPlayerControllerEvent
{
public:
	virtual int vfunc0(IPhysicsObject *pObject, const Vector &position);	// ShouldMoveTo: true when the game data's byte at +0x2128 is clear
};
