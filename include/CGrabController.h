// CGrabController (RTTI .?AVCGrabController@@): base IMotionEvent at +0x0 is not modelled;
// primary vtable 0x10514edc has 1 slot.
#pragma once

class CEntityVSlots;
class Vector;

struct CGrabHandle
{
	int m_Index;
	CGrabHandle() { m_Index = -1; }
};

class CGrabController
{
public:
	CGrabController();

	virtual int vfunc0(void *pController, class IPhysicsObject *pObject, float flDeltaTime, float *pLinear, float *pAngular);	// IMotionEvent::Simulate

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

	void sub_1040c230(CEntityVSlots *pObject, class IPhysicsObject *pPhysics);	// the carry-speed blend: sets +0x24 / +0x1c to 1000.0f / 21600.0f, then blends them toward 300.0f and an inertia-derived limit by a smoothstep of the carried mass (ret 8)
	Vector *sub_1040c500(Vector *pOut, const Vector *pIn, CEntityVSlots *pEnt);	// transforms pIn by the entity's matrix (at +0x130, or, with the flag at +0x45, the rotation of its local yaw / roll angles) into pOut
};
