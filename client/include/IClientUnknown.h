// IClientUnknown: client.dll's IClientUnknown as the game's vtables show it (client entity layer, 2026-11-22); slot numbers are the game's
// Names are Source 2003/2004's where the game's code in that slot does what Source's function does; vfuncN
// (primary chain) and <Stem>_vfuncN (a secondary interface: a plain vfuncN would merge with another
// interface's slot N in a class deriving from both): name unknown. Evidence: G:/decomp/projects/
// vtmb-client-experiments/2026-11-22-client-entity-layer/slotmap.py
#pragma once
#include "CBaseHandle.h"

class ICollideable;
class IClientNetworkable;
class IClientRenderable;
class IClientEntity;
class C_BaseEntity;
class IClientThinkable;

class IClientUnknown : public IHandleEntity
{
public:
	virtual ICollideable *GetClientCollideable() = 0;	// slot 2: C_BaseEntity: lea eax,[ecx+0x190] (a member, not the IClientCollideable base)
	virtual IClientNetworkable *GetClientNetworkable() = 0;	// slot 3: C_BaseEntity: this+8 or null; C_BaseTempEntity: this+4
	virtual IClientRenderable *GetClientRenderable() = 0;	// slot 4: C_BaseEntity: this+4 or null
	virtual IClientEntity *GetIClientEntity() = 0;	// slot 5: C_BaseEntity: this
	virtual C_BaseEntity *GetBaseEntity() = 0;	// slot 6: C_BaseEntity: this
	virtual IClientThinkable *GetClientThinkable() = 0;	// slot 7: C_BaseEntity: this+0x10 or null
};
