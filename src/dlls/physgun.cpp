// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 59 blocks
#include "vampire.h"

// FUNCTION: 0x10148370 size=0x1
#include "CGravityPellet.h"
void CGravityPellet::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x10148390 size=0xdc
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CGravityPellet.h"
#include "ScopeTrace.h"

struct CCollisionObj { void sub_1000428c(int solid); };

struct CGravityPelletFields
{
	char m_pad0000[0x19c];
	unsigned int m_nFlags;	// 0x19c
	unsigned char m_r, m_g, m_b;	// 0x1a0
	char m_pad01a3[0x734 - 0x1a3];
	unsigned char m_b734;
};

void CGravityPellet::vfunc103()
{
	CBaseEntity *e = (CBaseEntity *)this;
	e->vfunc104();
	int tmp;
	const char *s = *e->vfunc9(&tmp);
	e->vfunc105(s ? s : g_106b8540);
	{
		ScopeTrace t("CBaseEntity::SetSolid", e->m_name26c ? e->m_name26c : g_106b8540);
		((CCollisionObj *)((char *)e + 0x270))->sub_1000428c(0);
	}
	e->vfunc93(0, 0);
	CGravityPelletFields *f = (CGravityPelletFields *)this;
	f->m_nFlags |= 0x20;
	f->m_r = 0xff;
	f->m_g = 0;
	f->m_b = 0;
	f->m_b734 = 0;
}
// END FUNCTION

// FUNCTION: 0x101484b0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_1071a48c(&CPrecacheRegister::PrecacheFn_Other, "gravity_pellet");
// END FUNCTION

// FUNCTION: 0x10148500 size=0x6
#include "datamap.h"
#include "CGravityPellet.h"
namespace lifted {
extern char g_1057b7c0;
}
datamap_t *CGravityPellet::vfunc82()
{
    return (datamap_t *)&lifted::g_1057b7c0;
}
// END FUNCTION

// FUNCTION: 0x10148520 size=0x5
int * sub_10148560(void);
int * g_1071a498 = ((int * (*)(int))sub_10148560)(0);
// END FUNCTION

// FUNCTION: 0x10148560 size=0x106
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern int g_1057b7c0[2];
ISaveRestoreOps *sub_10045d90(int type);
void sub_10001ce9();

int *sub_10148560()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 10, "m_pConstraint", {0x730, 0}, 1, 2, 0, sub_10045d90(5), 0 },
        { 5, "m_isInert", {0x734, 0}, 1, 2, 0, 0, 0 },
        { 0, "InputOnBreak", {0, 0}, 1, 8, "ConstraintBroken", 0, (void *)sub_10001ce9 },
    };
    g_1057b7c0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1057b7c0[0] = (int)&dataDesc[1];
    return g_1057b7c0;
}
// END FUNCTION

// FUNCTION: 0x101486c0 size=0xa
void sub_10014614(int);

struct CFooUnit_101486c0 {
    void sub_101486c0(int b);
};

void CFooUnit_101486c0::sub_101486c0(int b)
{
    sub_10014614((int)this);
}
// END FUNCTION

// FUNCTION: 0x101486e0 size=0x27
#include "CGravityPellet.h"

struct IPhysicsEnvironmentStub
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22();
	virtual void DestroySpring(void *pSpring);
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

extern IPhysicsEnvironmentStub *g_10723940;
extern void *vt_1046c424[];

// TARGET: CGravityPellet::sub_101486e0
void CGravityPellet::sub_101486e0()
{
	*(void ***)this = vt_1046c424;
	if (m_pSpring)
		g_10723940->DestroySpring(m_pSpring);
	((CBaseEntityDtor *)this)->sub_1008b3c0();
}
// END FUNCTION

// FUNCTION: 0x10148720 size=0x1e
#include "CGravityPellet.h"

void sub_100aa7b0(void *p);

// TARGET: CGravityPellet::vfunc5
CGravityPellet *CGravityPellet::vfunc5(unsigned int flags)
{
	sub_10004e1c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10148750 size=0x18
#include "CGravControllerPoint.h"

CGravControllerPoint::CGravControllerPoint()
{
    m_hAttached78.Set(0);
    m_hOther7c.Set(0);
}
// END FUNCTION

// FUNCTION: 0x10148780 size=0xb
namespace lifted {
extern char g_1046c920;
int sub_10008580();
}
struct CUnknown10148780 { int sub_10148780(); };
int CUnknown10148780::sub_10148780()
{
    *(int *)this = (int)&lifted::g_1046c920;
    return lifted::sub_10008580();
}
// END FUNCTION

// FUNCTION: 0x101487a0 size=0x1f4
#include "CGravControllerPoint.h"
#include "CGlobalEntityList.h"
#include "IPhysicsObject.h"
#include "IPhysicsEnvironment.h"
#include "CUnknown10739d08.h"
#include "globalvars.h"
#include "CEntityVSlots.h"

extern IPhysicsEnvironment *g_10723940;
extern CGlobalEntityList *g_10566458;
extern CUnknown10739d08 g_10739d08;
extern int g_1057b7bc;
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *p);
void sub_10158c00(int a, int b);

#define WV1(n) virtual void w##n();
#define WV10(p) WV1(p##0) WV1(p##1) WV1(p##2) WV1(p##3) WV1(p##4) WV1(p##5) WV1(p##6) WV1(p##7) WV1(p##8) WV1(p##9)
struct CWeaponView278 {
	WV10(0) WV10(1) WV10(2) WV10(3) WV10(4) WV10(5) WV10(6) WV10(7) WV10(8) WV10(9)
	WV10(10) WV10(11) WV10(12) WV10(13) WV10(14) WV10(15) WV10(16) WV10(17) WV10(18) WV10(19)
	WV10(20) WV10(21) WV10(22) WV10(23) WV10(24) WV10(25) WV10(26)
	WV1(270) WV1(271) WV1(272) WV1(273) WV1(274) WV1(275) WV1(276) WV1(277)
	virtual float slot278();
};

struct CMotionCtlView {
	virtual void v0();
	virtual void v1();
	virtual void v2(IPhysicsObject *pObject);
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(int n);
};

void CGravControllerPoint::sub_101487a0(CBaseEntity *pEntity, IPhysicsObject *pObject, const Vector *pCenter, CBaseEntity *pOwner)
{
	m_hAttached78 = pEntity;
	m_hOther7c = pOwner;
	pObject->vfunc27(&m_vec04, pCenter);
	m_vec1c = *pCenter;
	pObject->vfunc18(0, &m_vec5c);
	float flVel = (float)g_1057b7bc;
	pObject->vfunc17(0, (const Vector *)&flVel);
	m_n74 = 0;
	m_pController90 = g_10723940->vfunc39(this);
	((CMotionCtlView *)m_pController90)->v2(pObject);
	((CMotionCtlView *)m_pController90)->v8(2);
	m_vec10 = *pCenter;
	if (!g_10566458->sub_100290c0((const unsigned int *)&m_hAttached78))
		m_vec1c.sub_1003e4b0(*pCenter);
	m_fl8c = gpGlobals->frametime;
	g_10739d08.sub_101e8640(pOwner);
	m_vec5c.z = ((CWeaponView278 *)sub_1032e7b0(pOwner))->slot278();
	m_vec80 = *(Vector *)((CEntityVSlots *)pEntity)->slot219();
	float flMul = g_10739d08.sub_101e86e0(pOwner);
	{
		Vector tmp;
		Vector *pv = pObject->vfunc15(&tmp);
		m_vec68 = *pv * flMul;
	}
	int nObjA = m_hAttached78.Get()->m_obj36c;
	sub_10158c00(m_hOther7c.Get()->m_obj36c, nObjA);
}
// END FUNCTION

// FUNCTION: 0x10148a20 size=0x171
#include "CGravControllerPoint.h"
#include "IPhysicsObject.h"
#include "IPhysicsEnvironment.h"

extern IPhysicsEnvironment *g_10723940;
extern Vector g_1070d1b0;
void sub_1000adc6(int pObjectA, int pObjectB);

// TARGET: CGravControllerPoint::sub_10148a20
void CGravControllerPoint::sub_10148a20()
{
	if (m_hOther7c && m_hAttached78)
	{
		int pObjB = m_hAttached78->m_obj36c;
		int pObjA = m_hOther7c->m_obj36c;
		sub_1000adc6(pObjA, pObjB);
	}

	CBaseEntity *pEnt = m_hAttached78.Get();
	if (pEnt)
	{
		IPhysicsObject *pPhys = (IPhysicsObject *)pEnt->m_obj36c;
		if (pPhys)
		{
			pPhys->vfunc2();
			pPhys->vfunc17(0, &m_vec5c);
		}
	}
	m_hAttached78 = (CBaseEntity *)0;
	g_10723940->vfunc40(m_pController90);
	m_pController90 = 0;
	m_vec10 = g_1070d1b0;
	m_vec1c = g_1070d1b0;
}
// END FUNCTION

// FUNCTION: 0x10148c00 size=0x25
// TARGET: sub_10148c00
void sub_10148c00(float *v, float s, float *out)
{
    out[2] = s * v[0];
    out[0] = s * v[1];
    out[1] = s * v[2];
}
// END FUNCTION

// FUNCTION: 0x10148c40 size=0xc13
#define inline __forceinline
#include "Vector.h"
#undef inline
#include "CGravControllerPoint.h"
#include "VMatrix.h"
#include "QAngle.h"
#include <math.h>

extern Vector g_1070d1b0;	// vec3_origin

#define RAD2DEG(x) ((float)(x) * 57.29578f)
#define clamp(val, min, max) (((val) > (max)) ? (max) : (((val) < (min)) ? (min) : (val)))

class IPhysObjSimV
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25();
	virtual void LocalToWorld(Vector *worldPosition, const Vector &localPosition);	// 26
	virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void CalculateForceOffset(const Vector &forceVector, const Vector &worldPosition, Vector *centerForce, Vector *centerTorque);	// 32
	virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
	virtual void v38(); virtual void v39();
	virtual void GetVelocity(Vector *velocity, Vector *angularVelocity);	// 40
	virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45();
	virtual void v46();
	virtual void GetShadowPosition(Vector *position, QAngle *angles);	// 47
};

struct VMatrixSimV : VMatrix
{
	Vector VMul3x3(const Vector &vVec) const
	{
		return Vector(
			m[0][0]*vVec.x + m[0][1]*vVec.y + m[0][2]*vVec.z,
			m[1][0]*vVec.x + m[1][1]*vVec.y + m[1][2]*vVec.z,
			m[2][0]*vVec.x + m[2][1]*vVec.y + m[2][2]*vVec.z
			);
	}
	Vector VMul4x3(const Vector &vVec) const
	{
		return Vector(
			m[0][0]*vVec.x + m[0][1]*vVec.y + m[0][2]*vVec.z + m[0][3],
			m[1][0]*vVec.x + m[1][1]*vVec.y + m[1][2]*vVec.z + m[1][3],
			m[2][0]*vVec.x + m[2][1]*vVec.y + m[2][2]*vVec.z + m[2][3]
			);
	}
};

VMatrixSimV sub_1024cc50(const Vector &origin, const QAngle &angles);	// SetupMatrixOrgAngles

inline Vector CrossProductV(const Vector &a, const Vector &b)
{
	return Vector(a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x);
}

class AngularImpulseV : public Vector
{
public:
	AngularImpulseV() {}
	AngularImpulseV(const Vector &init) : Vector(init) {}
};
AngularImpulseV sub_101d2b40(const VMatrixSimV &matrix, const Vector &vec, float scale);	// WorldToLocalRotation

struct CGravControllerPointV
{
	void *vptr;
	Vector			m_localPosition;	// 0x04
	Vector			m_targetPosition;	// 0x10
	Vector			m_worldPosition;	// 0x1c
	Vector			m_localAlignNormal;	// 0x28
	Vector			m_localAlignPosition;	// 0x34
	Vector			m_targetAlignNormal;	// 0x40
	Vector			m_targetAlignPosition;	// 0x4c
	bool			m_align;	// 0x58
	float			m_saveDamping;	// 0x5c
	float			m_maxVel;	// 0x60
	float			m_maxAcceleration;	// 0x64
	Vector			m_maxAngularAcceleration;	// 0x68
	int				m_n74;
	int				m_attachedEntity;	// 0x78
	int				m_h7c;
	QAngle			m_targetRotation;	// 0x80
	float			m_timeToArrive;	// 0x8c

};

namespace block_10148c40 {
	struct VectorUnit : Vector
	{
		VectorUnit &sub_1003e4b0(const Vector &v);
	};
#pragma auto_inline(off)
	VectorUnit &VectorUnit::sub_1003e4b0(const Vector &v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
		return *this;
	}
#pragma auto_inline(on)
}
using namespace block_10148c40;

