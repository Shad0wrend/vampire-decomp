// gamevcollisionevent_t: the vphysics collision event record (vcollisionevent_t followed by the game's velocities).
#pragma once

#include "Vector.h"
#include "IPhysicsObject.h"

class IPhysicsCollisionData
{
public:
	virtual void vfunc0();
	virtual void vfunc1(Vector *pOut);	// slot 1: stores the contact point
};

struct gamevcollisionevent_t
{
	IPhysicsObject *pObjects[2];
	int surfaceProps[2];
	char isCollision;
	char isShadowCollision;
	float deltaCollisionTime;	// 0x14
	float collisionSpeed;	// 0x18
	IPhysicsCollisionData *pInternalData;	// 0x1c
	Vector preVelocity[2];	// 0x20
	Vector postVelocity[2];	// 0x38
	Vector postAngularVelocity[2];	// 0x50
	class CBaseEntity *pEntities[2];	// 0x68: the entities of pObjects (VPhysicsCollision's other entity is pEntities[!index])
};
