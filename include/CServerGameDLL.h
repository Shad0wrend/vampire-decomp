// class CServerGameDLL (RTTI .?AVCServerGameDLL@@), primary vtable 0x10462504, 24 slots.
// The base IServerGameDLL is not modelled; only the slot numbers are kept.
#pragma once

class CServerGameDLL
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3();
	virtual void vfunc4(int a, int b, int c);	// the level shutdown/frame step with three (unused) stack arguments: warns when the delete queue is not empty, runs slot 113 on every entity whose flag bit 1 (+0x268) is clear, clears the game's pending lists and, unless the cheat convar allows it, resets the convar at 0x106bd868 to 0
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12();
	virtual void vfunc13(void *pData, int a, int b, int c, int d, int e);	// builds a CSave on pData and runs its slot 3 (a..e)
	virtual void vfunc14(void *pData, int a, int b, int c, int d, int e);	// builds a CRestore on pData and runs its slot 3 (a..e)
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19(void *pArg);
	virtual void vfunc20(void *pData); virtual void vfunc21(); virtual void vfunc22();
	virtual void vfunc23(int a, int b);	// slot 23 "CServerGameDLL::BuildAdjacentMap": inside a profiler scope, when the global at gpGlobals + 0x20 is set stores the result of sub_101c7ff0(node list at +0x1c, 0x3c, a, b) at +0x18 of it
};
