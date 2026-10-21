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
	void sub_101c4dd0();	// disables the trigger: scope traces "CBaseEntity::IsSolidFlagSet" / "CBaseEntity::RemoveSolidFlags" (entity name); when bit 3 of the solid flags (collision property at +0x270, flags at +0x2b4) is set removes it (SetSolidFlags) and calls PhysicsTouchTriggers(0); then sets the disabled byte at +0x55c
	void sub_101c4bf0();	// enables the trigger: like sub_101c4dd0 but adds the solid flag when it is clear ("CBaseEntity::AddSolidFlags") and clears the byte at +0x55c

	char m_pad04a4[0x564 - 0x4a4];
	int m_i564;
	COutputEvent m_out568;
	COutputEvent m_out580;
};
