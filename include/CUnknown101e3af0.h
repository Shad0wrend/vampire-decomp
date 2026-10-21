// CUnknown101e3af0: the global discipline effect manager at 0x10739a4c (array of discipline records at +8); real name not yet known.
#pragma once

class CBaseCombatCharacter;

class CUnknown101e3af0
{
public:
	void sub_101e3af0(CBaseCombatCharacter *pCharacter, int discipline, int flags);	// "RemoveEffect": looks up the discipline record, logs "Discipline<%s> RemoveEffect", then removes its effects from pCharacter (stub 0x10003945)
	void sub_101e3310(CBaseCombatCharacter *pCharacter, const char *pszName);	// "ActivateEffect" by name: looks the discipline up, DevMsg("ERROR: ActivateEffect Trigger Failed ...") when unknown, else activates it on pCharacter (stub 0x1000f54c)
	unsigned int sub_101e1610(int n);	// a discipline mask (stub 0x100060dc)
	unsigned int sub_101e1520(int n, int k);	// a discipline mask (stub 0x100136c9)
	void sub_101e40b0(CBaseCombatCharacter *pCharacter);	// removes the first of five discipline effects from the character's active mask (+0xeb0) that a mask pair (function-local statics) selects
};
