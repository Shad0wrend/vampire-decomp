// CPhysConstraintEvents: the physics constraint event sink; slot 0 (ConstraintBroken) fires the "ConstraintBroken" input on the constraint's game entity.
#pragma once

#include "CBaseEntity.h"
#include "CVariantCopy.h"

class IPhysicsConstraint
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual CBaseEntity *GetGameData();	// slot 4: the entity the constraint belongs to
};

class IPhysicsConstraintEvent
{
public:
	virtual void vfunc0(IPhysicsConstraint *pConstraint);
};

class CPhysConstraintEvents : public IPhysicsConstraintEvent
{
public:
	virtual void vfunc0(IPhysicsConstraint *pConstraint);	// ConstraintBroken
};
