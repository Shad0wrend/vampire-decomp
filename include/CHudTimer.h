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
	char m_pad03e0[0x46c - 0x3e0];
	int m_nCountType;	// 0x046c
	bool m_bIsPaused;	// 0x0470
	char m_pad0471[0x478 - 0x471];
	bool m_bShowTimer;	// 0x0478
	char m_pad0479[0x47c - 0x479];
	float m_flLastTime;	// 0x047c
	float m_flRemainingTime;	// 0x0480
	char m_pad0484[0x488 - 0x484];
	int m_nTimerFlags;	// 0x0488
};
