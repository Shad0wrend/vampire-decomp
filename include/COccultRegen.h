// COccultRegen: declared by pcdecomp transplant for 0x103f9130 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class COccultRegen : public CBaseEntity
{
public:
	COccultRegen *vfunc5(unsigned int flags);
	void sub_10013a57();
	COccultRegen *sub_103f90f0();	// as in CKeepUpright (transplant)
	void sub_103f91d0();	// the owner (sub_10252240) heals as many times as the level at +0x918 says, counting it down
	void sub_103f9160(int a);	// ret 4, run by the owner's Event_TookLife: counts the timer at +0x914 down and, when it runs out, restarts it and raises the level at +0x918 below the tuning maximum
	char m_pad0914[0x914 - sizeof(CBaseEntity)];
	int m_nTimer914;	// 0x914
	int m_nLevel918;	// 0x918
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
