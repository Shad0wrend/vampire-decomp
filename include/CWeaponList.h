// CWeaponList (RTTI .?AVCWeaponList@@): base CAutoGameSystem (GameSystemRoot.h) and the weapon names' linked list at
// +8 (Source's CUtlLinkedList of 4-byte elements: 8-byte nodes).
#pragma once

#include "GameSystemRoot.h"
#include "utllinkedlist.h"

class CWeaponList : public CAutoGameSystem
{
public:
	virtual void vfunc5();	// 0x102501b0: resets the weapon-name list

	CUtlLinkedList<int, unsigned short> m_list;	// +8
};
