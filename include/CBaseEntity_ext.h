// Extra CBaseEntity members, included inside the class body of CBaseEntity.h (no #pragma once, no includes).
// Add new method declarations here instead of rewriting CBaseEntity.h: that file is edited by many workers at once.
	bool sub_100a7bd0(CBaseEntity *pActivator);	// "CBaseEntity::PassesUseFilter": scope trace (entity name), true when the use filter handle at +0x218 does not resolve, else the result of slot 241(pActivator) of that filter entity
