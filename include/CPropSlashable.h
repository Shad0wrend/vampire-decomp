// CPropSlashable: prop that can be slashed. Bases not recovered (the real chain is CBreakableProp / CBaseProp);
// modelled on CBaseEntity directly, only what the matched functions need.
#pragma once

#include "CBaseEntity.h"

class CPropSlashable : public CBaseEntity
{
public:
	virtual void vfunc103();	// slot 103 "CPropSlashable::Spawn": CBaseProp::Spawn, take-damage mode 2, SetSolid(6), AddFlag(0x20000000), then the occludes-sound flag
	void sub_10011793();	// CBaseProp::vfunc103, called directly (jump stub)
};
