// IMoveHelperServer: the server's move helper interface (RTTI .?AVIMoveHelperServer@@, base IMoveHelper; vtable
// 0x1046af64): the SDK's dlls/movehelper_server.h. Slot 15, SetHost, is _purecall in the game's vtable; slot 14 holds
// its own scalar deleting destructor (0x1013ede0).
#pragma once

#include "IMoveHelper.h"

class CBaseEntity;

class IMoveHelperServer : public IMoveHelper
{
public:
	virtual void vfunc15(CBaseEntity *pHost) = 0;	// SetHost
};
