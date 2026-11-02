// CHudTimer (RTTI .?AVCHudTimer@@): hud timer entity. Only what decompiled code needs.
#pragma once
#include "CBaseEntity.h"

class CHudTimer : public CBaseEntity
{
public:
	void sub_1012d5c0();	// own helper (called before the base class work)
	void sub_1012d720();	// slot 180 override: sub_1012d5c0(), then CBaseEntity::vfunc180()
	CHudTimer *sub_1012d3d0();	// as in CKeepUpright (transplant)
	bool vfunc86(int a, int b, int c, int d, int e);	// slot 86 (0x1012d810): false when the flag at +0x470 is set and +0x474 differs from g_1070b228's +4, else true
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
    CHudTimer *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