int CGravControllerPoint::vfunc0(void *pController, int pObjectI, float deltaTime, Vector &linear, Vector &angularV)
{
	CGravControllerPointV *s = (CGravControllerPointV *)this;
	IPhysObjSimV *pObject = (IPhysObjSimV *)pObjectI;
	AngularImpulseV &angular = (AngularImpulseV &)angularV;

	Vector vel;
	AngularImpulseV angVel;

	float fracRemainingSimTime = 1.0;
	if ( s->m_timeToArrive > 0 )
	{
		fracRemainingSimTime *= deltaTime / s->m_timeToArrive;
		if ( fracRemainingSimTime > 1 )
		{
			fracRemainingSimTime = 1;
		}
	}

	s->m_timeToArrive -= deltaTime;
	if ( s->m_timeToArrive < 0 )
	{
		s->m_timeToArrive = 0;
	}

	float invDeltaTime = (1.0f / deltaTime);
	Vector world;
	pObject->LocalToWorld( &world, s->m_localPosition );
	s->m_worldPosition = world;
	pObject->GetVelocity( &vel, &angVel );
	float damping = 1.0;
	world += vel * deltaTime * damping;
	Vector delta = (s->m_targetPosition - world) * fracRemainingSimTime * invDeltaTime;
	Vector alignDir;
	linear = g_1070d1b0;
	((VectorUnit &)angular).sub_1003e4b0(AngularImpulseV(g_1070d1b0));

	if ( s->m_align )
	{
		QAngle angles;
		Vector origin;
		Vector axis;
		AngularImpulseV torque;

		pObject->GetShadowPosition( &origin, &angles );
		// align local normal to target normal
		VMatrixSimV tmp = sub_1024cc50( origin, angles );
		Vector worldNormal = tmp.VMul3x3( s->m_localAlignNormal );
		axis = CrossProductV( worldNormal, s->m_targetAlignNormal );
		float trig = VectorNormalize(axis);
		float alignRotation = RAD2DEG(asin(trig));
		axis *= alignRotation;
		if ( alignRotation < 10 )
		{
			float dot = DotProduct( worldNormal, s->m_targetAlignNormal );
			// probably 180 degrees off
			if ( dot < 0 )
			{
				if ( worldNormal.x < 0.5 )
				{
					axis.Init(10,0,0);
				}
				else
				{
					axis.Init(0,0,10);
				}
				alignRotation = 10;
			}
		}

		Vector worldRotCenter = tmp.VMul4x3( s->m_localAlignPosition );
		Vector rotSrc = world - worldRotCenter;
		Vector rotDest = s->m_targetPosition - worldRotCenter;

		Vector srcN = rotSrc;
		VectorNormalize( srcN );
		Vector tangent = CrossProductV( srcN, s->m_targetAlignNormal );
		float len = VectorNormalize( tangent );

		if ( len > 0.08 )
		{
			Vector binormal = CrossProductV( s->m_targetAlignNormal, tangent );

			const Vector &bn = binormal;
			Vector planeSrc( DotProduct( rotSrc, tangent ), DotProduct( rotSrc, bn ), 0 );
			Vector planeDest( DotProduct( rotDest, tangent ), DotProduct( rotDest, binormal ), 0 );

			float rotRadius = VectorNormalize( planeSrc );
			float destRadius = VectorNormalize( planeDest );
			if ( rotRadius > 0.1 )
			{
				if ( destRadius < rotRadius )
				{
					destRadius = rotRadius;
				}
				float angleSrc = atan2( planeSrc.y, planeSrc.x );
				float angleDest = atan2( planeDest.y, planeDest.x );
				float angleDiff = angleDest - angleSrc;
				angleDiff = RAD2DEG(angleDiff);
				axis += s->m_targetAlignNormal * angleDiff;
			}
		}

		torque = sub_101d2b40( tmp, axis, 1 );
		torque *= fracRemainingSimTime * invDeltaTime;
		torque -= angVel * 1.0;	 // damping
		for ( int i = 0; i < 3; i++ )
		{
			if ( torque[i] > 0 )
			{
				if ( torque[i] > s->m_maxAngularAcceleration[i] )
					torque[i] = s->m_maxAngularAcceleration[i];
			}
			else
			{
				if ( torque[i] < -s->m_maxAngularAcceleration[i] )
					torque[i] = -s->m_maxAngularAcceleration[i];
			}
		}
		torque *= invDeltaTime;
		angular += torque;
		float factor = fabsf(alignRotation);
		if ( factor < 5 )
		{
			factor = clamp( factor, 0, 5 ) * (1/5);
			alignDir = s->m_targetAlignPosition - worldRotCenter;
			float planeForward = DotProduct( alignDir, s->m_targetAlignNormal );
			if ( planeForward > 1 )
			{
				alignDir = s->m_targetAlignNormal * planeForward;
			}
			Vector accel = alignDir * invDeltaTime * fracRemainingSimTime * (1-factor) * 0.20 * invDeltaTime;
			float mag = accel.Length();
			if ( mag > s->m_maxAcceleration )
			{
				VectorMultiply(accel, (s->m_maxAcceleration/mag), accel);
			}
			linear += accel;
		}
		linear -= vel*damping*invDeltaTime;
	}
	else
	{
		Vector nextVel = delta + vel;
		float nextSpeed = nextVel.Length();
		if ( nextSpeed > s->m_maxVel )
		{
			VectorMultiply(nextVel, (s->m_maxVel / nextSpeed), nextVel);
			delta = nextVel - vel;
		}

		delta *= invDeltaTime;

		float linearAccel = delta.Length();
		if ( linearAccel > s->m_maxAcceleration )
		{
			VectorMultiply(delta, s->m_maxAcceleration / linearAccel, delta);
		}

		Vector accel;
		AngularImpulseV angAccel;
		pObject->CalculateForceOffset( delta, world, &accel, &angAccel );

		linear += accel;
		angular += angAccel;
	}

	return 3;
}
// END FUNCTION

// FUNCTION: 0x10149b70 size=0x63
#include "CWeaponGravityGun.h"
CGravControllerPoint::CGravControllerPoint()
{
    m_hAttached78.Set(0);
    m_hOther7c.Set(0);
}
// TARGET: CWeaponGravityGun::CWeaponGravityGun
CWeaponGravityGun::CWeaponGravityGun()
{
	m_n910 = 0;
	m_bB25 = 0;
	m_b914 = 0;
	m_b8b4 = 1;
	m_hB1c = -1;
	m_hB18 = -1;
}
// END FUNCTION

// FUNCTION: 0x10149ee0 size=0x1a
#include "CWeaponGravityGun.h"
char CWeaponGravityGun::vfunc316(int a)
{
	sub_1014d110();
	CBaseCombatWeapon::vfunc316(a);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10149f10 size=0xd
#include "CWeaponGravityGun.h"

void CWeaponGravityGun::vfunc298(CBaseEntity *pOwner, float unused)
{
	sub_10252ea0(pOwner, unused);
}
// END FUNCTION

// FUNCTION: 0x10149f30 size=0x5
#include "CWeaponGravityGun.h"
#include "CBaseCombatWeapon.h"

// TARGET: CWeaponGravityGun::vfunc300
// the game's 0x10149f30: a tail call (jmp) of CBaseCombatWeapon::vfunc300
void CWeaponGravityGun::vfunc300()
{
	CBaseCombatWeapon::vfunc300();
}
// END FUNCTION

// FUNCTION: 0x10149f50 size=0x16
#include "CWeaponGravityGun.h"

// TARGET: CWeaponGravityGun::vfunc117
int CWeaponGravityGun::vfunc117()
{
	unsigned int result = CBaseCombatWeapon::vfunc117();
	if (m_n910)
		result |= 0x40;
	return (int)(result);
}
// END FUNCTION

// FUNCTION: 0x10149f80 size=0x3
// TARGET: sub_10149f80
bool __cdecl sub_10149f80() { return true; }
// END FUNCTION

// FUNCTION: 0x10149fa0 size=0x7
#include "CWeaponGravityGun.h"

char CWeaponGravityGun::vfunc267()
{
	return m_bB25;
}
// END FUNCTION

// FUNCTION: 0x10149fc0 size=0x2b
#include "CWeaponGravityGun.h"

struct CGargoyleMemberUnit {
	void sub_1000a123();
};

struct CGargoyleBaseUnit {
	void sub_10013a57();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CWeaponGravityGun::vfunc5
CBaseEntity  *CWeaponGravityGun::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x93c))->sub_1000a123();
	((CGargoyleBaseUnit *)this)->sub_10013a57();
	if (flags & 1)
		sub_10009fc5(this);
	return (CBaseEntity  *)(this);
}
// END FUNCTION

// FUNCTION: 0x1014a000 size=0x30
#include "CWeaponGravityGun.h"
void CWeaponGravityGun::vfunc103()
{
	vfunc104();
	vfunc105((const char *)vfunc343());
	m_bB25 = 0;
	m_b914 = 0;
}
// END FUNCTION

// FUNCTION: 0x1014a040 size=0x4f
#include "CWeaponGravityGun.h"
#include "engineiface.h"
#include "engineserver.h"
extern const char *g_1057b8a0;
extern const char *g_1057b888[6];
extern int g_1071a36c;
// TARGET: CWeaponGravityGun::vfunc104
void CWeaponGravityGun::vfunc104()
{
	CBaseCombatWeapon::vfunc104();
	enginesound->vfunc0(g_1057b8a0, 0);
	for (unsigned int i = 0; i < 6; i++)
		enginesound->vfunc0(g_1057b888[i], 0);
	g_1071a36c = engine->vfunc13("hud/PhysicsHand_Closed.vmt", 0);
}
// END FUNCTION

// FUNCTION: 0x1014a0b0 size=0x14
struct CUnit1014a0b0
{
	char m_pad0000[0x910];
	int m_n910;

	void sub_1014abe0();
	void sub_1014a0b0();
};

// TARGET: CUnit1014a0b0::sub_1014a0b0
void CUnit1014a0b0::sub_1014a0b0()
{
	sub_1014abe0();
	m_n910 = 1;
}
// END FUNCTION

// FUNCTION: 0x1014a0e0 size=0x1b
// TARGET: sub_1014a0e0
struct CUnk1014a0e0 {
    void *sub_10335950(int a);
};
struct CUnk1014a0e0Callee {
    void sub_1014abe0();
};
int sub_102587f0();
void sub_1014a0e0(CUnk1014a0e0 *p)
{
    void *r = p->sub_10335950(sub_102587f0());
    if (r) {
        ((CUnk1014a0e0Callee *)r)->sub_1014abe0();
    }
}
// END FUNCTION

// FUNCTION: 0x1014a110 size=0x1e
// TARGET: sub_1014a110
struct CUnk1014a110
{
    void *sub_10335950(int a);
};
int sub_102587f0();
int __cdecl sub_1014a110(int param)
{
    int r = sub_102587f0();
    int *p = (int *)((CUnk1014a110 *)param)->sub_10335950(r);
    if (p == 0)
    {
        return 0;
    }
    return ((int (__fastcall *)(int *))(*(int **)p)[0x474 / 4])(p);
}
// END FUNCTION

// FUNCTION: 0x1014a140 size=0x1b
struct CUnk1014a140 {
    void *sub_10335950(int a);
};
struct CUnk1014a140Callee {
    void *sub_1014a1b0();
};

int sub_102587f0();

// TARGET: sub_1014a140
void *sub_1014a140(CUnk1014a140 *p)
{
    void *r = p->sub_10335950(sub_102587f0());
    if (!r)
        return 0;
    return ((CUnk1014a140Callee *)r)->sub_1014a1b0();
}
// END FUNCTION

// FUNCTION: 0x1014a170 size=0x5
// an empty inline constructor: the game's construct is a bare `ret`, no code names the global
struct CEmpty1014a170
{
	CEmpty1014a170() {}
};
CEmpty1014a170 g_empty_1014a170;
// END FUNCTION

// FUNCTION: 0x1014a1b0 size=0x244
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "QAngle.h"
#include "Ray_t.h"
#include "CWeaponGravityGun.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CTraceFilterSimple.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown10738964.h"
#include "engineserver.h"
// TARGET: CWeaponGravityGun::sub_1014a1b0

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10146570(const Vector *pStart, const Vector *pEnd, int r, int g, int b, int noDepth, float duration);
bool sub_1014a4a0(CBaseEntity *pEntity);
void *sub_1014a4f0(void *pWeapon, void *pPlayer);

extern CUnknown10738964 *g_1071a32c;
extern CGameTrace g_1071a3f0;
extern int g_1057b7b4;

namespace block_1014a1b0 {
inline void TraceHullInline(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.Init(vecAbsStart, vecAbsEnd, hullMin, hullMax);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}
}
using namespace block_1014a1b0;

struct CWeaponGravityGunView : CWeaponGravityGun
{
	CBasePlayer *GetPlayerOwner()
	{
		CBaseEntity *pOwner = (CBaseEntity *)sub_102521f0();
		if (!pOwner)
			return 0;
		return (CBasePlayer *)pOwner->m_pA8;
	}
};

void *CWeaponGravityGun::sub_1014a1b0()
{
	CBasePlayer *pPlayer = ((CWeaponGravityGunView *)this)->GetPlayerOwner();
	if (pPlayer == 0)
		return 0;

	if (engine->vfunc120() != *(unsigned int *)((char *)this + 0x884))
	{
		*(int *)((char *)this + 0x87c) = 0;
		*(unsigned int *)((char *)this + 0x884) = engine->vfunc120();

		if (!g_1071a32c->vfunc1() && g_1071a32c->m_n2c >= 1)
		{
			void *pResult = sub_1014a4f0(this, pPlayer);
			*(void **)((char *)this + 0x87c) = pResult;
			return pResult;
		}

		Vector vecForward;
		sub_10139610((const QAngle &)pPlayer->m_vec206c, &vecForward, 0, 0);

		CEntityVSlots *pSlots = (CEntityVSlots *)pPlayer;
		Vector vecStart;
		vecStart = pSlots->slot389(*pSlots->slot220());
		TraceHullInline(vecStart, vecStart + vecForward * (float)g_1057b7b4, Vector(-4, -4, -4), Vector(4, 4, 4),
			0x46004003, pPlayer, 0, &g_1071a3f0);

		if (g_1071a3f0.m_fraction >= 1.0f || g_1071a3f0.m_pEnt == 0)
			return 0;
		CBaseEntity *pEnt = g_1071a3f0.m_pEnt;
		if (sub_1014a4a0(g_1071a3f0.m_pEnt))
			*(void **)((char *)this + 0x87c) = pEnt;
	}
	return *(void **)((char *)this + 0x87c);
}
// END FUNCTION

