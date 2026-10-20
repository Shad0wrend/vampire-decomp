// CNPC_VGargoyle: the gargoyle NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CBaseEntity;

class CNPC_VGargoyle
{
public:
	virtual int vfunc359(int index);
	virtual void vfunc601(int unused);
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc440(int schedule);	// slot 440 (TranslateSchedule) override: maps schedules 0x5b, 0xea, 0xdc, 0xdd to 0x15d..0x160, everything else goes to CNPC_VHuman::vfunc440
	void vfunc24(CBaseEntity *pOther);	// slot 24 override: when the other entity is named "pillar" or "central_pillar" (NameMatches), calls slot 266 of it with this
};
