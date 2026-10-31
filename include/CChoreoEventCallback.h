// CChoreoEventCallback: choreography event callback forwarding to its scene entity (vptr at +0, scene at +4).
#pragma once
#include "CSceneEntity.h"

class CChoreoEventCallback
{
public:
	virtual void vfunc0(float a, int b, int c);	// forwards to CSceneEntity slot 248
	virtual void vfunc1(float a, int b, int c);	// slot 249
	virtual void vfunc2(float a, int b, int c);	// slot 250
	virtual char vfunc3(float a, int b, CSceneEvent *pEvent);

	CSceneEntity *m_pScene;
};
