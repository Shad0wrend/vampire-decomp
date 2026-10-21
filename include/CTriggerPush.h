// CTriggerPush: declared by pcdecomp transplant for 0x101c8850 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CTriggerPush : public CBaseEntity
{
public:
	virtual void vfunc103();	// the base, then (angles all zero) sets the angles (0, 180, 0), then sub_101c5080; copies the int at +0x164 to +0x59c
	CTriggerPush *sub_101c88c0();
	void sub_101c5080();	// stub 0x1000dfd0
	void sub_1000350d();	// CBaseEntity::vfunc103 (stub 0x1000350d), called directly
};
