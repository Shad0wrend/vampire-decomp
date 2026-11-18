// CSprite: declared by pcdecomp transplant for 0x1042f150 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CSprite : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	virtual void vfunc105(const char *pModelName);	// slot 105: warns when the model is not a sprite, then sets it (sub_101cf4a0)
	void sub_1000cb8a();
	virtual void vfunc173(int a, int b, int nUseType, int d);	// slot 173: when the state update (sub_100a98f0 with the use type and whether the sprite is not at frame 0x40) says so, turns the sprite off (sub_1042ef40) or updates its on/off state (sub_1042ef70)
	void sub_1042ef40();	// "CSprite::TurnOff" (stub 0x10010dde): next think 0, effect flag 0x40 (EF_NODRAW) at +0x19c
	void sub_1042ef70();	// sprite on/off state update (flags and think function), then CBaseEntity::ForceTransmit
	void sub_100ac4e0(void *pFunc, int a, int b);	// sets a think function (called through the stub at 0x10007fe5)
	void sub_1042e9f0(int a, int b);	// "CSprite::SpriteInit" (stub 0x10008481): sets the sprite model and origin
	unsigned int sub_1042e040();	// slot 117: the base's vfunc117 with bit 1 cleared, bit 31 set by flag 0x8000
	void sub_1042e550();	// slot 103 implementation: the sprite spawn setup (solid, frame range, scale)
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc79();
    virtual int vfunc80();
	char m_pad03e0[0x450 - 0x3e0];
	EHANDLE m_hAttachedToEntity;	// 0x0450
	int m_nAttachment;	// 0x0454
	float m_flSpriteFramerate;	// 0x0458
	float m_flFrame;	// 0x045c
	float m_flDieTime;	// 0x0460
	char m_pad0464[0x46c - 0x464];
	float m_flSpriteScale;	// 0x046c
	char m_pad0470[0x474 - 0x470];
	float m_flLastTime;	// 0x0474
	float m_flMaxFrame;	// 0x0478
	char m_pad047c[0x494 - 0x47c];
};
