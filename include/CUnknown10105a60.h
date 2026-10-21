// CUnknown10105a60: stand-in for the character class that owns "CBaseCombatCharacter::BlendTowards"
// (real class: CBaseCombatCharacter, whose headers have no room for it yet). Only the entity name is modelled.
#pragma once

class CUnknown10105a60
{
public:
	char m_pad0000[0x26c];
	const char *m_name26c;	// 0x26c: the entity name

	void sub_10105a60(float *pOut, const float *pFrom, const float *pTo, float flWeight, int nCount);	// "CBaseCombatCharacter::BlendTowards": scope trace (entity name), clamps flWeight to 0..1 and blends nCount floats: pOut[i] = flWeight * pTo[i] + (1 - flWeight) * pFrom[i]
};
