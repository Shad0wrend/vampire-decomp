// IVPhysicsKeyHandler (RTTI .?AVIVPhysicsKeyHandler@@): the vphysics key/value handler interface
// (vphysics_interface.h); a model's physics key values are handed to it block by block.
#pragma once

class IVPhysicsKeyHandler
{
public:
	virtual void vfunc0(void *pData, const char *pKey, const char *pValue) = 0;	// ParseKeyValue
	virtual void vfunc1(void *pData) = 0;	// SetDefaults
};