// FUNCTION: 0x1014a4a0 size=0x3a
extern int g_1057b7b0;
extern int g_1057b7b4;
extern float g_1071a41c;

struct CEntView1014a4a0
{
	char m_pad0000[0x4c];
	unsigned char m_flags4c;
	char m_pad004d[0xa0 - 0x4d];
	int m_n0a0;
};

// TARGET: sub_1014a4a0
char sub_1014a4a0(CEntView1014a4a0 *p)
{
	if (p && (p->m_flags4c & 0x1e) && !((float)g_1057b7b4 * g_1071a41c < (float)g_1057b7b0))
		return p->m_n0a0 == 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1014a4f0 size=0x463
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"
#include "CUnknown101cccf0.h"
#include "CCollisionProperty.h"
struct CUnknown1004f860 { void *sub_1004f860(); };

extern int g_1057b7b4;
extern int g_1057b7b0;
extern float g_1071a41c;
extern CUnknown10738964 *g_1071a32c;
void sub_10139610(void *pAngles, Vector *fwd, Vector *right, Vector *up);
void sub_1013c8c0(const Vector *a, const Vector *b, const Vector *c, Vector *out);

namespace block_1014a4f0
{
struct CEntView1014a4a0
{
	char m_pad0000[0x4c];
	unsigned char m_flags4c;
	char m_pad004d[0xa0 - 0x4d];
	int m_n0a0;
};

char sub_1014a4a0(CEntView1014a4a0 *p)
{
	if (p && (p->m_flags4c & 0x1e) && !((float)g_1057b7b4 * g_1071a41c < (float)g_1057b7b0))
		return p->m_n0a0 == 0;
	return 0;
}
}
using namespace block_1014a4f0;

inline void TraceLineCtorCalls(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((CUnknown1004f860 *)&ray)->sub_1004f860();
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

CBaseEntity *sub_1014a4f0(CBaseEntity *pIgnore, CBasePlayer *pPlayer)
{
	Vector forward;
	sub_10139610((char *)pPlayer + 0x206c, &forward, 0, 0);
	float flRange = (float)g_1057b7b4;
	Vector eye = pPlayer->vfunc193();
	Vector vecEnd = eye + forward * flRange;
	{
		CGameTrace tr;
		TraceLineCtorCalls(eye, vecEnd, 0x200400b, pIgnore, 0, &tr);
		if (sub_1014a4a0((CEntView1014a4a0 *)tr.m_pEnt))
			return (CBaseEntity *)tr.m_pEnt;
	}
	Vector searchCenter = eye;
	float nearestDot = 0.707f;
	CBaseEntity *pNearest = 0;
	CBaseEntity *pGround = (CBaseEntity *)((CEntityVSlots *)pPlayer)->slot209();
	if (pGround && sub_1014a4a0((CEntView1014a4a0 *)pGround))
	{
		pNearest = pGround;
		nearestDot = 0.707f;
	}
	CUnknown101cccf0 sphere;
	CBaseEntity *pObject;
	for (sphere.sub_101cccf0((int)&searchCenter, *(int *)&flRange, 0, 0); (pObject = sphere.sub_101ccd40()) != 0; ++sphere.m_nIndex)
	{
		if (pObject->m_pEdict2e0 && sub_1014a4a0((CEntView1014a4a0 *)pObject))
		{
			Vector mins, maxs, point;
			((CCollisionProperty *)((char *)pObject + 0x270))->vfunc15(&mins, &maxs);
			sub_1013c8c0(&mins, &maxs, &searchCenter, &point);
			Vector dir = point - searchCenter;
			VectorNormalize(dir);
			float dot = DotProduct(dir, forward);
			if (dot > nearestDot)
			{
				if (!g_1071a32c->vfunc1() && g_1071a32c->m_n2c >= 2)
				{
					CGameTrace trCheck;
					vecEnd = *((CEntityVSlots *)pObject)->slot217();
					UTIL_TraceLine(eye, vecEnd, 0x200400b, pIgnore, 0, &trCheck);
					if ((CBaseEntity *)trCheck.m_pEnt != pObject)
						continue;
				}
				pNearest = pObject;
				nearestDot = dot;
			}
		}
	}
	return pNearest;
}
// END FUNCTION

// FUNCTION: 0x1014aa80 size=0x67
#include "CWeaponGravityGun.h"
#include "CEHandleGet.h"

void *CWeaponGravityGun::vfunc285()
{
	unsigned int &h = *(unsigned int *)((char *)this + 0x918);
	if (EHandle_Get(h)) {
		unsigned int h2 = *(volatile unsigned int *)&h;
		return EHandle_Get(h2);
	}
	return sub_1014a1b0();
}
// END FUNCTION

// FUNCTION: 0x1014ab10 size=0x9c
#include "CBaseCombatCharacter.h"
#include "CWeaponGravityGun.h"

class CBaseCombatCharacter;
struct EntX { char pad[0x36c]; void *m_pPhys; };
struct EntInfo { EntX *ent; int serial; int pad; };
struct PhysObjX {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11();
	virtual float vfunc12();
};
struct GravTuneX {
	float sub_101e8480(CBaseCombatCharacter *pChar);
	float sub_101e8640(CBaseCombatCharacter *pChar);
};
extern char *g_10566458;
extern GravTuneX g_10739d08;
extern float g_104454c4;
extern float g_104492dc;

float CWeaponGravityGun::vfunc278()
{
	EntX *ent = 0;
	unsigned int h = *(unsigned int *)((char *)this + 0x918);
	if (h != 0xffffffff) {
		EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
		if (e->serial == (h >> 13))
			ent = e->ent;
	}
	PhysObjX *pObj = ent ? (PhysObjX *)ent->m_pPhys : 0;
	char *owner = (char *)sub_102521f0();
	if (owner) {
		CBaseCombatCharacter *pChar = *(CBaseCombatCharacter **)(owner + 0xa8);
		if (pChar && pObj) {
			float mass = pObj->vfunc12();
			if (mass <= g_104454c4)
				mass = 1.0f;
			g_10739d08.sub_101e8480(pChar);
			return g_10739d08.sub_101e8640(pChar) / mass;
		}
	}
	return g_104492dc;
}
// END FUNCTION

// FUNCTION: 0x1014abe0 size=0x10cf
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBasePlayer.h"
#include "CGameTrace.h"
#include "QAngle.h"
#include "Ray_t.h"
#include "CWeaponGravityGun.h"
#include "UTIL_Trace.h"
#include "engineserver.h"
#include "globalvars.h"
#include "IPhysicsObject.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CGravControllerPoint.h"
#include "IPhysicsEnvironment.h"
#include "CEntityVSlots.h"
#include "CUnknown101cccf0.h"
#include "CCollisionProperty.h"
#include "ConVar.h"

struct matrix3x4_t { float m[3][4]; };
void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139b90(const QAngle &angles, matrix3x4_t &matrix);
void sub_10138df0(const matrix3x4_t &in1, const matrix3x4_t &in2, matrix3x4_t &out);
void sub_10137ed0(const matrix3x4_t &m, QAngle &ang);
float sub_1013d400(float flTarget, float flValue, float flStep);
void sub_101cebc0(void *pPlayer, int a, int b);
char *sub_101d3730(const char *fmt, ...);
__declspec(dllimport) void DevMsg(const char *, ...);

#define GV(n) virtual void v##n();
#define GV10(p) GV(p##0) GV(p##1) GV(p##2) GV(p##3) GV(p##4) GV(p##5) GV(p##6) GV(p##7) GV(p##8) GV(p##9)

struct GGPhys
{
	GV(0) GV(1) GV(2) GV(3) GV(4) GV(5) GV(6) GV(7) GV(8) GV(9) GV(10) GV(11)
	virtual float GetMass();	// 12
	GV(13) GV(14) GV(15) GV(16) GV(17)
	virtual void GetDamping(float *speed, float *rot);	// 18
};

struct GGCollision
{
	GV(0)
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

struct GGEnt
{
	GV10(0) GV10(1) GV10(2) GV10(3) GV10(4) GV10(5)
	GV(60) GV(61) GV(62) GV(63)
	virtual void SetLocalAngles(const QAngle &a);	// 64
	GV(65) GV(66) GV(67) GV(68) GV(69)
	GV10(7) GV10(8) GV10(9) GV10(10) GV10(11) GV10(12) GV10(13) GV10(14) GV10(15) GV10(16) GV10(17) GV10(18) GV10(19)
	GV10(20)
	GV(210) GV(211) GV(212) GV(213) GV(214) GV(215) GV(216)
	virtual const Vector &GetAbsOrigin();	// 217
	virtual void SetAbsAngles(const QAngle &a);	// 218
	virtual const QAngle &GetAbsAngles();	// 219
	virtual const Vector &GetLocalOrigin();	// 220
	virtual const QAngle &GetLocalAngles();	// 221
	char m_pad4[0x270 - 4];
	GGCollision m_Collision;	// 0x270
	char m_pad274[0x2e0 - 0x274];
	int m_pEdict2e0;
	char m_pad2e4[0x36c - 0x2e4];
	GGPhys *m_pPhys;	// 0x36c
	const char *sub_100ab4f0();
	int sub_100a1250(const void *pInfo);
	GGPhys *VPhysicsGetObject() { return m_pPhys; }
	int edict() { return m_pEdict2e0; }
};

struct GGPlayer
{
	GV10(0) GV10(1) GV10(2) GV10(3) GV10(4) GV10(5) GV10(6) GV10(7) GV10(8) GV10(9)
	GV10(10) GV10(11) GV10(12) GV10(13) GV10(14) GV10(15) GV10(16) GV10(17) GV10(18) GV10(19)
	GV(200) GV(201) GV(202) GV(203) GV(204) GV(205) GV(206) GV(207) GV(208)
	virtual GGEnt *GetGroundEntity();	// 209 (0x344)

	GV(210) GV(211) GV(212) GV(213) GV(214) GV(215) GV(216) GV(217) GV(218)
	virtual const QAngle &GetAbsAngles();	// 219
	virtual const Vector &GetLocalOrigin();	// 220
	GV(221) GV(222) GV(223) GV(224) GV(225) GV(226) GV(227) GV(228) GV(229)
	GV10(23) GV10(24) GV10(25) GV10(26) GV10(27) GV10(28) GV10(29) GV10(30) GV10(31) GV10(32) GV10(33) GV10(34) GV10(35) GV10(36) GV10(37)
	GV(380) GV(381) GV(382) GV(383) GV(384) GV(385) GV(386) GV(387) GV(388)
	virtual Vector Weapon_ShootPosition(const Vector &src);	// 389
	char m_pad4[0x2e0 - 4];
	int m_pEdict2e0;
	char m_pad2e4[0x206c - 0x2e4];
	QAngle m_angEye;	// 0x206c
	char m_pad2078[0x2088 - 0x2078];
	unsigned int m_nButtons;	// 0x2088
	GGEnt *sub_1015d680(int index);
	void sub_1017df50(int level, float time, const char *pszReason);
	const QAngle &EyeAngles() { return m_angEye; }
	int edict() { return m_pEdict2e0; }
};

struct GGInfo
{
	char m_pad[0x4c];
	GGInfo *sub_101c26d0(void *pInflictor, void *pAttacker, int flDamage, int bitsDamageType, int a5, int a6, int a7);
};

struct GGStats
{
	float sub_101e8480(GGPlayer *pChar);
	float sub_101e8780(void *pChar);
	float sub_101e86e0(void *pChar);
	float sub_101e8640(void *pChar);
};
extern GGStats g_10739d08;

struct GGVar
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x28 - 4];
	float m_f28;
	int m_n2c;
};
extern GGVar *g_10721a1c;
extern GGVar *g_1071a37c;
extern GGVar *g_1071a44c;
extern float g_104454c4;
extern int g_1057b7b4;
extern int g_1057b7b8;

#define GF(g) ((g)->vfunc1() ? 0.0f : (g)->m_f28)
#define SQR(x) ((x) * (x))
extern ConVar g_1071a378;	// "debug_physics_drag_dist"
struct GGMatrix
{
	float m[16];
	GGMatrix() {}
	void sub_101d1460(int edict);
	void sub_10028060(float *pOut, const float *pIn);
};

struct GGPellet
{
	Vector localNormal;
	EHANDLE pellet;
	EHANDLE parent;
};

struct GGView
{
	char m_pad[0x918];
	EHANDLE m_hObject;	// 0x918
	float m_distance;	// 0x91c
	float m_movementLength;	// 0x920
	float m_lastYaw;	// 0x924
	int m_soundState;	// 0x928
	int m_viewModelIndex;	// 0x92c
	Vector m_vec930;	// 0x930
	void *m_gravVtable;	// 0x93c
	Vector m_localPosition;	// 0x940
	Vector m_targetPosition;	// 0x94c
	Vector m_worldPosition;	// 0x958
	Vector m_localAlignNormal;	// 0x964
	Vector m_localAlignPosition;	// 0x970
	Vector m_targetAlignNormal;	// 0x97c
	Vector m_targetAlignPosition;	// 0x988
	bool m_align;	// 0x994
	float m_saveDamping;	// 0x998
	float m_maxVel;	// 0x99c
	char m_pad9a0[0x9b4 - 0x9a0];
	EHANDLE m_attachedEntity;	// 0x9b4
	char m_pad9b8[4];
	QAngle m_targetRotation;	// 0x9bc
	float m_timeToArrive;	// 0x9c8
	void *m_controller;	// 0x9cc
	GGPellet m_activePellets[16];	// 0x9d0
	int m_nB10;
	int m_nB14;
	int m_pelletHeld;	// 0xb18
	int m_pelletAttract;	// 0xb1c
	float m_glueTime;	// 0xb20
	char m_bB24;
	char m_bB25;
	char m_padB26[2];
	int m_nB28;
	int m_nLift;	// 0xb2c
	int m_nDrag;	// 0xb30
	float m_flLowZ;	// 0xb34
	void SetAutoAlign(const Vector &localDir, const Vector &localPos, const Vector &worldAlignDir, const Vector &worldAlignPos)
	{
		m_align = true;
		m_localAlignNormal = -localDir;
		m_localAlignPosition = localPos;
		m_targetAlignNormal = worldAlignDir;
		m_targetAlignPosition = worldAlignPos;
	}
	void ClearAutoAlign()
	{
		m_align = false;
	}
};

struct GGGun : CWeaponGravityGun
{
	void sub_1014d7c0(GGEnt *pObject, const Vector &start, const Vector &end, float distance);
	void sub_1014cbf0(float flRadius, GGEnt *pObject);
	void sub_1014d140();
	void SetTargetPosition(const Vector &target)
	{
		GGView *v = (GGView *)this;
		v->m_targetPosition = target;
		if (v->m_attachedEntity == 0)
			v->m_worldPosition = target;
		v->m_timeToArrive = gpGlobals->frametime;
	}
	void GetPelletWorldCoords(int pelletIndex, Vector *worldPos, Vector *worldNormal)
	{
		GGView *v = (GGView *)this;
		if (worldPos)
			*worldPos = ((GGEnt *)v->m_activePellets[pelletIndex].pellet.Get())->GetAbsOrigin();
		if (worldNormal) {
			if (v->m_activePellets[pelletIndex].parent.Get()) {
				GGMatrix tmp;
				tmp.sub_101d1460(((GGEnt *)v->m_activePellets[pelletIndex].parent.Get())->m_pEdict2e0);
				Vector vX;
				tmp.sub_10028060(&vX.x, &v->m_activePellets[pelletIndex].localNormal.x);
				*worldNormal = vX;
			} else {
				*worldNormal = v->m_activePellets[pelletIndex].localNormal;
			}
		}
	}
	void EffectUpdate();
};


inline void Ray_t::sub_1004f7a0(const float *pStart, const float *pEnd)
{
	VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
	m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
	m_StartOffset[2] = 0;
	m_StartOffset[1] = 0;
	m_StartOffset[0] = 0;
	m_IsRay = true;
	m_Extents[2] = 0;
	m_Extents[1] = 0;
	m_Extents[0] = 0;
	m_Start[0] = pStart[0];
	m_Start[1] = pStart[1];
	m_Start[2] = pStart[2];
	m_b32 = 0;
	m_n34 = 0;
	m_b33 = 0;
}
extern IPhysicsEnvironment *g_10723940;
extern int g_1057b7bc;
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *p);
void sub_10158c00(int a, int b);
namespace block_1014abe0 {
#define WV1(n) virtual void w##n();
#define WV10(p) WV1(p##0) WV1(p##1) WV1(p##2) WV1(p##3) WV1(p##4) WV1(p##5) WV1(p##6) WV1(p##7) WV1(p##8) WV1(p##9)
struct CWeaponView278 {
	WV10(0) WV10(1) WV10(2) WV10(3) WV10(4) WV10(5) WV10(6) WV10(7) WV10(8) WV10(9)
	WV10(10) WV10(11) WV10(12) WV10(13) WV10(14) WV10(15) WV10(16) WV10(17) WV10(18) WV10(19)
	WV10(20) WV10(21) WV10(22) WV10(23) WV10(24) WV10(25) WV10(26)
	WV1(270) WV1(271) WV1(272) WV1(273) WV1(274) WV1(275) WV1(276) WV1(277)
	virtual float slot278();
};
struct CMotionCtlView {
	virtual void v0();
	virtual void v1();
	virtual void v2(IPhysicsObject *pObject);
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(int n);
};
struct GGCtl : CGravControllerPoint
{
	void SetTargetPosition(const Vector &target)
	{
		m_vec10 = target;
		if (m_hAttached78 == 0)
			m_vec1c = target;
		m_fl8c = gpGlobals->frametime;
	}
	void sub_101487a0(CBaseEntity *pEntity, IPhysicsObject *pObject, const Vector *pCenter, CBaseEntity *pOwner);
};
void GGCtl::sub_101487a0(CBaseEntity *pEntity, IPhysicsObject *pObject, const Vector *pCenter, CBaseEntity *pOwner)
{
	m_hAttached78 = pEntity;
	m_hOther7c = pOwner;
	pObject->vfunc27(&m_vec04, pCenter);
	m_vec1c = *pCenter;
	pObject->vfunc18(0, &m_vec5c);
	float flVel = (float)g_1057b7bc;
	pObject->vfunc17(0, (const Vector *)&flVel);
	m_n74 = 0;
	m_pController90 = ::g_10723940->vfunc39(this);
	((CMotionCtlView *)m_pController90)->v2(pObject);
	((CMotionCtlView *)m_pController90)->v8(2);
	SetTargetPosition(*pCenter);
	g_10739d08.sub_101e8640(pOwner);
	m_vec5c.z = ((CWeaponView278 *)sub_1032e7b0(pOwner))->slot278();
	m_vec80 = *(Vector *)((CEntityVSlots *)pEntity)->slot219();
	float flMul = g_10739d08.sub_101e86e0(pOwner);
	{
		Vector tmp;
		Vector *pv = pObject->vfunc15(&tmp);
		m_vec68 = *pv * flMul;
	}
	int nObjA = m_hAttached78.Get()->m_obj36c;
	sub_10158c00(m_hOther7c.Get()->m_obj36c, nObjA);
}
}
extern int g_1057b7b0;
extern float g_1071a41c;
extern CUnknown10738964 *g_1071a32c;
void sub_1013c8c0(const Vector *a, const Vector *b, const Vector *c, Vector *out);
namespace block_1014abe0 {
struct CUnknown1004f860 { void *sub_1004f860(); };
struct CEntView1014a4a0
{
	char m_pad0000[0x4c];
	unsigned char m_flags4c;
	char m_pad004d[0xa0 - 0x4d];
	int m_n0a0;
};

char sub_1014a4a0(CEntView1014a4a0 *p)
{
	if (p && (p->m_flags4c & 0x1e) && !((float)g_1057b7b4 * g_1071a41c < (float)g_1057b7b0))
		return p->m_n0a0 == 0;
	return 0;
}

inline void TraceLineCtorCalls(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((CUnknown1004f860 *)&ray)->sub_1004f860();
	ray.sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

CBaseEntity *sub_1014a4f0(CBaseEntity *pIgnore, CBasePlayer *pPlayer)
{
	Vector forward;
	sub_10139610(*(const QAngle *)((char *)pPlayer + 0x206c), &forward, 0, 0);
	float flRange = (float)g_1057b7b4;
	Vector eye = pPlayer->vfunc193();
	Vector vecEnd = eye + forward * flRange;
	{
		CGameTrace tr;
		TraceLineCtorCalls(eye, vecEnd, 0x200400b, pIgnore, 0, &tr);
		if (sub_1014a4a0((CEntView1014a4a0 *)tr.m_pEnt))
			return (CBaseEntity *)tr.m_pEnt;
	}
	Vector searchCenter = eye;
	float nearestDot = 0.707f;
	CBaseEntity *pNearest = 0;
	CBaseEntity *pGround = (CBaseEntity *)((CEntityVSlots *)pPlayer)->slot209();
	if (pGround && sub_1014a4a0((CEntView1014a4a0 *)pGround))
	{
		pNearest = pGround;
		nearestDot = 0.707f;
	}
	CUnknown101cccf0 sphere;
	CBaseEntity *pObject;
	for (sphere.sub_101cccf0((int)&searchCenter, *(int *)&flRange, 0, 0); (pObject = sphere.sub_101ccd40()) != 0; ++sphere.m_nIndex)
	{
		if (pObject->m_pEdict2e0 && sub_1014a4a0((CEntView1014a4a0 *)pObject))
		{
			Vector mins, maxs, point;
			((CCollisionProperty *)((char *)pObject + 0x270))->vfunc15(&mins, &maxs);
			sub_1013c8c0(&mins, &maxs, &searchCenter, &point);
			Vector dir = point - searchCenter;
			VectorNormalize(dir);
			float dot = DotProduct(dir, forward);
			if (dot > nearestDot)
			{
				if (!g_1071a32c->vfunc1() && g_1071a32c->m_n2c >= 2)
				{
					CGameTrace trCheck;
					vecEnd = *((CEntityVSlots *)pObject)->slot217();
					UTIL_TraceLine(eye, vecEnd, 0x200400b, pIgnore, 0, &trCheck);
					if ((CBaseEntity *)trCheck.m_pEnt != pObject)
						continue;
				}
				pNearest = pObject;
				nearestDot = dot;
			}
		}
	}
	return pNearest;
}
}
inline float GGApproach(float t, float val, float spd) { return sub_1013d400(t, val, spd); }
void CWeaponGravityGun::sub_1014abe0()
{
	GGView *v = (GGView *)this;
	GGGun *g = (GGGun *)this;
	Vector start, forward, right;
	CGameTrace tr;

	CBaseEntity *pOwnerEnt = (CBaseEntity *)sub_102521f0();
	if (!pOwnerEnt)
		return;
	GGPlayer *pOwner = (GGPlayer *)pOwnerEnt->m_pA8;
	if (!pOwner)
		return;

	v->m_viewModelIndex = engine->vfunc35(pOwner->edict());
	GGEnt *vm = pOwner->sub_1015d680(0);
	if (vm)
		v->m_viewModelIndex = engine->vfunc35(vm->edict());

	sub_10139610(pOwner->EyeAngles(), &forward, &right, 0);

	start = pOwner->Weapon_ShootPosition(pOwner->GetLocalOrigin());
	Vector end = start + forward * g_1057b7b4;

	UTIL_TraceLine_Calls(start, end, 0x46004003, pOwner, 0, &tr);
	end = *(Vector *)tr.m_endpos;
	float distance = tr.m_fraction * g_1057b7b4;

	GGEnt *pPick = (GGEnt *)vfunc285();
	if (v->m_hObject.Get() == 0 && pPick) {
		if (pOwner->GetGroundEntity() == pPick) {
			sub_101cebc0(pOwner, 0x30, 0);
		} else {
			GGPhys *pPhys = pPick->VPhysicsGetObject();
			float mass = pPhys ? pPhys->GetMass() : 0;
			if (g_10739d08.sub_101e8480(pOwner) > mass)
				g->sub_1014d7c0(pPick, start, *(Vector *)tr.m_endpos, distance);
			else
				sub_101cebc0(pOwner, 0x2f, 0);
		}
	}

	if (v->m_hObject.Get()) {
		GGEnt *pHeld = (GGEnt *)v->m_hObject.Get();
		Vector objForward, objRight, objUp;
		sub_10139610(pHeld->GetLocalAngles(), &objForward, &objRight, &objUp);
		Vector dir = start - ((GGEnt *)v->m_hObject.Get())->GetLocalOrigin();
		VectorNormalize(dir);
		float a = (objForward.x * dir.x + dir.y * objForward.y + dir.z * objForward.z);
		float b = (objRight.x * dir.x + objRight.y * dir.y + objRight.z * dir.z);
		float c = (objUp.x * dir.x + objUp.y * dir.y + objUp.z * dir.z);
		Vector pos = ((GGEnt *)v->m_hObject.Get())->GetLocalOrigin();
		Vector mins = ((GGEnt *)v->m_hObject.Get())->m_Collision.OBBMins();
		Vector maxs = ((GGEnt *)v->m_hObject.Get())->m_Collision.OBBMaxs();
		if (a <= 0)
			pos -= objForward * a * mins.x;
		else
			pos += objForward * a * maxs.x;
		if (b <= 0)
			pos -= objRight * b * mins.y;
		else
			pos += objRight * b * maxs.y;
		if (c <= 0)
			pos -= objUp * c * mins.z;
		else
			pos += objUp * c * maxs.z;
		Vector delta;
		const float *ps = &start.x, *pp = &pos.x;
		delta.x = ps[0] - pp[0];
		delta.y = ps[1] - pp[1];
		delta.z = ps[2] - pp[2];
		if (delta.LengthSqr() > g_1057b7b8 * g_1057b7b8) {
			g->sub_1014d140();
			return;
		}
		pPick->SetAbsAngles(pOwner->GetAbsAngles());
		pPick->SetLocalAngles(pOwner->GetAbsAngles());
	}

	matrix3x4_t curMatrix, incMatrix, nextMatrix;
	{
	sub_10139b90(v->m_targetRotation, curMatrix);
	sub_10139b90(QAngle(0, pOwner->EyeAngles().y - v->m_lastYaw, 0), incMatrix);
	sub_10138df0(incMatrix, curMatrix, nextMatrix);
	sub_10137ed0(nextMatrix, v->m_targetRotation);
	v->m_lastYaw = pOwner->EyeAngles().y;
	}

	GGEnt *pObject = (GGEnt *)EHandle_Get(*(const unsigned int *)&v->m_hObject);
	if (pObject) {
		if (pOwner->m_nButtons & 0x80000)
			v->m_distance = GGApproach(1024, v->m_distance, v->m_distance * 0.1);
		if (pOwner->m_nButtons & 0x100000)
			v->m_distance = GGApproach(40, v->m_distance, v->m_distance * 0.1);

		pObject->sub_100a1250(GGInfo().sub_101c26d0(this, pOwner, 0, 0x20000000, 0, 0, -1));
		Vector newPosition = start + forward * v->m_distance;
		Vector awayfromPlayer = start + forward * 24;
		UTIL_TraceLine_Calls(start, awayfromPlayer, 0x200400b, pOwner, 0, &tr);
		if (tr.m_fraction == 1) {
			UTIL_TraceLine_Calls(awayfromPlayer, newPosition, 0x200400b, pObject, 0, &tr);
			Vector dir = *(Vector *)tr.m_endpos - newPosition;
			float dist = VectorNormalize(dir);
			float maxDist = v->m_maxVel * gpGlobals->frametime;
			if (dist > maxDist)
				newPosition += dir * maxDist;
			else
				newPosition = *(Vector *)tr.m_endpos;
		} else {
			newPosition = *(Vector *)tr.m_endpos;
		}

		CBaseEntity *pOwner2 = (CBaseEntity *)sub_10252240();
		if (!pOwner2)
			return;
		float flRadius = g_10739d08.sub_101e8780(pOwner2);
		g->sub_1014cbf0(flRadius, pObject);

		g->SetTargetPosition(newPosition);
		Vector dir = newPosition - pObject->GetLocalOrigin();
		v->m_movementLength = dir.Length();

		if (newPosition.z < v->m_flLowZ) {
			v->m_flLowZ = newPosition.z;
		} else if (GF(g_10721a1c) + v->m_flLowZ < newPosition.z && v->m_nLift > 0) {
			if (!g_1071a44c->vfunc1() && g_1071a44c->m_n2c) {
				GGPhys *pPhys = pObject->VPhysicsGetObject();
				float mass = pPhys ? pPhys->GetMass() : 0;
				float speed = 0, rot = 0;
				if (pPhys)
					pPhys->GetDamping(&speed, &rot);
				DevMsg("Physics object lift triggering supernatural act (%d).  mass: %.2f lbs (%.2f kg) damping: %.2f %.2f (%.2f) pos: (%f, %f, %f)\n",
					v->m_nLift, (mass * 2.2f), mass, speed, rot, v->m_saveDamping, pObject->GetAbsOrigin().x, pObject->GetAbsOrigin().y, pObject->GetAbsOrigin().z);
			}
			pOwner->sub_1017df50(v->m_nLift, -1.0f, sub_101d3730("PhysicsLift %s", pObject->sub_100ab4f0()));
		}

		Vector d2 = newPosition - v->m_vec930;
		float distSqr = d2.Length2DSqr();
		float flDragDistSqr = SQR(g_1071a378.GetFloat());
		if (distSqr > flDragDistSqr && v->m_nDrag > 0) {
			if (!g_1071a44c->vfunc1() && g_1071a44c->m_n2c) {
				GGPhys *pPhys = pObject->VPhysicsGetObject();
				float mass = pPhys ? pPhys->GetMass() : 0;
				float speed = 0, rot = 0;
				DevMsg("Physics object drag triggering supernatural act (%d).  mass: %.2f lbs (%.2f kg) damping: %.2f %.2f (%.2f) pos: (%f, %f, %f)\n",
					v->m_nDrag, (mass * 2.2f), mass, speed, rot, v->m_saveDamping, pObject->GetAbsOrigin().x, pObject->GetAbsOrigin().y, pObject->GetAbsOrigin().z);
			}
			pOwner->sub_1017df50(v->m_nDrag, -1.0f, sub_101d3730("PhysicsDrag %s", pObject->sub_100ab4f0()));
		}
	} else {
		g->SetTargetPosition(end);
	}

	if (v->m_pelletHeld >= 0 && gpGlobals->curtime > v->m_glueTime) {
		Vector worldNormal, worldPos;
		g->GetPelletWorldCoords(v->m_pelletAttract, &worldPos, &worldNormal);
		v->SetAutoAlign(v->m_activePellets[v->m_pelletHeld].localNormal, ((GGEnt *)v->m_activePellets[v->m_pelletHeld].pellet.Get())->GetLocalOrigin(), worldNormal, worldPos);
	} else {
		v->ClearAutoAlign();
	}
}
// END FUNCTION

// FUNCTION: 0x1014c0f0 size=0xf
namespace lifted {
int sub_10002392();
}
struct CUnknown1014c0f0 { int sub_1014c0f0(); };
int CUnknown1014c0f0::sub_1014c0f0()
{
    *(int *)((char *)this + 0x928) = 0;
    return lifted::sub_10002392();
}
// END FUNCTION

// FUNCTION: 0x1014c110 size=0x5
#include "CWeaponGravityGun.h"
struct CWrap1014c110 { void sub_1014c110(); };
// TARGET: sub_1014c110
// the game's 0x1014c110: a tail call (jmp) of CWeaponGravityGun::sub_1014c130
void CWrap1014c110::sub_1014c110()
{
	((CWeaponGravityGun *)this)->CWeaponGravityGun::sub_1014c130();
}
// END FUNCTION

// FUNCTION: 0x1014c130 size=0x121
#include "CWeaponGravityGun.h"
#include "CBaseEntity.h"


struct ISoundView
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void StopSound(int entindex, int channel, const char *pSample);	// slot 7 (+0x1c)
};
extern ISoundView *g_1070b248;
extern const char *g_1057b88c;
extern const char *g_1057b888;
extern const char *g_1057b890;
extern const char *g_1057b894;

