// IPhysicsEnvironment: the vphysics environment behind the engine pointer at 0x10723940 (physenv). Only the slots the
// decompiled code calls are typed; the others are placeholders that keep the slot numbers right.
#pragma once

#define PENV1(n) virtual void vfunc##n();
#define PENV10(p) PENV1(p##0) PENV1(p##1) PENV1(p##2) PENV1(p##3) PENV1(p##4) PENV1(p##5) PENV1(p##6) PENV1(p##7) PENV1(p##8) PENV1(p##9)

class IPhysicsEnvironment
{
public:
	PENV1(0) PENV1(1) PENV1(2) PENV1(3) PENV1(4) PENV1(5) PENV1(6) PENV1(7) PENV1(8) PENV1(9)
	PENV10(1) PENV10(2)
	PENV1(30) PENV1(31) PENV1(32) PENV1(33) PENV1(34) PENV1(35) PENV1(36) PENV1(37) PENV1(38) PENV1(39)
	virtual void vfunc40(void *pController);	// slot 40 DestroyMotionController
};

#undef PENV1
#undef PENV10
