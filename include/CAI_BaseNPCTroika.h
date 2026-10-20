// CAI_BaseNPCTroika: NPC base of the Troika-made NPCs (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

struct inputdata_t;

class CAI_BaseNPCTroika : public CAI_BaseNPC
{
public:
	virtual int vfunc293();	// the dword at +0x9c of the entity the handle at +0x647c resolves to (0 when stale)
	virtual void vfunc416(char value);
	virtual bool vfunc468(CBaseEntity *pEnt);	// see CAI_BaseNPC

	void vfunc488();	// slot 488: plays the "Death" sound
	void vfunc489();	// slot 489: plays the "Target_Suspect" sound
	void vfunc490();	// slots 490-506: sound-playing members of the same shape
	void vfunc491();
	void vfunc492();	// slot 492: plays the "Fear_Start" sound
	void vfunc493();
	void vfunc494();
	void vfunc495();	// slot 495: plays the "Surprised" sound
	void vfunc496();
	void vfunc497();
	void vfunc498();
	void vfunc499();
	void vfunc500();
	void vfunc501();
	void vfunc502();
	void vfunc503();
	void vfunc504();
	void vfunc505();
	void vfunc506();
	void vfunc616();	// slot 616: base call with 0x30, then stamps curtime + 15 at +0x65bc

	void sub_102950c0();	// plays the "Alarmed_Loop" sound
	void sub_10295180();	// plays the "Animal_Kened" sound
	void sub_10295240();	// plays the "Warning_Loop" sound
	char sub_102a9ec0(int index);
	const char *sub_102c3690(int task);
	const char *sub_102c36b0(int schedule);
	char sub_102c1170();	// true when one of two flag bytes (+0x64c0, +0x64ec) is set or one of two entity handles (+0xfe8, +0x6554) is valid
	char sub_102c0aa0();	// true when the entity of the handle at +0x6554 has its byte at +0x498 set, or the time at +0x64cc lies in the future
	void sub_10015839(int a);	// base-class slot 616 implementation, called directly
	void sub_10011dc4();	// base-class slot 516 implementation, called directly
	void sub_102a97a0(unsigned int flags);	// ORs flags into the dword at +0x14b8
	void sub_102a97d0(unsigned int flags);	// clears flags in the dword at +0x14b8
	void sub_102c2a30(inputdata_t *data);	// input handler: stores the input's byte (0 unless its type is 5) at +0x63d8
	void sub_102c24a0(inputdata_t *data);	// input handler: when the input holds an entity handle (type 12) that resolves, copies that entity's absolute origin and angles onto this one (slots 216 / 218), then sub_100b3b00, slot 614 and ForceTransmit
	bool sub_102d1540(void *pOther);	// slot 527 helper: true when pOther is the entity of the handle at +0x5e0, or that handle is stale and its timer (+0x5ec) has run out
	void sub_1028ea60(int seed, const float *pos, void *pEnt);	// fills the record at +0x6360 (two bytes, a scrambled hash of seed at +0x6364, position at +0x6380, entity handle at +0x638c or -1)
	void sub_10298910(const char *str);	// parses a space separated list of 1-based numbers into a bit mask stored at +0x62dc
	void sub_102989e0(const char *str);	// same parser for the bit mask at +0x62e4; a null or empty string sets all bits (-1)
	bool sub_1028e360();	// when the handle at +0x6088 is valid: false while the timer at +0x6084 is running (armed with curtime + const when unset), else clears the handle and copies the absolute origin of the entity of the handle at +0x608c to +0x6090; true otherwise
	int sub_102b11c0(int activity);	// translates a few activities (0x87/0x88 depend on the flag bit 12 of +0x14b8 and slot 168; 0xc7 -> 0xc9, 0xca/0xcb/0xd1/0xd2 -> 0xcc, 0xef -> 0xf0), 0 for everything else
	bool sub_1029b180(void *pOther);	// slot 69 override: true when pOther is flagged (fields +0x94/+0xa8/+0xa0, the entity at +0x98 with flag 0x20000, bits of +0x4c), is the entity of the handle at +0x643c, else CBaseAnimating::sub_1008be20(pOther)
	bool vfunc68(void *pOther);	// slot 68 override: like sub_1029b180, plus the checks for the entity at +0x5ddc (id 0x283c/0x283d with bits 0x14 of +0x4c), bit 1 of +0x4c and the entity of the handle at +0x1538
	bool sub_10269d30(int state);	// true when the NPC is in the given internal state
	int sub_102b8c40();	// when state 0x4c or 0x4d is set: clears the byte at +0x5b80, copies the three dwords at +0x5b9c to +0x5dd0, stamps the source file name and line 0x5f8b at +0x1b30 / +0x1b34 and returns 0x8a, else 0
	int sub_10295590(int activity);	// slot 375 base implementation (NPC_TranslateActivity), called directly

	char m_pad0004[0x6080];
	float m_f6084;
	unsigned int m_h6088;
	unsigned int m_h608c;
	float m_v6090[3];
	char m_pad609c[0x63d8 - 0x609c];
	char m_b63d8;
	char m_pad63d9[0x64cc - 0x63d9];
	float m_f64cc;
	char m_pad64d0[0x6554 - 0x64d0];
	unsigned int m_h6554;
	char m_pad6558[0x65bc - 0x6558];
	float m_f65bc;
	void sub_100f0e90(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	void sub_10181580(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	void sub_102a9800(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	int sub_10252240();	// provisional, like vfunc293 (transplant)
	int sub_1042b110();	// provisional, like vfunc293 (transplant)
	void sub_101815b0(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
	void sub_102a9830(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
	void sub_102a98e0(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
};