void CWeaponGravityGun::sub_1014c130()
{
    if (sub_102521f0()) {
        switch (m_nSoundState) {
        case 1: {
            CBaseEntity *pOwner = (CBaseEntity *)sub_102521f0();
            int index = engine->vfunc35(pOwner->m_pEdict2e0);
            g_1070b248->StopSound(index, 6, g_1057b88c);
            pOwner = (CBaseEntity *)sub_102521f0();
            index = engine->vfunc35(pOwner->m_pEdict2e0);
            g_1070b248->StopSound(index, 6, g_1057b888);
            pOwner = (CBaseEntity *)sub_102521f0();
            index = engine->vfunc35(pOwner->m_pEdict2e0);
            g_1070b248->StopSound(index, 6, g_1057b890);
            pOwner = (CBaseEntity *)sub_102521f0();
            index = engine->vfunc35(pOwner->m_pEdict2e0);
            g_1070b248->StopSound(index, 6, g_1057b894);
            break;
        }
        case 0: {
            CBaseEntity *pOwner = (CBaseEntity *)sub_102521f0();
            int index = engine->vfunc35(pOwner->m_pEdict2e0);
            g_1070b248->StopSound(index, 6, g_1057b88c);
            break;
        }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1014c2b0 size=0x1
void sub_1014c2b0()
{
}
// END FUNCTION

// FUNCTION: 0x1014c2d0 size=0x2f0
#include "CWeaponGravityGun.h"
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "IPhysicsObject.h"
#include "engineiface.h"
#include "engineserver.h"
#include "ehandle.h"

float sub_1014c680(float a, float b, float c, float d);
extern const char *g_1057b888[];

// TARGET: CWeaponGravityGun::sub_1014c2d0
void CWeaponGravityGun::sub_1014c2d0()
{
	int bOn;
	if (m_hHeld918.Get() != 0)
		bOn = 1;
	else
		bOn = 0;

	if (bOn != m_nSoundState)
	{
		sub_1014c130();
		m_nSoundState = bOn;
		sub_1014c2b0();
	}

	switch (m_nSoundState)
	{
	case 1:
		{
		CEntitySoundOriginView *pOwner = (CEntitySoundOriginView *)sub_102521f0();

		CPASAttenuationFilter filter(pOwner, 0.8f);
		filter.MakeReliable();

		CEntitySoundOriginView *pHeld = (CEntitySoundOriginView *)m_hHeld918.Get();
		float flHeight = pHeld->GetOrigin()[2] - m_fl938;
		int pitch = (int)::sub_1014c680(flHeight, 0.0f, 500.0f, 60.0f) + 0x5a;

		CBaseEntity *pOwnerEnt = (CBaseEntity *)sub_102521f0();
		int entindex = EngineGlobals::g_1070b22c->vfunc35(pOwnerEnt->m_pEdict2e0);

		EngineGlobals::g_1070b248->vfunc3(&filter, entindex, 6, g_1057b888[0], 0.5f, 0.8f, 3, pitch, 0, 0, 1, 0);

		float flVolume = ::sub_1014c680(m_fl920, 0.0f, 200.0f, 1.0f);

		float flMassScale = ::sub_1014c680(((IPhysicsObject *)((CBaseEntity *)m_hHeld918.Get())->m_obj36c)->vfunc12(), 50.0f, 500.0f, 1.0f);

		pOwnerEnt = (CBaseEntity *)sub_102521f0();
		entindex = EngineGlobals::g_1070b22c->vfunc35(pOwnerEnt->m_pEdict2e0);

		EngineGlobals::g_1070b248->vfunc3(&filter, entindex, 6, g_1057b888[2], flMassScale * flVolume, 0.8f, 1, 100, 0, 0, 1, 0);

		pOwnerEnt = (CBaseEntity *)sub_102521f0();
		entindex = EngineGlobals::g_1070b22c->vfunc35(pOwnerEnt->m_pEdict2e0);

		EngineGlobals::g_1070b248->vfunc3(&filter, entindex, 6, g_1057b888[3], (1.0 - flMassScale) * flVolume, 0.8f, 1, 100, 0, 0, 1, 0);
		}
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1014c680 size=0x61
float sub_1014c680(float val, float lo, float hi, float scale)
{
	if (val < lo)
		val = lo;
	if (val > hi)
		val = hi;
	float range = hi - lo;
	if (range == 0.0f)
		return 0.0f;
	return scale / range * (val - lo);
}
// END FUNCTION

// FUNCTION: 0x1014c710 size=0x114
#include "CBaseEntity.h"
#include "CUnknown101d1460.h"

struct CHitHandle
{
	unsigned int m_h;

	void Set(CBaseEntity *pEntity)
	{
		if (pEntity)
			m_h = *pEntity->vfunc1();
		else
			m_h = 0xffffffff;
	}
};

struct CHitRecord20
{
	Vector m_vecPos;
	CHitHandle m_hEntityA;
	CHitHandle m_hEntityB;
};

struct CHitRecorderView
{
	char m_pad0000[0x9d0];
	CHitRecord20 m_Records[16];	// 0x9d0
	int m_nRecords;	// 0xb10
};

struct VMatrixView
{
	float m[4][4];
};

inline Vector Vector3DMultiplyTranspose(const VMatrixView &src1, const Vector &src2)
{
	Vector dst;
	dst.x = src1.m[0][0] * src2.x + src1.m[1][0] * src2.y + src1.m[2][0] * src2.z;
	dst.y = src1.m[1][1] * src2.y + (src1.m[0][1] * src2.x + src1.m[2][1] * src2.z);
	dst.z = src1.m[1][2] * src2.y + (src1.m[0][2] * src2.x + src1.m[2][2] * src2.z);
	return dst;
}

void __fastcall sub_1014c710(CHitRecorderView *pThis, int, CBaseEntity *pEntityA, CBaseEntity *pEntityB, const Vector *pPosition)
{
	pThis->m_Records[pThis->m_nRecords].m_vecPos = *pPosition;
	if (pEntityB)
	{
		CUnknown101d1460 matrix;
		matrix.sub_101d1460(pEntityB->m_pEdict2e0);
		pThis->m_Records[pThis->m_nRecords].m_vecPos = Vector3DMultiplyTranspose(*(const VMatrixView *)&matrix, *pPosition);
	}
	pThis->m_Records[pThis->m_nRecords].m_hEntityA.Set(pEntityA);
	pThis->m_Records[pThis->m_nRecords].m_hEntityB.Set(pEntityB);
	pThis->m_nRecords++;
}
// END FUNCTION

// FUNCTION: 0x1014c880 size=0x136
#include "CBaseEntity.h"
#include "CUnknown1014ca10.h"

struct CPhysgunGlowRec
{
	Vector m_vec;
	EHANDLE m_hOther;
	EHANDLE m_hKey;
};

struct CPhysgunGlowView
{
	char pad0[0x9d0];
	CPhysgunGlowRec m_recs[16];
	int m_nCount;
	int m_nFront;
};

void CUnknown1014ca10::sub_1014c880(void *pEnt)
{
	CPhysgunGlowView *p = (CPhysgunGlowView *)this;
	p->m_nFront = 0;
	for (int i = 0; i < p->m_nCount; i++)
	{
		if (p->m_recs[i].m_hKey.Get() == pEnt && !*((char *)p->m_recs[i].m_hOther.Get() + 0x734))
		{
			if (i)
			{
				CPhysgunGlowRec temp = p->m_recs[p->m_nFront];
				p->m_recs[p->m_nFront] = p->m_recs[i];
				p->m_recs[i] = temp;
			}
			p->m_nFront++;
		}
	}
	sub_1014ca10(0xc0, 0xff, 0xc0);
}
// END FUNCTION

// FUNCTION: 0x1014ca10 size=0x86
#include "CUnknown1014ca10.h"

struct SEntInfo { void *pEnt; unsigned int serial; };
struct SEntSlot { int pad; SEntInfo e; };
extern SEntSlot *g_10566458;

struct SColorEntity
{
	char pad0[0x1a0];
	unsigned char r, g, b, a;	// 0x1a0
	char pad1a4[0x734 - 0x1a4];
	char m_bHidden;	// 0x734
};

struct SRecord
{
	int f0, f4, f8;
	unsigned int hEntity;
	int f10;
};

inline SColorEntity *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	SEntInfo *e = &g_10566458[h & 0x1fff].e;
	if (e->serial == (h >> 13))
		return (SColorEntity *)e->pEnt;
	return 0;
}

void CUnknown1014ca10::sub_1014ca10(unsigned char r, unsigned char g, unsigned char b)
{
	struct { unsigned char r, g, b, a; } c;
	c.r = r;
	c.g = g;
	c.b = b;
	c.a = 255;
	SRecord *rec = (SRecord *)(pad0 + 0x9d0);
	for (int i = 0; i < m_nRecords; i++) {
		SColorEntity *e = LookupEntity(rec[i].hEntity);
		if (e && !e->m_bHidden)
			*(int *)&e->r = *(int *)&c;
	}
}
// END FUNCTION

// FUNCTION: 0x1014cad0 size=0xd3
#include "CBaseEntity.h"
#include "CUnknown1014cad0.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CBurstEntity
{
	S100(a) S100(b) S10(c0)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual float *vfunc217();	// GetAbsOrigin
	virtual void e0();
	virtual float *vfunc219();	// GetAbsAngles
};

struct CBurstEffects
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void vfunc4(const float *pOrigin, const float *pDirection, float flSize, float flScale);
};
extern CBurstEffects *g_10566258;

void sub_10139610(const float *pAngles, float *pForward, float *pRight, float *pUp);
void sub_101cd940(CBaseEntity *pEntity);

void CUnknown1014cad0::sub_1014cad0()
{
	int i = 0;
	if (i < m_nRecords) {
		unsigned int *pHandle = &m_hFirst;
		do {
			unsigned int h = *pHandle;
			EntInfo *e;
			if (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13)) && e->m_pEntity) {
				CBurstEntity *pEnt = (CBurstEntity *)e->m_pEntity;
				float vecForward[3];
				sub_10139610(pEnt->vfunc219(), vecForward, 0, 0);
				g_10566258->vfunc4(pEnt->vfunc217(), vecForward, 32.0f, 30.0f);
				sub_101cd940((CBaseEntity *)pEnt);
			}
			i++;
			pHandle += 5;
		} while (i < m_nRecords);
	}
	m_nRecords = 0;
}
// END FUNCTION

// FUNCTION: 0x1014cbf0 size=0x3aa
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CWeaponGravityGun.h"
#include "CUnknown101d1460.h"
#include "globalvars.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

float __cdecl sub_10146150(const Vector *v);
#include "CUnknown100290c0.h"
#pragma auto_inline(off)
namespace block_1014cbf0 {
struct CLookUnit : CUnknown100290c0 { unsigned int sub_100290c0(const unsigned int *pHandle); };
unsigned int CLookUnit::sub_100290c0(const unsigned int *pHandle)
{
    unsigned int h = *pHandle;
    if (h != 0xffffffff) {
        CUnknown100290c0Slot *pSlot = &m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13)) {
            return pSlot->m_Value;
        }
    }
    return 0;
}
}
#pragma auto_inline(on)

