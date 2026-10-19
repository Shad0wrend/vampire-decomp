// CBaseEntity: base of every server-side entity.
// Only the members and methods that decompiled code needs are declared here;
// add to it as more of the class is recovered.
#pragma once

class CRestore;
struct inputdata_t;

class CBaseEntity
{
public:
	// The head of the (269 slot) virtual table; declare further slots as code needs them,
	// keeping the slot numbers right.
	virtual void vfunc0();
	virtual unsigned int *vfunc1();	// "GetRefEHandle": pointer to the entity's handle
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(int a);
	virtual void vfunc7();
	virtual int vfunc8();
	virtual const char **vfunc9(int *pOut); virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13();
	virtual void vfunc14(); virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(int a, int b); virtual void vfunc18();
	virtual void vfunc19(); virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23();
	virtual void vfunc24(); virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28();
	virtual void vfunc29(); virtual void vfunc30(); virtual void vfunc31(); virtual bool vfunc32(int a); virtual void vfunc33();
	virtual void vfunc34(); virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38();
	virtual void vfunc39(); virtual void vfunc40(); virtual void vfunc41(); virtual void vfunc42(); virtual void vfunc43();
	virtual void vfunc44(); virtual void vfunc45(); virtual void vfunc46(); virtual void vfunc47(); virtual void vfunc48();
	virtual void vfunc49(); virtual void vfunc50(); virtual void vfunc51(); virtual void vfunc52(); virtual void vfunc53();
	virtual void vfunc54(); virtual void vfunc55(); virtual void vfunc56(); virtual void vfunc57(); virtual void vfunc58();
	virtual void vfunc59(); virtual void vfunc60(); virtual void vfunc61(); virtual void vfunc62(); virtual void vfunc63();
	virtual void vfunc64(); virtual void vfunc65(); virtual void vfunc66(); virtual void vfunc67(); virtual void vfunc68();
	virtual void vfunc69(); virtual void vfunc70(); virtual void vfunc71(); virtual void vfunc72(); virtual void vfunc73();
	virtual void vfunc74(); virtual void vfunc75(); virtual void vfunc76(); virtual void vfunc77(); virtual void vfunc78();
	virtual void vfunc79(); virtual void vfunc80(); virtual void vfunc81(); virtual void vfunc82(); virtual void vfunc83();
	virtual void vfunc84(int flags); virtual void vfunc85(); virtual void vfunc86(); virtual void vfunc87(); virtual void vfunc88();
	virtual void vfunc89(); virtual void vfunc90(); virtual void vfunc91(); virtual void vfunc92();
	virtual void vfunc93(int moveType, int moveCollide);	// "CBaseEntity::SetMoveType": scope trace (entity name), on change stores both at +0x35c/+0x360 and calls slot 25 of the object at +0x36c
	virtual void vfunc94(); virtual void vfunc95(); virtual void vfunc96(); virtual void vfunc97(); virtual void vfunc98();
	virtual bool vfunc99(int a, int b, int c); virtual void vfunc100(); virtual void vfunc101(); virtual void vfunc102(); virtual void vfunc103();
	virtual void vfunc104(); virtual void vfunc105(); virtual void vfunc106(const char *classname); virtual void vfunc107(); virtual void vfunc108();
	virtual void vfunc109(); virtual void vfunc110(); virtual void vfunc111(); virtual void vfunc112(); virtual void vfunc113();
	virtual void vfunc114(); virtual void vfunc115();
	virtual int vfunc116();
	virtual void vfunc117(); virtual void vfunc118(); virtual void vfunc119();
	virtual void vfunc120(); virtual void vfunc121(); virtual void vfunc122(); virtual void vfunc123(); virtual void vfunc124();
	virtual void vfunc125(); virtual int vfunc126(int a); virtual int vfunc127(int a); virtual void vfunc128(); virtual void vfunc129();
	virtual void vfunc130(int a); virtual void vfunc131(); virtual void vfunc132(); virtual void vfunc133();

