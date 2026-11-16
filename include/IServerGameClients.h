// IServerGameClients (RTTI .?AVIServerGameClients@@): the engine's client interface, primary vtable 0x104627e0.
// The base is not modelled by CServerGameClients; only the scalar deleting destructor is recovered here.
#pragma once

#ifdef PCD_INITIALIZERS	// the initializer units: Source's interface with Troika's inline virtual destructor,
				// which the CServerGameClients global's atexit destroy runs (it stores this vtable)
class IServerGameClients
{
public:
	virtual ~IServerGameClients() {}
};
#else
class IServerGameClients
{
public:
	virtual void *vfunc0(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
#endif
