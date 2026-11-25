// IClientRenderable: client.dll's IClientRenderable as the game's vtables show it (client entity layer, 2026-11-22); slot numbers are the game's
// Names are Source 2003/2004's where the game's code in that slot does what Source's function does; vfuncN
// (primary chain) and <Stem>_vfuncN (a secondary interface: a plain vfuncN would merge with another
// interface's slot N in a class deriving from both): name unknown. Evidence: G:/decomp/projects/
// vtmb-client-experiments/2026-11-22-client-entity-layer/slotmap.py
#pragma once

class IClientUnknown;
class Vector;
class QAngle;
struct model_t;
struct matrix3x4_t;

class IClientRenderable
{
public:
	virtual IClientUnknown *GetIClientUnknown() = 0;	// slot 0: C_BaseEntity: this-4
	virtual const Vector &GetRenderOrigin() = 0;	// slot 1: C_BaseEntity: the abs origin (+0x23c)
	virtual const QAngle &GetRenderAngles() = 0;	// slot 2: C_BaseEntity: the abs angles (+0x248)
	virtual bool ShouldDraw() = 0;	// slot 3: C_BaseEntity: 72 B
	virtual bool IsTransparent() = 0;	// slot 4: C_BaseEntity: asks modelinfo about its model
	virtual bool UsesFrameBufferTexture() = 0;	// slot 5: C_BaseEntity: false
	virtual bool Renderable_vfunc6() = 0;	// slot 6: C_BaseEntity: false; not in Source 2003/2004 here
	virtual bool Renderable_vfunc7(int a0) { return false; }	// slot 7: IClientRenderable's own vtable has it (0x10001580: xor al,al; ret 4)
	virtual const model_t *GetModel() = 0;	// slot 8: C_BaseEntity: mov eax,[ecx+0x3c] (the model at +0x40)
	virtual int DrawModel(int flags, int a1) = 0;	// slot 9: C_BaseEntity: 184 B, ret 8 (two arguments here; one in Source)
	virtual int Renderable_vfunc10(int a0, int a1) = 0;	// slot 10: C_BaseEntity: 0, ret 8
	virtual int ComputeFxBlend() = 0;	// slot 11: C_BaseEntity: 1642 B, a switch on the render fx; returns the blend (CBaseStaticModel: its byte at +0x3a, CDefaultClientRenderable: 255)
	virtual int GetFxBlend() = 0;	// slot 12: C_BaseEntity: a tail call of slot 11 (Beam_t: 255, its slot 11 calls it)
	virtual void GetColorModulation(float *color) = 0;	// slot 13: C_BaseEntity 0x100a1a20: the colour bytes at +0x50 as floats, ret 4 (no row of its own: the 1642 B row 0x100a1400 runs over it)
	virtual bool LODTest() = 0;	// slot 14: C_BaseEntity: true
	virtual bool SetupBones(matrix3x4_t *pBoneToWorldOut, int nMaxBones, int boneMask, float currentTime, int a4) = 0;	// slot 15: C_BaseEntity: ret 0x14 (five arguments here; four in Source)
	virtual void SetupWeights() = 0;	// slot 16: C_BaseEntity: empty
	virtual void DoAnimationEvents() = 0;	// slot 17: C_BaseEntity: empty
	virtual void GetRenderBounds(Vector &mins, Vector &maxs) = 0;	// slot 18: C_BaseEntity: 337 B, modelinfo's model type, else the collision bounds; ret 8; right after DoAnimationEvents as in Source 2003
	virtual void GetRenderBoundsWorldspace(Vector &mins, Vector &maxs) = 0;	// slot 19: C_BaseEntity: modelinfo's model type, else slot 15 of the member at +0x190 (Source 2004 ICollideable::WorldSpaceSurroundingBounds) with both; ret 8
	virtual bool Renderable_vfunc20() = 0;	// slot 20: C_BaseEntity: false
	const Vector &sub_10094040();
};
