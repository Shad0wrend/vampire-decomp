// IServerGameDLL (RTTI .?AVIServerGameDLL@@): the game DLL interface, primary vtable 0x1046257c (24 slots).
// The base is not modelled by CServerGameDLL; only the scalar deleting destructor is recovered here.
#pragma once

#ifdef PCD_INITIALIZERS	// the initializer units: Source's interface with Troika's inline virtual destructor,
				// which the CServerGameDLL global's atexit destroy runs (it stores this vtable)
class IServerGameDLL
{
public:
	virtual ~IServerGameDLL() {}
};
#else
class IServerGameDLL
{
public:
	virtual void *vfunc0(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
#endif
