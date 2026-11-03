// CUnknown100b5190: the view other code uses for the entity itself when it asks the byte at +0xf4
// (CBaseEntity::m_bHidden00f4); only the getter the matched callers use is known.
#pragma once

class CUnknown100b5190
{
public:
	char sub_100b5190();	// 0x100b5190 (?sub_100b5190@CUnknown100b5190@@QAEDXZ): returns the byte at +0xf4

	char m_pad0000[0xf4];
	char m_bHiddenf4;	// 0xf4
};
