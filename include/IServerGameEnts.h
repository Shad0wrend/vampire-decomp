// IServerGameEnts (RTTI .?AVIServerGameEnts@@): the engine's entity interface, primary vtable 0x10462780.
// The base is not modelled by CServerGameEnts; only the scalar deleting destructor is recovered here.
#pragma once

#ifdef PCD_INITIALIZERS	// the initializer units: Source's interface with Troika's inline virtual destructor,
				// which the CServerGameEnts global's atexit destroy runs (it stores this vtable)
class IServerGameEnts
{
public:
	virtual ~IServerGameEnts() {}
};
#else
class IServerGameEnts
{
public:
	virtual void *vfunc0(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
#endif
