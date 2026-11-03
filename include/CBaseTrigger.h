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
	void vfunc246(int a);	// slot 246: sets bit 0 of the flag word at +0x204 when it is clear
	void vfunc247(int a);	// slot 247: sets bit 1 of the flag word at +0x204 when it is clear
	void vfunc248(int a);	// slot 248: clears bit 0 of the flag word at +0x204 when it is set
	virtual void vfunc113();	// slot 113 (Activate): looks the filter entity (name at +0x560) up and keeps its handle at +0x564 (-1 when not found), then CBaseEntity::vfunc113
	virtual int vfunc124();	// slot 124 (debug text overlays): adds the line "State: Enabled" / "State: Disabled" when the debug bit 0 of the byte at +0x224 is set; returns the next free line
	void vfunc174(CBaseEntity *pOther);	// slot 174 "CBaseTrigger::StartTouch"-like: when PassesTriggerFilters(pOther) the output at +0x568 fires (activator pOther) through stub 0x10010794
	void vfunc176(CBaseEntity *pOther);	// "CBaseTrigger::EndTouch" (the base's slot 176, called directly by the trigger classes): the entity's EndTouch
	void sub_101c4dd0();	// disables the trigger: scope traces "CBaseEntity::IsSolidFlagSet" / "CBaseEntity::RemoveSolidFlags" (entity name); when bit 3 of the solid flags (collision property at +0x270, flags at +0x2b4) is set removes it (SetSolidFlags) and calls PhysicsTouchTriggers(0); then sets the disabled byte at +0x55c
	void sub_101c4bf0();
	void vfunc241(int unused);	// slot 241 (plain member): forwards to sub_101c4bf0, argument unused
	void vfunc242(int unused);	// slot 242 (plain member): forwards to sub_101c4dd0, argument unused
	unsigned char sub_101c4b50();	// CBaseTrigger::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)	// enables the trigger: like sub_101c4dd0 but adds the solid flag when it is clear ("CBaseEntity::AddSolidFlags") and clears the byte at +0x55c
	bool sub_101c5460(CBaseEntity *pOther);	// "CBaseTrigger::PassesTriggerFilters": true when one of the spawn flags 1 (clients: bit 7 of the entity flags) / 2 (NPCs: bit 13) / 4 (sub_101c53d0) / 8 (sub_101c5420) admits pOther and the filter entity of the handle at +0x564 (slot 241) accepts it; no filter entity means accepted
	bool sub_101c53d0(CBaseEntity *pOther);	// the spawn flag 4 test (stub 0x1000763a)
	bool sub_101c5420(CBaseEntity *pOther);	// the spawn flag 8 test (stub 0x10007d1a)

	char m_pad04a4[0x55c - 0x4a4];
	char m_bDisabled;	// 0x55c
	char m_pad055d[0x560 - 0x55d];
	const char *m_iFilterName;	// 0x560: the name of the filter entity
	int m_i564;
	COutputEvent m_out568;
	COutputEvent m_out580;
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
    void *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
