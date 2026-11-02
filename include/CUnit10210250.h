// CUnit10210250: provisional class of the "entity A can see entity B / searching" logic entity (RTTI name not found yet;
// the matched members 0x10210180 / 0x102101d0 / 0x10210250 are mangled under this name). Only offsets, nothing derives.
// Layout seen in 0x1020fad0 (lazy resolve of the two target names) and 0x1020fe70 (the search tick, ret 4):
#pragma once

#include "COutputEvent.h"
#include "ehandle.h"

class CBaseEntity;
class CEntityVSlots;

class CUnit10210250
{
public:
	char m_pad0000[0x450];
	const char *m_pszNameB450;	// 0x450: second target name ("!player" is looked up as the player, empty name -> g_106b8540)
	const char *m_pszNameA454;	// 0x454: first target name
	float m_flMaxDist458;		// 0x458: Manhattan distance limit of sub_10210250 (sum of |dx|,|dy|,|dz| < this)
	COutputEvent m_Output45c;	// 0x45c: fired (value, this, 0) when a pair is found
	COutputEvent m_Output474;	// 0x474: fired when the search ends without a hit
	CUtlVector<EHANDLE> m_ListA;	// 0x48c: entities named by +0x454 (memory +0x48c, size +0x498)
	CUtlVector<EHANDLE> m_ListB;	// 0x4a0: entities named by +0x450 (memory +0x4a0, size +0x4ac)
	bool m_bAllValid4b4;		// 0x4b4: every target has the field at +0x9c set
	bool m_bResolved4b5;		// 0x4b5: targets were resolved

	void sub_1020fad0();		// lazy resolve of both name lists (stub 0x1000310c), ends with sub_101cd940(this) (removes this) when a list is empty; fills m_ListA/B through FindEntityByName (0x100f7770 on the global at 0x106eb5d8, 4 args: start, name, caller, activator)
	void sub_1020fe70(void *pInputData);	// tick (ret 4): sub_1020fad0, then for every B x A pair (A entity .. B entity) sub_102101d0 / sub_10210180 (EHANDLE Get inlined, entity +0x9c passed in the all-valid case), the first hit fires m_Output45c (value = *pInputData); no hit fires m_Output474 and, when gpGlobals->curtime has advanced more than 0.1 (double) since entry, Msg("%s searching too long!!\n", sub_100ab4f0() = debug name)
	bool sub_10210180(CBaseEntity *pA, CBaseEntity *pB);	// stub 0x1000ea70
	bool sub_102101d0(CBaseEntity *pA, CBaseEntity *pB);	// stub 0x1001460a
	bool sub_10210250(CBaseEntity *pA, CBaseEntity *pB);	// stub 0x100022ca
	bool sub_102102e0(CEntityVSlots *pA, CEntityVSlots *pB);	// stub 0x10004467 (ret 8, ecx unused): visibility test A -> B, see the note on the function (three CTraceFilterSimple(pA, 0) rays, mask 0x2804091)
	const char *sub_100ab4f0();	// CBaseEntity debug name (stub 0x1000b5cd), called directly
};
