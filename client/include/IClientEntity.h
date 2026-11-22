// IClientEntity: client.dll's IClientEntity as the game's vtables show it (client entity layer, 2026-11-22); slot numbers are the game's
// Names are Source 2003/2004's where the game's code in that slot does what Source's function does; vfuncN
// (primary chain) and <Stem>_vfuncN (a secondary interface: a plain vfuncN would merge with another
// interface's slot N in a class deriving from both): name unknown. Evidence: G:/decomp/projects/
// vtmb-client-experiments/2026-11-22-client-entity-layer/slotmap.py
#pragma once
#include "IClientUnknown.h"
#include "IClientRenderable.h"
#include "IClientNetworkable.h"
#include "IClientCollideable.h"
#include "IClientThinkable.h"

class Vector;
class QAngle;
class CMouthInfo;
struct SpatializationInfo_t;

class IClientEntity : public IClientUnknown, public IClientRenderable, public IClientNetworkable, public IClientCollideable, public IClientThinkable
{
public:
	virtual ~IClientEntity() {}	// slot 8: the game's ??_G 0x1009dd20 stores IClientEntity's five vtables, then deletes
	virtual const Vector &GetAbsOrigin() const = 0;	// slot 9: C_BaseEntity: lea eax,[ecx+0x23c]
	virtual const QAngle &GetAbsAngles() const = 0;	// slot 10: C_BaseEntity: lea eax,[ecx+0x248]
	virtual const Vector &vfunc11() = 0;	// slot 11: C_BaseEntity: the GetAbsOrigin of the entity the handle at +0x408 names, else its own
	virtual CMouthInfo *GetMouth() = 0;	// slot 12: C_BaseEntity: lea eax,[ecx+0xfc]
	virtual bool GetSoundSpatialization(SpatializationInfo_t &info) = 0;	// slot 13: C_BaseEntity: 446 B, asks entindex, fills info
};
