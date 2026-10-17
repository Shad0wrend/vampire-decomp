// CCollisionEvent: physics collision event handler (vtable slots not modelled; plain members for direct callers).
#pragma once

class CCollisionEvent
{
public:
	// Slot 8, declared as a plain member.
	void vfunc8(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectEnterTrigger"
};