#define LK(h) ((CEntityVSlots *)((block_1014cbf0::CLookUnit *)g_10566458)->sub_100290c0((const unsigned int *)&(h)))

inline float VecLen1014cbf0(Vector v) { return sub_10146150(&v); }

void CWeaponGravityGun::sub_1014cbf0(float flRadius, CBaseEntity *pHeld)
{
	int objectIndex = -1;
	int worldIndex = -1;
	float minDist = flRadius * flRadius;

	if (m_hB1c >= 0)
	{
		Vector attract, held;
		attract = *LK(m_slots9d0[m_hB1c].m_hA)->slot217();
		held.sub_1003e4b0(*LK(m_slots9d0[m_hB18].m_hA)->slot217());
		float dist = VecLen1014cbf0(attract - held);
		if (dist < flRadius * 2)
		{
			objectIndex = m_hB1c;
			worldIndex = m_hB18;
			minDist = dist * dist;
		}
	}

	if (objectIndex < 0)
	{
		for (int i = 0; i < m_nB14; i++)
		{
			CEntityVSlots *pPellet = LK(m_slots9d0[i].m_hA);
			if (!pPellet)
				continue;
			for (int j = m_nB14; j < m_nB10; j++)
			{
				CEntityVSlots *pTest = LK(m_slots9d0[j].m_hA);
				if (!pTest)
					continue;
				if (*((char *)pTest + 0x734))
					continue;
				float distSqr = (*pTest->slot217() - *pPellet->slot217()).LengthSqr();
				if (distSqr < minDist)
				{
					Vector worldPos = *LK(m_slots9d0[j].m_hA)->slot217();
					Vector worldNormal;
					CGlobalEntityList *pList = g_10566458;
					if (pList->sub_100290c0((const unsigned int *)&m_slots9d0[j].m_hB))
					{
						CUnknown101d1460 tmp;
						tmp.sub_101d1460(*(int *)((char *)pList->sub_100290c0((const unsigned int *)&m_slots9d0[j].m_hB) + 0x2e0));
						Vector vX;
						tmp.sub_10028060(&vX.x, &m_slots9d0[j].m_vec.x);
						worldNormal.sub_1003e4b0(vX);
					}
					else
					{
						worldNormal.sub_1003e4b0(m_slots9d0[j].m_vec);
					}
					float d = worldNormal.x * worldPos.x + worldPos.y * worldNormal.y + worldPos.z * worldNormal.z;
					if (m_hB1c == j || DotProduct(worldNormal, *pPellet->slot217()) - d >= 0.0f)
					{
						minDist = distSqr;
						objectIndex = j;
						worldIndex = i;
					}
				}
			}
		}
	}

	m_bB24 = 0;
	if (objectIndex >= 0 && worldIndex >= 0)
	{
		if (objectIndex != m_hB1c || worldIndex != m_hB18)
		{
			m_flB20 = gpGlobals->curtime;
			m_hB1c = objectIndex;
			m_hB18 = worldIndex;
		}
		if (minDist < 9.0f)
			m_bB24 = 1;
	}
	else
	{
		m_hB1c = -1;
		m_hB18 = -1;
	}
}
// END FUNCTION

