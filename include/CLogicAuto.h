// CLogicAuto: logic_auto entity (fires its output when the map spawns).
#pragma once

#include "CBaseEntity.h"
#include "COutputEvent.h"

void *sub_100aa720(unsigned int size);

#define m_flTime m_flNextThink	// the name the first matched functions of this class used for CBaseEntity's +0x17c

class CLogicAuto : public CBaseEntity
{
public:
	char m_padAuto[0x450 - 0x3e0];
	COutputEvent m_OnMapSpawn;	// 0x450

	CLogicAuto() : CBaseEntity(0) {}
	void *operator new(unsigned int size) { return sub_100aa720(size); }

	void vfunc130(int a);	// slot 130 "OnRestore": CBaseEntity::vfunc130(a), then schedules the next think 0.2s ahead (when a is set, or bit 1 of the flags at +0x204)
	void sub_10130d10();
	unsigned char sub_10130c10();	// CLogicAuto::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)
	void vfunc134();
public:
    virtual datamap_t * vfunc82();
    virtual int vfunc117();
    virtual void vfunc103();    // slot 103: its own, 0x10130d10 (= sub_10130d10)
    CLogicAuto *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
