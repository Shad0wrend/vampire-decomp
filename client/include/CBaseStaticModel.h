// CBaseStaticModel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the client entity interfaces' slots it fills (client entity layer, 2026-11-22); nothing else yet
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "IClientUnknown.h"
#include "IClientRenderable.h"

class CBaseStaticModel : public IClientUnknown, public IClientRenderable
{
public:
	virtual ICollideable *GetClientCollideable();	// IClientUnknown slot 2
	virtual IClientNetworkable *GetClientNetworkable();	// IClientUnknown slot 3
	virtual IClientRenderable *GetClientRenderable();	// IClientUnknown slot 4
	virtual IClientEntity *GetIClientEntity();	// IClientUnknown slot 5
	virtual C_BaseEntity *GetBaseEntity();	// IClientUnknown slot 6
	virtual IClientThinkable *GetClientThinkable();	// IClientUnknown slot 7
	virtual IClientUnknown *GetIClientUnknown();	// IClientRenderable slot 0
	virtual const Vector &GetRenderOrigin();	// IClientRenderable slot 1
	virtual const QAngle &GetRenderAngles();	// IClientRenderable slot 2
	virtual bool ShouldDraw();	// IClientRenderable slot 3
	virtual bool IsTransparent();	// IClientRenderable slot 4
	virtual bool UsesFrameBufferTexture();	// IClientRenderable slot 5
	virtual bool Renderable_vfunc6();	// IClientRenderable slot 6
	virtual const model_t *GetModel();	// IClientRenderable slot 8
	virtual int DrawModel(int flags, int a1);	// IClientRenderable slot 9
	virtual int Renderable_vfunc10(int a0, int a1);	// IClientRenderable slot 10
	virtual int ComputeFxBlend();	// IClientRenderable slot 11
	virtual int GetFxBlend();	// IClientRenderable slot 12
	virtual void GetColorModulation(float *color);	// IClientRenderable slot 13
	virtual bool LODTest();	// IClientRenderable slot 14
	virtual bool SetupBones(matrix3x4_t *pBoneToWorldOut, int nMaxBones, int boneMask, float currentTime, int a4);	// IClientRenderable slot 15
	virtual void SetupWeights();	// IClientRenderable slot 16
	virtual void DoAnimationEvents();	// IClientRenderable slot 17
	virtual void GetRenderBounds(Vector &mins, Vector &maxs);	// IClientRenderable slot 18
	virtual void GetRenderBoundsWorldspace(Vector &mins, Vector &maxs);	// IClientRenderable slot 19
	virtual bool Renderable_vfunc20();	// IClientRenderable slot 20
	virtual ~CBaseStaticModel();
};
