// CFunctionProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor; nothing else yet
// the destructor is slot 3 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CResultProxy.h"

class CFunctionProxy : public CResultProxy
{
public:
	virtual ~CFunctionProxy();
	bool sub_100e34b0(void *pMaterial, void *pKeyValues);
	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;
};
