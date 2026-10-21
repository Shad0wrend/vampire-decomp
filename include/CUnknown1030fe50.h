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
	char pad8[0x20 - 8];
	char m_vec20[0xc];	// CUtlVector4 at 0x20
	int m_nCount;	// 0x2c
	char pad30[0x68 - 0x30];
	float m_flNextTime;	// 0x68
	float m_flInterval;	// 0x6c

	void sub_1030fe50();
	void sub_1030fe70(int count, CUtlVector4 *pVec);
	bool sub_1030ffa0(void *pEnt);
	int sub_1030fff0(int radius);	// counts the entities within radius of the owner that pass sub_1030ffa0, at most every m_flInterval seconds
};
