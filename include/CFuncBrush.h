// CFuncBrush: declared by pcdecomp transplant for 0x1013ec30 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "CBaseEntitySlots.h"

// The CBaseEntity vtable out to slot 223 (CBaseEntitySlots stops at 193), to call the slots of a brush entity.
struct CFuncBrushSlots : public CBaseEntitySlots
{
	virtual void slot194(); virtual void slot195(); virtual void slot196(); virtual void slot197(); virtual void slot198();
	virtual void slot199(); virtual void slot200(); virtual void slot201(); virtual void slot202(); virtual void slot203();
	virtual void slot204(); virtual void slot205(); virtual void slot206(); virtual void slot207(); virtual void slot208();
	virtual void slot209(); virtual void slot210(); virtual void slot211(); virtual void slot212(); virtual void slot213();
	virtual void slot214(); virtual void slot215(); virtual void slot216(); virtual void slot217(); virtual void slot218();
	virtual void slot219(); virtual void slot220();
	virtual int *slot221();	// GetAngles: pointer to the three angle dwords
	virtual void slot222(); virtual void slot223();
};

class CFuncBrushVt : public CFuncBrushSlots
{
public:
	virtual void slot224(); virtual void slot225(); virtual void slot226(); virtual void slot227();
	virtual void slot228(); virtual void slot229(); virtual void slot230(); virtual void slot231();
	virtual void slot232(); virtual void slot233(); virtual void slot234(); virtual void slot235();
	virtual void slot236(); virtual void slot237(); virtual void slot238(); virtual void slot239();
	virtual void slot240();
	virtual char slot241();
	void sub_1013e420();
};

class CFuncBrush
{
public:
	CFuncBrush *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// slot 103 "CFuncBrush::Spawn": move type 8 (slot 93), inlined SetSolid(1) and, when the dword at +0x450 is 1, AddSolidFlags(4) on the collision property at +0x270 (both with scope traces), the model name from slot 9 into slot 105, sub_1013e420 when the dword at +0x454 is set, flag 0x1000000 for an unnamed entity or one without the dword at +0x124, sub_100b3b00, slot 223
	void sub_1013e420();	// stub 0x10003cb5: when slot 241 reports true calls slot 77
public:
	datamap_t * vfunc82();
	int vfunc124();	// slot 124 (0x1013e090): debug text overlays (angles / origin / absangles / absorigin), then CBaseEntity::vfunc124
	char vfunc117();
	bool vfunc128();
	bool vfunc223();
	int vfunc241();
	char m_pad0000[0x458 - 0x0];
};
