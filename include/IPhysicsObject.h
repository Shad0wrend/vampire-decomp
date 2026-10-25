// IPhysicsObject: the physics object behind CBaseEntity's +0x36c pointer. Only the slots the decompiled code calls are typed.
#pragma once

class Vector;

class IPhysicsObject
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11();
	virtual float vfunc12();	// slot 12 GetMass
	virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23();
	virtual void vfunc24(int a);	// slot 24: called with 0 by CPhysicsPropContested::vfunc103 and CBaseEntity::vfunc202 / sub_100aaa40 (through the entity's +0x36c)
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31();
	virtual void vfunc32(const Vector *pForce, const Vector *pWorldPosition, Vector *pCenterForce, Vector *pCenterTorque);	// slot 32 CalculateForceOffset
	virtual void vfunc33(); virtual void vfunc34(); virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37();
	virtual void vfunc38(); virtual void vfunc39();
	virtual void vfunc40(float *pVelocity, float *pAngVelocity);	// slot 40 GetVelocity (either pointer may be null)
	virtual void vfunc41(); virtual void vfunc42();
	virtual void vfunc43();
	virtual char vfunc44(Vector *pContactPoint, IPhysicsObject **ppObject);	// slot 44 GetContactPoint
};
