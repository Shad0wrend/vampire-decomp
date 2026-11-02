// animevent_t: the animation event record handed to HandleAnimEvent (slot 259) and Weapon_HandleAnimEvent.
// Only what decompiled code needs (CBaseCombatCharacter::HandleAnimEvent 0x1032e330).
#pragma once

class CBaseEntity;

struct animevent_t
{
	int event;	// 0x00: the event id (0xfa6 / 0xfa7 weapon-hand events, 0xfb4, 0x1004..0x1006 model attach events, 3000..3999 are weapon events)
	const char *options;	// 0x04: the event's option string (a model name for 0x1004 / 0x1006, a sentence for 0xfb4)
	int m_n08;	// 0x08
	int m_n0c;	// 0x0c
	CBaseEntity *pSource;	// 0x10: the entity the event is for (HandleAnimEvent ignores it unless it is this)
};
