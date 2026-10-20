// CBaseMoveBehavior: path-key-frame mover (bases CPathKeyFrame/CLogicalEntity/CBaseEntity not fully modelled).
#pragma once

#include "CBaseEntity.h"

class CBaseMoveBehavior : public CBaseEntity
{
public:
	// Slot 153 of the real vtable; declared as the only virtual here so no slot numbering is implied.
	virtual bool vfunc153();

	char m_pad0004b[0x4b4 - sizeof(CBaseEntity)];
	int m_unk4b4;
	CBaseMoveBehavior *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	void vfunc103();	// slot 103: sets the mover fields, caches the origin / angles at +0x450 / +0x45c, then CPathKeyFrame::vfunc103
};
