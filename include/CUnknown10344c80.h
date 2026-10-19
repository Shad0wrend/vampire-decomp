// CUnknown10344c80: an entity (name pointer at +0x26c) whose scope traces read "CBaseCombatCharacter::..."; it is most
// likely CBaseCombatCharacter itself, kept apart so the large header is not touched for one small member.
#pragma once

class CUnknown10344c80
{
public:
	char m_pad0000[0x26c];
	const char *m_name26c;	// 0x26c

	int sub_10344c80(int activity);	// "CBaseCombatCharacter::TranslateFlyingKnockbackActivity": scope trace (entity name), maps activities 0x8b..0x8e to 0x87..0x8a and returns any other value unchanged
};
