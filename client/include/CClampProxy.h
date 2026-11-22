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
	
public:
		void vfunc8(int);
		int vfunc32(int);
		int vfunc34();
		int vfunc35();
		void vfunc37();
		void vfunc38();
		void vfunc39();
		void vfunc40();
		void vfunc41();
		int vfunc42();
		void vfunc43();
		int vfunc44();
		int vfunc45();
		int vfunc46(int, int);
		int vfunc47();
		bool vfunc48();
		float vfunc50();
		float vfunc51();
		float vfunc52();
		float vfunc53();
		void vfunc54();
		int vfunc55(int);
		int vfunc56();
};
	CInput m_flMin;
	CInput m_flMax;
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CClampProxy's own function
	virtual bool vfunc0(void*, void*);
	virtual void vfunc1();
};
