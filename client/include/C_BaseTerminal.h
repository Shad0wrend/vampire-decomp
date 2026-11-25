// C_BaseTerminal: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseAnimating.h"

class C_BaseTerminal : public C_BaseAnimating
{
public:
	C_BaseTerminal();
	virtual ~C_BaseTerminal();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_BaseTerminal's own function
	virtual int vfunc15();
	virtual int vfunc16();
	virtual bool vfunc25(int);
	virtual void vfunc29(char);
	char m_pad0014[0x790 - 0x14];
	void *m_pMem;
	int m_alloc;
	int m_grow;
	int m_size;
	void *m_pElements;
	void *m_pTexture;
	bool m_b7a8;
	char m_pad07a9[0x7ac - 0x7a9];
	int m_nStride;
	int m_nMax;
	unsigned char m_rgData[0x6c0];
	unsigned char m_bE74;
	char m_pad0e75[0x78 - 0x75];
	int m_nE78;
	int m_nE7c;
	int m_nE80;
	int m_nE84;
	bool m_bE88;
	char m_pad0e89[3];
	int m_nE8c;
	int m_aE90[0x12];
	bool m_bEd8;
	char m_pad0ed9[0xf20 - 0xed9];
	void sub_100c75b0();
	void sub_100c7ec0(int dx, int dy);
	void sub_100c7f50();
	void sub_100c7550();
	void sub_100c82e0();
	void sub_100c8210(int n);
};
