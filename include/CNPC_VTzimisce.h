// CNPC_VTzimisce (RTTI .?AVCNPC_VTzimisce@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right.
#pragma once

struct datamap_t;

#include "Vector.h"

#define VT_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define VT_SLOTS100(p) VT_SLOTS10(p##0) VT_SLOTS10(p##1) VT_SLOTS10(p##2) VT_SLOTS10(p##3) VT_SLOTS10(p##4) \
	VT_SLOTS10(p##5) VT_SLOTS10(p##6) VT_SLOTS10(p##7) VT_SLOTS10(p##8) VT_SLOTS10(p##9)

class CBaseEntity;
class CAI_Motor;

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
	virtual void s100(); virtual void s101(); virtual void s102();
	virtual void vfunc103();	// "Spawn": base spawn, +0x1574 = -0.5f, turns the 2D vector at +0x1074 by 90 degrees, sets the size (60, 60, 100), RemoveFlag2(4), byte +0x6078 = 1
	virtual void s104(); virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	VT_SLOTS10(s11)
	VT_SLOTS10(s12)
	VT_SLOTS10(s13)
	VT_SLOTS10(s14)
	VT_SLOTS10(s15)
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163();
	virtual void s164(); virtual void s165(); virtual void s166();
	virtual CNPC_VTzimisceHelper *vfunc167();
	VT_SLOTS10(t00) VT_SLOTS10(t01)
	virtual void t020(); virtual void t021(); virtual void t022(); virtual void t023(); virtual void t024();
	virtual Vector vfunc193();	// slot 193 "EyePosition": returned by value
	virtual void t026(); virtual void t027(); virtual void t028(); virtual void t029();
	VT_SLOTS10(t03)
	virtual void t040(); virtual void t041(); virtual void t042(); virtual void t043(); virtual void t044();
	virtual void t045(); virtual void t046(); virtual void t047(); virtual void t048();
	virtual float *vfunc217();	// slot 217 \"GetAbsOrigin\": the position
	virtual void t0518(); virtual void t0519();
	virtual void *vfunc220();
	virtual float *vfunc221();	// slot 221 "GetAngles"
	virtual void t0522(); virtual void t0523(); virtual void t0524();
	virtual void t0525(); virtual void t0526(); virtual void t0527();
	VT_SLOTS10(t06)
	virtual void t070(); virtual void t071(); virtual void t072();
	virtual void vfunc241(char *pszOut, int *pEvent);	// slot 241 "CNPC_VTzimisce::GetAnimEventName": the sound / event name for the anim event ids 2..8 (START_IDLE, START_FIDGET, START_RUN, START_LANDHARD, START_ATTACK, START_ATTACKBIG, START_POUNCE) copied to pszOut, the base implementation for the other ids
	virtual void t074(); virtual void t075(); virtual void t076(); virtual void t077(); virtual void t078(); virtual void t079();
	VT_SLOTS10(t08) VT_SLOTS10(t09)
	VT_SLOTS10(t10) VT_SLOTS10(t11) VT_SLOTS10(t12) VT_SLOTS10(t13)
	virtual void t140(); virtual void t141(); virtual void t142(); virtual void t143();
	virtual void vfunc144(int a);	// slot 144: when the 0x14b8 bit 5 flag is set runs sub_103bf170, then sub_103bdfc0 (removes the entities around the NPC), then CAI_BaseNPCTroika::vfunc144(a)
	virtual void t145(); virtual void t146(); virtual void t147(); virtual void t148(); virtual void t149();
	VT_SLOTS10(t15) VT_SLOTS10(t16) VT_SLOTS10(t17) VT_SLOTS10(t18) VT_SLOTS10(t19)
	VT_SLOTS10(t20) VT_SLOTS10(t21)
	virtual void t220();	// slot 388
	virtual Vector vfunc389(const Vector &vecSrc);	// slot 389 "CNPC_VTzimisce::Weapon_ShootPosition": the shoot position, offset from vecSrc by the forward / right / up vectors times the three convar values; activity 0x106 returns it directly, 0x107 rotates the offset by 90 degrees
	virtual void t222(); virtual void t223(); virtual void t224(); virtual void t225(); virtual void t226(); virtual void t227(); virtual void t228(); virtual void t229();
	VT_SLOTS10(t23) VT_SLOTS10(t24)
	virtual float vfunc418(float a);	// slot 418 (0x103b9120): (int)a == -1000001 gives 150.0f, else CAI_BaseNPCTroika::vfunc418(a)
	virtual void t251();
	virtual void vfunc420();	// slot 420: base boss reset, then the state flag at +0x6689, the timers at +0x66ac / +0x66b0 (curtime + 3), the target handle at +0x6670 = -1
	virtual void t253(); virtual void t254(); virtual void t255(); virtual void t256(); virtual void t257(); virtual void t258(); virtual void vfunc259(int *pEvent);
	virtual void t260(); virtual void t261(); virtual void t262(); virtual void t263();
	virtual void vfunc432(int a);	// slot 432: asks sub_103c0160 for an object and its kind; kind 1 goes to sub_103c0860, others to sub_103c05e0; then CAI_BaseNPCTroika::vfunc432(a)
	virtual void t265(); virtual void t266(); virtual void vfunc435(int arg);	// slot 435: the Troika base's vfunc435(arg), then the flags at +0x14b8 bit 3 clear: 0 at +0x668c and the count at +0x66b8 drops by one while above 0
	virtual void t268(); virtual void t269();
	void sub_100048f9(int arg);	// CAI_BaseNPCTroika::vfunc435 (stub 0x100048f9), called directly
	virtual void t270(); virtual void t271(); virtual int vfunc440(int a);	// slot 440: maps an NPC schedule type to this NPC's schedule id (source line recorded at +0x1b30 / +0x1b34), the base mapping otherwise
	virtual void t273(); virtual void t274(); virtual void t275(); virtual void t276(); virtual void t277(); virtual void t278(); virtual void t279();
	int sub_102b12f0(int a);	// CAI_BaseNPCTroika::vfunc440 (stub 0x10001997), called directly
	void *sub_103c0160(int *pKind);	// stub 0x10009b5b
	void sub_103c0860(void *pObj);	// stub 0x1000f4de
	void sub_103c05e0(int nObj);	// stub 0x10009e26
	void sub_1028fcc0(int a);	// CAI_BaseNPCTroika::vfunc432 (stub 0x1000704f), called directly
	virtual void vfunc448(int a);	// slot 448: with the state (+0x5cc0) 2 and condition 0x5c clears bit 31 of +0x5d8c; when the 10381be0 check holds remembers the target handle (+0x6670) in the timed list (sub_103bf200) and runs sub_103be050(0); when the other check fails runs sub_102c43b0(0.75f) and clears the target handle; clears +0x66b8, then CAI_BaseNPCTroika::vfunc448(a)
	virtual void t281(); virtual void t282(); virtual void t283(); virtual void t284(); virtual void t285(); virtual void t286(); virtual void t287(); virtual void t288(); virtual void t289();
	virtual void t290(); virtual void t291(); virtual void t292(); virtual void t293(); virtual void t294();
	virtual void vfunc463(int a, int b);	// slot 463: the state change handler (old state a, new state b): the new state picks an argument for sub_103b9f50 (1 -> 0, 2 / 3 / 11 -> 1, 7 -> 3) when it differs from the old one, then CAI_BaseNPCTroika::vfunc463
	virtual void t296(); virtual void t297(); virtual void t298(); virtual void t299();
	void sub_102ae140(int a, int b);	// CAI_BaseNPCTroika::vfunc463 (stub 0x100063b6), called directly
	VT_SLOTS10(t30)
	virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3();
	virtual int vfunc482(char bDisregardState, int interruptLevel); virtual void u5(); virtual void u6(); virtual void u7();
	virtual bool vfunc486();
	virtual void v487(); virtual void vfunc488(); virtual void v489();	// slot 488: logs "SPI_DIES" with the three convar values, then runs slot 487
	void vfunc487();	// slot 487 (the same slot as v487, declared under its real name for the matched functions)
	virtual void vfunc490();
	VT_SLOTS100(w0)
	virtual void w100(); virtual void w101(); virtual void vfunc593(); virtual void w103(); virtual void w104();
	virtual void w105(); virtual void w106(); virtual void w107(); virtual void w108(); virtual void w109();	// slot 593: CAI_BaseNPCTroika::vfunc593 (stub 0x10002720), then the five floats at +0x655c..+0x656c
	VT_SLOTS10(w11)
	virtual void w120(); virtual void w121(); virtual void w122(); virtual void w123();
	virtual void w124(); virtual void w125(); virtual void w126();
	virtual void vfunc618();
	virtual void vfunc619();	// slot 619: plays one of the 0x106530fc sounds (random 0..5, channel 4, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)
	virtual void vfunc620();	// slot 620: plays one of the 0x10653114 sounds (random 0..2, channel 1, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)
	virtual void vfunc621(); virtual void vfunc622();
	virtual void vfunc623();
	virtual void vfunc624();
	virtual void vfunc625();
	virtual void vfunc626();
	virtual void vfunc627();

	char m_pad0004[0x2dc];
	int m_n02e0;
	char m_pad02e4[0x1074 - 0x2e4];
	Vector m_vec1074;	// 0x1074: a 2D direction, turned by 90 degrees in Spawn
	char m_pad1080[0x14b8 - 0x1080];
	unsigned int m_flags14b8;	// 0x14b8: bit 5 set while hiding
	char m_pad14bc[0x1568 - 0x14bc];
	int m_n1568;	// 0x1568: 10 in the constructor
	int m_n156c;	// 0x156c: 10 in the constructor
	char m_pad1570[0x1574 - 0x1570];
	float m_f1574;	// 0x1574: set to -0.5f in Spawn
	char m_pad1578[0x5c38 - 0x1578];
	struct CTzimisceTask *m_pTask5c38;	// 0x5c38: the current schedule; its dword at +0x1c is the node id looked up by slot 580's range list
	char m_pad5c3c[0x5cc0 - 0x5c3c];
	int m_nState5cc0;
	char m_pad5cc4[0x5d40 - 0x5cc4];
	class CAI_MoveProbe *m_pMoveProbe5d40;	// 0x5d40: the movement probe (its +4 is the owner entity, +8 / +0xc ints)
	CAI_Motor *m_pMotor5d44;	// 0x5d44
	char m_pad5d48[0x5d8c - 0x5d48];
	unsigned int m_flags5d8c;
	char m_pad5d90[0x6078 - 0x5d90];
	char m_b6078;	// 0x6078: set in Spawn
	char m_pad6079[0x655c - 0x6079];
	float m_f655c;	// 0x655c: 0.01f in vfunc593
	float m_f6560;	// 1.0f
	float m_f6564;	// 50.0f
	float m_f6568;	// 50.0f
	float m_f656c;	// 0.01f
	char m_pad6570[0x65f9 - 0x6570];
	char m_b65f9;	// 0x65f9: 1 in the constructor
	char m_pad65fa[0x665c - 0x65fa];
	int *m_pMem665c;	// 0x665c: CNPC_VBaseBoss record vector (memory, alloc count, grow size, size, element pointer); constructed by UtlMem::sub_1039ae10(0, 0) then size 0 / elements = memory
	int m_nAlloc6660;	// 0x6660
	int m_nGrow6664;	// 0x6664
	int m_nSize6668;	// 0x6668
	int *m_pElems666c;	// 0x666c
	unsigned int m_hTarget;
	char m_posBuf[0xc];
	int m_n6680;
	EHANDLE m_hEnt6684;
	char m_posBuf2[4];
	int m_state;
	int *m_pMem6690;	// 0x6690: second vector (memory, alloc count, grow size, size, element pointer); the constructor sets grow 8 and allocates 0x40 bytes
	int m_nAlloc6694;	// 0x6694
	int m_nGrow6698;	// 0x6698
	int m_nSize669c;	// 0x669c
	int *m_pElems66a0;	// 0x66a0
	float m_fl66a4;	// 0x66a4
	char m_pad66a8[0x66b4 - 0x66a8];
	char m_b66b4;	// 0x66b4
	char m_pad66b5[0x66b8 - 0x66b5];
	int m_n66b8;

	bool sub_103be180();
	bool sub_103be3d0(CBaseEntity *pEnt);
	void sub_102c4380(CBaseEntity *pEnt);
	void sub_103bdfc0();	// removes every entity (global list search from the start, filter 2, around the slot 217 position, radius 150.0f) the search finds; called by vfunc144
	void sub_1029a070();	// CAI_BaseNPCTroika::vfunc593 (stub 0x10002720), called directly by vfunc593
	void sub_1029b290(int *pEvent);	// CAI_BaseNPCTroika::vfunc259 (stub 0x100146e1), called directly
	void sub_103bef20(CBaseEntity *pEnt, const char *pszBone);	// stub 0x10010082
	void sub_103bea90(void *pObj);	// stub 0x10014687
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly by Spawn
	void sub_1009b060(Vector *pSize);	// stub 0x10001a50: sets the entity's size from the vector
	void sub_100b3900(int flags);	// CBaseEntity::RemoveFlag2 (stub 0x1000df44), called directly
	void *sub_103bf580(void *pDefault);
	void sub_103b9f90(int a, float b);
	void sub_103b9f50(int a);
	void sub_102c43b0(float delay);
	void sub_103be0b0(char bOn);	// stub 0x1000694c: sets / clears bit 5 of +0x14b8; setting also re-arms the timer at +0x66a4 (curtime + RandomFloat(7.5, 10))
	void sub_103bf170();
	void sub_103be050(int a);	// stub 0x1000f556, called directly with 0
	void sub_1029adb0(int a);	// CAI_BaseNPCTroika::vfunc448 (stub 0x100054bb), called directly
	void vfunc491();	// slot 491 (declared as a plain member): when slot 486 holds logs "SPI_TAKE_DAMAGE" with the three convar values (like slot 488) and runs slot 487; then sub_103b9f90(1, 1.0f)
	bool vfunc201(CBaseEntity *pEnt, int a, int *pOut, int d);	// slot 201 (plain member): CAI_BaseNPCTroika::vfunc201(pEnt, a, pOut, 0) normalized to a boolean
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	char vfunc69(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	float vfunc516();	// slot 516 (plain member): with bit 13 of the flags at +0x5d8c set the speed (slot 242) scaled by the convar at 0x1093c9fc (at least 1.0f); else by the activity at +0xfec: 5.0f for 1 / 0xfc / 0xfd, 30.0f for 0x13, 11.0f otherwise
	char sub_1029b180(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	int sub_103bde40(int activity);	// slot 375 (NPC_TranslateActivity): while the 10381be0 check passes, activity 1 / 9 / 0x13 map to 0xfd / 0xff (0xfc / 0xfe when the byte at +0x6688 is set); everything else goes to the base implementation
	CNPC_VTzimisce *vfunc5(unsigned int flags);	// scalar deleting destructor: destructs the vectors at +0x6690 and +0x665c, the base (sub_1028d610), and frees the object when bit 0 of flags is set
	void sub_1028d610();	// base class destructor body (stub 0x100123af)
	void sub_1028d230();	// CAI_BaseNPCTroika constructor body (stub 0x100157df), called first by the constructor
	CNPC_VTzimisce *sub_103b6c60();	// constructor (called by npc_VTzimisce 0x103b6bf0): Troika ctor, UtlMem::sub_1039ae10(0, 0) on the vector at +0x665c, CNPC_VBaseBoss vtables (0x104bd2cc / 0x104bd2a0 at +0 / +0x19b0), handles +0x6670 / +0x6684 = -1, +0x6690..+0x66a0 = 0, member at +0x66bd (sub_103b7020), CNPC_VTzimisce vtables (0x104cb934 / 0x104cb904), grow size 8 at +0x6698 and a 0x40 byte alloc at +0x6690 when the alloc count is below 8, +0x66a0 = +0x6690, +0x1568 = +0x156c = 10, byte +0x65f9 = 1
	void sub_1008c170(char *pszOut, int *pEvent);	// CBaseAnimating::vfunc241 (stub 0x10002793), called directly
	void sub_1029a0b0();	// CNPC_VBaseBoss::vfunc420 (stub 0x100023dd), called directly
	int sub_103bcc00(int a);	// picks a schedule: with the byte at +0x568 clear and condition 10 or 13 set, schedule 0x174 (recording the source line 0xbd6 at +0x1b30 / +0x1b34); with condition 0x5d set, schedule 0x170 (line 0xbde, bit 30 of +0x5d8c cleared); else the base choice sub_103bc820
	bool sub_10269d30(int condition);	// CAI_BaseNPC condition test (stub 0x1001482b), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	int sub_103bc820();	// the base schedule choice (stub 0x10002a4f), called directly
	int sub_103bcaf0(int a);	// picks a schedule: condition 0x5d schedule 0x170 (source line 0xb85 recorded at +0x1b30 / +0x1b34); else the range lookup of the current task's node id
	int sub_103bca20(int a);	// picks a schedule (slot 438 helper): condition 0xc schedule 0x173 (source line 0xb66 recorded at +0x1b30 / +0x1b34); 10 or 0xd schedule 0x174 (line 0xb6a); condition 0x5d the base choice sub_103bc820; else schedule 0x170 (line 0xb7c)
	void sub_103ba640(void *pEnt, Vector *pVec, int *pFlag, int *pOut);	// slot 563: with the navigator state 2 (sub_1027d990) shifts *pVec by the entity's position difference (slot 193 minus slot 217); else runs the two path-step workers sub_102c3b50 / sub_102c36d0 and stores the stepped vector back in *pVec
	void sub_102c3b50(void *pEnt, Vector vecStart, Vector *pVec, int *pOut);	// stub 0x100041d3
	bool sub_103bf660(const Vector &vecPos);	// stub 0x10013769, called by CNPC_VTzimisce::vfunc433/438/442 with the last known enemy position: false without an enemy; gets the enemy (slot 167) and its last known position (slot 541 enemies view + sub_102dfed0), shoves that point 0.1 up, and returns true only when the NPC-to-point distance squared is in 40000..360000 (200..600 units) and a nav-filtered hull trace (CTraceFilterNav, mask 0x202400b, profiled "CAI_MoveProbe_TraceHull") from that point along the direction given by sub_102c3b50(enemy, pos, out, out2) hits the enemy (trace m_pEnt == slot 167). Uses the move probe at +0x5d40 (m_pOuter at +4, its +0x368 collision group)
	void sub_102c36d0(Vector vecOrigin, void *pEnt, int nParam, Vector *pVec, Vector *pOut);	// stub 0x1000c0ae
	int sub_103bfa50(CBaseEntity *pEnt);	// slot 438 helper: finds the nearest "type 0x36b0" and "type 0x36b1" targets within 200 units of pEnt (sub_102d24b0), prefers the closer one (telling the other one 0.5f), remembers it at +0x5ddc and answers the schedule 0x36b0 / 0x36ba (first) or 0x36b1 / 0x36bb (second) by sub_103bfc20; 0 and +0x5ddc = pEnt when there is none
	char sub_103bfc20(CBaseEntity *pTarget, CBaseEntity *pEnt);	// stub 0x10009953
	void sub_103bf440();	// the facing / ideal yaw setup of the motor (at +0x5d44): the yaw of slot 221 into the motor (sub_102e0a40), turn rate 20.0f (sub_102e0a60), motor reset (sub_102e0b40); then looks at the slot 167 target's slot 220 position (stub 0x10007248) when there is one, else sets the motor's ideal yaw (+0x34) to the angle slot 221's y (flipped by 180 when the motor's byte +0x28 is set, limited by sub_102e0a80 unless the largest change is 180)
	bool sub_103be8e0(CBaseEntity *pTarget);	// true without a target; else whether the yaw from the path-stepped point (sub_102c36d0 from the target entity's slot 220 position) toward pTarget differs from the NPC's own yaw by at most 20 degrees
	char sub_103be630(CBaseEntity *pTarget);	// throw line-of-sight test: a trace from the eye (shifted by the side offset convar) to pTarget's eye; true when nothing is hit
public:
	void vfunc422();	// slot 422: the Troika base, then installs sub_1027fc40 as the think function
	virtual void vfunc434();
	virtual void vfunc489();
	virtual void vfunc492();
	virtual void vfunc493();
	virtual void vfunc494();
	virtual void vfunc495();
	virtual void vfunc496();
	virtual void vfunc497();
public:
	virtual int vfunc244();
	virtual bool vfunc324();
	virtual bool vfunc325();
public:
	virtual bool vfunc70();
	virtual void vfunc228(int, int);
	virtual bool vfunc509();
public:
	virtual datamap_t * vfunc82();
	virtual int vfunc138();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual int vfunc473();
	virtual int vfunc580();
public:
	virtual float vfunc522();
	virtual float vfunc523();
	virtual float vfunc550();
	void vfunc431();	// as in CLight (transplant)
	unsigned short sub_103b9160();	// slot 337 override: CAI_BaseNPCTroika::vfunc337 with bit 0x400 set
};
