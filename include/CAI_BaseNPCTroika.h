// CAI_BaseNPCTroika: NPC base of the Troika-made NPCs (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

struct inputdata_t;

class CAI_BaseNPCTroika : public CAI_BaseNPC
{
public:
	virtual int vfunc293();	// the dword at +0x9c of the entity the handle at +0x647c resolves to (0 when stale)
	virtual void vfunc416(char value);

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
	void sub_10295240();	// plays the "Warning_Loop" sound
	char sub_102a9ec0(int index);
	const char *sub_102c3690(int task);
	const char *sub_102c36b0(int schedule);
	char sub_102c1170();	// true when one of two flag bytes (+0x64c0, +0x64ec) is set or one of two entity handles (+0xfe8, +0x6554) is valid
	void sub_10015839(int a);	// base-class slot 616 implementation, called directly
	void sub_102a97a0(unsigned int flags);	// ORs flags into the dword at +0x14b8
	void sub_102a97d0(unsigned int flags);	// clears flags in the dword at +0x14b8
	void sub_102c2a30(inputdata_t *data);	// input handler: stores the input's byte (0 unless its type is 5) at +0x63d8

	char m_pad0004[0x63d4];
	char m_b63d8;
	char m_pad63d9[0x65bc - 0x63d9];
	float m_f65bc;
};