	// Slots whose callers call them directly, so far only declared as plain members.
	bool vfunc158();
	void vfunc168();
	void vfunc180();
	void vfunc194();
	void vfunc195();
	int vfunc196(int a);	// slot 196: forwards its argument to slot 193 and returns it
	int vfunc197(int a, int b, int c, int d);	// "CBaseEntity::BodyTarget": scope trace, calls slot 192(a), returns a
	bool vfunc207();	// "CBaseEntity::IsCurrentlyTouching": scope trace (entity name), returns HasDataObjectType(1)
	void vfunc213(const float *size);	// "CBaseEntity::SetSize": scope trace, copies the three floats to +0x38c
	float *vfunc214();	// "CBaseEntity::GetSize": returns &field at +0x38c
	float *vfunc217();	// "CBaseEntity::GetAbsOrigin": scope trace (entity name), calls slot 98 when bit 11 of +0x268 is set, returns &field at +0x404
	float *vfunc219();	// "CBaseEntity::GetAbsAngles": scope trace (entity name), calls slot 98 when bit 11 of +0x268 is set, returns &field at +0x410
	float *vfunc220();	// "CBaseEntity::GetOrigin": returns &field at +0x41c
	float *vfunc221();	// "CBaseEntity::GetAngles": returns &field at +0x428
	int vfunc222(int a);	// "CBaseEntity::GetSoundEmissionOrigin": scope trace, calls slot 192(a), returns a
	void vfunc226(int a);
	void vfunc228(int a, int b);
	int vfunc233(int *pList, int maxObjects);	// "CBaseEntity::VPhysicsGetObjectList": scope trace (entity name), stores the object at +0x36c in pList[0] and returns 1 when it is set and maxObjects > 0, else 0
	void vfunc238(int a, int b, int c, int d);

