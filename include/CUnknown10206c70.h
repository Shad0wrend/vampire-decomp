// CUnknown10206c70: the character template applier (real name not yet known); it applies a template of the global
// template table (0x10738d10) to a character.
#pragma once

class CBaseCombatCharacter;
struct StatDefault3;

class CUnknown10206c70
{
public:
	void sub_10206c70(int nTemplate, CBaseCombatCharacter *pChar);	// stub-less: clears the character's template state ("Clear" template), stores the gender flag (IsMale) into the active stat list (stat 0xb) and the character (+0x13cc), applies the template nTemplate, then remembers the "item_w_unarmed" weapon handle at +0xea4 (-1 when the character has none)
	void sub_10206c30(const char *pszName, CBaseCombatCharacter *pChar);	// stub 0x10011e41: looks the template name up in the global table and applies it when found
	struct StatDefault3 *sub_10207c20(int nIndex);	// the call site loads ecx with this object; the stub at 0x10207c20 replaces it by the template table and jumps to its operator[]
	void sub_10206aa0(int nTemplate, CBaseCombatCharacter *pChar);	// stub 0x10011004: applies a template
};
