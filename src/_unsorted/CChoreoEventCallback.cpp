// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10080770 size=0x1a
#include "CChoreoEventCallback.h"

void CChoreoEventCallback::vfunc0(float a, int b, int c)
{
	if (m_pScene)
		m_pScene->vfunc248(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x100807a0 size=0x1a
#include "CChoreoEventCallback.h"

void CChoreoEventCallback::vfunc1(float a, int b, int c)
{
	if (m_pScene)
		m_pScene->vfunc249(a, b, (CSceneEvent *)c);
}
// END FUNCTION

// FUNCTION: 0x100807d0 size=0x1a
#include "CChoreoEventCallback.h"

void CChoreoEventCallback::vfunc2(float a, int b, int c)
{
	if (m_pScene)
		m_pScene->vfunc250(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10080800 size=0x1c
#include "CChoreoEventCallback.h"

// TARGET: CChoreoEventCallback::vfunc3
char CChoreoEventCallback::vfunc3(float a, int b, CSceneEvent *pEvent)
{
	if (m_pScene == 0)
		return 1;
	return m_pScene->vfunc251(a, b, pEvent);
}
// END FUNCTION
