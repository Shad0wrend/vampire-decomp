// CBaseEntity: base of every server-side entity.
// Only the members and methods that decompiled code needs are declared here;
// add to it as more of the class is recovered.
// New method declarations can go into CBaseEntity_ext.h (included at the end of the class body) so that
// workers do not overwrite each other's edits of this large file.
#pragma once

#include "Vector.h"

class CRestore;
class CEntityMapData;
struct inputdata_t;
struct CVariantCopy;
struct datamap_t;

struct CBaseEntityColor32	// four bytes passed by value to the Dump helpers
{
	unsigned char r, g, b, a;
};

struct CBaseEntityThinkContext	// 16 byte element of the think context vector at +0x1b8
{
	const char *m_pszContext;
	int m_a;
	int m_b;
	int m_c;
};

class CBaseEntity
{
public:
	CBaseEntity(char bAddAsDefault);	// "CBaseEntity::CBaseEntity" (0x1009d980, stub 0x100090fc): the entity base constructor; a derived constructor calls it first and stores its vftable afterwards

	// The head of the (269 slot) virtual table; declare further slots as code needs them,
	// keeping the slot numbers right.
	virtual int vfunc0(int);
	virtual unsigned int *vfunc1();	// "GetRefEHandle": pointer to the entity's handle
	virtual char * vfunc2();
	virtual char * vfunc3();
	virtual void * vfunc4();
	virtual void vfunc5(int a);	// slot 5: called with 1 by the entity removal (UTIL_Remove)
	virtual void vfunc6(bool check);	// "CBaseEntity::SetCheckUntouch": scope trace (entity name); when check is set increments the dword at +0x1ac and, unless bit 0 of the byte at +0x26b is set, sets bit 24 of +0x268 and calls sub_100f8e20(this); else clears bit 24 of +0x268
	virtual void vfunc7();
	virtual int vfunc8();
	virtual const char **vfunc9(int *pOut); virtual void vfunc10(int index); virtual void vfunc11(const char *name);	// slot 11 "CBaseEntity::DebugSetEntityName": scope trace (entity name), copies name (31 chars) to +4 and to the buffer slot 85 returns
	virtual void vfunc12(); virtual void vfunc13(const char *classname);
	virtual char * vfunc14(); virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(int a, int b); virtual void vfunc18();
	virtual void vfunc19(); virtual void vfunc20(); virtual void vfunc21(int); virtual void vfunc22(int); virtual void vfunc23(int);
	virtual void vfunc24(int); virtual void vfunc25(int); virtual void vfunc26(int); virtual void vfunc27(); virtual float vfunc28();
	virtual float vfunc29(); virtual float vfunc30(); virtual void vfunc31(int pDump);	/* slot 31 "Dump": takes the dump context handed to the DumpXxx helpers */ virtual bool vfunc32(int a); virtual int vfunc33();
	virtual int vfunc34(int a); virtual int vfunc35(int a); virtual int vfunc36(); virtual float vfunc37(); virtual void * vfunc38(int);
	virtual void vfunc39(CBaseEntity *pOther); virtual void vfunc40(int); virtual void vfunc41(); virtual int vfunc42(int); virtual void vfunc43(int);
	virtual bool vfunc44(int); virtual bool vfunc45(void *pPassEnt, Vector vecStart, Vector vecEnd, unsigned int fMask); virtual void vfunc46(); virtual void vfunc47(); virtual float vfunc48();
	virtual float vfunc49(); virtual void vfunc50(); virtual void vfunc51(); virtual float vfunc52(); virtual float vfunc53();
	virtual bool vfunc54(int); virtual void vfunc55(int, int, int, int, int, int, int); virtual void vfunc56(int, int, int, int, int, int, int, int); virtual void vfunc57(int, int, int, int, int, int, int); virtual void vfunc58(int);
	virtual void vfunc59(int); virtual void vfunc60(int); virtual void vfunc61(int); virtual void vfunc62(); virtual void vfunc63();
	virtual void vfunc64(const float *angles);	// "CBaseEntity::SetAngles": scope trace (entity name), when the three floats differ from the ones at +0x428 runs three helpers (0x800, 0x3000), stores them and sets the byte at +0x1b1
	virtual void vfunc65(int a, int b, int c); virtual void vfunc66(); virtual void vfunc67(); virtual void vfunc68();
	virtual void vfunc69(); virtual bool vfunc70(); virtual void vfunc71(); virtual bool vfunc72(int); virtual bool vfunc73(CBaseEntity *pOther);
	virtual bool vfunc74(int); virtual void vfunc75(int index, void *pEvent); virtual void vfunc76(); virtual void vfunc77(); virtual void vfunc78();
	virtual int vfunc79(); virtual int vfunc80(); virtual int vfunc81(); virtual datamap_t *vfunc82(); virtual int vfunc83();	// slot 82 "GetDataDescMap": the entity class's datamap
	virtual void vfunc84(int flags); virtual char *vfunc85(); virtual void vfunc86(); virtual void vfunc87(void *pCheckTransmitInfo); virtual int vfunc88();	// slot 87 "CBaseEntity::SetTransmit"-like: takes the transmit info (bit vector pointer at +0x10)
	virtual void vfunc89(); virtual void vfunc90(); virtual char vfunc91(void *pPassEnt, int contentsMask);	/* slot 91: collision test against the pass entity: false for collision group 1 unless the mask has bit 26 */ virtual int vfunc92();
	virtual void vfunc93(int moveType, int moveCollide);	// "CBaseEntity::SetMoveType": scope trace (entity name), on change stores both at +0x35c/+0x360 and calls slot 25 of the object at +0x36c
	virtual int vfunc94(); virtual void vfunc95();
	virtual int vfunc96();	// "CBaseEntity::GetAimEntEdict": scope trace (entity name), resolves the handle at +0x37c and returns that entity's edict at +0x2e0 (0 when it does not resolve)
	virtual CBaseEntity *vfunc97(); virtual void vfunc98();	// slot 97 "CBaseEntity::GetOwnerEntity" (sub_100a9c90)
	virtual bool vfunc99(int a, int b, int c); virtual void vfunc100(); virtual void vfunc101(); virtual void vfunc102(); virtual void vfunc103();
	virtual void vfunc104(); virtual void vfunc105(const char *pszModel);	// slot 105 "CBaseEntity::SetModel": scope trace (entity name), warns when the model is not a brush model (engine slots 20 / 21), then sub_101cf4a0(this, pszModel) and sets the byte at +0x1b1
	virtual void vfunc106(const char *classname); virtual void vfunc107(CEntityMapData *pMapData);	// slot 107 "CBaseEntity::ParseMapData": scope trace (entity name), feeds every key / value pair of the map data to slot 110 (KeyValue)
	virtual bool vfunc108(const char *key, float x, float y, float z);	// "CBaseEntity::KeyValue" (vector): scope trace (entity name), formats the three floats with "%f %f %f" into a 256 byte buffer and returns slot 110(key, buffer)
	virtual bool vfunc109(const char *key, float value);	// "CBaseEntity::KeyValue" (float): scope trace (entity name), formats the float with "%f" into a 256 byte buffer and returns slot 110(key, buffer)
	virtual bool vfunc110(const char *key, const char *value); virtual void vfunc111(); virtual void vfunc112(int, int); virtual void vfunc113();
	virtual void vfunc114(); virtual void vfunc115(int);
	virtual int vfunc116();
	virtual int vfunc117(); virtual void vfunc118(const char *pszInputName, CBaseEntity *pActivator, CBaseEntity *pCaller, CVariantCopy value, int outputID);	// slot 118 "CBaseEntity::AcceptInput" (variant passed by value) 
	virtual void vfunc119();
	virtual void vfunc120(const char *key, float *pos, float *ang);	// "CBaseEntity::GetInputDispatchEffectPosition": scope trace (entity name), copies GetAbsOrigin() to pos and GetAbsAngles() to ang
	virtual bool vfunc121(const char *szKeyName, CVariantCopy *pVariant); virtual void vfunc122(const char *classname);	// slot 121 "CBaseEntity::ReadKeyField": scope trace (entity name), walks the datamap chain (slot 82) for a key / input field of that external name (case-insensitive) and stores its value in the variant; false when not found. Slot 122 "CBaseEntity::SetClassname": scope trace (entity name), stores the pooled string at +0x11c, then slot 13(string or "")
	virtual void vfunc123(); virtual int vfunc124();	// slot 124 "DrawDebugTextOverlays"-like: returns the next free overlay text line
	virtual void vfunc125(); virtual int vfunc126(int a); virtual int vfunc127(int a); virtual bool vfunc128(); virtual void vfunc129();
	virtual void vfunc130(int a); virtual int vfunc131(); virtual void vfunc132(); virtual void vfunc133();

