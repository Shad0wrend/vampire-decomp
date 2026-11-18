// class CServerGameDLL (RTTI .?AVCServerGameDLL@@), primary vtable 0x10462504, 24 slots.
// The base IServerGameDLL is not modelled; only the slot numbers are kept.
#pragma once

typedef void *(__cdecl *CreateInterfaceFn)(const char *pName, int *pReturnCode);

#ifdef PCD_INITIALIZERS
#include "IServerGameDLL.h"
#endif

class CServerGameDLL
#ifdef PCD_INITIALIZERS
	: public IServerGameDLL	// the base the matched code does not model
#endif
{
public:
	virtual void vfunc0();
	virtual bool vfunc1(CreateInterfaceFn engineFactory, CreateInterfaceFn physicsFactory, CreateInterfaceFn fileSystemFactory, void *pGlobals);	// DLLInit: fetches the engine interfaces (g_1070b22c .. g_1070b254) from the factories, publishes the globals, registers five save/restore handlers with the block set at 0x10592db0
 virtual bool vfunc2(); virtual bool vfunc3(const char *pMapName, const char *pMapEntities, const char *pOldLevel, const char *pLandmarkName, char loadGame);
	virtual void vfunc4(int a, int b, int c);	// the level shutdown/frame step with three (unused) stack arguments: warns when the delete queue is not empty, runs slot 113 on every entity whose flag bit 1 (+0x268) is clear, clears the game's pending lists and, unless the cheat convar allows it, resets the convar at 0x106bd868 to 0
	virtual void vfunc5(int a);	// slot 5 "CServerGameDLL::GameFrame" (0x1011abc0, ret 4; the argument is pushed on as a dword to the cdecl sub_1003bdd0): scope trace "CServerGameDLL::GameFrame", then the free calls sub_1042c6c0(), sub_10352f00(), sub_1003bdd0(a), sub_1042c6e0(), sub_101bdb50()->vfunc1() (object at 0x1072c474), sub_100cfac0(), stub 0x10009633 (0x10119980), sub_1027ee90(); then, if the convar g_1070b184 (ConVar *; IsCommand vfunc1 false with m_nValue != -1, or true) selects an entity: CBaseEntity::Instance(engine->vfunc38(GetInt() ...)) inlined with its own "CBaseEntity::Instance" scope trace and a dynamic_cast<CBaseAnimating *> -> slot 264 of it; finally sub_100f6ce0 on the object at 0x106eb5d8 and sub_1018be60()
	virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual int vfunc9();
	virtual char const * vfunc10(); virtual void vfunc11(); virtual int vfunc12(int);
	virtual void vfunc13(void *pData, int a, int b, int c, int d, int e);	// builds a CSave on pData and runs its slot 3 (a..e)
	virtual void vfunc14(void *pData, int a, int b, int c, int d, int e);	// builds a CRestore on pData and runs its slot 3 (a..e)
	virtual int vfunc15(int); virtual int vfunc16(int); virtual void vfunc17(); virtual int vfunc18(void *pSaveData); virtual void vfunc19(void *pArg);
	virtual void vfunc20(void *pData);
	virtual void vfunc21(void *pSaveData, int a, int b);	// slot 21 "CServerGameDLL::Restore" (0x1011b300, ret 0xc): inside the inlined VPROF scope of that name, a CRestore on the stack built from pSaveData (CRestore::CRestore, destroyed at the end of the call: RemoveAll / Purge of its vector), then the block set at *0x10592db0: slot 7 (&restore, a, b) and slot 8 (); same scope shape as vfunc18 / vfunc22
	virtual int vfunc22(void *pSaveData, __int64 ab);	// "CServerGameDLL::CreateEntityTransitionList": inside a profiler scope, runs sub_101a3c40(pSaveData, a, b) and when it is non-zero restores four block handlers from a CRestore on pSaveData; then calls slot 8 of all four; returns the result
	
	virtual void vfunc23(int a, int b);	// slot 23 "CServerGameDLL::BuildAdjacentMap": inside a profiler scope, when the global at gpGlobals + 0x20 is set stores the result of sub_101c7ff0(node list at +0x1c, 0x3c, a, b) at +0x18 of it
};
