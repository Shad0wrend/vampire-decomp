// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10148750 size=0x18
#include "CGravControllerPoint.h"

CGravControllerPoint::CGravControllerPoint()
{
    m_hAttached78.Set(0);
    m_hOther7c.Set(0);
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