	// Slots whose callers call them directly, so far only declared as plain members.
	bool vfunc140(CBaseEntity *pAttacker);	// "CBaseEntity::PassesDamageFilter": scope trace (entity name), true without a damage filter, else slot 241(pAttacker) of the entity behind the handle at +0x220
	int vfunc143(float flHealth, int bitsDamageType);	// "CBaseEntity::TakeHealth": scope trace (entity name), when the edict at +0x2e0 is set and the take-damage mode at +0x1fc is above 1 and the health at +0x210 is below the maximum at +0x208, adds flHealth (truncated) clamped to the maximum and returns 1, else 0
	int vfunc153();	// true when the velocity at +0x3d4 differs from the zero vector
	bool vfunc158();
	bool vfunc161(const char *name);	// "CBaseEntity::HasLinkedDoor": scope trace (entity name), true when the string at +0x20c is set and equals name (case-insensitive)
	void vfunc168();
	void vfunc174(CBaseEntity *pOther);	// "CBaseEntity::StartTouch": scope trace (entity name), when the handle at +0x254 resolves calls slot 174(pOther) on that entity
	void vfunc175(CBaseEntity *pOther);	// "CBaseEntity::Touch": scope trace (entity name), calls the touch function pointer at +0x1ec (when set) with pOther, then forwards pOther to slot 175 of the entity behind the handle at +0x254 (when it resolves)
	void vfunc176(CBaseEntity *pOther);	// "CBaseEntity::EndTouch": scope trace (entity name), when the handle at +0x254 resolves calls slot 176(pOther) on that entity
	void vfunc178(CBaseEntity *pOther);	// "CBaseEntity::Blocked": scope trace (entity name), calls the function pointer at +0x1f4 (when set) with pOther, then forwards pOther to slot 178 of the entity behind the handle at +0x254 (when it resolves)
	void vfunc180();
	void vfunc194();
	void vfunc195();
	int vfunc196(int a);	// slot 196: forwards its argument to slot 193 and returns it
	int vfunc197(int a, int b, int c, int d);	// "CBaseEntity::BodyTarget": scope trace, calls slot 192(a), returns a
	void vfunc202(CBaseEntity *pOwner);	// "CBaseEntity::SetOwnerEntity": scope trace (entity name), when the owner behind the handle at +0x364 differs from pOwner stores pOwner's handle (-1 for null) and calls slot 25 of the object at +0x36c (when set)
	bool vfunc207();	// "CBaseEntity::IsCurrentlyTouching": scope trace (entity name), returns HasDataObjectType(1)
	void vfunc208(CBaseEntity *pEnt);	// "CBaseEntity::SetGroundEntity": scope trace (entity name), stores pEnt's handle at +0x384 (-1 for null), then AddFlag(1) / RemoveFlag(1)
	void vfunc213(const float *size);	// "CBaseEntity::SetSize": scope trace, copies the three floats to +0x38c
	float *vfunc214();	// "CBaseEntity::GetSize": returns &field at +0x38c
	float *vfunc217();	// "CBaseEntity::GetAbsOrigin": scope trace (entity name), calls slot 98 when bit 11 of +0x268 is set, returns &field at +0x404
	void vfunc218(const float *absAngles);	// "CBaseEntity::SetAbsAngles": scope trace (entity name), CalcAbsolutePosition (slot 98), InvalidatePhysicsRecursive(0x800, 0x3000), clears the dirty transform flag (bit 11 of +0x268), stores the angles at +0x410, rebuilds the coordinate frame (+0x130) from them and the origin (+0x404), and stores the angles relative to the move parent (handle +0x25c) in +0x428 (flagging the network state change at +0x1b1) when they changed
	float *vfunc219();	// "CBaseEntity::GetAbsAngles": scope trace (entity name), calls slot 98 when bit 11 of +0x268 is set, returns &field at +0x410
	float *vfunc220();	// "CBaseEntity::GetOrigin": returns &field at +0x41c
	float *vfunc221();	// "CBaseEntity::GetAngles": returns &field at +0x428
	int vfunc222(int a);	// "CBaseEntity::GetSoundEmissionOrigin": scope trace, calls slot 192(a), returns a
	void vfunc226(int a);
	void vfunc228(int a, int b);
	void vfunc232(int a);	// "CBaseEntity::UpdatePhysicsShadow": scope trace (entity name), unless slot 94() returns 7 and when the object at +0x36c is set, calls its slot 46 with slot 217(slot 219(0, a))
	int vfunc233(int *pList, int maxObjects);	// "CBaseEntity::VPhysicsGetObjectList": scope trace (entity name), stores the object at +0x36c in pList[0] and returns 1 when it is set and maxObjects > 0, else 0
	int vfunc237();	// "CBaseEntity::PhysicsSolidMaskForEntity": scope trace (entity name), a solid mask picked by bit 13 of GetFlags() and the dword at +0xa8
	void vfunc238(int a, int b, int c, int d);

