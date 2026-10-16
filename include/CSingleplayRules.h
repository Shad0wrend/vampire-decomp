// CSingleplayRules: the single player rule set, derived from CGameRules at +0x0.
#pragma once

#include "CGameRules.h"

class CSingleplayRules : public CGameRules
{
public:
	virtual int vfunc43(int a, int b);
	virtual int vfunc48(int index);
	virtual float vfunc49(int a);
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
};