// FUNCTION: 0x1014d090 size=0x52
#include "CBaseEntity.h"
extern int g_10723938;
struct SSlot { EHANDLE m_h; int pad[4]; };
struct SHolder { char pad[0x9e0]; SSlot m_slot[1]; int sub_1014d090(int i); };
int SHolder::sub_1014d090(int i)
{
	if (i < 0)
		return 0;
	CBaseEntity *p = m_slot[i].m_h.Get();
	if (p)
		return p->m_obj36c;
	return g_10723938;
}
// END FUNCTION

// FUNCTION: 0x1014d110 size=0x1a
struct CUnk1014d110
{
	char m_pad0000[0x910];
	int m_n910;

	void sub_1014c130();
	void sub_1014d140();
	void sub_1014d110();
};

// TARGET: sub_1014d110
void CUnk1014d110::sub_1014d110()
{
	m_n910 = 0;
	sub_1014c130();
	sub_1014d140();
}
// END FUNCTION

// FUNCTION: 0x1014d140 size=0x524
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1014ca10.h"
#include "CUnknown100a8340.h"
#include "CVStatList_t.h"
#include "CWeaponGravityGun.h"
#include "CEHandleGet.h"
#include "globalvars.h"

#define TV(n) virtual void v##n();
#define TV10(p) TV(p##0) TV(p##1) TV(p##2) TV(p##3) TV(p##4) TV(p##5) TV(p##6) TV(p##7) TV(p##8) TV(p##9)
struct CRelEnt
{
	TV(0) TV(1) TV(2) TV(3) TV(4) TV(5) TV(6) TV(7) TV(8) TV(9)
	TV10(1) TV10(2) TV10(3) TV10(4) TV10(5) TV10(6) TV10(7) TV10(8) TV10(9)
	TV10(10) TV10(11) TV10(12) TV10(13) TV10(14) TV10(15) TV10(16) TV10(17) TV10(18) TV10(19) TV10(20)
	TV(210) TV(211) TV(212) TV(213) TV(214) TV(215) TV(216)
	virtual Vector *vfunc217();
	TV(218) TV(219) TV(220) TV(221) TV(222) TV(223) TV(224) TV(225) TV(226) TV(227) TV(228) TV(229)
	TV(230) TV(231) TV(232) TV(233) TV(234) TV(235)
	virtual void vfunc236(void *pPlayer, int a);
	char m_pad4[0xa8 - 4];
	void *m_pa8;
	char m_padac[0x36c - 0xac];
	IPhysicsObject *m_p36c;
	IPhysicsObject *VPhysicsGetObject() const { return m_p36c; }
	const char *sub_100ab4f0();
};

struct CRelPlayer
{
	TV(0) TV(1) TV(2) TV(3) TV(4) TV(5) TV(6) TV(7) TV(8) TV(9)
	TV10(1) TV10(2) TV10(3) TV10(4) TV10(5)
	TV(60) TV(61) TV(62) TV(63) TV(64) TV(65) TV(66) TV(67)
	virtual char vfunc68(CRelEnt *p);
	void sub_1008bc50(CRelEnt *p);
	void sub_1017e150(int a, float b, const char *c);
};

struct CRelVis { virtual void v0(); virtual char vfunc1(); char m_pad[0x28 - 4]; float m_f28; int m_n2c; };
extern CRelVis *g_1071a4a4;
extern CRelVis *g_1071a44c;
extern const char *sub_101d3730(const char *, ...);
extern CVStatList_t g_109f0b40;
extern int atexit(void (*)(void));
void sub_10012a8a();
__declspec(dllimport) void DevMsg(const char *, ...);
inline void *operator new(unsigned int, void *p) { return p; }

inline CVStatList_t *RelFind0(CVStatListSet *pSet)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == 0)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		new (&g_109f0b40) CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}

inline float RelLength(const Vector &v)
{
	return FastSqrt(v.x * v.x + (v.y * v.y + v.z * v.z));
}

inline IPhysicsObject *RelHeldPhys(CGlobalEntityList *pEnts, const unsigned int *ph)
{
	IPhysicsObject *pPhys = 0;
	if (pEnts->sub_100290c0(ph))
		pPhys = ((CRelEnt *)pEnts->sub_100290c0(ph))->m_p36c;
	return pPhys;
}

// TARGET: CWeaponGravityGun::sub_1014d140
void CWeaponGravityGun::sub_1014d140()
{
	m_hB18 = -1;
	m_hB1c = -1;
	m_bB24 = 0;
	((CUnknown1014ca10 *)this)->sub_1014ca10(0xff, 0, 0);
	m_nB14 = 0;
	const unsigned int *ph = (const unsigned int *)&m_hHeld918;
	CGlobalEntityList *pEnts = g_10566458;
	if (pEnts->sub_100290c0(ph))
	{
		IPhysicsObject *pPhys = pEnts->sub_100290c0(ph) ? ((CRelEnt *)pEnts->sub_100290c0(ph))->VPhysicsGetObject() : 0;
		if (pPhys)
		{
			float flMass = pPhys->vfunc12();
			CBaseEntity *pOwner = (CBaseEntity *)sub_102521f0();
			void *pPlayer;
			if (pOwner && (pPlayer = *(void **)((char *)pOwner + 0xa8)))
			{
				((CUnknown100a8340 *)m_hHeld918.Get())->sub_100a8340((CBaseEntity *)pPlayer, 10.0f);
				RelFind0(CVStatListSet::Of(pPlayer))->sub_10201100(0x1a, flMass);
				Vector vecVelocity, vecAngVel;
				pPhys->vfunc40((float *)&vecVelocity, (float *)&vecAngVel);
				float flSpeed = RelLength(vecVelocity) * 0.055555556f;
				if ((g_1071a4a4->vfunc1() ? 0.0f : g_1071a4a4->m_f28) <= flSpeed && 0 < m_nB28)
				{
					if (!g_1071a44c->vfunc1() && g_1071a44c->m_n2c)
					{
						CRelEnt *pHeld = (CRelEnt *)m_hHeld918.Get();
						float flD1 = 0, flD2 = 0;
						pPhys->vfunc18((const Vector *)&flD1, (Vector *)&flD2);
						DevMsg("Physics object momentum throw triggering criminal act (%d).  mass: %.2f lbs (%.2f kg) damping: %.2f %.2f (%.2f) pos: (%f, %f, %f)\n", m_nB28, flMass * 2.2f, flMass, flD1, flD2, m_controller93c.m_vec5c.x, pHeld->vfunc217()->x, pHeld->vfunc217()->y, pHeld->vfunc217()->z);
					}
					((CRelPlayer *)pPlayer)->sub_1017e150(m_nB28, -1.0f, sub_101d3730("PhysicsMomentumThrow %s", m_hHeld918.Get() ? ((CRelEnt *)m_hHeld918.Get())->sub_100ab4f0() : "UNKNOWN"));
				}
			}
			if (!g_1071a44c->vfunc1() && g_1071a44c->m_n2c)
			{
				CRelEnt *pHeld = (CRelEnt *)m_hHeld918.Get();
				float flD1 = 0, flD2 = 0;
				pPhys->vfunc18((const Vector *)&flD1, (Vector *)&flD2);
				DevMsg("Dropping physics object.  mass: %.2f lbs (%.2f kg) damping: %.2f %.2f (%.2f) pos: (%f, %f, %f)\n", flMass * 2.2f, flMass, flD1, flD2, m_controller93c.m_vec5c.x, pHeld->vfunc217()->x, pHeld->vfunc217()->y, pHeld->vfunc217()->z);
			}
		}
		CRelPlayer *pPl;
		CBaseEntity *pOwner2 = (CBaseEntity *)sub_102521f0();
		if (pOwner2 && (pPl = *(CRelPlayer **)((char *)pOwner2 + 0xa8)))
		{
			((CRelEnt *)m_hHeld918.Get())->vfunc236(pPl, 0);
			if (pPl->vfunc68((CRelEnt *)m_hHeld918.Get()))
				pPl->sub_1008bc50((CRelEnt *)m_hHeld918.Get());
		}
		m_controller93c.sub_10148a20();
		*(unsigned int *)&m_hHeld918 = 0xffffffff;
	}
	m_bB25 = 0;
}
// END FUNCTION