	char sub_100ab020(int a, int b, int c, int d, int e);	// slot 86 "CBaseEntity::ShouldTransmit": scope trace (entity name); true while the force-transmit time at +0x90 is ahead of curtime, false with bit 6 of +0x19c, else the visibility test of the network property at +0x2d4 for the viewer edict b
	const char *sub_1000ea11();
	void sub_10033b80(void (CBaseEntity::*pfnThink)());	// "CBaseEntity::PhysicsDispatchThink": scope trace (entity name), runs the think function pointer and, with the think_limit convar set, reports (DevMsg, at most once a second) or hands to the owner's slot 582 a think that took longer than the limit
	void sub_1003ffa0();	// "CBaseEntity::PhysicsSimulateChildren": scope trace (entity name or NULL ENTITY) and the "CBaseEntity_PhysicsSimulateChildren" profiler scope around PhysicsSimulate (sub_10040390) of every entity in the move child list (+0x260, next at +0x264)
	void sub_10040390();	// "CBaseEntity::PhysicsSimulate", called directly by sub_1003ffa0 (it calls sub_1003ffa0 back)
	void sub_10026c70();	// "CBaseEntity::Think": calls the think function pointer at +0x118
	int sub_10027570();	// "CBaseEntity::GetSolid": forwards to slot 11 of the collision object at +0x270
	bool sub_10037680();	// "CBaseEntity::IsSolid": scope trace, true when the dword at +0x2b0 is set and bit 2 of the byte at +0x2b4 is clear
	bool sub_1003cb00(int type);	// "CBaseEntity::HasDataObjectType": scope trace, tests bit `type` of the mask at +0x444
	void sub_1003cbc0(int type);	// "CBaseEntity::AddDataObjectType": scope trace, sets bit `type` in the mask at +0x444
	void sub_1003cc80(int type);	// "CBaseEntity::RemoveDataObjectType": scope trace, clears bit `type` in the mask at +0x444
	void sub_1003daa0(CBaseEntity *pOther);	// "CBaseEntity::PhysicsTouch": scope trace (entity name), when pOther is set and neither slot 116 returns true, calls slot 175(pOther)
	void sub_1003db80(CBaseEntity *pOther);	// "CBaseEntity::PhysicsStartTouch": as PhysicsTouch, but calls slot 174(pOther) and then slot 175(pOther)
	void sub_10033aa0(float *a, float *b, float *c);	// "CBaseEntity::PhysicsGetAngleVectors": scope trace (entity name), copies the three columns at +0x130/+0x140/+0x150 (3 floats each) into a, b, c
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
	void sub_1009bb40(int a, int b, unsigned int bits);	// "CBaseEntity::DumpBits32": scope trace (entity name), writes 'X' / '-' per bit (0..31) of bits into a global 33 byte buffer, then sub_1009b640(a, b, buffer)
	void sub_1009bc30(int a, char *text, int value);	// "CBaseEntity::DumpPtr": scope trace (entity name), sprintf("0x%08X", value) into a global buffer, then sub_1009b640(a, text, buffer)
	void sub_1009bd10(int a, int b, float x, float y, float z);	// "CBaseEntity::DumpQangle": same as DumpVector with the scope name "CBaseEntity::DumpQangle"
	void sub_1009be00(int a, int b, float x, float y, float z);	// "CBaseEntity::DumpVector": scope trace (entity name), sprintf("(%f %f %f)") into a global buffer, then sub_1009b640(a, b, buffer)
	void sub_1009bef0(int a, int b, CBaseEntityColor32 color);	// "CBaseEntity::DumpColor32": scope trace (entity name), sprintf("[%02X %02X %02X : %02X]") of the four color bytes into a global buffer, then sub_1009b640(a, b, buffer)
	void sub_1009c1e0(int a, int b, int *pSerial);	// "CBaseEntity::DumpSerialEntity": scope trace, sprintf("%05d:%0x08X") of the two dwords of pSerial (zeros when null) into a global buffer, then sub_1009b640(a, b, buffer)
	void sub_1009c390(int a, const char *fmt, const int *array, int count);	// "CBaseEntity::": scope trace, then one sub_1009b980 per dword
	void sub_1009c4c0(int a, const char *fmt, const char *array, int count);	// "CBaseEntity::DumpCharArray": scope trace, then one sub_1009b7d0 per byte
	void sub_1009c5f0(int a, const char *fmt, const int *array, int count);	// "CBaseEntity::DumpFloatArray": scope trace, then one sub_1009ba60 per dword
	void sub_1009d1e0();	// "CBaseEntity::ForceTransmit": scope trace, stores gpGlobals->curtime + 1.0f at +0x90
	int sub_1009d5e0();	// "CBaseEntity::GetVSoundTableIdx": scope trace, calls slot 71 while the index at +0xbc is negative, returns it
	int sub_1009d6a0();	// "CBaseEntity::GetVSoundGroup": scope trace, calls slot 71 while the value at +0xb4 is below -1, returns it
	int sub_1009d760();	// "CBaseEntity::GetVSoundGroupFemale": same shape on the value at +0xb8
	float sub_1009d850(void *pListener, float *pDist);	// "CBaseEntity::AdjustSoundDistForStealth": scope trace (entity name), when pListener is set with type 4 at +4 and the object at +0xa8 is set, subtracts slot 30() from *pDist (clamped at 0); returns *pDist
	void sub_1009ee80(CBaseEntity *pEnt);	// "CBaseEntity::SetAimEnt": stores pEnt's handle at +0x37c (-1 for null)
	const char *sub_1000b5cd();	// "CBaseEntity::GetDebugName" (stub 0x1000b5cd; a null this answers a placeholder name), called directly
	const char *sub_1009f200();	// "CBaseEntity::GetClassname": the string at +0x11c, or "" when it is null
	void sub_1009f3c0(const char *msg, int duration);	// "CBaseEntity::AddTimedOverlay": scope trace (entity name), pushes a 16 byte record (copy of msg, curtime + duration, curtime, old head) on the list at +0x228
	void sub_1009fa60();
	void sub_100ab980(class CEventAction *pAction);	// "CBaseEntity::DrawOutputOverlay": scope trace (entity name), formats "%3.1f  (%s) --> (%s)" (with ",%.1f)" and the delay when set) into a 1024 byte buffer, AddTimedOverlay(text, 10) and, with the debug switch set, DevMsg("output: ...")
	void sub_100a0420(const char *name);	// "CBaseEntity::SetName": scope trace, stores name at +0x26c, then slot 11(name or "")
	void sub_100a0b20();	// "CBaseEntity::ClearParent": scope trace (entity name), then the call through the stub at 0x1000b636
	void sub_100a53d0(int a);	// "CBaseEntity::PhysicsTouchTriggers": scope trace (entity name), then slot 122 of the global at 0x1070b22c (edict at +0x2e0, a)
	bool sub_100a5ad0();	// "CBaseEntity::VPhysicsInitSetup": scope trace (entity name), false without the object at +0x2e0, else slot 225 and sub_100b3b00, true
	class IPhysicsObject *sub_100a5ea0(int solidType, int nSolidFlags, int bCreateAsleep, void *pSolidParams);	// "CBaseEntity::VPhysicsInitNormal" (stub 0x1000e78c): creates the physics object for the entity and returns it
	void sub_100a6490(int pObject);	// "CBaseEntity::VPhysicsSetObject": scope trace (entity name), warns "Overwriting physics object for ..." when replacing an existing object at +0x36c with a non-null one, stores pObject at +0x36c
	void sub_100a7d00(int info, int a, int b);	// "CBaseEntity::DispatchTraceAttack": scope trace (entity name), when slot 140(info->field 0x2c) is true calls slot 141(info, a, b)
	void sub_100a8bf0(int a);	// "CBaseEntity::InputScriptHide": calls vfunc77
	void sub_100a8c90(int a);	// "CBaseEntity::InputScriptUnhide": calls vfunc78
	CBaseEntity *sub_100a82c0();	// the entity of the handle at +0xd0; the handle and its time (+0xd8) are cleared once curtime has passed that time
	void sub_100a8390(CBaseEntity *pEnt, float flDelay);	// stores pEnt's handle at +0xd0 (-1 for null), engine slot 120() at +0xd4 and curtime + flDelay at +0xd8
	void sub_100a8d30(CBaseEntity *pEnt);	// "CBaseEntity::SetSoundOverrideEnt": stores pEnt's handle at +0x100 (-1 for null)
	void sub_100a8fc0(char value);	// "CBaseEntity::SetFakeSilence": scope trace (entity name), stores the byte at +0x104, then sub_1009d1e0()
	void sub_100a9290(char value);	// "CBaseEntity::SetNPCTransparent": stores the byte at +0xfc
	void sub_100a9470(char value);	// "CBaseEntity::SetOccludesSound": stores the byte at +0xfe (slot 103 override in many subclasses)
	int sub_100a98f0(int useType, int currentState);	// "CBaseEntity::ShouldToggle": scope trace (entity name), 0 when the use type would not change the state (on while on, off while off), else 1
	CBaseEntity *sub_100a9c90();	// "CBaseEntity::GetOwnerEntity" (slot 97): resolves the handle at +0x364
	int sub_100aa080(void *pSave, int block);	// "CBaseEntity::SaveDataDescBlock": scope trace, then returns slot 2 of pSave(this, block)
	int sub_100aa5c0(CRestore *pRestore, int map);	// "CBaseEntity::RestoreDataDescBlock": scope trace, then returns pRestore->vfunc2(this, map)
	void sub_100aaa40(int group);	// "CBaseEntity::SetCollisionGroup": scope trace (entity name), on change stores group at +0x368 and calls slot 25 of the object at +0x36c
	void sub_100aaf30();	// "CBaseEntity::PostSpawn": scope trace (entity name), then slot 11(name or ""), slot 13(classname or ""), and slot 77 when the byte at +0xe0 is set
	void sub_100abbf0(int a, int b);
	int sub_100ac250(const char *context);	// "CBaseEntity::GetIndexForContext": scope trace (entity name), index of the first think context whose name matches (32 chars), or -1
	void sub_100ac810(inputdata_t *pInput);	// "CBaseEntity::InputAlpha": scope trace (entity name), stores the input's integer value clamped to 0..255 as the byte at +0x1a3
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
	bool sub_100b5110();
	int sub_100b3d10();	// "CBaseEntity::GetEdict" scope; returns the field at +0x2e0
	void sub_100b40f0(int a);
	void sub_100bb790(const char *model, int value);	// subclass init (class not known yet; declared here): clears the colour bytes at +0x1a0, sets the model through slot 212, precaches it and sets the model index
	void sub_100fbbb0(float time);	// "CBaseEntity::SetNextThink": stores time + gpGlobals->curtime at +0x17c (0 clears it)
	void sub_100fbc20();	// calls slot 242, then sub_100fbbb0(2.0f)
	void sub_102575d0(CBaseEntity *pOther, int a, int b);	// hands the engine indices of pOther's and this entity's edicts (+0x2e0) to the game's callback sub_101ede10; the two extra arguments are unused
	bool sub_103d3a40(const char *pszNameOrWildcard);	// "NameMatches" (inlined copy in NPC_VWerewolf): the entity name equals the argument, case-insensitively; a trailing '*' makes it a prefix match

#include "CBaseEntity_ext.h"

