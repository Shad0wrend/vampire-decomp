// CClampProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
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
	bool vfunc0(void *pMaterial, void *pKeyValues);
};