	const char *sub_1000ea11();
	void sub_10026c70();	// "CBaseEntity::Think": calls the think function pointer at +0x118
	int sub_10027570();	// "CBaseEntity::GetSolid": forwards to slot 11 of the collision object at +0x270
	bool sub_10037680();	// "CBaseEntity::IsSolid": scope trace, true when the dword at +0x2b0 is set and bit 2 of the byte at +0x2b4 is clear
	bool sub_1003cb00(int type);	// "CBaseEntity::HasDataObjectType": scope trace, tests bit `type` of the mask at +0x444
	void sub_1003cbc0(int type);	// "CBaseEntity::AddDataObjectType": scope trace, sets bit `type` in the mask at +0x444
	void sub_1003cc80(int type);	// "CBaseEntity::RemoveDataObjectType": scope trace, clears bit `type` in the mask at +0x444
	void sub_1003daa0(CBaseEntity *pOther);	// "CBaseEntity::PhysicsTouch": scope trace (entity name), when pOther is set and neither slot 116 returns true, calls slot 175(pOther)
	void sub_1003eb50();
	float *sub_1009b030(float *out);	// slot 16 override: copies the three floats at +0x50 to out
	void sub_1009b1d0(int a, int b);	// "CBaseEntity::TraceMessageBase"
	void sub_1009b2c0(int a, int b);	// "CBaseEntity::TraceMessage" (slot 18): scope trace, then sub_1009b1d0(a, b)
	void sub_1009b440(const char *msg);	// "CBaseEntity::TraceMessageBareBase": DevMsg(msg) when msg is set
	void sub_1009b500(const char *msg);	// "CBaseEntity::TraceMessageBare" (slot 20): forwards to sub_1009b440
	void sub_1009b5a0(const char *msg);	// "CBaseEntity::TraceMessageBare" (slot 19): identical to sub_1009b500
	void sub_1009b640(int a, int b, int c);	// "CBaseEntity::DumpString"-like worker: scope trace, then DevMsg("%-40s: %10s\n", b, c)
	void sub_1009b700(int a, int b, const char *c);	// "CBaseEntity::DumpString": scope trace (entity name), then sub_1009b640(a, b, c or "")
	void sub_1009b7d0(int a, char *text, char value);	// "CBaseEntity::DumpChar": scope trace, sprintf("%c") into a global buffer, then sub_1009b640
	void sub_1009b8a0(int a, int b, char value);	// "CBaseEntity::DumpBool": scope trace (entity name), then sub_1009b640(a, b, "true" or "false")
	void sub_1009b980(int a, char *text, int value);	// "CBaseEntity::DumpInt": scope trace, sprintf("%d") into a global buffer, then sub_1009b640
	void sub_1009ba60(int a, char *text, int value);	// "CBaseEntity::DumpFloatArrayBase"-like: one dumped dword
	void sub_1009bc30(int a, char *text, int value);	// "CBaseEntity::DumpPtr": scope trace (entity name), sprintf("0x%08X", value) into a global buffer, then sub_1009b640(a, text, buffer)
	void sub_1009c390(int a, const char *fmt, const int *array, int count);	// "CBaseEntity::": scope trace, then one sub_1009b980 per dword
	void sub_1009c4c0(int a, const char *fmt, const char *array, int count);	// "CBaseEntity::DumpCharArray": scope trace, then one sub_1009b7d0 per byte
	void sub_1009c5f0(int a, const char *fmt, const int *array, int count);	// "CBaseEntity::DumpFloatArray": scope trace, then one sub_1009ba60 per dword
	void sub_1009d1e0();	// "CBaseEntity::ForceTransmit": scope trace, stores gpGlobals->curtime + 1.0f at +0x90
	int sub_1009d5e0();	// "CBaseEntity::GetVSoundTableIdx": scope trace, calls slot 71 while the index at +0xbc is negative, returns it
	int sub_1009d6a0();	// "CBaseEntity::GetVSoundGroup": scope trace, calls slot 71 while the value at +0xb4 is below -1, returns it
	int sub_1009d760();	// "CBaseEntity::GetVSoundGroupFemale": same shape on the value at +0xb8
	void sub_1009ee80(CBaseEntity *pEnt);	// "CBaseEntity::SetAimEnt": stores pEnt's handle at +0x37c (-1 for null)
	const char *sub_1009f200();	// "CBaseEntity::GetClassname": the string at +0x11c, or "" when it is null
	void sub_1009fa60();
	void sub_100a0420(const char *name);	// "CBaseEntity::SetName": scope trace, stores name at +0x26c, then slot 11(name or "")
	void sub_100a0b20();	// "CBaseEntity::ClearParent": scope trace (entity name), then the call through the stub at 0x1000b636
	void sub_100a53d0(int a);	// "CBaseEntity::PhysicsTouchTriggers": scope trace (entity name), then slot 122 of the global at 0x1070b22c (edict at +0x2e0, a)
	bool sub_100a5ad0();	// "CBaseEntity::VPhysicsInitSetup": scope trace (entity name), false without the object at +0x2e0, else slot 225 and sub_100b3b00, true
	void sub_100a7d00(int info, int a, int b);	// "CBaseEntity::DispatchTraceAttack": scope trace (entity name), when slot 140(info->field 0x2c) is true calls slot 141(info, a, b)
	void sub_100a8bf0(int a);	// "CBaseEntity::InputScriptHide": calls vfunc77
	void sub_100a8c90(int a);	// "CBaseEntity::InputScriptUnhide": calls vfunc78
	void sub_100a8d30(CBaseEntity *pEnt);	// "CBaseEntity::SetSoundOverrideEnt": stores pEnt's handle at +0x100 (-1 for null)
	void sub_100a8fc0(char value);	// "CBaseEntity::SetFakeSilence": scope trace (entity name), stores the byte at +0x104, then sub_1009d1e0()
	void sub_100a9290(char value);	// "CBaseEntity::SetNPCTransparent": stores the byte at +0xfc
	void sub_100a9470(char value);	// "CBaseEntity::SetOccludesSound": stores the byte at +0xfe (slot 103 override in many subclasses)
	bool sub_100a98f0(int useType, int currentState);	// "CBaseEntity::ShouldToggle": scope trace (entity name), false when the use type would not change the state (on while on, off while off)
	CBaseEntity *sub_100a9c90();	// "CBaseEntity::GetOwnerEntity" (slot 97): resolves the handle at +0x364
	int sub_100aa080(void *pSave, int block);	// "CBaseEntity::SaveDataDescBlock": scope trace, then returns slot 2 of pSave(this, block)
	int sub_100aa5c0(CRestore *pRestore, int map);	// "CBaseEntity::RestoreDataDescBlock": scope trace, then returns pRestore->vfunc2(this, map)
	void sub_100aaa40(int group);	// "CBaseEntity::SetCollisionGroup": scope trace (entity name), on change stores group at +0x368 and calls slot 25 of the object at +0x36c
	void sub_100abbf0(int a, int b);
	void sub_100ac920(inputdata_t *pInput);	// "CBaseEntity::InputColor": scope trace (entity name), stores the three low bytes of the input's color32 at +0x1a0..0x1a2
	void sub_100ac9f0(inputdata_t *pInput);	// "CBaseEntity::InputUse": scope trace, then slot 173 (activator, caller, 3, 0)
	void sub_100acef0(int a);	// "CBaseEntity::InputKill": calls vfunc119
	int sub_100adfd0(const char *name);	// "CBaseEntity::PrecacheModel": forwards to the engine, returns its result
	int sub_100ae090(const char *name);	// "CBaseEntity::PrecacheSound": forwards to the sound system, returns its result
	void sub_100ae150();	// "CBaseEntity::Remove": scope trace (entity name), then sub_101cd940(this)
	char sub_100aa840();	// "CBaseEntity::IsTransparent": (field at +0x16c) != 0
	int sub_100b1a00();	// "CBaseEntity::GetModel": scope trace (entity name), then modelinfo slot 2 of vfunc8(); returns its result
	void sub_100b12e0(char value);	// "CBaseEntity::SetSentLastFrame": stores the byte at +0x380 (slot 7 override)
	void sub_100b1750(int index);	// "CBaseEntity::SetModelIndex": stores the dword at +0x1a4 (slot 10 override)
	void sub_100b3580(unsigned int flags);	// "CBaseEntity::AddFlag": scope trace, ors the bits into the flags at +0x434
	void sub_100b3640(unsigned int flags);	// "CBaseEntity::RemoveFlag": scope trace, clears the bits in the flags at +0x434
	int sub_100b3700();	// "CBaseEntity::GetFlags": returns the field at +0x434
	void sub_100b37a0();	// "CBaseEntity::ClearFlags": stores 0 at +0x434
	void sub_100b3840(unsigned int flags);	// "CBaseEntity::AddFlag2": scope trace, ors the bits into the flags at +0x438
	void sub_100b3900(unsigned int flags);	// "CBaseEntity::RemoveFlag2": scope trace, clears the bits in the flags at +0x438
	void sub_100b3a60();	// "CBaseEntity::ClearFlags2": stores 0 at +0x438
	void sub_100b3b90(unsigned int flags);	// "CBaseEntity::ToggleFlag": scope trace, xors the bits into the flags at +0x434
	void sub_100b3c50(unsigned int flags);	// "CBaseEntity::ToggleFlag2": scope trace, xors the bits into the flags at +0x438
	void sub_100b3b00();
	int sub_100b3d10();	// "CBaseEntity::GetEdict" scope; returns the field at +0x2e0
	void sub_100b40f0(int a);
	void sub_100fbbb0(float time);	// "CBaseEntity::SetNextThink": stores time + gpGlobals->curtime at +0x17c (0 clears it)
	void sub_100fbc20();	// calls slot 242, then sub_100fbbb0(2.0f)
	bool sub_103d3a40(const char *pszNameOrWildcard);	// "NameMatches" (inlined copy in NPC_VWerewolf): the entity name equals the argument, case-insensitively; a trailing '*' makes it a prefix match

	char m_pad0004[0x8c];
	float m_flForceTransmitTime;	// 0x0090
	char m_pad0094[0xb4 - 0x94];
	int m_nVSoundGroup;	// 0x00b4
	int m_nVSoundGroupFemale;	// 0x00b8
	int m_nVSoundTableIdx;	// 0x00bc
	char m_pad00c0[0x114 - 0xc0];
	void (CBaseEntity::*m_pfn0114)();
	void (CBaseEntity::*m_pfnThink)();
	char m_pad011c[0xe4];
	int m_field200;
	char m_pad0204[0x64];
	unsigned int m_flags268;
	const char *m_name26c;
	char m_pad0270[0xf4];
	unsigned int m_hOwner364;	// owner entity handle
	int m_field368;
	char m_pad036c[0x68];
	float m_vel3d4[3];
	void vfunc212(int set);	// as in CBaseAnimating (transplant)
};
