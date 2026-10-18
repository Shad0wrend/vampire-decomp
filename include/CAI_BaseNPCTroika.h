// CAI_BaseNPCTroika: NPC base of the Troika-made NPCs (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

struct inputdata_t;

class CAI_BaseNPCTroika : public CAI_BaseNPC
{
public:
	virtual void vfunc416(char value);

	void vfunc488();	// slot 488: plays the "Death" sound
	void vfunc497();
	void vfunc616();	// slot 616: base call with 0x30, then stamps curtime + 15 at +0x65bc

	char sub_102a9ec0(int index);
	const char *sub_102c3690(int task);
	const char *sub_102c36b0(int schedule);
	char sub_102c1170();	// true when one of two flag bytes (+0x64c0, +0x64ec) is set or one of two entity handles (+0xfe8, +0x6554) is valid
	void sub_10015839(int a);	// base-class slot 616 implementation, called directly
	void sub_102a97a0(unsigned int flags);	// ORs flags into the dword at +0x14b8
	void sub_102c2a30(inputdata_t *data);	// input handler: stores the input's byte (0 unless its type is 5) at +0x63d8

	char m_pad0004[0x63d4];
	char m_b63d8;
	char m_pad63d9[0x65bc - 0x63d9];
	float m_f65bc;
};
