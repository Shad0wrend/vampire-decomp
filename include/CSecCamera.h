// CSecCamera: declared by pcdecomp transplant for 0x1020b370 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CSecCamera : public CBaseEntity
{
public:
	CSecCamera *sub_1020bf00();
	void vfunc104();	// slot 104 (Precache): precaches the four model names at +0x7c4 / +0x7c8 / +0x7cc / +0x7d0 when set, then CBreakableProp::vfunc104
	void sub_1000978c();	// CBreakableProp::vfunc104, called directly (tail call)
};
