// CFunctionProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 3 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CResultProxy.h"

class CFunctionProxy : public CResultProxy
{
public:
	CFunctionProxy();
	virtual ~CFunctionProxy();
	bool sub_100e34b0(void *pMaterial, void *pKeyValues);
	void sub_100e3560(int *pType, int *pVecSize);
	void sub_100e33c0(float);
	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CFunctionProxy's own function
	virtual bool vfunc0(void*, void*);
};
