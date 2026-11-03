// CBreakable: declared by pcdecomp transplant for 0x1010f240 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"

struct datamap_t;

struct inputdata_t;

class CBreakable
{
public:
	CBreakable *vfunc5(unsigned int flags);
	void vfunc230(int a, int b);	// slot 230: CBaseEntity::vfunc230 (stub 0x10006d61) with the same arguments, then slot 75 (0x12c) with them
	int vfunc154(int a, int b);	// slot 154: 0x34 for material 7, 0x2c + RandomInt(0, 2) for material 0 (the random stream, slot 2), else CBaseEntity::vfunc154 (sub_1000b9e2) with the same arguments
	int sub_1000b9e2(int a, int b);	// CBaseEntity::vfunc154 (stub 0x1000b9e2), tail-called by vfunc154
	bool sub_1010efc0();	// stub 0x10012e1d: the dword at +0x454 is not 7
	void sub_1010d990(class CBaseEntity *pOther);	// "CBreakable::Touch": the touch function set by Spawn
	void sub_1010ddc0(void *pEnt);	// scope-less breaker update (called when the dword at +0x454 is not 7): sets the angles of this entity to (pitch, the float at +0x450, roll), computes the forward vector of the angles into the global vector at 0x1070ba40 (AngleVectors), stores the handle of pEnt (-1 for null) at +0x458 and calls slot 241
	void sub_1010dcf0(inputdata_t *pInput);	// "CBreakable::InputSetHealth": the integer value of the input (0 for other types) becomes the health at +0x210, is set into the OnHealthChanged output at +0x484 which is fired (activator, this); a health of 0 or less breaks it (sub_1010ddc0 with the activator)
	void sub_1010db90(inputdata_t *pInput);	// "CBreakable::InputAddHealth": like InputSetHealth, but the integer value of the input is added to the health
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CBreakable::KeyValue", declared as a plain member: "material" (0..9, else 1) goes to +0x454, "gibmodel" to +0x460 (as a pooled string); "deadmodel", "shards" and "lip" are accepted and ignored; everything else goes to CBaseEntity::KeyValue
	void sub_1010d6a0();	// slot 103 "CBreakable::Spawn" (stub 0x1000a10f), called directly by CPushable::Spawn
	void sub_1010dc50(inputdata_t &data);	// "CBreakable::InputHurt": the input's integer (0 for other types) is taken off the health at +0x210, the new health is set into the OnHealthChanged output at +0x484 which is fired (activator, this); a health of 0 or less breaks it
	void vfunc104();	// slot 104 "CBreakable::Precache" (plain member): the gib model of the material (+0x454) or the mapper's gib model (+0x460), precached through the engine, its index stored at +0x45c
	void sub_1010e620();	// frees the entities standing on top of the breakable: the box over the collision bounds (top 1 unit lower, 8 units higher) is queried (sub_101cca80, at most 256 entities), each found entity gets RemoveFlag(1) and SetGroundEntity(0)

	int sub_1010e100(void *pInfo);	// slot 142: OnTakeDamage-style, declared as a plain member (CBreakable::vfunc142)
	void vfunc141(struct CTakeDamageInfo *pInfo, const class Vector *pDir, struct CGameTrace *pTrace);	// slot 141 "TraceAttack" (plain member like the neighbours; the class vtable is not modelled): impact effects by material, then CBaseEntity::vfunc141
	char m_pad0000[0x204];
	unsigned int m_flags204;	// 0x204: entity flag word (bit 8 = 0x100 tested before the break)
	char m_pad0208[0x210 - 0x208];
	int m_iHealth;	// 0x210
	char m_pad0214[0x454 - 0x214];
	int m_nMaterial;	// 0x454
	unsigned int m_h458;	// 0x458: entity handle of the inflictor stored by the damage handler
	int m_nGibModelIndex;	// 0x45c: the precached gib model
	int m_iszGibModel;	// 0x460
	float m_flPressureDelay;	// 0x0464
	string_t m_iszExplosionParamEnt;	// 0x0468
	char m_pad046c[0x484 - 0x46c];
	char m_out0484[0x18];	// OnHealthChanged: a variant output (the variant value first, then the event)
public:
	int vfunc74(int);
	datamap_t * vfunc82();
	char vfunc117();
	bool vfunc223();
};
