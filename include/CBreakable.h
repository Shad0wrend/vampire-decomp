// CBreakable : CBaseEntity (the game's RTTI: CBaseEntity, IServerEntity ...; vtable 0x1045ed3c, 242 slots). Of
// CBaseEntity's slots 0..133 it declares the ones whose game word differs from CBaseEntity's vtable (0x10450584),
// with CBaseEntity's signature; slots 134..241 are its new virtuals (placeholders keep the slot indices; 241 is new in
// CBreakable). Constructed by func_breakable (0x1010d3a0) and, as the base, by func_breakable_surf.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"
#include "string_t.h"

void *sub_100aa720(unsigned int size);	// the entities' operator new (stub 0x1000db89)

struct datamap_t;
struct inputdata_t;
struct CTakeDamageInfo;
struct CGameTrace;

class CBreakable : public CBaseEntity
{
public:
	CBreakable() : CBaseEntity(0) {}
	void *operator new(unsigned int size) { return sub_100aa720(size); }

	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (0x1010f240)
	virtual bool vfunc74(int);	// slot 74 (0x1010e600): sub_1010efc0, the material is not 7
	virtual datamap_t *vfunc82();	// slot 82 (0x1010d450): the datamap
	virtual void vfunc103();	// slot 103 "CBreakable::Spawn" (0x1010d6a0, stub 0x1000a10f), called directly by CPushable::Spawn and CBreakableSurface::Spawn
	virtual void vfunc104();	// slot 104 "CBreakable::Precache": the gib model of the material (+0x454) or the mapper's gib model (+0x460), precached through the engine, its index stored at +0x45c
	virtual bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CBreakable::KeyValue": "material" (0..9, else 1) goes to +0x454, "gibmodel" to +0x460 (as a pooled string); "deadmodel", "shards" and "lip" are accepted and ignored; everything else goes to CBaseEntity::KeyValue
	virtual void vfunc113();	// slot 113 (0x1010d8a0): a tail call of CBaseEntity::vfunc113
	virtual int vfunc117();	// slot 117 (0x1010d430): CBaseEntity::vfunc117 without bit 1 (ObjectCaps without FCAP_ACROSS_TRANSITION)
	virtual void vfunc134(); virtual void vfunc135(); virtual void vfunc136(); virtual void vfunc137(); virtual void vfunc138(); virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141(CTakeDamageInfo *pInfo, const Vector *pDir, CGameTrace *pTrace);	// slot 141 "TraceAttack" (0x1010dea0): impact effects by material, then CBaseEntity::vfunc141
	virtual int vfunc142(CTakeDamageInfo *pInfo);	// slot 142 "CBreakable::OnTakeDamage" (0x1010e100)
	virtual void vfunc143(); virtual void vfunc144(); virtual void vfunc145(); virtual void vfunc146(); virtual void vfunc147(); virtual void vfunc148();
	virtual void vfunc149(); virtual void vfunc150(); virtual void vfunc151(); virtual void vfunc152(); virtual void vfunc153();
	virtual int vfunc154(int a, int b);	// slot 154: 0x34 for material 7, 0x2c + RandomInt(0, 2) for material 0 (the random stream, slot 2), else CBaseEntity::vfunc154 (sub_1000b9e2) with the same arguments
	virtual void vfunc155(); virtual void vfunc156(); virtual void vfunc157(); virtual void vfunc158(); virtual void vfunc159(); virtual void vfunc160();
	virtual void vfunc161(); virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164(); virtual void vfunc165(); virtual void vfunc166();
	virtual void vfunc167(); virtual void vfunc168(); virtual void vfunc169(); virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172();
	virtual void vfunc173(); virtual void vfunc174(); virtual void vfunc175(); virtual void vfunc176(); virtual void vfunc177(); virtual void vfunc178();
	virtual void vfunc179(); virtual void vfunc180(); virtual void vfunc181(); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
	virtual void vfunc185(); virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189(); virtual void vfunc190();
	virtual void vfunc191(); virtual void vfunc192(); virtual void vfunc193(); virtual void vfunc194(); virtual void vfunc195(); virtual void vfunc196();
	virtual void vfunc197(); virtual void vfunc198(); virtual void vfunc199(); virtual void vfunc200(); virtual void vfunc201(); virtual void vfunc202();
	virtual void vfunc203(); virtual void vfunc204(); virtual void vfunc205(); virtual void vfunc206(); virtual void vfunc207(); virtual void vfunc208();
	virtual void vfunc209(); virtual void vfunc210(); virtual void vfunc211(); virtual void vfunc212(); virtual void vfunc213(); virtual void vfunc214();
	virtual void vfunc215(); virtual void vfunc216(); virtual void vfunc217(); virtual void vfunc218(); virtual void vfunc219(); virtual void vfunc220();
	virtual void vfunc221(); virtual void vfunc222();
	virtual bool vfunc223();	// slot 223 (0x1010d880)
	virtual void vfunc224(); virtual void vfunc225(); virtual void vfunc226(); virtual void vfunc227(); virtual void vfunc228(); virtual void vfunc229();
	virtual void vfunc230(int a, int b);	// slot 230: CBaseEntity::vfunc230 (stub 0x10006d61) with the same arguments, then slot 75 (0x12c) with them
	virtual void vfunc231(); virtual void vfunc232(); virtual void vfunc233(); virtual void vfunc234(); virtual void vfunc235(); virtual void vfunc236();
	virtual void vfunc237(); virtual void vfunc238(); virtual void vfunc239(); virtual void vfunc240();
	virtual void vfunc241();	// slot 241, new in CBreakable (0x1010e750, "CBreakable::Die"): called by the damage handler and the breaker update

