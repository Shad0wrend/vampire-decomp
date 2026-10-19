// CUnknown103ca2c0: a hint-data object (scope trace name "CHintData_WW") with a list of ints (element pointer at +0x34,
// count at +0x40); real name not yet known.
#pragma once

class CUnknown103ca2c0
{
public:
	char pad0[0x34];
	int *m_pItems;	// 0x34
	char pad38[8];
	int m_nItems;	// 0x40

	bool sub_103ca2c0(int value);	// "CHintData_WW::IsHintPathableFrom": scope trace, true when the list holds value
};
