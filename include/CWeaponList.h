// CWeaponList: weapon list game system (CAutoGameSystem base: vptr only). The members are an embedded
// linked list with 8-byte nodes; only what decompiled code needs is declared.
#pragma once

#include "CAnchorList.h"

class CWeaponList : public CBaseGameSystem
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

	// slot 8 (scalar deleting destructor): empties the linked list and releases its memory
	~CWeaponList()
	{
		if (m_nCount != 0) {
			int j = 0xffff;
			for (int i = m_nCount - 1; i >= 0; i--) {
				*(unsigned short *)(m_pNodes + (i & 0xffff) * 8 + 6) = (unsigned short)j;
				*(unsigned short *)(m_pNodes + (i & 0xffff) * 8 + 4) = (unsigned short)i;
				j = i;
			}
			m_w18 = 0;
			m_w14 = 0xffff;
			m_w16 = 0xffff;
			m_w1a = 0;
		}
		if (m_nGrow != -1) {
			if (m_pNodes) {
				g_109f3624(m_pNodes);
				m_pNodes = 0;
			}
			m_nAlloc = 0;
		}
	}
};
