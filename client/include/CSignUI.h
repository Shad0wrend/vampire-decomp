// CSignUI: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
struct SUMem {
	void *m_pMem; int m_nAlloc; int m_nGrow;
	~SUMem() { Purge(); }
	SUMem() { m_pMem = 0; m_nAlloc = 0; m_nGrow = 0; }
	void Purge() { if (m_nGrow != -1) { if (m_pMem) { Plat_Free(m_pMem); m_pMem = 0; } m_nAlloc = 0; } }
};
struct SUVec {
	SUMem m_Memory; int m_Size; void *m_pElements;
	SUVec() { m_Size = 0; m_pElements = 0; }
	~SUVec() { Purge(); }
	void Purge() { m_Size = 0; m_Memory.Purge(); m_pElements = m_Memory.m_pMem; }
};
class CSignUI : public CManagedHudElement
{
public:
	virtual ~CSignUI();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CSignUI's own function
	virtual void vfunc98();
	virtual bool vfunc107();
	// the slots CSignUI adds to its base's vtable: 114-114, vfuncK at slot K
	virtual void vfunc114();
	void sub_10060c30();
	CSignUI(int a);
	int m_unk174; int m_unk178; int m_unk17c; char m_b180; char m_b181; short m_unk182; int m_unk184; int m_unk188; float m_f18c;
	SUVec m_vecB;
	SUVec m_vecA;
	char m_pad1b8[0x1c9 - 0x1b8];
	char m_b1c9;
	char m_pad1ca[0x24c - 0x1ca];
};
