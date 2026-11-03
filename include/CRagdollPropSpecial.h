// class CRagdollPropSpecial; modelled as a direct CBaseEntity subclass (the real bases are not declared).
// Slots 134..190 are placeholders that keep the slot number of vfunc191 right.
#pragma once

#include "CBaseEntity.h"

class CRagdollPropSpecial : public CBaseEntity
{
public:
	virtual void vfunc113();
	virtual void vfunc134();
	virtual void vfunc135(); virtual void vfunc136(); virtual void vfunc137(); virtual void vfunc138(); virtual void vfunc139();
	virtual void vfunc140(); virtual void vfunc141(); virtual void vfunc142(); virtual void vfunc143(); virtual void vfunc144();
	virtual void vfunc145(); virtual void vfunc146(); virtual void vfunc147(); virtual void vfunc148(); virtual void vfunc149();
	virtual void vfunc150(); virtual void vfunc151(); virtual void vfunc152(); virtual void vfunc153(); virtual void vfunc154();
	virtual void vfunc155(); virtual void vfunc156(); virtual void vfunc157(); virtual void vfunc158(); virtual void vfunc159();
	virtual void vfunc160(); virtual void vfunc161(); virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164();
	virtual void vfunc165(); virtual void vfunc166(); virtual void vfunc167(); virtual void vfunc168(); virtual void vfunc169();
	virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(); virtual void vfunc174(CBaseEntity *pOther);
	virtual void vfunc175(); virtual void vfunc176(); virtual void vfunc177(); virtual void vfunc178(); virtual void vfunc179();
	virtual void vfunc180(); virtual void vfunc181(); virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
	virtual void vfunc185(); virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual void vfunc190(); virtual void vfunc191(int value);
#define CRPS_V(n) virtual void vfunc##n();
#define CRPS_V10(p) CRPS_V(p##0) CRPS_V(p##1) CRPS_V(p##2) CRPS_V(p##3) CRPS_V(p##4) CRPS_V(p##5) CRPS_V(p##6) CRPS_V(p##7) CRPS_V(p##8) CRPS_V(p##9)
	// slots 192..264 are placeholders; slot 191 takes a float in 0x10382670 (called with fild/fstp), but is declared int by its matched definition 0x10157870
	CRPS_V(192) CRPS_V(193) CRPS_V(194) CRPS_V(195) CRPS_V(196) CRPS_V(197) CRPS_V(198) CRPS_V(199)
	CRPS_V10(20) CRPS_V10(21) CRPS_V10(22) CRPS_V10(23) CRPS_V10(24) CRPS_V10(25)
	CRPS_V(260) CRPS_V(261) CRPS_V(262) CRPS_V(263) CRPS_V(264)
	virtual void *vfunc265(int value);	// slot 265 (+0x424): called by CNPC_VHengeyokai::sub_10382670 with the same value as slot 191; returns the physics object (null on failure)
#undef CRPS_V
#undef CRPS_V10

	char m_pad03e0[0x768 - 0x3e0];
	EHANDLE m_hBreaker;	// 0x0768
	char m_pad076c[0x103c - 0x76c];
	char m_b103c;
	char m_pad103d[0x1040 - 0x103d];
	float m_f1040;
	float m_f1044;
	float m_f1048;
	CRagdollPropSpecial *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	bool vfunc73(CBaseEntity *pOther);	// slot 73 (the base slot is vfunc73()): false when pOther has a value at +0x9c and this entity's byte at +0x103c is set, else true
	void sub_10014317();	// as in CPhysForce (transplant)
	void sub_10157ca0(CBaseEntity *pOwner);	// when bit 4 of the spawn flags (+0x204) is set: stores pOwner's handle at +0x1050 (-1 for null), arms the think function sub_10015424 (SetThink), clears +0x1fc, sets +0x200 to 1 and schedules the next think at curtime + 0.001
	void sub_10015424();	// think function
	void sub_100ac4e0(void (CRagdollPropSpecial::*pfnThink)(), float flThinkTime, const char *szContext);	// "CBaseEntity::SetThink" (called through the stub at 0x10007fe5)
	void sub_101578d0(char bValue);	// stub 0x10009a4d: takes the byte the man-bat kept at +0x6694 (called by CNPC_VManBat::sub_1038f660)
	void vfunc230(int index, void *pEvent);	// slot 230 "VPhysicsCollision" override (plain member): the base implementation, then for the other entity of the collision event (entities at +0x68 of the event, picked by the index) that is not this entity: when this entity's physics object moves faster than 150 units/s, sub_10157ca0(other)
public:
    virtual datamap_t * vfunc82();
	string_t m_iszExplosionParamEnt;	// 0x104c
	char m_pad1050[0x1054 - 0x1050];
};
