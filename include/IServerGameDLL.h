// IServerGameDLL (RTTI .?AVIServerGameDLL@@): the game DLL interface, primary vtable 0x1046257c (24 slots).
// The base is not modelled by CServerGameDLL; only the scalar deleting destructor is recovered here.
#pragma once

#ifdef PCD_INITIALIZERS	// the initializer units: Source's interface with Troika's inline virtual destructor,
				// which the CServerGameDLL global's atexit destroy runs (it stores this vtable)
class IServerGameDLL
{
public:
	virtual ~IServerGameDLL() {}
	// slots 1..23 as CServerGameDLL declares them (pure here: the game's words are _purecall)
	virtual bool vfunc1(CreateInterfaceFn engineFactory, CreateInterfaceFn physicsFactory, CreateInterfaceFn fileSystemFactory, void *pGlobals) = 0;
	virtual bool vfunc2() = 0;
	virtual bool vfunc3(const char *pMapName, const char *pMapEntities, const char *pOldLevel, const char *pLandmarkName, char loadGame) = 0;
	virtual void vfunc4(int a, int b, int c) = 0;
	virtual void vfunc5(int a) = 0;
	virtual void vfunc6() = 0;
	virtual void vfunc7() = 0;
	virtual void vfunc8() = 0;
	virtual int vfunc9() = 0;
	virtual char const *vfunc10() = 0;
	virtual void vfunc11() = 0;
	virtual int vfunc12(int) = 0;
	virtual void vfunc13(void *pData, int a, int b, int c, int d, int e) = 0;
	virtual void vfunc14(void *pData, int a, int b, int c, int d, int e) = 0;
	virtual int vfunc15(int) = 0;
	virtual int vfunc16(int) = 0;
	virtual void vfunc17() = 0;
	virtual int vfunc18(void *pSaveData) = 0;
	virtual void vfunc19(void *pArg) = 0;
	virtual void vfunc20(void *pData) = 0;
	virtual void vfunc21(void *pSaveData, int a, int b) = 0;
	virtual int vfunc22(void *pSaveData, __int64 ab) = 0;
	virtual void vfunc23(int a, int b) = 0;
};
#else
class IServerGameDLL
{
public:
	virtual void *vfunc0(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
#endif