	int sub_1000b9e2(int a, int b);	// CBaseEntity::vfunc154 (stub 0x1000b9e2), tail-called by vfunc154
	bool sub_1010efc0();	// stub 0x10012e1d: the dword at +0x454 is not 7
	void sub_1010d990(CBaseEntity *pOther);	// "CBreakable::Touch": the touch function set by Spawn
	void sub_1010ddc0(void *pEnt);	// scope-less breaker update (called when the dword at +0x454 is not 7): sets the angles of this entity to (pitch, the float at +0x450, roll), computes the forward vector of the angles into the global vector at 0x1070ba40 (AngleVectors), stores the handle of pEnt (-1 for null) at +0x458 and calls slot 241
	void sub_1010dcf0(inputdata_t *pInput);	// "CBreakable::InputSetHealth": the integer value of the input (0 for other types) becomes the health at +0x210, is set into the OnHealthChanged output at +0x484 which is fired (activator, this); a health of 0 or less breaks it (sub_1010ddc0 with the activator)
	void sub_1010db90(inputdata_t *pInput);	// "CBreakable::InputAddHealth": like InputSetHealth, but the integer value of the input is added to the health
	void sub_1010dc50(inputdata_t &data);	// "CBreakable::InputHurt": the input's integer (0 for other types) is taken off the health at +0x210, the new health is set into the OnHealthChanged output at +0x484 which is fired (activator, this); a health of 0 or less breaks it
	void sub_1010e620();	// frees the entities standing on top of the breakable: the box over the collision bounds (top 1 unit lower, 8 units higher) is queried (sub_101cca80, at most 256 entities), each found entity gets RemoveFlag(1) and SetGroundEntity(0)

	char m_pad03e0[0x454 - sizeof(CBaseEntity)];	// 0x3e0
	int m_nMaterial;	// 0x454
	EHANDLE m_hBreaker;	// 0x458: the entity that broke it (the inflictor stored by the damage handler)
	int m_nGibModelIndex;	// 0x45c: the precached gib model
	int m_iszGibModel;	// 0x460
	float m_flPressureDelay;	// 0x464
	string_t m_iszExplosionParamEnt;	// 0x468
	COutputEvent m_OnBreak;	// 0x46c
	COutputEvent m_OnHealthChanged;	// 0x484: a variant output (the variant value first, then the event)
};
