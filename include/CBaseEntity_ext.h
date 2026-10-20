// Extra CBaseEntity members, included inside the class body of CBaseEntity.h (no #pragma once, no includes).
// Add new method declarations here instead of rewriting CBaseEntity.h: that file is edited by many workers at once.
	bool sub_100a7bd0(CBaseEntity *pActivator);	// "CBaseEntity::PassesUseFilter": scope trace (entity name), true when the use filter handle at +0x218 does not resolve, else the result of slot 241(pActivator) of that filter entity
	bool sub_100b3350();	// "CBaseEntity::IsFloating": scope trace (entity name), false unless bit 19 of +0x268 and the physics object at +0x36c are set, else true when the value the physics system reports for the object (slot 19) is below 1000.0f
	void sub_1009c2d0(int a, char *text, int value);	// "CBaseEntity::DumpActivity": scope trace (entity name), then sub_1009b980(a, text, value)
