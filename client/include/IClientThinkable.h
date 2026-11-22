// IClientThinkable: client.dll's IClientThinkable as the game's vtables show it (client entity layer, 2026-11-22); slot numbers are the game's
// Names are Source 2003/2004's where the game's code in that slot does what Source's function does; vfuncN
// (primary chain) and <Stem>_vfuncN (a secondary interface: a plain vfuncN would merge with another
// interface's slot N in a class deriving from both): name unknown. Evidence: G:/decomp/projects/
// vtmb-client-experiments/2026-11-22-client-entity-layer/slotmap.py
#pragma once

class IClientThinkable
{
public:
	virtual void ClientThink() = 0;	// slot 0: C_BaseEntity: empty
	virtual void *GetThinkHandle() = 0;	// slot 1: C_BaseEntity: mov eax,[ecx+0x170] (+0x180); ClientThinkHandle_t in Source
	virtual void SetThinkHandle(void *hThink) = 0;	// slot 2: C_BaseEntity: stores it at +0x180, ret 4
	virtual void Release() = 0;	// slot 3: C_BaseEntity: a thunk to the networkable Release
};
