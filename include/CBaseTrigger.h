// CBaseTrigger: trigger entities (through CBaseToggle). Layout is reached through CBaseEntity's
// padding for now; only the slot-243 method is declared.
#pragma once

#include "CBaseToggle.h"
#include "COutputEvent.h"

class CBaseTrigger : public CBaseToggle
{
public:
	CBaseTrigger() : m_i564(-1) {}	// inlined into the constructors of every trigger class (the game's allocation size is 0x598)
	void vfunc243(unsigned int flag);
	virtual int vfunc124();	// slot 124 (debug text overlays): adds the line "State: Enabled" / "State: Disabled" when the debug bit 0 of the byte at +0x224 is set; returns the next free line
	void sub_101c4dd0();	// disables the trigger: scope traces "CBaseEntity::IsSolidFlagSet" / "CBaseEntity::RemoveSolidFlags" (entity name); when bit 3 of the solid flags (collision property at +0x270, flags at +0x2b4) is set removes it (SetSolidFlags) and calls PhysicsTouchTriggers(0); then sets the disabled byte at +0x55c
	void sub_101c4bf0();	// enables the trigger: like sub_101c4dd0 but adds the solid flag when it is clear ("CBaseEntity::AddSolidFlags") and clears the byte at +0x55c
	bool sub_101c5460(CBaseEntity *pOther);	// "CBaseTrigger::PassesTriggerFilters": true when one of the spawn flags 1 (clients: bit 7 of the entity flags) / 2 (NPCs: bit 13) / 4 (sub_101c53d0) / 8 (sub_101c5420) admits pOther and the filter entity of the handle at +0x564 (slot 241) accepts it; no filter entity means accepted
	bool sub_101c53d0(CBaseEntity *pOther);	// the spawn flag 4 test (stub 0x1000763a)
	bool sub_101c5420(CBaseEntity *pOther);	// the spawn flag 8 test (stub 0x10007d1a)

	char m_pad04a4[0x55c - 0x4a4];
	char m_bDisabled;	// 0x55c
	char m_pad055d[0x564 - 0x55d];
	int m_i564;
	COutputEvent m_out568;
	COutputEvent m_out580;
};
