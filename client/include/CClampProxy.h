// CClampProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CFunctionProxy.h"

class CClampProxy : public CFunctionProxy
{
public:
	struct CInput
	{
		int m_a, m_b, m_c;
		bool sub_100e3140(void *pMaterial, void *pKeyValues, const char *pName, float flDefault);
	};
	CInput m_flMin;
	CInput m_flMax;
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CClampProxy's own function
	virtual bool vfunc0(void*, void*);
	virtual void vfunc1(int);
};
