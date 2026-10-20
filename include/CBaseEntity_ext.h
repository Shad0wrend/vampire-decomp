// Extra CBaseEntity members, included inside the class body of CBaseEntity.h (no #pragma once, no includes).
// Add new method declarations here instead of rewriting CBaseEntity.h: that file is edited by many workers at once.
	bool sub_100a7bd0(CBaseEntity *pActivator);	// "CBaseEntity::PassesUseFilter": scope trace (entity name), true when the use filter handle at +0x218 does not resolve, else the result of slot 241(pActivator) of that filter entity
	bool sub_100b3350();	// "CBaseEntity::IsFloating": scope trace (entity name), false unless bit 19 of +0x268 and the physics object at +0x36c are set, else true when the value the physics system reports for the object (slot 19) is below 1000.0f
	void sub_1009c2d0(int a, char *text, int value);	// "CBaseEntity::DumpActivity": scope trace (entity name), then sub_1009b980(a, text, value)
	void sub_1009c110(int a, int b, CBaseEntity *pEnt);	// "CBaseEntity::DumpEntity": scope trace (entity name), then sub_1009b700(a, b, name of pEnt or null)
	void sub_100a9120(inputdata_t *pInput);	// "CBaseEntity::InputSetFakeSilence": scope trace (entity name), sub_100a8fc0(1) when the input is an integer that is non-zero, else sub_100a8fc0(0)
	float sub_100ac720(const char *context);	// "CBaseEntity::GetLastThink": scope trace (entity name), the last think time (float at +0xc of the think context record named context, or the float at +0x178 for the default context)
	void sub_1009c000(int a, int b, unsigned int hEntity);	// "CBaseEntity::DumpEhandle": scope trace (entity name), then sub_1009b700(a, b, name of the entity behind hEntity, or null)