	char m_pad0004[0x8c];
	float m_flForceTransmitTime;	// 0x0090
	char m_pad0094[0x9c - 0x94];
	void *m_p9c;	// 0x009c: the owning object (the character behind a hand / weapon)
	int m_n00a0;	// 0x00a0
	char m_pad00a4[4];
	void *m_pA8;	// 0x00a8: the player / character object that controls this entity (null for none)
	char m_pad00ac[0xb4 - 0xac];
	int m_nVSoundGroup;	// 0x00b4
	int m_nVSoundGroupFemale;	// 0x00b8
	int m_nVSoundTableIdx;	// 0x00bc
	char m_pad00c0[0xc8 - 0xc0];
	EHANDLE m_hC8;	// 0x00c8
	float m_flCC;	// 0x00cc: the time the handle at +0xc8 expires
	EHANDLE m_hD0;	// 0x00d0
	int m_nD4;	// 0x00d4
	float m_flD8;	// 0x00d8
	int m_nDC;	// 0x00dc: the energy scale of collision damage
	char m_pad00e0[4];
	void (CBaseEntity::*m_pfnSavedThink00e4)();	// 0x00e4: the think function saved by ScriptHide
	int m_nSavedSolid00e8;	// 0x00e8: slot 92 saved by ScriptHide
	int m_nSavedMoveType00ec;	// 0x00ec
	int m_nSavedMoveCollide00f0;	// 0x00f0
	char m_bHidden00f4;	// 0x00f4: set while ScriptHide has hidden the entity
	char m_pad00f5;
	short m_nSavedSlot211_00f6;	// 0x00f6
	unsigned int m_nSavedEffects00f8;	// 0x00f8
	char m_pad00fc[0x10c - 0xfc];
	EHANDLE m_hActivator10c;	// 0x010c: the activator of the entity's current input
	EHANDLE m_hCaller110;	// 0x0110: the caller of the entity's current input
	void (CBaseEntity::*m_pfn0114)();
	void (CBaseEntity::*m_pfnThink)();
	const char *m_classname11c;
	char m_pad0120[0x164 - 0x120];
	float m_flSpeed164;	// 0x0164
	int m_n168;
	int m_n16c;
	char m_pad0170[0x17c - 0x170];
	float m_flNextThink;	// 0x017c
	char m_pad0180[4];
	Vector m_vecViewOffset;	// 0x0184

