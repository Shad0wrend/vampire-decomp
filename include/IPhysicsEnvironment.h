// IPhysicsEnvironment: the vphysics environment behind the engine pointer at 0x10723940 (physenv). Only the slots the
// decompiled code calls are typed; the others are placeholders that keep the slot numbers right.
#pragma once

#define PENV1(n) virtual void vfunc##n();
#define PENV10(p) PENV1(p##0) PENV1(p##1) PENV1(p##2) PENV1(p##3) PENV1(p##4) PENV1(p##5) PENV1(p##6) PENV1(p##7) PENV1(p##8) PENV1(p##9)

class IPhysicsEnvironment
{
public:
	PENV1(0) PENV1(1) PENV1(2) PENV1(3) PENV1(4) PENV1(5) PENV1(6) PENV1(7) PENV1(8) PENV1(9)
	virtual void *vfunc10(void *pObject, void *pParams);	// slot 10 CreateFluidController(object, fluidparams_t *)
	PENV1(11) PENV1(12) PENV1(13) PENV1(14) PENV1(15) PENV1(16) PENV1(17) PENV1(18) PENV1(19)
	PENV1(20) PENV1(21) PENV1(22)
	virtual void vfunc23(void *pConstraint);	// slot 23 DestroyConstraint (CPhysConstraint's destructor body 0x1002b130 passes the constraint object at +0x450)
	PENV1(24) PENV1(25) virtual void vfunc26(float flFrameTime);	// slot 26: the frame step, handed the frame time by PhysFrame (0x1002ea40)
	PENV1(27) PENV1(28) PENV1(29)
	PENV1(30) PENV1(31) PENV1(32) PENV1(33) PENV1(34) PENV1(35)
	virtual void vfunc36(void *pController);	// slot 36 (+0x90) DestroyShadowController (CPhysicsAnimlink's destructor body 0x1014efb0 passes the shadow controller at +0x4c0)
	PENV1(37) PENV1(38) PENV1(39)
	virtual void vfunc40(void *pController);	// slot 40 DestroyMotionController
	PENV1(41) PENV1(42) PENV1(43) PENV1(44) PENV1(45) PENV1(46) PENV1(47) PENV1(48) PENV1(49) PENV1(50)
	virtual void vfunc51();	// slot 51: called by the save / restore block handler's slot 8 before it frees its tree
};

#undef PENV1
#undef PENV10
