	bool sub_100a7bd0(CBaseEntity *pActivator);	// "CBaseEntity::PassesUseFilter": scope trace (entity name), true when the use filter handle at +0x218 does not resolve, else the result of slot 241(pActivator) of that filter entity
	bool sub_100b3350();	// "CBaseEntity::IsFloating": scope trace (entity name), false unless bit 19 of +0x268 and the physics object at +0x36c are set, else true when the value the physics system reports for the object (slot 19) is below 1000.0f
	void sub_1009c2d0(int a, char *text, int value);	// "CBaseEntity::DumpActivity": scope trace (entity name), then sub_1009b980(a, text, value)
	void sub_1009c110(int a, int b, CBaseEntity *pEnt);	// "CBaseEntity::DumpEntity": scope trace (entity name), then sub_1009b700(a, b, name of pEnt or null)
	void sub_100a9120(inputdata_t *pInput);	// "CBaseEntity::InputSetFakeSilence": scope trace (entity name), sub_100a8fc0(1) when the input is an integer that is non-zero, else sub_100a8fc0(0)
	float sub_100ac720(const char *context);	// "CBaseEntity::GetLastThink": scope trace (entity name), the last think time (float at +0xc of the think context record named context, or the float at +0x178 for the default context)
	void sub_1009c000(int a, int b, unsigned int hEntity);	// "CBaseEntity::DumpEhandle": scope trace (entity name), then sub_1009b700(a, b, name of the entity behind hEntity, or null)
	void sub_1009c850(int a, const char *fmt, const unsigned int *array, int count);	// "CBaseEntity::DumpEhandleArray": scope trace (entity name), sprintf(fmt) into a 256 byte buffer, then per element sprintf("%d") after it and sub_1009c000(a, buffer, array[i])
	void sub_1009c720(int a, const char *fmt, const CBaseEntityColor32 *array, int count);	// "CBaseEntity::DumpColor32Array": scope trace (entity name), sprintf(fmt) into a 256 byte buffer, then per element sprintf("%d") after it and sub_1009bef0(a, buffer, array[i])
	void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);	// "CBaseEntity::Use": scope trace (entity name), calls the use function pointer at +0x1f0 (when set), else forwards the arguments to slot 173 of the entity behind the handle at +0x254 (when it resolves)
	void vfunc199(float *vVelocity, float *vAngVelocity);	// "CBaseEntity::GetVelocity": scope trace (entity name), asks the physics object at +0x36c (slot 40) or else copies the fields at +0x3d4 / +0x3c8
	int sub_100ac360(const char *szContext);	// "CBaseEntity::RegisterThinkContext": scope trace (entity name), returns the index of the named think context, adding a new 16 byte record (name, 0, 0, 0) to the vector at +0x1b8 when there is none
	void sub_100ab280(void *pInfo);	// "CBaseEntity::SetTransmit" (slot 87): scope trace (entity name), sets the bit of the edict's index (engine slot 35) in the bitvector at pInfo+0x10 unless set, then calls slot 87(pInfo) on the entity behind the handle at +0x25c (when it resolves)
	void sub_1009ef50(int index);	// "CBaseEntity::SetAimEntByIndex": scope trace (entity name), SetAimEnt(CBaseEntity::Instance(index)) with both nested Instance scope traces
	void *sub_1003cf50(int type);	// "CBaseEntity::CreateDataObject": scope trace (entity name), AddDataObjectType(type), then the inlined CDataObjectAccessSystem::CreateDataObject / IsValidType (scope traces): slot 2(this) of the data object type table entry at 0x106bd938[type] for a type in 0..31 that has one, else null
	void *sub_1003cd50(int type);	// "CBaseEntity::GetDataObject": scope trace (entity name), null unless HasDataObjectType(type), then the inlined CDataObjectAccessSystem::GetDataObject / IsValidType (scope traces): slot 1(this) of the table entry at 0x106bd938[type] for a type in 0..31 that has one, else null
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::KeyValue (slot 110) as a direct call from the CDecal override
	void sub_100ab450(int a, int b, int c, int d, int e);	// slot 102 "Physics_TraceEntity" wrapper: scope trace, then forwards its five arguments to sub_101cd110
	void sub_100a4930();	// "CBaseEntity::InitPredictable": scope trace (entity name), then the global predictable-id manager at 0x106cfee0 (stub 0x1000ee4e) is given this
	void sub_10012d14(CBaseEntity *pOther, void *pTrace);	// "CBaseEntity::PhysicsImpact" (the stub at 0x10012d14 for 0x1003e6c0): scope trace (entity name), unless either entity has the flag bit 26 hands (pOther, pTrace) to the impact worker
	void sub_1003e6c0(CBaseEntity *pOther, void *pTrace);	// "CBaseEntity::PhysicsImpact": scope trace (entity name), when pOther is set and neither entity's GetFlags() has bit 26 hands (pOther, pTrace) to sub_1003e2e0
	void sub_1003e2e0(CBaseEntity *pOther, void *pTrace);	// the impact worker (called through the stub at 0x10014a29)
	void sub_100a68f0(int pObject);	// "CBaseEntity::VPhysicsSwapObject": scope trace (entity name), calls sub_1002ee60(this) when pObject is null, warns "Bad vphysics swap for %s" when the object at +0x36c is null, stores pObject at +0x36c
	void sub_100b1d10();	// worker called by "CBaseEntity::OnSave" (slot 129) after slot 98 (stub 0x1000d486)
	void sub_1016e500(int solid);	// "CBaseEntity::SetSolid": scope trace (entity name), then the collision property at +0x270 SetSolid(solid)
	void sub_100acd40(inputdata_t *pInput);	// "CBaseEntity::InputDispatchEffect": scope trace (entity name), converts the input's value to a string (variant_t::sub_10008805) unless it already is one
	void sub_1009edc0(const float *mins, const float *maxs);	// "CBaseEntity::SetCollisionBounds": scope trace (entity name), then the collision property at +0x270 SetCollisionBounds(mins, maxs)
	void sub_100adf10(const float *mins, const float *maxs);	// "CBaseEntity::SetSize": scope trace (entity name), then sub_101cf390(this, mins, maxs)
	void sub_100b5340(unsigned int addFlags, unsigned int propagateFlags);	// ors addFlags into +0x268, then walks the handle chain starting at +0x260 (next link at +0x264 of each entity) calling this function(addFlags | propagateFlags, 0) on each
	void sub_100ddf60(const int *pData);	// copies the 14 dwords at pData into +0x450..+0x487, then sub_100ac4e0(0, 0, 0)
	void sub_100ac4e0(int a, int b, int c);	// called through the stub at 0x10007fe5
	void sub_1003d130(int type);	// "CBaseEntity::DestroyDataObject" (stub 0x10009935)
	void sub_1003d300();	// "CBaseEntity::DestroyAllDataObjects": scope trace (entity name), DestroyDataObject(i) for each data object type i in 0..3 that HasDataObjectType
	void vfunc144(void *pInfo);	// "CBaseEntity::Event_Killed": scope trace (entity name), take-damage mode (+0x1fc) = 0, +0x200 = 2, then sub_101cd940(this); takes one stack argument (the damage info), unused
	void sub_100a8ef0();	// "CBaseEntity::ResetScriptedSoundOverride": scope trace (entity name), when the dword at +0x108 is set asks the global at 0x106eb5d8 (sub_100f7770(0, dword, this, 0)) for the entity, then SetSoundOverrideEnt(entity or null)
	void sub_1009d980(char bAddAsDefault);	// "CBaseEntity::CBaseEntity" body (entity base constructor, stub 0x100090fc): called directly by the derived constructors before they store their vftable
	void sub_100b2e30(const float *pVec);	// worker taking a vector (called through the stub at 0x10013728), e.g. SetAbsVelocity-like
	void sub_100a1250(const void *pDamageInfo);	// takes the damage info (stub 0x1000ad5d), e.g. TakeDamage(const CTakeDamageInfo &)
	void sub_100a8e00(inputdata_t *pInput);	// "CBaseEntity::InputSetSoundOverrideEnt": scope trace (entity name), stores the input's string (null unless it is a string) at +0x108, finds the entity of that name with the global list at 0x106eb5d8 and calls SetSoundOverrideEnt
