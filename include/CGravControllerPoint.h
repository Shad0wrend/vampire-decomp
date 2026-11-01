// CGravControllerPoint: the gravity gun's motion controller (RTTI .?AVCGravControllerPoint@@, IMotionEvent at +0).
// Only what the matched functions need.
#pragma once

#include "IMotionEvent.h"
#include "CBaseEntity.h"
#include "ehandle.h"

class CGravControllerPoint : public IMotionEvent
{
public:
	CGravControllerPoint();
	void sub_10148a20();	// \"CGravControllerPoint::DetachEntity\": re-enables the collisions between the two attached entities, wakes the held one's physics object and gives it the vector at +0x5c, forgets it, destroys the motion controller and clears the vectors at +0x10 / +0x1c

	char m_pad0004[0x10 - 4];
	Vector m_vec10;	// 0x10
	Vector m_vec1c;	// 0x1c
	char m_pad0028[0x5c - 0x28];
	Vector m_vec5c;	// 0x5c
	char m_pad0068[0x78 - 0x68];
	EHANDLE m_hAttached78;	// 0x78
	EHANDLE m_hOther7c;	// 0x7c
	char m_pad0080[0x90 - 0x80];
	void *m_pController90;	// 0x90
public:
	virtual int vfunc0(void *, int, float, Vector &, Vector &);	// slot 0: 0x10148c40 in the game's CGravControllerPoint vtable (link audit, CGravControllerPoint)
};
