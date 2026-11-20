// CHLPlayerMove: the client-side player move (CPlayerMove -> CHLPlayerMove); only the slot 1 and 2 overrides are declared.
#pragma once

#include "CPlayerMove.h"

class CHLPlayerMove : public CPlayerMove
{
public:
	// slots 1 and 2 with CPlayerMove's signatures: the game's words are the plain vfunc1 / vfunc2 below
	virtual void vfunc1(CBasePlayer *pPlayer, CUserCmd *pCmd, void *pHelper, void *pMoveData);
	virtual void vfunc2(CBasePlayer *pPlayer, CUserCmd *pCmd, void *pMoveData);
	void vfunc1(int a1, int a2, int a3, int a4);	// slot 1 (stub-free): calls the base slot 1 (0x10007883, ecx = this, four stack arguments), then the object at +0x20fc of the first argument, when set, gets its slot 7 (the four arguments)
	void vfunc2(int a1, int a2, int a3);	// slot 2: calls the base slot 2 (stub 0x1000637f, ecx = this, three stack arguments), then the object at +0x20fc of the first argument, when set, gets its slot 9 (the three arguments)
	void sub_1000637f(int a1, int a2, int a3);	// the base's slot 2 (CPlayerMove::vfunc2) called non-virtually, three stack arguments
};
