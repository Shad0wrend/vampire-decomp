// CBreakParser: parses the "break" section of a model's physics key values; an IVPhysicsKeyHandler (its two slots).
#pragma once

#include "IVPhysicsKeyHandler.h"

class CBreakParser : public IVPhysicsKeyHandler
{
public:
	virtual void vfunc0(void *pData, const char *pszKey, const char *pszValue);	// ParseKeyValue: model (the model path, "models/" and ".mdl" added when missing), offset, health (+0x114), fadetime (+0x110), bodyindex (+0x118) of the break model record
	virtual void vfunc1(void *pData);	// SetDefaults: fills the break parameters with their default values
};
