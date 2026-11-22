// IClientCollideable: client.dll's IClientCollideable as the game's vtables show it (client entity layer, 2026-11-22); slot numbers are the game's
// Names are Source 2003/2004's where the game's code in that slot does what Source's function does; vfuncN
// (primary chain) and <Stem>_vfuncN (a secondary interface: a plain vfuncN would merge with another
// interface's slot N in a class deriving from both): name unknown. Evidence: G:/decomp/projects/
// vtmb-client-experiments/2026-11-22-client-entity-layer/slotmap.py
#pragma once

class Vector;
class QAngle;
struct model_t;

class IClientCollideable
{
public:
	virtual bool Collideable_vfunc0(int a0, int a1, int a2) = 0;	// slot 0: C_BaseEntity: true, ret 0xc
	virtual void Collideable_vfunc1(int a0, int a1) = 0;	// slot 1: C_BaseEntity: calls its slots 52 and 53, ret 8
	virtual int GetCollisionModelIndex() = 0;	// slot 2: C_BaseEntity: a tail call of its slot 51
	virtual const model_t *GetCollisionModel() = 0;	// slot 3: C_BaseEntity: GetModel() (renderable slot 8)
	virtual const Vector &GetCollisionOrigin() = 0;	// slot 4: C_BaseEntity: GetAbsOrigin()
	virtual const QAngle &GetCollisionAngles() = 0;	// slot 5: C_BaseEntity: GetAbsAngles()
	virtual int Collideable_vfunc6() = 0;	// slot 6: C_BaseEntity: a tail call of slot 11 of the member at +0x190; arguments unknown
	virtual int Collideable_vfunc7() = 0;	// slot 7: C_BaseEntity: a tail call of slot 12 of the member at +0x190; arguments unknown
	virtual int GetSolid() = 0;	// slot 8: C_BaseEntity: mov eax,[ecx+0x1f4] (+0x200); SolidType_t in Source
	virtual int GetSolidFlags() = 0;	// slot 9: C_BaseEntity: mov eax,[ecx+0x1f8] (+0x204)
	virtual bool Collideable_vfunc10() = 0;	// slot 10: C_BaseEntity: IsTransparent() (renderable slot 4)
	virtual bool Collideable_vfunc11() = 0;	// slot 11: C_BaseEntity: false
	virtual int GetCollisionGroup() = 0;	// slot 12: C_BaseEntity: mov eax,[ecx+0x2c4] (+0x2d0)
	virtual int Collideable_vfunc13() = 0;	// slot 13: C_BaseEntity: 45 B, looks up the handle at +0x3e4
};
