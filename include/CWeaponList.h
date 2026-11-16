// CWeaponList: weapon list game system (CAutoGameSystem base: vptr only). The members are an embedded
// linked list with 8-byte nodes; only what decompiled code needs is declared.
#pragma once

#include "CAnchorList.h"

class CWeaponList;

// Stands for the destructor of the embedded linked list: an empty member at the end whose destructor
// empties the list and releases the node memory of the owner.
class CWeaponListPurger
{
public:
	~CWeaponListPurger();
};

class CWeaponList : public PCD_GAMESYSTEM8	// the 8-byte game-system root (CAnchorList.h)
{
public:
	virtual void vfunc5();	// resets the weapon-name list

	char *m_pNodes;		// +8: 8-byte nodes
	int m_nAlloc;		// +0xc
	int m_nGrow;		// +0x10
	unsigned short m_w14;
	unsigned short m_w16;
	unsigned short m_w18;
	unsigned short m_w1a;
	unsigned short m_nCount;	// +0x1c
	unsigned short m_pad1e;
	char *m_pFirst;		// +0x20
	CWeaponListPurger m_purger;
};

inline CWeaponListPurger::~CWeaponListPurger()
{
	CWeaponList *p = (CWeaponList *)((char *)this - 0x24);
	if (p->m_nCount != 0) {
		int j = 0xffff;
		for (int i = p->m_nCount - 1; i >= 0; i--) {
			*(unsigned short *)(p->m_pNodes + (i & 0xffff) * 8 + 6) = (unsigned short)j;
			*(unsigned short *)(p->m_pNodes + (i & 0xffff) * 8 + 4) = (unsigned short)i;
			j = i;
		}
		p->m_w18 = 0;
		p->m_w14 = 0xffff;
		p->m_w16 = 0xffff;
		p->m_w1a = 0;
	}
	if (p->m_nGrow != -1) {
		if (p->m_pNodes) {
			g_109f3624(p->m_pNodes);
			p->m_pNodes = 0;
		}
		p->m_nAlloc = 0;
	}
}
