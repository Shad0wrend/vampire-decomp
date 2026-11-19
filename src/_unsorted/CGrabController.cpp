// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040bed0 size=0x72
#include "CGrabController.h"
extern float g_1070d9d0[3];

CGrabController::CGrabController()
{
    m_f2c = 1.0f;
    m_f30 = 0.0f;
    m_f38 = 0.0f;
    m_f3c = 0.0f;
    m_f24 = 1000.0f;
    m_f1c = 21600.0f;
    m_f28 = 2000.0f;
    m_f20 = 21600.0f;
    m_h14c.m_Index = -1;
    m_v150[0] = g_1070d9d0[0];
    m_v150[1] = g_1070d9d0[1];
    m_v150[2] = g_1070d9d0[2];
    m_b15c = 0;
}
// END FUNCTION

// FUNCTION: 0x1040cc70 size=0x4c
#include "CGrabController.h"
#include "IPhysicsObject.h"
// TARGET: CGrabController::vfunc0
int CGrabController::vfunc0(void *pController, int pObject, float flDeltaTime, Vector &pLinear, Vector &pAngular)
{
#define pObject ((IPhysicsObject *)pObject)
#define pLinear ((float *)&pLinear)
#define pAngular ((float *)&pAngular)
	m_f34 = pObject->vfunc53(&m_pad0004, m_f34, flDeltaTime);
	pLinear[0] = 0;
	pLinear[1] = 0;
	pLinear[2] = 0;
	pAngular[0] = 0;
	pAngular[1] = 0;
	pAngular[2] = 0;
	m_f38 = flDeltaTime + m_f38;
	return 1;
#undef pAngular
#undef pLinear
#undef pObject
}
// END FUNCTION
