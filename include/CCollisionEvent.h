// CCollisionEvent: physics collision event handler (vtable slots not modelled; plain members for direct callers).
#pragma once

class CCollisionEvent
{
public:
	// Slots 8 and 9, declared as plain members.
	void vfunc8(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectEnterTrigger"
	void vfunc9(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectLeaveTrigger"
};
