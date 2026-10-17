// CWeaponList: weapon list game system (CAutoGameSystem base: vptr only). The members are an embedded
// linked list with 8-byte nodes; only what decompiled code needs is declared.
#pragma once

class CWeaponList
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();	// resets the weapon-name list
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();

	int m_pad04;
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
};
