// CCollisionEvent: physics collision event handler (vtable slots not modelled except slot 0; plain members for direct callers).
#pragma once

class CCollisionEvent
{
public:
	virtual void vfunc0(void *pEvent);	// "CCollisionEvent::PreCollision": scope trace, copies the 32 byte event to +0x68, then slot 40 of both objects fills the records at +0x88 / +0x94 (second argument 0x30 further)

	// Slots 8 and 9, declared as plain members.
	void vfunc8(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectEnterTrigger"
	void vfunc9(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectLeaveTrigger"

	int sub_10031270(int inflictor);	// "CCollisionEvent::FindDamageInflictor": index of the last 32-byte record (array at +0x100, count at +0x10c) starting with inflictor, or -1
};
