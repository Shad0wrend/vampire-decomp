// CUnknown101d76e0: a cursor over a list of matcher objects (count at +4, pointer array at +8) bound to an entity
// handle (+0x14) with the index of the current match at +0x18; real name not yet known.
#pragma once

struct CUnknown101d76e0_Item
{
	bool sub_101d6a50(void *pEnt);	// does this matcher accept the entity (stub 0x1000e38b)
};

class CUnknown101d76e0
{
public:
	char m_pad0000[4];
	int m_nItems;	// 0x04
	CUnknown101d76e0_Item **m_ppItems;	// 0x08
	char m_pad000c[8];
	unsigned int m_hEntity;	// 0x14
	int m_iMatch;	// 0x18

	int sub_101d7660(void *pEnt);	// the first match for the entity (stub 0x100025db)
	int sub_101d76e0(void *pEnt);	// the next match for the entity after the current one, -1 (and the cursor reset) when there is none
};
