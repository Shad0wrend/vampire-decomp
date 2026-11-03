// CStatLoadout: the loadout record at +0x1a1c of a character (hands StatMaskView::sub_1017a2b0 its mask; 0x1017b330 pays
// and announces the items). Name provisional; the first dword is the StatDefault2 type the item ids index into.
#pragma once

#include "StatDefault2.h"
#include "CVStatList_t.h"

class CBaseEntity;

class CStatLoadout
{
public:
	int m_nType;	// 0x00: StatDefault2::m_type of the record the ids below index into
	int m_nArmorNew;	// 0x04: the requested/current armor item index (the apply copies it to +0x34)
	int m_nEquipNew[11];	// 0x08: the requested/current equip item indices (-1 = none; the apply copies them to +0x38)
	int m_nArmor;	// 0x34: the committed armor item index (0 = none); cost / name from StatDefault2::m_pCost24 / m_pNames20
	int m_nEquip[11];	// 0x38: the committed equip item indices (-1 = none); cost / name from m_pCost14 / m_pNames10

	void sub_1017a550(CBaseEntity *pCharacter);	// "MP_Equip" debug print (0x1017a550): prints the requested armor / items (+0x04 / +0x08) against the committed ones (+0x34 / +0x38)
	void sub_1017aa40(CBaseEntity *pCharacter);	// "MP_Equip" apply (0x1017aa40): gives / removes the item entities of the requested loadout, then copies +0x04 / +0x08 to +0x34 / +0x38
	void sub_1017b330(CBaseEntity *pCharacter);	// 0x1017b330 (ret 4, called through the stub 0x100101ae by 0x10206da0): for the armor item and then each of the 11 equip items that is set: finds the character's stat list of type 0 (CVStatListSet::Of(pCharacter)->Find(0)), CVStatList_t::sub_10200fc0(0x22, cost) (AddBase), then the cdecl 0x1021fee0(pCharacter, name or "") — the item announce
};
