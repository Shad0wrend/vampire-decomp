// IPhysicsObject: the physics object behind CBaseEntity's +0x36c pointer. Only the slots the decompiled code calls are typed.
#pragma once

class Vector;
class QAngle;

class IPhysicsShadowController
{
public:
	virtual void vfunc0(); virtual void vfunc1(const Vector &position, const QAngle &angles, float timeOffset); virtual void vfunc2(); virtual void vfunc3();
	virtual void vfunc4(float flValue);
};

class IPhysicsObject
{
public:
	virtual void vfunc0(); virtual bool vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual bool vfunc4();
	virtual void vfunc5(); virtual void *vfunc6(); virtual void vfunc7(unsigned int flags); virtual unsigned int vfunc8(); virtual void vfunc9();	/* slot 7/8 Set/GetCallbackFlags-like (ragdoll code: vfunc7(vfunc8() | 8)) */	/* slot 6 GetGameData */
	virtual unsigned short vfunc10();	/* slot 10 GetGameFlags */ virtual void vfunc11(float flMass);	/* slot 11 SetMass */
	virtual float vfunc12();	// slot 12 GetMass
	virtual float vfunc13(); virtual float *vfunc14(float *pOut);
	virtual Vector *vfunc15(Vector *pOut); virtual void vfunc16(); virtual void vfunc17(const Vector *pVelocity, const Vector *pAngVelocity);	// slot 17: called by CGravControllerPoint::sub_10148a20 as (0, &vector)
	virtual void vfunc18(const Vector *a, Vector *b); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(int a); virtual void vfunc22(int a); virtual void vfunc23();
	virtual void vfunc24(int a);	// slot 24: called with 0 by CPhysicsPropContested::vfunc103 and CBaseEntity::vfunc202 / sub_100aaa40 (through the entity's +0x36c)
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(Vector *pOut, const Vector *pIn); virtual void vfunc28(void *pOut, const void *pIn); virtual void vfunc29();
	virtual void vfunc30(const Vector *pPosition); virtual void vfunc31(const Vector *pVelocity, const Vector *pAngVelocity);	// slot 30 SetPosition-like (one vec), slot 31 AddVelocity-like (ragdoll code 0x1019c0b0)
	virtual void vfunc32(const Vector *pForce, const Vector *pWorldPosition, Vector *pCenterForce, Vector *pCenterTorque);	// slot 32 CalculateForceOffset
	virtual void vfunc33(const Vector *pForce, const Vector *pWorldPosition, Vector *pCenterForce, Vector *pCenterTorque);	// slot 33: the same four arguments (CPhysThruster::vfunc241 asks it for the thruster's linear / angular parts)
	virtual void vfunc34(const Vector *pVel); virtual void vfunc35(); virtual void vfunc36(const void *pMatrix, int bTeleport);	// slot 36 (+0x90): SetPositionMatrix(matrix3x4 *, 1) (0x1019c330)
	virtual void vfunc37(Vector *pVec, int a);	// slot 37 (+0x94): (vec, 0) (0x1019c0b0)
	virtual void vfunc38(float *pMatrix); virtual void vfunc39(float *pPosition, float *pAngles);	// slot 39 GetPosition
	virtual void vfunc40(float *pVelocity, float *pAngVelocity);	// slot 40 GetVelocity (either pointer may be null)
	virtual void vfunc41(const Vector *pVelocity, const Vector *pAngVelocity);	// slot 41 AddVelocity
	virtual void vfunc42();
	virtual void vfunc43();
	virtual char vfunc44(Vector *pContactPoint, IPhysicsObject **ppObject);	// slot 44 GetContactPoint
	virtual void vfunc45(float flMaxSpeed, float flMaxAngularSpeed, int a, int b);	// slot 45 SetShadow
	virtual void vfunc46(const float *pPosition, const float *pAngles, int a, int b);	// slot 46 UpdateShadow
	virtual int vfunc47(Vector *pPosition, Vector *pAngles); virtual IPhysicsShadowController *vfunc48(); virtual int vfunc49(const Vector *pOrigin, const Vector *pAngles);	// slot 49 (+0xc4): handed (&vec3_origin, &vec3_angle) by CRagdollProp 0x101554a0, result goes to collision slot 18
	virtual void vfunc50(); virtual void vfunc51(); virtual bool vfunc52();
	virtual float vfunc53(void *pShadowParams, float flSecondsToArrive, float flDeltaTime);	// slot 53 ComputeShadowControl
	virtual void vfunc54(); virtual void vfunc55(); virtual void vfunc56(); virtual void vfunc57();
	virtual float vfunc58(const Vector &unitDirection) const;	// slot 58 CalculateLinearDrag
	virtual float vfunc59(const Vector &objectSpaceRotationAxis) const;	// slot 59 CalculateAngularDrag
};
