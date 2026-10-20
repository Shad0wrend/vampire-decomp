// class CCollisionProperty (RTTI .?AVCCollisionProperty@@), primary vtable 0x10454154,
// 19 slots, all of them inherited from its only base ICollideable at +0x0.
#pragma once

#include "CBaseEntity.h"

class ICollideable
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual int vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
};

class CCollisionProperty : public ICollideable
{
public:
	virtual void vfunc4();
	virtual void vfunc5();
	virtual int vfunc6();
	virtual void vfunc8();
	virtual int vfunc14();

	char m_04[0x3c - 0x04];
	// The entity the collision property belongs to; several slots just forward to it.
	CBaseEntity *m_pOuter;

	void sub_100dc480(int solid);	// "CCollisionProperty::SetSolid" (called through the stub at 0x1000428c)
};
