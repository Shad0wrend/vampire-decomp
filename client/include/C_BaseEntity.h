// C_BaseEntity: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its overrides of IHandleEntity::vfunc0 and IHandleEntity::vfunc1, its destructor, its operator delete, the client entity interfaces' slots it fills (client entity layer, 2026-11-22), the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; its overrides are declared, the other virtual functions before it are not yet
#pragma once
#include "IClientEntity.h"

class C_BaseEntity : public IClientEntity
{
public:
	virtual ICollideable *GetClientCollideable();	// IClientUnknown slot 2
	virtual IClientNetworkable *GetClientNetworkable();	// IClientUnknown slot 3
	virtual IClientRenderable *GetClientRenderable();	// IClientUnknown slot 4
	virtual IClientEntity *GetIClientEntity();	// IClientUnknown slot 5
	virtual C_BaseEntity *GetBaseEntity();	// IClientUnknown slot 6
	virtual IClientThinkable *GetClientThinkable();	// IClientUnknown slot 7
	virtual const Vector &GetAbsOrigin() const;	// IClientEntity slot 9
	virtual const QAngle &GetAbsAngles() const;	// IClientEntity slot 10
	virtual const Vector &vfunc11();	// IClientEntity slot 11
	virtual CMouthInfo *GetMouth();	// IClientEntity slot 12
	virtual bool GetSoundSpatialization(SpatializationInfo_t &info);	// IClientEntity slot 13
	virtual IClientUnknown *GetIClientUnknown();	// IClientRenderable slot 0, IClientNetworkable slot 0
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
	virtual void Release();	// IClientNetworkable slot 1, IClientThinkable slot 3
	virtual ClientClass *GetClientClass();	// IClientNetworkable slot 2
	virtual void NotifyShouldTransmit(int state);	// IClientNetworkable slot 3
	virtual void OnPreDataChanged(int updateType);	// IClientNetworkable slot 4
	virtual void OnDataChanged(int updateType);	// IClientNetworkable slot 5
	virtual void PreDataUpdate(int updateType);	// IClientNetworkable slot 6
	virtual void PostDataUpdate(int updateType);	// IClientNetworkable slot 7
	virtual bool IsDormant();	// IClientNetworkable slot 8
	virtual int entindex();	// IClientNetworkable slot 9
	virtual void ReceiveMessage(int classID, bf_read &msg);	// IClientNetworkable slot 10
	virtual void *GetDataTableBasePtr();	// IClientNetworkable slot 11
	virtual bool Collideable_vfunc0(int a0, int a1, int a2);	// IClientCollideable slot 0
	virtual void Collideable_vfunc1(int a0, int a1);	// IClientCollideable slot 1
	virtual int GetCollisionModelIndex();	// IClientCollideable slot 2
	virtual const model_t *GetCollisionModel();	// IClientCollideable slot 3
	virtual const Vector &GetCollisionOrigin();	// IClientCollideable slot 4
	virtual const QAngle &GetCollisionAngles();	// IClientCollideable slot 5
	virtual int Collideable_vfunc6();	// IClientCollideable slot 6
	virtual int Collideable_vfunc7();	// IClientCollideable slot 7
	virtual int GetSolid();	// IClientCollideable slot 8
	virtual int GetSolidFlags();	// IClientCollideable slot 9
	virtual bool Collideable_vfunc10();	// IClientCollideable slot 10
	virtual bool Collideable_vfunc11();	// IClientCollideable slot 11
	virtual int GetCollisionGroup();	// IClientCollideable slot 12
	virtual int Collideable_vfunc13();	// IClientCollideable slot 13
	virtual void ClientThink();	// IClientThinkable slot 0
	virtual void *GetThinkHandle();	// IClientThinkable slot 1
	virtual void SetThinkHandle(void *hThink);	// IClientThinkable slot 2
	virtual int vfunc0(int a0);	// overrides IHandleEntity::vfunc0, pure there; C_BaseEntity has a vtable of its own in the game
	virtual unsigned int *vfunc1();	// overrides IHandleEntity::vfunc1, pure there; C_BaseEntity has a vtable of its own in the game
	virtual ~C_BaseEntity();
	static void operator delete(void *pMem);
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots C_BaseEntity adds to its base's vtable: 14-119, vfuncK at slot K
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual int vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	virtual void vfunc82();
	virtual void vfunc83();
	virtual void vfunc84();
	virtual void vfunc85();
	virtual int vfunc86();
	virtual void vfunc87();
	virtual void vfunc88();
	virtual void vfunc89();
	virtual void vfunc90();
	virtual void vfunc91();
	virtual void vfunc92();
	virtual void vfunc93();
	virtual void vfunc94();
	virtual void vfunc95();
	virtual void vfunc96();
	virtual void vfunc97();
	virtual void vfunc98();
	virtual void vfunc99();
	virtual void vfunc100();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc103();
	virtual void vfunc104();
	virtual void vfunc105();
	virtual void vfunc106();
	virtual void vfunc107();
	virtual void vfunc108();
	virtual void vfunc109();
	virtual void vfunc110();
	virtual void vfunc111();
	virtual void vfunc112();
	virtual void vfunc113();
	virtual char*vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
	virtual void vfunc117();
	virtual void vfunc118();
	virtual void vfunc119();
};
