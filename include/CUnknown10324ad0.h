// CUnknown10324ad0: stand-in for CBaseCombatCharacter (name pointer at +0x26c, a dword at +0xa8);
// kept apart so the shared CBaseCombatCharacter headers are not touched for one small member.
#pragma once

class CUnknown10324ad0
{
public:
	char m_pad0000[0xa8];
	int m_field00a8;	// 0xa8
	char m_pad00ac[0x26c - 0xac];
	const char *m_name26c;	// 0x26c

	char sub_10337f30();	// CBaseCombatCharacter::IsKindred (stub 0x10006b04), called directly
	bool sub_10324ad0();	// "CBaseCombatCharacter::CanVampHeal_HOT": scope trace (entity name), true when sub_10337f30() and the dword at +0xa8 is set
};
