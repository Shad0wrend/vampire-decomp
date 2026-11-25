// CRagdoll: client ragdoll (RTTI .?AVCRagdoll@@), declared: its base, its destructor; nothing else yet
#pragma once
#include "IRagdoll.h"

class CRagdoll : public IRagdoll
{
public:
	virtual ~CRagdoll();
	virtual void vfunc3(Vector &mins, Vector &maxs);
	virtual void vfunc5();
	int m_n0004;
	char m_pad0008[0x2dc - 0x8];
	int m_off[1];
	char m_pad02e0[0x354 - 0x2e0];
	virtual void vfunc1(int a, int b, int c, char *flags, struct CRagdollStudio *studio);
	Vector m_vecMins;
	Vector m_vecMaxs;
	char m_pad036c[0x384 - 0x36c];
};
