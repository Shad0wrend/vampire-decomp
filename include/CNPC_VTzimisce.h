// CNPC_VTzimisce (RTTI .?AVCNPC_VTzimisce@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right.
#pragma once

#define VT_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define VT_SLOTS100(p) VT_SLOTS10(p##0) VT_SLOTS10(p##1) VT_SLOTS10(p##2) VT_SLOTS10(p##3) VT_SLOTS10(p##4) \
	VT_SLOTS10(p##5) VT_SLOTS10(p##6) VT_SLOTS10(p##7) VT_SLOTS10(p##8) VT_SLOTS10(p##9)

// The object returned by CNPC_VTzimisce slot 167; its slot 220 gives the position-like pointer.
class CNPC_VTzimisceHelper
{
public:
	VT_SLOTS100(h0)
	VT_SLOTS100(h1)
	VT_SLOTS10(h20)
	VT_SLOTS10(h21)
	virtual void *vfunc220();
};

// A console-variable-like global: slot 1 says "unset", otherwise the values at +0x28 / +0x2c hold the value.
class CNPC_VTzimisceConVar
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x24];
	float m_f28;
	int m_n2c;
};

class CNPC_VTzimisce
{
public:
	VT_SLOTS100(s0)
	VT_SLOTS10(s10)
	VT_SLOTS10(s11)
	VT_SLOTS10(s12)
	VT_SLOTS10(s13)
	VT_SLOTS10(s14)
	VT_SLOTS10(s15)
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163();
	virtual void s164(); virtual void s165(); virtual void s166();
	virtual CNPC_VTzimisceHelper *vfunc167();
	VT_SLOTS10(t00) VT_SLOTS10(t01) VT_SLOTS10(t02) VT_SLOTS10(t03) VT_SLOTS10(t04) VT_SLOTS10(t05) VT_SLOTS10(t06)
	virtual void t070(); virtual void t071(); virtual void t072();
	virtual void vfunc241(char *pszOut, int *pEvent);	// slot 241 "CNPC_VTzimisce::GetAnimEventName": the sound / event name for the anim event ids 2..8 (START_IDLE, START_FIDGET, START_RUN, START_LANDHARD, START_ATTACK, START_ATTACKBIG, START_POUNCE) copied to pszOut, the base implementation for the other ids
	virtual void t074(); virtual void t075(); virtual void t076(); virtual void t077(); virtual void t078(); virtual void t079();
	VT_SLOTS10(t08) VT_SLOTS10(t09)
	VT_SLOTS100(t1)
	VT_SLOTS10(t20) VT_SLOTS10(t21) VT_SLOTS10(t22) VT_SLOTS10(t23) VT_SLOTS10(t24)
	virtual void t250(); virtual void t251();
	virtual void vfunc420();	// slot 420: base boss reset, then the state flag at +0x6689, the timers at +0x66ac / +0x66b0 (curtime + 3), the target handle at +0x6670 = -1
	virtual void t253(); virtual void t254(); virtual void t255(); virtual void t256(); virtual void t257(); virtual void t258(); virtual void t259();
	VT_SLOTS10(t26) VT_SLOTS10(t27) VT_SLOTS10(t28) VT_SLOTS10(t29)
	VT_SLOTS10(t30)
	virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3();
	virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7();
	virtual bool vfunc486();
	virtual void v487(); virtual void vfunc488(); virtual void v489();	// slot 488: logs "SPI_DIES" with the three convar values, then runs slot 487
	virtual void vfunc490();
	VT_SLOTS100(w0)
	VT_SLOTS10(w10)
	VT_SLOTS10(w11)
	virtual void w120(); virtual void w121(); virtual void w122(); virtual void w123();
	virtual void w124(); virtual void w125(); virtual void w126();
	virtual void vfunc618();
	virtual void w128(); virtual void w129();
	virtual void vfunc621(); virtual void vfunc622();
	virtual void vfunc623();
	virtual void vfunc624();
	virtual void vfunc625();
	virtual void vfunc626();
	virtual void vfunc627();

	char m_pad0004[0x2dc];
	int m_n02e0;
	char m_pad02e4[0x666c - 0x2e0];
	unsigned int m_hTarget;
	char m_posBuf[0x18];
	int m_state;

	void *sub_103bf580(void *pDefault);
	void sub_103b9f90(int a, float b);
	void sub_103b9f50(int a);
	void sub_102c43b0(float delay);
	void vfunc491();	// slot 491 (declared as a plain member): when slot 486 holds logs "SPI_TAKE_DAMAGE" with the three convar values (like slot 488) and runs slot 487; then sub_103b9f90(1, 1.0f)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	char vfunc69(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	char sub_1029b180(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	int sub_103bde40(int activity);	// slot 375 (NPC_TranslateActivity): while the 10381be0 check passes, activity 1 / 9 / 0x13 map to 0xfd / 0xff (0xfc / 0xfe when the byte at +0x6688 is set); everything else goes to the base implementation
	CNPC_VTzimisce *vfunc5(unsigned int flags);	// scalar deleting destructor: destructs the vectors at +0x6690 and +0x665c, the base (sub_1028d610), and frees the object when bit 0 of flags is set
	void sub_1028d610();	// base class destructor body (stub 0x100123af)
	void sub_1008c170(char *pszOut, int *pEvent);	// CBaseAnimating::vfunc241 (stub 0x10002793), called directly
	void sub_1029a0b0();	// CNPC_VBaseBoss::vfunc420 (stub 0x100023dd), called directly
	int sub_103bcc00(int a);	// picks a schedule: with the byte at +0x568 clear and condition 10 or 13 set, schedule 0x174 (recording the source line 0xbd6 at +0x1b30 / +0x1b34); with condition 0x5d set, schedule 0x170 (line 0xbde, bit 30 of +0x5d8c cleared); else the base choice sub_103bc820
	bool sub_10269d30(int condition);	// CAI_BaseNPC condition test (stub 0x1001482b), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	int sub_103bc820();	// the base schedule choice (stub 0x10002a4f), called directly
};
