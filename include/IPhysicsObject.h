// IPhysicsObject: the physics object behind CBaseEntity's +0x36c pointer. Only the slots the decompiled code calls are typed.
#pragma once

class Vector;

class IPhysicsObject
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void *vfunc6(); virtual void vfunc7(unsigned int flags); virtual unsigned int vfunc8(); virtual void vfunc9();	/* slot 7/8 Set/GetCallbackFlags-like (ragdoll code: vfunc7(vfunc8() | 8)) */	/* slot 6 GetGameData */
	virtual unsigned short vfunc10();	/* slot 10 GetGameFlags */ virtual void vfunc11(float flMass);	/* slot 11 SetMass */
	virtual float vfunc12();	// slot 12 GetMass
	virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(const Vector *pVelocity, const Vector *pAngVelocity);	// slot 17: called by CGravControllerPoint::sub_10148a20 as (0, &vector)
	virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23();
	virtual void vfunc24(int a);	// slot 24: called with 0 by CPhysicsPropContested::vfunc103 and CBaseEntity::vfunc202 / sub_100aaa40 (through the entity's +0x36c)
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31();
	virtual void vfunc32(const Vector *pForce, const Vector *pWorldPosition, Vector *pCenterForce, Vector *pCenterTorque);	// slot 32 CalculateForceOffset
	virtual void vfunc33(const Vector *pForce, const Vector *pWorldPosition, Vector *pCenterForce, Vector *pCenterTorque);	// slot 33: the same four arguments (CPhysThruster::vfunc241 asks it for the thruster's linear / angular parts)
	virtual void vfunc34(); virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37();
	virtual void vfunc38(); virtual void vfunc39(float *pPosition, float *pAngles);	// slot 39 GetPosition
	virtual void vfunc40(float *pVelocity, float *pAngVelocity);	// slot 40 GetVelocity (either pointer may be null)
	virtual void vfunc41(const Vector *pVelocity, const Vector *pAngVelocity);	// slot 41 AddVelocity
	virtual void vfunc42();
	virtual void vfunc43();
	virtual char vfunc44(Vector *pContactPoint, IPhysicsObject **ppObject);	// slot 44 GetContactPoint
	virtual void vfunc45(float flMaxSpeed, float flMaxAngularSpeed, int a, int b);	// slot 45 SetShadow
	virtual void vfunc46(const float *pPosition, const float *pAngles, int a, int b);	// slot 46 UpdateShadow
	virtual void vfunc47(); virtual void vfunc48(); virtual void vfunc49();
	virtual void vfunc50(); virtual void vfunc51(); virtual void vfunc52();
	virtual float vfunc53(void *pShadowParams, float flSecondsToArrive, float flDeltaTime);	// slot 53 ComputeShadowControl
};
