// CUnknown103323d0: stand-in for CBaseCombatCharacter (name pointer at +0x26c); kept apart so the shared CBaseCombatCharacter headers are not touched.
#pragma once

#include "inputdata_t.h"

class CUnknown103323d0
{
public:
	char m_pad0000[0x26c];
	const char *m_name26c;	// 0x26c

	void sub_103322e0(int a, int b);	// CBaseCombatCharacter::sub_103322e0 (stub 0x1000a2d6), called directly
	void sub_103323d0(inputdata_t *pInput);	// "CBaseCombatCharacter::InputFadeHead...": scope trace (entity name), sub_103322e0(1, the raw value of the input when it is a float, else 0)
};
