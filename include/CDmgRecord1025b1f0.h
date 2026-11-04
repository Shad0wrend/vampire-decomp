// CDmgRecord1025b1f0: a 0x5f324 byte record that holds three CVDmg_t slots (stride 0xec84) from +0x23a78 (class not known yet).
// Its constructor (0x1025b1f0, stub 0x1000de45) constructs the three slots; 0x1025afe0 builds one on its stack.
#pragma once
#include "CVDmg_t.h"

struct CDmgSlot1025b1f0
{
	CVDmg_t m_dmg;
	char m_pad[0xec84 - sizeof(CVDmg_t)];
};

class CDmgRecord1025b1f0
{
public:
	CDmgRecord1025b1f0();

	char m_pad0000[0x23a78];
	CDmgSlot1025b1f0 m_slots[3];	// 0x23a78
};
