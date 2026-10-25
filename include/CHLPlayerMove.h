// CHLPlayerMove: the client-side player move (CPlayerMove -> CHLPlayerMove); only the slot 1 override is declared.
#pragma once

#include "CPlayerMove.h"

class CHLPlayerMove : public CPlayerMove
{
public:
	void vfunc1(int a1, int a2, int a3, int a4);	// slot 1 (stub-free): calls the base slot 1 (0x10007883, ecx = this, four stack arguments), then the object at +0x20fc of the first argument, when set, gets its slot 7 (the four arguments)
};
