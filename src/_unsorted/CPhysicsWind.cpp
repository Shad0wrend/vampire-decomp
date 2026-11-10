// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ca780 size=0x119
#include "CPhysicsWind.h"
#include "QAngle.h"
#include "Vector.h"
#include "globalvars.h"
#include <math.h>

extern QAngle g_1070d9d0;
extern Vector g_1070d1b0;
void sub_10139550(const QAngle &angles, Vector *forward);

int CPhysicsWind::vfunc0(void *pController, int pObject, float deltaTime, Vector &linear, Vector &angular)
{
	pObject = pObject % 15 + 5;
	QAngle angles = g_1070d9d0;
	angles.y = (float)(cos((gpGlobals->curtime + 1.0f) * pObject) * 30.0 + m_nBaseYaw);
	Vector forward;
	sub_10139550(angles, &forward);
	Vector wind;
	wind.x = forward.x;
	wind.y = forward.y;
	wind.z = (float)(sin((gpGlobals->curtime + 1.0f) * pObject) + 1.1);
	float flScale = m_flScale;
	linear = wind * 3.0f * flScale;
	Vector tmp = g_1070d1b0;
	angular = tmp;
	return 4;
}
// END FUNCTION
