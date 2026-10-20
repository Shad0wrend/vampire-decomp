// CUnknown101e3af0: the global discipline effect manager at 0x10739a4c (array of discipline records at +8); real name not yet known.
#pragma once

class CBaseCombatCharacter;

class CUnknown101e3af0
{
public:
	void sub_101e3af0(CBaseCombatCharacter *pCharacter, int discipline, int flags);	// "RemoveEffect": looks up the discipline record, logs "Discipline<%s> RemoveEffect", then removes its effects from pCharacter (stub 0x10003945)
};
