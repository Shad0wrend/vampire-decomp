// CUnknown1033d7d0: stand-in for CBaseCombatCharacter (name pointer at +0x26c);
// kept apart so the shared CBaseCombatCharacter headers are not touched for one small member.
#pragma once

#include "inputdata_t.h"

class CUnknown1033d7d0
{
public:
	char m_pad0000[0x26c];
	const char *m_name26c;	// 0x26c

	void sub_10338cb0();	// called once per unit of blood gained (stub 0x10015c30)
	void sub_1033d7d0(inputdata_t *pInput);	// "CBaseCombatCharacter::InputBloodgain": scope trace (entity name), calls sub_10338cb0() as many times as the integer input says (0 when it is not an integer)
};
