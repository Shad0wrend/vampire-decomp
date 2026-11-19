// CObjectEvent: the IPhysicsObjectEvent callback object of the physics world (vtable 0x1044915c, 2 slots:
// slot 0 = 0x1002d560, slot 1 = CObjectEvent::vfunc1 / ObjectSleep-like). Base not modelled.
#pragma once

class IPhysicsObject;

class IPhysicsObjectEvent	// RTTI .?AVIPhysicsObjectEvent@@, the interface CObjectEvent implements (Source's public/vphysics_interface.h, 2 slots)
{
public:
	virtual void vfunc0(IPhysicsObject *pObject) = 0;	// slot 0
	virtual void vfunc1(IPhysicsObject *pObject) = 0;	// slot 1
};

class CObjectEvent : public IPhysicsObjectEvent
{
public:
	virtual void vfunc0(IPhysicsObject *pObject);	// slot 0 (0x1002d560, only its address is known)
	virtual void vfunc1(IPhysicsObject *pObject);	// slot 1: the physics object's game data is handed to sub_101cf600 (CBaseEntity::sub_100b3b00)
};
