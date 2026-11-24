// CRagdoll: client ragdoll (RTTI .?AVCRagdoll@@), declared: its base, its destructor; nothing else yet
#pragma once
#include "IRagdoll.h"

class CRagdoll : public IRagdoll
{
public:
	virtual ~CRagdoll();
	virtual void vfunc3(Vector &mins, Vector &maxs);
	char m_pad0004[0x354 - 0x4];
	Vector m_vecMins;
	Vector m_vecMaxs;
	char m_pad036c[0x384 - 0x36c];
};
