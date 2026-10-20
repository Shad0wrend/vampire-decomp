// CUnknown1030fe50: object holding a pointer at +4 to an owner whose dword at +0x1f8 it clears; real name not yet known.
#pragma once
#include "CUtlVector4.h"

struct CUnknown1030fe50_Elem
{
	virtual void vfunc0();
	virtual int *vfunc1();	// returns a pointer to the entity handle
	char pad4[0x1f8 - 4];
	CUnknown1030fe50_Elem *m_pNext;
};

struct CUnknown1030fe50_Owner
{
	char pad0[0x1f8];
	CUnknown1030fe50_Elem *m_unk1f8;
};

class CUnknown1030fe50
{
public:
	char pad0[4];
	CUnknown1030fe50_Owner *m_pOwner;

	void sub_1030fe50();
	void sub_1030fe70(int count, CUtlVector4 *pVec);
};
