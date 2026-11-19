// CGameDLL_ConVarAccessor: IConCommandBaseAccessor implementation of the game DLL.
#pragma once

struct CConVarArgView {
	virtual void vfunc0();
	virtual bool vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(void *p);
};

class IConCommandBaseAccessor	// RTTI .?AVIConCommandBaseAccessor@@, the interface CGameDLL_ConVarAccessor implements (Source's public/convar.h, 1 slot)
{
public:
	virtual bool vfunc0(CConVarArgView *pCommand) = 0;	// slot 0
};

class CGameDLL_ConVarAccessor : public IConCommandBaseAccessor
{
public:
	virtual bool vfunc0(CConVarArgView *pCommand);
};
