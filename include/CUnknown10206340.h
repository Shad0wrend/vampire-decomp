// CUnknown10206340: vendor/shop entry loaded from a KeyValues-like block (not identified yet).
#pragma once

class CUnknown10206340
{
public:
	CUnknown10206340(int id);	// stub 0x10005ab0 (sets m_field0000)
	~CUnknown10206340();
	bool sub_10206340(void *pKeys);	// reads Name, AmmoOnly, MinStage and MinVendorState from the block

	int m_field0000;
	union {
		int m_field0004;	// Name (converted by sub_1000fc2c)
		const char *m_pszName;	// 0x04: the item's name (null = empty; compared with _strcmpi by CBaseCombatCharacter::sub_10324190)
	};
	int m_field0008;	// AmmoOnly
	int m_field000c;	// MinStage
	int m_field0010;	// MinVendorState
};
