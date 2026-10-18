// CBaseEntity: base of every server-side entity.
// Only the members and methods that decompiled code needs are declared here;
// add to it as more of the class is recovered.
#pragma once

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
	virtual void vfunc14(); virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18();
	virtual void vfunc19(); virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23();
	virtual void vfunc24(); virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28();
	virtual void vfunc29(); virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33();
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
	virtual void vfunc89(); virtual void vfunc90(); virtual void vfunc91(); virtual void vfunc92(); virtual void vfunc93();
	virtual void vfunc94(); virtual void vfunc95(); virtual void vfunc96(); virtual void vfunc97(); virtual void vfunc98();
	virtual bool vfunc99(int a, int b, int c); virtual void vfunc100(); virtual void vfunc101(); virtual void vfunc102(); virtual void vfunc103();
	virtual void vfunc104(); virtual void vfunc105(); virtual void vfunc106(const char *classname); virtual void vfunc107(); virtual void vfunc108();
	virtual void vfunc109(); virtual void vfunc110(); virtual void vfunc111(); virtual void vfunc112(); virtual void vfunc113();
	virtual void vfunc114(); virtual void vfunc115();
	virtual int vfunc116();
	virtual void vfunc117(); virtual void vfunc118(); virtual void vfunc119();
	virtual void vfunc120(); virtual void vfunc121(); virtual void vfunc122(); virtual void vfunc123(); virtual void vfunc124();
	virtual void vfunc125(); virtual int vfunc126(int a); virtual void vfunc127(); virtual void vfunc128(); virtual void vfunc129();
	virtual void vfunc130(int a); virtual void vfunc131(); virtual void vfunc132(); virtual void vfunc133();

	// Slots whose callers call them directly, so far only declared as plain members.
	bool vfunc158();
	void vfunc168();
	void vfunc180();
	void vfunc194();
	void vfunc195();
	int vfunc196(int a);	// slot 196: forwards its argument to slot 193 and returns it
	float *vfunc214();	// "CBaseEntity::GetSize": returns &field at +0x38c
	float *vfunc220();	// "CBaseEntity::GetOrigin": returns &field at +0x41c
	float *vfunc221();	// "CBaseEntity::GetAngles": returns &field at +0x428
	void vfunc226(int a);
	void vfunc228(int a, int b);
	void vfunc238(int a, int b, int c, int d);

	const char *sub_1000ea11();
	void sub_10026c70();	// "CBaseEntity::Think": calls the think function pointer at +0x118
	int sub_10027570();	// "CBaseEntity::GetSolid": forwards to slot 11 of the collision object at +0x270
	void sub_1003eb50();
	float *sub_1009b030(float *out);	// slot 16 override: copies the three floats at +0x50 to out
	void sub_1009b1d0(int a, int b);	// "CBaseEntity::TraceMessageBase"
	void sub_1009b2c0(int a, int b);	// "CBaseEntity::TraceMessage" (slot 18): scope trace, then sub_1009b1d0(a, b)
	void sub_1009b440(const char *msg);	// "CBaseEntity::TraceMessageBareBase": DevMsg(msg) when msg is set
	void sub_1009b500(const char *msg);	// "CBaseEntity::TraceMessageBare" (slot 20): forwards to sub_1009b440
	void sub_1009b5a0(const char *msg);	// "CBaseEntity::TraceMessageBare" (slot 19): identical to sub_1009b500
	void sub_1009b7d0(int a, char *text, char value);	// "CBaseEntity::DumpCharArrayBase"-like: one dumped byte
	void sub_1009c4c0(int a, const char *fmt, const char *array, int count);	// "CBaseEntity::DumpCharArray": scope trace, then one sub_1009b7d0 per byte
	void sub_1009ee80(CBaseEntity *pEnt);	// "CBaseEntity::SetAimEnt": stores pEnt's handle at +0x37c (-1 for null)
	const char *sub_1009f200();	// "CBaseEntity::GetClassname": the string at +0x11c, or "" when it is null
	void sub_1009fa60();
	void sub_100a8bf0(int a);	// "CBaseEntity::InputScriptHide": calls vfunc77
	void sub_100a8c90(int a);	// "CBaseEntity::InputScriptUnhide": calls vfunc78
	void sub_100a9290(char value);	// "CBaseEntity::SetNPCTransparent": stores the byte at +0xfc
	void sub_100a9470(char value);	// "CBaseEntity::SetOccludesSound": stores the byte at +0xfe (slot 103 override in many subclasses)
	CBaseEntity *sub_100a9c90();	// "CBaseEntity::GetOwnerEntity" (slot 97): resolves the handle at +0x364
	void sub_100abbf0(int a, int b);
	void sub_100acef0(int a);	// "CBaseEntity::InputKill": calls vfunc119
	int sub_100adfd0(const char *name);	// "CBaseEntity::PrecacheModel": forwards to the engine, returns its result
	int sub_100ae090(const char *name);	// "CBaseEntity::PrecacheSound": forwards to the sound system, returns its result
	char sub_100aa840();	// "CBaseEntity::IsTransparent": (field at +0x16c) != 0
	void sub_100b12e0(char value);	// "CBaseEntity::SetSentLastFrame": stores the byte at +0x380 (slot 7 override)
	void sub_100b1750(int index);	// "CBaseEntity::SetModelIndex": stores the dword at +0x1a4 (slot 10 override)
	void sub_100b3640(unsigned int flags);	// "CBaseEntity::RemoveFlag": scope trace, clears the bits in the flags at +0x434
	int sub_100b3700();	// "CBaseEntity::GetFlags": returns the field at +0x434
	void sub_100b37a0();	// "CBaseEntity::ClearFlags": stores 0 at +0x434
	void sub_100b3a60();	// "CBaseEntity::ClearFlags2": stores 0 at +0x438
	void sub_100b3b00();
	int sub_100b3d10();	// "CBaseEntity::GetEdict" scope; returns the field at +0x2e0
	void sub_100b40f0(int a);
	void sub_100fbbb0(float time);	// "CBaseEntity::SetNextThink": stores time + gpGlobals->curtime at +0x17c (0 clears it)
	void sub_100fbc20();	// calls slot 242, then sub_100fbbb0(2.0f)

	char m_pad0004[0x110];
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
};
