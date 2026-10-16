// CMultiplayRules: the multiplayer rule set (primary vtable 0x1046b934).
#pragma once

#include "CGameRules.h"

class CMultiplayRules : public CGameRules
{
public:
	virtual int vfunc43(int a, int b);
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	virtual void vfunc75();
};
