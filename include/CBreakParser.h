// CBreakParser: parses the "break" section of a model's physics key values (base IVPhysicsKeyHandler, not modelled).
// Declared standalone: the vtable has the two slots below.
#pragma once

class CBreakParser
{
public:
	virtual void vfunc0();
	virtual void vfunc1(void *pData);	// SetDefaults: fills the break parameters with their default values
};