// FUNCTION: 0x1014d7c0 size=0x3f4
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CWeaponGravityGun.h"
#include "CVStatList_t.h"
#include "globalvars.h"
#include "CEHandleGet.h"

#define TV(n) virtual void v##n();
#define TV10(p) TV(p##0) TV(p##1) TV(p##2) TV(p##3) TV(p##4) TV(p##5) TV(p##6) TV(p##7) TV(p##8) TV(p##9)
struct CPickPhys
{
	virtual void v0(); virtual void v1(); virtual void vfunc2();
	TV(3) TV(4) TV(5) TV(6) TV(7) TV(8) TV(9) TV(10) TV(11)
	virtual float vfunc12();
	TV(13) TV(14) TV(15) TV(16) TV(17)
	virtual void vfunc18(float *a, float *b);
};
struct CPickEnt
{
	TV(0)
	virtual unsigned int *vfunc1();
	TV(2) TV(3) TV(4) TV(5) TV(6) TV(7) TV(8) TV(9)
	TV10(1) TV10(2) TV10(3) TV10(4) TV10(5) TV10(6) TV10(7) TV10(8) TV10(9)
	TV10(10) TV10(11) TV10(12) TV10(13) TV10(14) TV10(15) TV10(16) TV10(17) TV10(18)
	TV(190) TV(191)
	virtual Vector *vfunc192(Vector *pOut);
	TV(193) TV(194) TV(195) TV(196) TV(197) TV(198) TV(199)
	TV10(20)
	TV(210) TV(211) TV(212) TV(213) TV(214) TV(215) TV(216)
	virtual Vector *vfunc217();
	TV(218) TV(219)
	virtual Vector *vfunc220();
	TV(221) TV(222) TV(223) TV(224) TV(225) TV(226) TV(227) TV(228) TV(229)
	TV(230) TV(231) TV(232) TV(233) TV(234)
	virtual void vfunc235(void *p);
	char m_pad4[0xa8 - 4];
	void *m_pa8;
	char m_padac[0x36c - 0xac];
	CPickPhys *m_p36c;
	CPickPhys *GetObj() { return m_p36c; }
};
inline CPickPhys *ObjOf(CPickEnt *p) { return p ? p->GetObj() : 0; }
struct CPickRec { int sub_1006cb60(int level); };
struct CPickTable { CPickRec *sub_1006cff0(int h); int sub_1006cf30(const char *name); };
extern CPickTable g_106c7c34;
#define StatLevel(h, level) (g_106c7c34.sub_1006cff0(h)->sub_1006cb60(level))
struct CPickFlag { virtual void v0(); virtual char vfunc1(); char m_pad[0x2c - 4]; int m_n2c; };
extern CPickFlag *g_1071a44c;
extern unsigned char g_1071a3ec;
extern int g_1071a3bc;
extern int g_1071a444;
extern int g_1071a4e4;
__declspec(dllimport) void DevMsg(const char *, ...);

// TARGET: CWeaponGravityGun::sub_1014d7c0
void CWeaponGravityGun::sub_1014d7c0(CBaseEntity *pPick, const Vector *a2, const Vector *a3, CBaseEntity *a4)
{
	CPickEnt *pEnt = (CPickEnt *)pPick;
	m_hHeld918 = pPick;
	m_b914 = 0;
	CPickPhys *pPhys = ObjOf(pEnt);
	if (pPhys) {
		*(CBaseEntity **)&m_fl91c = a4;
		CPickEnt *pOwner = (CPickEnt *)sub_10252240();
		if (pOwner) {
			Vector vecCenter;
			m_controller93c.sub_101487a0((CBaseEntity *)pEnt, (IPhysicsObject *)pPhys, pEnt->vfunc192(&vecCenter), (CBaseEntity *)pOwner);
			float flMass = pPhys->vfunc12();
			void *pPl = pOwner->m_pa8;
			if (pPl) {
				float flLimit = flMass * 2.2f; float flL2; if ((int)pPl == -1) flL2 = flLimit; else flL2 = flLimit;
				if (!(g_1071a3ec & 1)) {
					g_1071a3ec |= 1;
					g_1071a3bc = g_106c7c34.sub_1006cf30("Physics_Throw_Criminal_Value");
				}
				if (!(g_1071a3ec & 2)) {
					g_1071a3ec |= 2;
					g_1071a444 = g_106c7c34.sub_1006cf30("Physics_Lift_Supernatural_Value");
				}
				if (!(g_1071a3ec & 4)) {
					g_1071a3ec |= 4;
					g_1071a4e4 = g_106c7c34.sub_1006cf30("Physics_Drag_Supernatural_Value");
				}
				m_nB28 = 5;
				do {
					if ((float)StatLevel(g_1071a3bc, m_nB28) <= flL2)
						break;
				} while (--m_nB28 > 0);
				m_nB2c = 5;
				do {
					if ((float)StatLevel(g_1071a444, m_nB2c) <= flL2)
						break;
				} while (--m_nB2c > 0);
				m_nB30 = 5;
				do {
					if ((float)StatLevel(g_1071a4e4, m_nB30) <= flL2)
						break;
				} while (--m_nB30 > 0);
			}
			m_flB34 = 50000.0f;
			m_controller93c.m_vec5c.y = vfunc278();
			if (!g_1071a44c->vfunc1() && g_1071a44c->m_n2c) {
				float flSpeedDamp = 0, flRotDamp = 0;
				pPhys->vfunc18(&flSpeedDamp, &flRotDamp);
				DevMsg("Picking up physics object.  mass: %.2f lbs (%.2f kg) damping: %.2f %.2f (%.2f) pos: (%f, %f, %f)\n", flMass * 2.2f, flMass, flSpeedDamp, flRotDamp, m_controller93c.m_vec5c.x, pEnt->vfunc217()->x, pEnt->vfunc217()->y, pEnt->vfunc217()->z);
			}
			Vector *pv = pEnt->vfunc220();
			m_fl930 = pv->x;
			m_fl934 = pv->y;
			m_fl938 = pv->z;
			m_hB1c = -1;
			m_hB18 = -1;
			pPhys->vfunc2();
			sub_1014c880((CBaseEntity *)pEnt);
			CPickEnt *pWeaponOwner = (CPickEnt *)sub_102521f0();
			void *pPlayer;
			if (!pWeaponOwner)
				pPlayer = 0;
			else {
				pPlayer = pWeaponOwner->m_pa8;
				if (pPlayer)
					pEnt->vfunc235(pPlayer);
			}
			m_bB25 = 1;
			if (pPlayer)
				CVStatListSet::Of(pPlayer)->Find(0)->sub_10200fc0(0x1a, (int)flMass);
		}
	} else {
		m_hHeld918 = (CBaseEntity *)0;
	}
}
// END FUNCTION

// FUNCTION: 0x1014dcc0 size=0x61
#include "CWeaponGravityGun.h"
// TARGET: CWeaponGravityGun::vfunc326
void CWeaponGravityGun::vfunc326()
{
	float *pf = (float *)((char *)this + 0x730);
	if (*pf > gpGlobals->curtime)
		return;
	float t = gpGlobals->curtime + 0.01;
	int h = m_n910;
	*pf = t;
	if (h == 0) {
		vfunc307(0xbc);
		sub_1014a0b0();
		sub_1014c0f0();
		return;
	}
	sub_1014abe0();
	sub_1014c2d0();
}
// END FUNCTION

// FUNCTION: 0x1014dd50 size=0x33b
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CWeaponGravityGun.h"
#include "globalvars.h"
#include "CEHandleGet.h"

#define TV(n) virtual void v##n();
#define TV10(p) TV(p##0) TV(p##1) TV(p##2) TV(p##3) TV(p##4) TV(p##5) TV(p##6) TV(p##7) TV(p##8) TV(p##9)
struct CThrowEnt
{
	TV(0) TV(1) TV(2) TV(3) TV(4) TV(5) TV(6) TV(7) TV(8) TV(9)
	TV10(1) TV10(2) TV10(3) TV10(4) TV10(5) TV10(6) TV10(7) TV10(8) TV10(9)
	TV10(10) TV10(11) TV10(12) TV10(13) TV10(14) TV10(15) TV10(16) TV10(17) TV10(18) TV10(19) TV10(20)
	TV(210) TV(211) TV(212) TV(213) TV(214) TV(215) TV(216)
	virtual Vector *vfunc217();
	TV(218) TV(219)
	virtual void vfunc220();
	TV(221) TV(222) TV(223) TV(224) TV(225) TV(226) TV(227) TV(228) TV(229)
	TV10(23) TV10(24) TV10(25) TV10(26) TV10(27) TV10(28) TV10(29) TV10(30) TV10(31) TV10(32) TV10(33) TV10(34) TV10(35)
	TV(360) TV(361) TV(362) TV(363) TV(364) TV(365) TV(366) TV(367) TV(368)
	virtual void vfunc369(Vector *pOut);
	char m_pad4[0xa8 - 4];
	void *m_pa8;
	char m_padac[0x36c - 0xac];
	IPhysicsObject *m_p36c;
	char m_pad370[0x3d4 - 0x370];
	Vector m_vel3d4;
	const char *sub_100ab4f0();
	IPhysicsObject *GetObj() { return m_p36c; }
};

struct CThrowPlayer { void sub_10167fd0(); void sub_1017e150(int a, float b, const char *c); };
struct CThrowVis { virtual void v0(); virtual char vfunc1(); char m_pad[0x28 - 4]; float m_f28; int m_n2c; };
struct CThrowStats { float sub_101e8480(void *pChar); float sub_101e8640(void *pChar); };
extern CThrowStats g_10739d08;
extern CThrowVis *g_1071a4a4;
extern CThrowVis *g_1071a44c;
extern const char *sub_101d3730(const char *, ...);
extern float g_104454c4;
__declspec(dllimport) void DevMsg(const char *, ...);

inline IPhysicsObject *ObjOf(CThrowEnt *p) { return p ? p->GetObj() : 0; }

// TARGET: CWeaponGravityGun::sub_1014dd50
void CWeaponGravityGun::sub_1014dd50()
{
	CThrowEnt *pHeld = (CThrowEnt *)g_10566458->sub_100290c0((const unsigned int *)&m_hHeld918);
	IPhysicsObject *pPhys = ObjOf(pHeld);
	if (!pPhys)
		return;
	CThrowEnt *pOwner = (CThrowEnt *)sub_10252240();
	if (!(!pOwner)) { sub_1014d140();
	m_flTimes730[0] = gpGlobals->curtime + 1.5;
	pOwner->vfunc220();
	Vector vecA;
	pOwner->vfunc369(&vecA);
	Vector vecDir;
	pOwner->vfunc369(&vecDir);
	vecDir *= 18.0f;
	float flMass = pPhys->vfunc12();
	g_10739d08.sub_101e8480(pOwner);
	float flStat = g_10739d08.sub_101e8640(pOwner);
	g_10739d08.sub_101e8480(pOwner);
	float flPct = flStat * 0.01f;
	float flScale = flPct / flMass;
	if (flMass < 10.0f) {
		if (flScale > 40.0f)
			flScale = 40.0f;
		else if (flScale < g_104454c4)
			flScale = 0.0f;
	} else {
		if (flScale > 100.0f)
			flScale = 100.0f;
		else if (flScale < g_104454c4)
			flScale = 0.0f;
	}
	Vector angImp;
	angImp.y = 0;
	angImp.z = 0;
	Vector vecVel = vecDir * flScale + pOwner->m_vel3d4;
	angImp.x = flScale * 6.0f;
	pPhys->vfunc39((float *)&vecVel, (float *)&angImp);
	CThrowPlayer *pPlayer = (CThrowPlayer *)pOwner->m_pa8;
	if (!pPlayer)
		return;
	pPlayer->sub_10167fd0();
	float flT = g_1071a4a4->vfunc1() ? g_104454c4 : g_1071a4a4->m_f28;
	if (flT <= flScale && m_nB28 > 0) {
		if (!g_1071a44c->vfunc1() && g_1071a44c->m_n2c) {
			float flSpeedDamp = 0, flRotDamp = 0;
			pPhys->vfunc18((const Vector *)&flSpeedDamp, (Vector *)&flRotDamp);
			DevMsg("Physics object throw triggering criminal act (%d).  mass: %.2f lbs (%.2f kg) damping: %.2f %.2f (%.2f) pos: (%f, %f, %f)\n", m_nB28, flMass * 2.2f, flMass, flSpeedDamp, flRotDamp, m_controller93c.m_vec5c.x, pHeld->vfunc217()->x, pHeld->vfunc217()->y, pHeld->vfunc217()->z);
		}
		pPlayer->sub_1017e150(m_nB28, -1.0f, sub_101d3730("PhysicsThrow %s", pHeld ? pHeld->sub_100ab4f0() : "UNKNOWN"));
	} }
}
// END FUNCTION

