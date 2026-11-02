// IPhysicsCollisionEvent: the vphysics collision event callback interface (vtable at 0x10449228, slots 8 and 9 are the game's empty `ret 8` bodies (0x1002f080, 0x1002f0a0), the rest pure).
#pragma once

class IPhysicsCollisionEvent
{
public:
	virtual void vfunc0(void *pEvent) = 0;
	virtual void vfunc1(void *pEvent) {}	// PostCollision (implemented by CCollisionEvent)
	virtual void vfunc2(void *pObject, float energy, int surfaceProps, int surfacePropsHit, void *pData) {}	// Friction (implemented by CCollisionEvent)
	virtual void vfunc3(void *pObject1, void *pObject2, void *pData) = 0;
	virtual void vfunc4(void *pObject1, void *pObject2, void *pData) = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6(void *pObject, void *pFluid) = 0;
	virtual void vfunc7() = 0;
	virtual void vfunc8(void *pObject1, void *pObject2);
	virtual void vfunc9(void *pObject1, void *pObject2);
};
