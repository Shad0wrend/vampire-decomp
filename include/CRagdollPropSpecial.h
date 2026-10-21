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

	char m_pad03e0[0x103c - 0x3e0];
	char m_b103c;
	char m_pad103d[0x1040 - 0x103d];
	float m_f1040;
	float m_f1044;
	float m_f1048;
	CRagdollPropSpecial *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10014317();	// as in CPhysForce (transplant)
	void sub_10157ca0(CBaseEntity *pOwner);	// when bit 4 of the spawn flags (+0x204) is set: stores pOwner's handle at +0x1050 (-1 for null), arms the think function sub_10015424 (SetThink), clears +0x1fc, sets +0x200 to 1 and schedules the next think at curtime + 0.001
	void sub_10015424();	// think function
	void sub_100ac4e0(void (CRagdollPropSpecial::*pfnThink)(), float flThinkTime, const char *szContext);	// "CBaseEntity::SetThink" (called through the stub at 0x10007fe5)
};