// FUNCTION: 0x1014e160 size=0x5
#include "CWeaponGravityGun.h"
// TARGET: CWeaponGravityGun::vfunc327
// the game's 0x1014e160: a tail call (jmp) of CWeaponGravityGun::sub_1014dd50
void CWeaponGravityGun::vfunc327()
{
	((CWeaponGravityGun *)this)->CWeaponGravityGun::sub_1014dd50();
}
// END FUNCTION

// FUNCTION: 0x1014e180 size=0x1e8
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CWeaponGravityGun.h"
#include "CPhysFixed.h"
#include "IPhysicsEnvironment.h"
#include "globalvars.h"
#include "CEHandleGet.h"
#include "CGravControllerPoint.h"
#include "CEntityVSlots.h"
struct GGStats
{
	float sub_101e86e0(void *pChar);
	float sub_101e8640(void *pChar);
};
extern GGStats g_10739d08;
extern IPhysicsEnvironment *g_10723940;
extern int g_1057b7bc;
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *p);
void sub_10158c00(int a, int b);
namespace block_1014e180 {
#define WV1(n) virtual void w##n();
#define WV10(p) WV1(p##0) WV1(p##1) WV1(p##2) WV1(p##3) WV1(p##4) WV1(p##5) WV1(p##6) WV1(p##7) WV1(p##8) WV1(p##9)
struct CWeaponView278 {
	WV10(0) WV10(1) WV10(2) WV10(3) WV10(4) WV10(5) WV10(6) WV10(7) WV10(8) WV10(9)
	WV10(10) WV10(11) WV10(12) WV10(13) WV10(14) WV10(15) WV10(16) WV10(17) WV10(18) WV10(19)
	WV10(20) WV10(21) WV10(22) WV10(23) WV10(24) WV10(25) WV10(26)
	WV1(270) WV1(271) WV1(272) WV1(273) WV1(274) WV1(275) WV1(276) WV1(277)
	virtual float slot278();
};
struct CMotionCtlView {
	virtual void v0();
	virtual void v1();
	virtual void v2(IPhysicsObject *pObject);
	virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(int n);
};
struct GGCtl : CGravControllerPoint
{
	void SetTargetPosition(const Vector &target)
	{
		m_vec10 = target;
		if (m_hAttached78 == 0)
			m_vec1c = target;
		m_fl8c = gpGlobals->frametime;
	}
	void sub_101487a0(CBaseEntity *pEntity, IPhysicsObject *pObject, const Vector *pCenter, CBaseEntity *pOwner);
};
void GGCtl::sub_101487a0(CBaseEntity *pEntity, IPhysicsObject *pObject, const Vector *pCenter, CBaseEntity *pOwner)
{
	m_hAttached78 = pEntity;
	m_hOther7c = pOwner;
	pObject->vfunc27(&m_vec04, pCenter);
	m_vec1c = *pCenter;
	pObject->vfunc18(0, &m_vec5c);
	float flVel = (float)g_1057b7bc;
	pObject->vfunc17(0, (const Vector *)&flVel);
	m_n74 = 0;
	m_pController90 = ::g_10723940->vfunc39(this);
	((CMotionCtlView *)m_pController90)->v2(pObject);
	((CMotionCtlView *)m_pController90)->v8(2);
	SetTargetPosition(*pCenter);
	g_10739d08.sub_101e8640(pOwner);
	m_vec5c.z = ((CWeaponView278 *)sub_1032e7b0(pOwner))->slot278();
	m_vec80 = *(Vector *)((CEntityVSlots *)pEntity)->slot219();
	float flMul = g_10739d08.sub_101e86e0(pOwner);
	{
		Vector tmp;
		Vector *pv = pObject->vfunc15(&tmp);
		m_vec68 = *pv * flMul;
	}
	int nObjA = m_hAttached78.Get()->m_obj36c;
	sub_10158c00(m_hOther7c.Get()->m_obj36c, nObjA);
}
}
struct CGunConstraint { virtual void v0(); virtual void v1(); virtual void v2(); virtual void SetGameData(void *pData); };
struct CGravityPelletV
{
	char m_pad000[0x1a0];
	unsigned char m_r1a0, m_g1a1, m_b1a2;
	char m_pad1a3[0x730 - 0x1a3];
	CGunConstraint *m_pConstraint;
	bool m_isInert;
	CBaseEntity *GetMoveParent() { return ((EHANDLE *)&((CBaseEntity *)this)->m_hMoveParent)->Get(); }
	void SetRenderColor(unsigned char r, unsigned char g, unsigned char b) { m_r1a0 = r; m_g1a1 = g; m_b1a2 = b; }
	void MakeInert() { SetRenderColor(64, 64, 128); m_isInert = true; }
	bool MakeConstraint(CBaseEntity *pObject);
};
struct CWeaponGravityGunUnit : CWeaponGravityGun { void sub_1014c110(); };
extern void *g_10723938;
void sub_1014e3f0(void *pRef, void *pAtt, matrix3x4_t *pXform);

inline bool CGravityPelletV::MakeConstraint(CBaseEntity *pObject)
{
	void *pReference = g_10723938;
	if (GetMoveParent())
		pReference = (void *)GetMoveParent()->m_obj36c;
	void *pAttached = (void *)pObject->m_obj36c;
	if (!pReference || !pAttached)
		return false;
	CPhysFixedParams fixed;
	sub_1014e3f0(pReference, pAttached, &fixed.attachedRefXform);
	fixed.constraint.Defaults();
	m_pConstraint = (CGunConstraint *)g_10723940->vfunc14(pReference, pAttached, 0, &fixed);
	m_pConstraint->SetGameData(this);
	MakeInert();
	return true;
}

// TARGET: CWeaponGravityGun::vfunc321
void CWeaponGravityGun::vfunc321()
{
	if (!vfunc309())
		return;
	vfunc307(0xb6);
	if (!m_n910)
		return;
	CBaseEntity *pObject = m_hHeld918.Get();
	if (pObject && m_bB24) {
		CGravityPelletV *pPellet = (CGravityPelletV *)m_slots9d0[m_hB1c].m_hA.Get();
		if (pPellet->MakeConstraint(pObject)) {
			m_flTimes730[0] = gpGlobals->curtime + 0.75;
			((CGravityPelletV *)m_slots9d0[m_hB18].m_hA.Get())->MakeInert();
		}
	}
	sub_1014d110();
	((CWeaponGravityGunUnit *)this)->sub_1014c110();
}
// END FUNCTION

// FUNCTION: 0x1014e3f0 size=0x5b
#include "CBaseEntity.h"
struct matrix3x4_t;
class CBaseEntity;
void sub_10138630(const matrix3x4_t &in, matrix3x4_t &out);
void sub_10138df0(const matrix3x4_t &in1, const matrix3x4_t &in2, matrix3x4_t &out);

struct matrix3x4_t
{
	float m_flMatVal[3][4];
};

struct CEntityMatrixView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
	virtual void GetMatrix(matrix3x4_t *pOut);
};

void sub_1014e3f0(CEntityMatrixView *pFrom, CEntityMatrixView *pTo, matrix3x4_t *pOut)
{
	matrix3x4_t matTo;
	matrix3x4_t matFrom;
	matrix3x4_t matInverse;
	pFrom->GetMatrix(&matFrom);
	sub_10138630(matFrom, matInverse);
	pTo->GetMatrix(&matTo);
	sub_10138df0(matInverse, matTo, *pOut);
}
// END FUNCTION

// FUNCTION: 0x1014e470 size=0x69
#include "CWeaponGravityGun.h"

struct PlayerObj {
    char m_pad0000[0x2088];
    unsigned int m_nFlags2088;
    unsigned int m_nFlags208c;
};

struct OwnerEnt {
    char m_pad0000[0xa8];
    PlayerObj *m_pPlayer;
};

// TARGET: CWeaponGravityGun::vfunc319
void CWeaponGravityGun::vfunc319()
{
    OwnerEnt *pOwner = (OwnerEnt *)sub_102521f0();
    if (!pOwner)
        return;
    PlayerObj *p = pOwner->m_pPlayer;
    if (!p)
        return;
    if (p->m_nFlags208c & 0x800)
        vfunc327();
    else if (p->m_nFlags2088 & 1)
        vfunc326();
    else if (p->m_nFlags208c & 0x2000)
        vfunc325();
    else if (p->m_nFlags2088 & 0x20)
        vfunc326();
    else
        vfunc321();
}
// END FUNCTION

// FUNCTION: 0x1014e500 size=0x3
// TARGET: sub_1014e500
bool __cdecl sub_1014e500() { return false; }
// END FUNCTION

// FUNCTION: 0x1014e520 size=0x41b
#include "CWeaponThrown_Grenade_Frag.h"
#include <math.h>
#include <stdlib.h>
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "IPhysicsCollision.h"
#include "IPhysicsObject.h"
#include "IPhysicsEnvironment.h"
#include "CEntityVSlots.h"
#include "CGameTrace.h"
#include "Vector.h"
#include "Tier1.h"

extern IPhysicsEnvironment *g_10723940;
extern IPhysicsCollision *g_1072393c;
extern IPhysicsObject *g_10723938;
extern CGlobalEntityList g_106eb5d8;
extern Vector g_1070d1b0;
void sub_101d3510(const Vector *start, const Vector *end, const Vector *mins, const Vector *maxs, void *pEntity, int group, CGameTrace *ptr);

#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct CPhysObjView { V10(a) V10(b) V10(c) V10(d) virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void *GetCollide(); };
struct CEdictEntView { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void *GetEntity(); };
struct CEdictView { char pad[0x40]; CEdictEntView *m_pUnk; };

inline void SinCosL(float radians, float *sine, float *cosine)
{
	__asm {
		fld radians
		fsincos
		mov edx, cosine
		mov eax, sine
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

void sub_1014e520()
{
	unsigned int dots = 0;
	if (!g_10723940)
		return;

	g_109f3628("Testing collision system\n");
	int i;
	CBaseEntity *pSpot = g_106eb5d8.sub_100f7380(0, "info_player_start");
	Vector start = *(Vector *)((CEntityVSlots *)pSpot)->slot217();
	static Vector targets[2500];
	static bool first = true;
	static float test[2] = { 1, 1 };
	if (first)
	{
		float radius = 0;
		float theta = 0;
		float phi = 0;
		for (i = 0; i < 2500; i++)
		{
			radius += 2500 * 123.123;
			radius = fabs(fmod(radius, 128));
			theta += 2500 * 76.76;
			theta = fabs(fmod(theta, 6.283185307179586));
			phi += 2500 * 1997.99;
			phi = fabs(fmod(phi, 3.141592653589793));
			float st, ct, sp, cp;
			SinCosL(theta, &st, &ct);
			SinCosL(phi, &sp, &cp);
			targets[i].x = radius * ct * sp;
			targets[i].y = radius * st * sp;
			targets[i].z = radius * cp;
			Vector dir = targets[i] - start;
			VectorNormalize(dir);
			targets[i] = start + dir * 1024.0f;
		}
		first = false;
	}
	int testType = 0;
	if (engine->vfunc85() >= 2)
		testType = atoi(engine->vfunc84(1));
	float duration = 0;
	Vector size[2];
	size[0].Init(0, 0, 0);
	size[1].Init(16, 16, 16);
	for (int j = 0; j < 2; j++)
	{
		float startTime = engine->vfunc87();
		if (testType == 1)
		{
			const CPhysCollide *pCollide = (const CPhysCollide *)((CPhysObjView *)g_10723938)->GetCollide();
			CGameTrace tr;
			for (i = 0; i < 2500; i++)
			{
				Vector mins = -size[j];
				g_1072393c->vfunc22(start, targets[i], mins, size[j], pCollide, g_1070d1b0, *(Vector *)g_1070d9d0, &tr);
				dots += g_1072393c->vfunc34(0);
			}
		}
		else
		{
			testType = 0;
			void *pWorld = 0;
			CEdictView *pEdict = (CEdictView *)engine->vfunc38(0);
			if (pEdict && pEdict->m_pUnk)
				pWorld = pEdict->m_pUnk->GetEntity();
			CGameTrace tr;
			for (i = 0; i < 2500; i++)
			{
				Vector vecMins(-size[j].x, -size[j].y, -size[j].z);
				sub_101d3510(&start, &targets[i], &vecMins, &size[j], pWorld, 0, &tr);
			}
		}
		duration += engine->vfunc87() - startTime;
	}
	test[testType] = duration;
	void (*pfnMsg)(const char *, ...) = g_109f3628;
	pfnMsg("%d collisions in %.2f ms (%u dots)\n", 2500, duration * 1000, dots);
	pfnMsg("Current speed ratio: %.2fX BSP:JGJK\n", test[1] / test[0]);
}
// END FUNCTION
