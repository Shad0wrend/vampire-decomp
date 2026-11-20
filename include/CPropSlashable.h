// CPropSlashable: prop that can be slashed. Bases not recovered (the real chain is CBreakableProp / CBaseProp);
// modelled on CBaseEntity directly, only what the matched functions need.
#pragma once

#include "CBaseEntity.h"

class CVDmg_t;

struct CPropSlashableDamageInfo	// the damage info handed to OnTakeDamage (0x4c bytes, only these fields are read here)
{
	CVDmg_t *m_pVDmg;	// 0x00: the damage record, when set it names the damage
	char m_pad0004[0x2c - 4];
	char *m_pAttacker;	// 0x2c: the attacking entity
	float m_flDamage;	// 0x30: the plain damage, used without a damage record
};

class CPropSlashable : public CBaseEntity
{
public:
	virtual void vfunc103();	// slot 103 "CPropSlashable::Spawn": CBaseProp::Spawn, take-damage mode 2, SetSolid(6), AddFlag(0x20000000), then the occludes-sound flag
	void sub_10011793();	// CBaseProp::vfunc103, called directly (jump stub)
	int vfunc142(struct CTakeDamageInfo *pInfo);	// slot 142 (declared as a plain member) "CPropSlashable::OnTakeDamage": only a hit by an attacker wielding the knife (class name "item_w_knife") counts: subtracts the damage from the health (+0x210); at zero or below stores the broken state (+0x730) at +0x670, fires the output at +0x734 and returns 1, else 0
public:
    virtual datamap_t * vfunc82();
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
	char m_pad03e0[0x730 - 0x3e0];
	int m_nDamagedSkin;	// 0x0730
	char m_pad0734[0x74c - 0x734];
};