	float m_vecMovedir[3];	// 0x0190: the direction set by SetMovedir
	unsigned int m_nEffectFlags;	// 0x019c: bit 4 / bit 6 are set by the scene and beam code
	char m_pad01a0[3];
	unsigned char m_bAlpha1a3;	// 0x01a3: render alpha (InputAlpha)
	char m_pad01a4[0x1b1 - 0x1a4];
	char m_bChanged1b1;	// 0x01b1: set when a networked field changed
	char m_pad01b2[0x1b8 - 0x1b2];
	CBaseEntityThinkContext *m_pThinkContexts;	// 0x01b8
	int m_nThinkContextsAlloc;	// 0x01bc
	int m_pad01c0;
	int m_nThinkContexts;	// 0x01c4
	char m_pad01c8[0x1ec - 0x1c8];
	void (CBaseEntity::*m_pfnTouch)(CBaseEntity *pOther);	// 0x01ec
	void (CBaseEntity::*m_pfnUse)(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// 0x01f0
	void (CBaseEntity::*m_pfnBlocked)(CBaseEntity *pOther);	// 0x01f4
	char m_pad01f8[0x1fc - 0x1f8];
	int m_nTakeDamage;	// 0x01fc
	int m_field200;
	unsigned int m_flags204;	// 0x0204
	int m_iMaxHealth;	// 0x0208
	const char *m_target20c;	// 0x020c: the target name
	int m_iHealth;	// 0x0210
	char m_pad0214[4];
	unsigned int m_hUseFilter;	// 0x0218: entity handle of the use filter
	char m_pad021c[4];
	unsigned int m_hDamageFilter;	// 0x0220: entity handle of the damage filter
	char m_pad0224[0x228 - 0x224];
	void *m_pTimedOverlays;	// 0x0228
	char m_pad022c[0x254 - 0x22c];
	unsigned int m_hTouch254;	// entity handle notified by StartTouch / EndTouch
	char m_pad0258[0x260 - 0x258];
	EHANDLE m_hMoveChild260;	// 0x260: the first entity parented to this one
	EHANDLE m_hMovePeer264;	// 0x264: the next entity parented to the same parent
	unsigned int m_flags268;
	const char *m_name26c;
	char m_pad0270[0x2b0 - 0x270];
	int m_n2b0;	// 0x02b0: tested by IsSolid
	unsigned char m_b2b4;	// 0x02b4: bit 2 clears IsSolid, bit 3 is IsSolidFlagSet
	char m_pad02b5[0x2e0 - 0x2b5];
	int m_pEdict2e0;	// 0x02e0
	char m_pad02e4[0x35c - 0x2e4];
	int m_nMoveType35c;	// 0x035c
	int m_nMoveCollide360;	// 0x0360
	unsigned int m_hOwner364;	// owner entity handle
	int m_field368;
	int m_obj36c;	// physics object (pointer)
	char m_pad0370[0x4c];
	Vector m_vecVelocity3bc;	// 0x03bc
	float m_angVel3c8[3];	// 0x03c8: the angular velocity SimulateAngles integrates
	float m_vel3d4[3];
	void vfunc212(int set);	// as in CBaseAnimating (transplant)
};
