// IServerGameClients (RTTI .?AVIServerGameClients@@): the engine's client interface, primary vtable 0x104627e0.
// The base is not modelled by CServerGameClients; only the scalar deleting destructor is recovered here.
#pragma once

#ifdef PCD_INITIALIZERS	// the initializer units: Source's interface with Troika's inline virtual destructor,
				// which the CServerGameClients global's atexit destroy runs (it stores this vtable)
class IServerGameClients
{
public:
	virtual ~IServerGameClients() {}
	// slots 1..13 as CServerGameClients declares them (pure here: the game's words are _purecall)
	virtual void vfunc1() = 0;
	virtual void vfunc2(int) = 0;
	virtual void vfunc3(void *pEdict) = 0;
	virtual int vfunc4(int, int) = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6(CServerGameClients_Edict *pEdict, int clientIndex) = 0;
	virtual void vfunc7(int edictA, int edictB, int c) = 0;
	virtual float vfunc8(CServerGameClients_Edict *pEdict, void *pBuf, int a3, int numcmds, int totalcmds, char bIgnore, int a7) = 0;
	virtual void vfunc9(CServerGameClients_Edict *pEdict, int a) = 0;
	virtual void vfunc10() = 0;
	virtual void vfunc11() = 0;
	virtual void *vfunc12(void *pEdict) = 0;
	virtual void vfunc13(void *pEdict, float *pOut) = 0;
};
#else
class IServerGameClients
{
public:
	virtual void *vfunc0(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
#endif
