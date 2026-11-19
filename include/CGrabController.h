// CGrabController (RTTI .?AVCGrabController@@): an IMotionEvent (its one slot, Simulate); vtable 0x10514edc.
#pragma once

#include "IMotionEvent.h"

class CEntityVSlots;
class Vector;

struct CGrabHandle
{
	int m_Index;
	CGrabHandle() { m_Index = -1; }
};

class CGrabController : public IMotionEvent
{
public:
	CGrabController();

	virtual int vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular);	// IMotionEvent::Simulate

	char m_pad0004[0x18];		// 0x0004 .. 0x001B
	float m_f1c;
	float m_f20;
	float m_f24;
	float m_f28;
	float m_f2c;
	float m_f30;
	float m_f34;
	float m_f38;
	float m_f3c;
	char m_pad0040[5];		// 0x0040 .. 0x0044
	char m_b45;			// 0x0045
	char m_pad0046[0x106];		// 0x0046 .. 0x014B
	CGrabHandle m_h14c;
	float m_v150[3];
	char m_b15c;
	char m_pad015d[3];
	float m_v160[3];	// 0x160: the carry offset vector sub_1040f940 transforms (sub_10139b90 / sub_101381b0 below)
	float m_v16c[3];	// 0x16c: second offset vector (rotated by the matrix at +0x1b4 of sub_1040f940's frame)

	void sub_1040c230(CEntityVSlots *pObject, class IPhysicsObject *pPhysics);	// the carry-speed blend: sets +0x24 / +0x1c to 1000.0f / 21600.0f, then blends them toward 300.0f and an inertia-derived limit by a smoothstep of the carried mass (ret 8)
	bool sub_1040f940(CEntityVSlots *pPlayer, float flMinTime);	// 0x1040f940 (ret 8; called by CPlayerPickupController::vfunc173 and 0x10410620): the pickup placement update. entity = LookupEntity(m_h14c) (g_10566458 list, EHandleEntityList::LookupEntity); false without it, when sub_1040c080() < flMinTime, when the player's slot 209 entity is it, or it has no physics object (+0x36c). Clamps the player's eye height (slot 194, sub_1013d600) to +-75.0f, AngleVectors (sub_10139610) the view angles, a target point 0.5 * length + 24.0f ahead (slot 220 / 389), a trace (CTraceFilterSimpleTwoEnt(player, entity, 0), mask 0x400b, g_1070b254 slot 4, no debug draw), pulls the point back with the box sizes (CCollisionProperty::sub_100dcd90 / sub_104103c0 / sub_10410370, sub_1013ca00), debug boxes (sub_10142aa0, g_1094aac0 / sub_1005f190 gate), then the placed position/orientation: sub_1040c500, sub_10410490, sub_10410500(pPlayer, &v), sub_10138580, sub_10139b90, sub_101381b0 and finally sub_1040bfc0(vecPos, vecAngleDelta); returns true
	Vector *sub_1040c500(Vector *pOut, const Vector *pIn, CEntityVSlots *pEnt);	// transforms pIn by the entity's matrix (at +0x130, or, with the flag at +0x45, the rotation of its local yaw / roll angles) into pOut
};
