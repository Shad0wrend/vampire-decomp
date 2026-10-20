// CUnknown10206340: vendor/shop entry loaded from a KeyValues-like block (not identified yet).
#pragma once

class CUnknown10206340
{
public:
	bool sub_10206340(void *pKeys);	// reads Name, AmmoOnly, MinStage and MinVendorState from the block

	int m_field0000;
	int m_field0004;	// Name (converted by sub_1000fc2c)
	int m_field0008;	// AmmoOnly
	int m_field000c;	// MinStage
	int m_field0010;	// MinVendorState
};
