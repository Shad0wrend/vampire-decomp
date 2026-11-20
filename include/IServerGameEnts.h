// IServerGameEnts (RTTI .?AVIServerGameEnts@@): the engine's entity interface, primary vtable 0x10462780.
// The base is not modelled by CServerGameEnts; only the scalar deleting destructor is recovered here.
#pragma once

#ifdef PCD_INITIALIZERS	// the initializer units: Source's interface with Troika's inline virtual destructor,
				// which the CServerGameEnts global's atexit destroy runs (it stores this vtable)
class IServerGameEnts
{
public:
	virtual ~IServerGameEnts() {}
	// slots 1..3 as CServerGameEnts declares them (pure here: the game's words are _purecall)
	virtual void vfunc1() = 0;
	virtual void vfunc2(CServerGameEntsEdict *pFirst, CServerGameEntsEdict *pSecond) = 0;
	virtual int vfunc3(int) = 0;
};
#else
class IServerGameEnts
{
public:
	virtual void *vfunc0(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
#endif
