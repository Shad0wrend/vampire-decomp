// CNPC_VMingXiao: declared by pcdecomp transplant for 0x10391390 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

#include "CTakeDamageInfo.h"

class CNPC_VMingXiaoTentacle;

class CNPC_VMingXiao : public CBaseEntity
{
public:
	virtual int vfunc126(int a);	// slot 126: the six floats at +0x66f4 are checked around the Troika base (sub_101cf250 mode 4 before, sub_101cf2f0 after)
	int sub_102993c0(int a);	// CAI_BaseNPCTroika::vfunc126 (stub 0x100025cc), called directly
	virtual void vfunc104();	// Precache: the Troika base, the eleven Ming Xiao particle emitters, the move sound list, then the weapons item_w_mingxiao_melee / _tentacle / _spit
	virtual void vfunc123();	// DrawDebugTextOverlays-like: with bit 29 of the overlay flags (+0x224) set, dispatches four red markers (sub_10144a30) along x = 100, 150, 200, 300 at the entity's origin (slot 220); then the Troika base
	void sub_1029b290(int *pEvent);	// CAI_BaseNPCTroika::vfunc259, called directly (stub 0x100146e1)
	bool sub_10398db0();	// stub 0x1000ea8e: the pickup event of the grabbing mode, false when the target, the animlink, the bone or the physics object is missing
	int sub_10092550(const char *pszBone);	// CBaseAnimating::LookupBone (stub 0x10002c0c), called directly
	void sub_103990c0();	// stub 0x10008d69: the throw event of the throwing mode
	void sub_102c42a0(const char *pszEmitter, CBaseEntity *pParent, const char *pszAttachment, int a);	// stub 0x1000c392: starts a particle emitter on an attachment
	void sub_102bf340(int a);	// CAI_BaseNPCTroika::vfunc144, called directly (stub 0x1000a62d)
	void sub_10295a60(int act);	// CAI_BaseNPCTroika::vfunc465, called directly (stub 0x100088aa)
	void sub_1008d230(float flRate);	// CBaseAnimating::sub_1008d230 (stub 0x10012080): the playback rate
	void sub_1039ab30();	// stub 0x1001582f
	void sub_1039aca0();	// stub 0x10014551
	void sub_10395c70();	// stub 0x100116e9
	void sub_10397e90();	// stub 0x10008eb3
	void sub_10397f00();	// stub 0x100097eb
	void sub_10298ad0();	// CAI_BaseNPCTroika::vfunc104 (stub 0x100097b4), called directly
	void sub_1029ca50();	// CAI_BaseNPCTroika::vfunc123 (stub 0x10008a3f), called directly
	CNPC_VMingXiao *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the vector at +0x665c goes, then the Troika base's destructor body (sub_1028d610), then the delete when bit 0 of flags is set
	void sub_1028d610();	// CAI_BaseNPCTroika destructor body (stub 0x100123af), called directly

	int vfunc482(char bDisregardState, int interruptLevel);	// slot 482 (CanPlaySequence-like), same as CNPC_VAnimal::vfunc482
	int vfunc546(int arg);
	int vfunc461();	// sets the task state at +0x5cc4 (and the source file/line markers at +0x1b3c/+0x1b40) from slots 158, 464 and 167
	char vfunc69(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	char sub_1029b180(void *pOther);	// as in CNPC_VHengeyokai (transplant)
	char vfunc166(void *pOther);	// slot 166: false when pOther is one of the two handle arrays at +0x668c / +0x66a8 (six entries each), else true unless pOther's slot 164 says no
	bool sub_10397b40(void *pTentacle);	// claims a tentacle slot: false unless the tentacle (its index at +0x6660) is the entity of the handle at +0x66a8[index] and the time at +0x66a4 has passed; true when its flag byte (+0x6684[index]) is already set, else sets it provided none of the six slots (handles at +0x668c, flags at +0x6684) is in use
	CNPC_VMingXiao *sub_10390ee0();	// as in CKeepUpright (transplant)
	void sub_10397e00(CBaseEntity *pEnt);	// tells every tentacle (handles at +0x66a8, six entries) other than pEnt to go to pEnt's slot 217 position (sub_1039ef90)
	void vfunc448(int a);	// slot 448: state 3/4 only resets the motor's float at +0x1c to 180.0f, else sets the state to 0 and clears +0x6718; then the Troika base
	void sub_1029adb0(int a);	// CAI_BaseNPCTroika::vfunc448, called directly
	const char *vfunc408(int index);	// the attachment name of the body part 0x77..0x7e (xfr, xfl, xmr, xml, xbr, xbl, xsp, xmh), else the base's
	const char *sub_10011590(int index);	// CAI_BaseNPC::vfunc408 (jump stub)
	int sub_10396dc0();	// picks a schedule (0x15c / 0x15d) while the target handle at +0x6718 is alive and the state at +0x673c is 3 or 4, from conditions 0x7b / 0x7c; stamps the source file and line at +0x1b30 / +0x1b34
	char sub_10014df8(int condition);	// "HasCondition" (stub 0x10014df8), called directly
	int sub_10395650(int a, void *pWeapon);	// maps the weapon (flags from its slot 360 have bit 15 or 16) through sub_103952b0(a), else the state at +0x1594 to a small code via a jump table (1 -> -2, 4 -> 1, 5 -> 0, 6 -> 5, 7 -> 4, 8 -> 3, 9 -> 2, everything else -1)
	int sub_103954e0(int a, void *pWeapon);	// like sub_10395650, but each state falls through a chain of availability tests (sub_10398000 / stub 0x10001802): 4 -> 1, 3, 5; 5 -> 0, 2, 4; 9 -> 2, 4; 8 -> 3, 5; 6 -> 5; 7 -> 4; 1 -> -2; -1 when a test fails at the end of the chain
	char sub_10398000(int code);	// availability test of a result code (stub 0x10001802)
	float sub_103986b0();	// average of the four limb weights (g_1046bad0 for codes 0 and 1, g_10462b84 for 2 and 3) over the available codes (sub_10398000), g_10462b84 when none is
	void sub_10397a50(void *pTentacle);	// when the tentacle is given: sets the slot time (+0x66a4) to the current time (+0xc of the global 0x1070b228) plus max(0, the tuning base + the per-step delay * (6 - the count at +0x670c)); when the tentacle is the entity of its slot's new handle (+0x668c[index], index at its +0x6674) runs sub_10397930(index)
	int sub_103952b0(int a);	// called through the stub at 0x10012f85
	int vfunc376(int act);	// slot 376 "CNPC_VMingXiao::TranslateActivity": 0x3d -> 0x3b, 0x3e -> 0x3c, 0x9f -> 0x9d, 0xa0 -> 0x9e, 0xa3 -> 0xa1, 0xa4 -> 0xa2, else the Troika base
	int sub_1000fb14(int act);	// CAI_BaseNPCTroika::vfunc376, called directly
	void sub_10398fd0();	// drops the target: kills the entity of the handle at +0x6738 (sub_101cd970) and clears it, clears the handle at +0x6718, slows the motor (sub_10013110(0.75f)) and resets the state at +0x673c to 0
	void sub_10013110(float flSpeed);	// stub 0x10013110 for 0x102c43b0
	void sub_1039aa20();	// when the time at +0x1560 plus a constant lies in the past: sets stat 0xf of the active stat list to 0 and runs sub_10273e80(0)
	CNPC_VMingXiaoTentacle *sub_10397c70(CNPC_VMingXiaoTentacle *pTentacle);	// replaces a tentacle: when pTentacle is the entity of its slot's handle (+0x66a8[index]) and the slot's flag byte (+0x6684[index]) is set, spawns a new tentacle at its absolute origin (the NPC maker behind the global 0x1093bc54), stores its handle at +0x668c[index], gives it the old one's angles, its index (+0x6674), this NPC as owner (+0x6670) and the flag byte +0x6678, then slot 614 and sub_10397380; returns the new tentacle (null when there is none)
	void sub_10397380(CNPC_VMingXiaoTentacle *pTentacle);	// stub 0x1000394f, called with the new tentacle
	bool vfunc100(int a, int b, int c);	// slot 100 "CNPC_VMingXiao::TestHitboxes": scope trace (entity name or "NULL_ENTITY"), false without a studio header, without the flag byte at +0x6678 or with fewer than 7 hitbox sets; otherwise true after the first hitbox set (0, then 1..6 whose availability test sub_10398000 passes) that sub_10399ef0 accepts
	bool sub_10399ef0(int a, int b, int c, void *pHdr, void *pSet, int pCache);	// the per-set hitbox test (stdcall, 6 arguments; the caller loads ecx with this)
	void vfunc390(CTakeDamageInfo *pInfo);	// slot 390 "OnTakeDamage"-like (declared as a plain member): the Troika base, but when sub_10398870() is clear the record is first copied and passed through sub_10395650 / sub_10395750 keyed by the attacker's weapon
	char sub_10398870();	// stub 0x10012f26
	void sub_102beda0(CTakeDamageInfo *pInfo);	// CAI_BaseNPCTroika::vfunc390, called directly (stub 0x10012611)
	void sub_10395750(int a, CTakeDamageInfo *pInfo, void *pWeapon);	// stub 0x10008170
	float vfunc603(float *pCurrent, float *pTarget);	// slot 603: picks a random turn angle (global random stream 0x1070b244, slot 1 RandomFloat) from how far *pCurrent is from *pTarget (32.0f window): within it +-30; below it *pCurrent follows the target and a coin flip (slot 2) picks 170..179 or -170..-179; above it a coin flip picks 80..120 or -80..-120
	void sub_10398890(const float *pOrigin, int nMode, Vector *pOutPoint, Vector *pOutAxis);	// the tip trace points: pOutPoint = the origin + the vector at +0x6290 scaled, plus (mode 4) or minus the vector at +0x629c scaled; pOutAxis = the vector at +0x6290
	void sub_103979d0(CNPC_VMingXiaoTentacle *pTentacle);	// when the tentacle is the entity of its slot's handle (+0x66a8[index], index at its +0x6660): resets the slot (sub_10397930)
	void sub_10397930(int index);	// resets tentacle slot [index]: clears the handle (+0x66a8) and flag (+0x6684) and the new-tentacle handle (+0x668c), copies a float of the global 0x10739d08 object to +0x66dc, stamps curtime + 10.0f / + 1.0f at +0x66c4 / +0x66f4, then starts the gesture 0x1124 + index (AddGesture)
	void vfunc563(CBaseEntity *pEnt, Vector *pPos, int *pOut1, int *pOut2);	// slot 563 (plain member): with the navigator state (sub_1027d990) 2, moves *pPos by the offset between pEnt's slot 193 and slot 217 positions; otherwise stores the float at +0x6320 in *pOut2, lets sub_102c3b50 adjust *pPos, copies *pOut2 to *pOut1 and runs sub_102c36d0 on this entity's origin (slot 220) with the dword at +0x654 to get the new *pPos
	void sub_102c3b50(CBaseEntity *pEnt, Vector vecPos, Vector *pPos, int *pOut);	// stub 0x100041d3, called directly by vfunc563
	void sub_102c36d0(Vector vecOrigin, CBaseEntity *pEnt, int nValue, Vector *pPos, Vector *pOut);	// stub 0x1000c0ae, called directly by vfunc563
	void sub_10399610();	// "CNPC_VMingXiao::CoordinateTroops" (profiled as CNPC_VMingXiao_CoordinateTroops): per call tells the tentacle of the current slot index (+0x6740) in the old array (+0x66a8) sub_103998d0 and the one in the new array (+0x668c) sub_103999f0, then steps the index (0..5)
	void sub_103999f0(CNPC_VMingXiaoTentacle *pTentacle);	// stub 0x1001415f, called with the tentacle of the new-slot handle
	void sub_103998d0(CNPC_VMingXiaoTentacle *pTentacle);	// a tentacle (not in the activities 0x163 / 0x165, state 2) within 128 units whose direction from this NPC has a positive-enough dot (>= 0.25) with the axis at +0x6290 (x/y only) is told to go to this NPC's slot 217 position (sub_1039ef90)
	Vector vfunc574(const Vector &vecPos, int a, int b);	// slot 574 (plain member, Vector by value): the unit direction from vecPos to the point sub_10278650 finds for (vecPos, a, b), raised by 20.0f
	void sub_10278650(Vector *pOut, const Vector *pPos, int a, int b);	// stub 0x1001592e, called directly by vfunc574 (this stays in ecx)

	void sub_1026dc00(int nFlags);	// stub 0x10012855: called twice first by vfunc103 (0x4000000, 0x200000)
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	void sub_1033c6b0(int nFlags);	// CBaseCombatCharacter::sub_1033c6b0 (stub 0x100153a7), called directly
	void sub_10398800();	// stub 0x10004160
	float sub_10397f70();	// stub 0x10011d42: the delay of the next tentacle slot
	CBaseEntity *sub_10336f20();	// CBaseCombatCharacter::sub_10336f20 (stub 0x10005dbc)
	void sub_1009b060(Vector *pVec);	// CBaseEntity::sub_1009b060 (stub 0x10001a50), called directly with a size vector
	virtual void vfunc103();	// slot 103 (spawn-like): the base flags, the Troika base, resets the tentacle slots (six handles, flags, times), the owner handles +0x667c / +0x6680, the mode and the target fields

	char m_pad03e0[0x1482 - 0x3e0];
	char m_b1482;	// +0x1482
	char m_pad1483[0x1574 - 0x1483];
	float m_f1574;	// +0x1574
	char m_pad1578[0x1b2c - 0x1578];
	int m_n1b2c;	// +0x1b2c
	const char *m_pszFile1b30;	// +0x1b30: the source file marker
	int m_nLine1b34;	// +0x1b34: the source line marker
	char m_pad1b38[0x5cc0 - 0x1b38];
	int m_nState5cc0;	// +0x5cc0
	char m_pad5cc4[0x6078 - 0x5cc4];
	char m_b6078; // +0x6078: set by slot 599
	char m_pad6079[0x6264 - 0x6079];
	float m_f6264;	// +0x6264
	char m_pad6268[0x6290 - 0x6268];
	Vector m_vecAxis6290;	// +0x6290
	Vector m_vecExtent629c;	// +0x629c
	char m_pad62a8[0x6348 - 0x62a8];
	int m_a6348[5];	// +0x6348: five dwords copied to the twin by sub_1039a750
	char m_pad635c[0x63b4 - 0x635c];
	float m_f63b4;	// +0x63b4: set to 4096.0f on the twin
	char m_pad63b8[0x6420 - 0x63b8];
	int m_a6420[5];	// +0x6420: five dwords copied to the twin by sub_1039a750
	char m_pad6434[0x6670 - 0x6434];
	unsigned int m_hOwner6670;	// +0x6670: the handle of the owner entity
	int m_n6674;	// +0x6674: the slot index of a tentacle
	char m_b6678;	// +0x6678
	char m_pad6679[3];
	EHANDLE m_h667c;	// +0x667c
	EHANDLE m_h6680;	// +0x6680
	char m_bSlotFlag[6];	// +0x6684
	char m_pad668a[2];
	int m_hSlotNew[6];	// +0x668c
	float m_flTime66a4;	// +0x66a4
	int m_hSlotOld[6];	// +0x66a8
	float m_flTime66c0;	// +0x66c0
	float m_flSlotTimeA[6];	// +0x66c4
	float m_flSlotValue[6];	// +0x66dc
	float m_flSlotTimeB[6];	// +0x66f4
	int m_n670c;	// +0x670c: the count the delay is scaled by (6 - count)
	int m_n6710;	// +0x6710
	char m_pad6714[4];
	EHANDLE m_h6718;	// +0x6718: the grabbed target
	int m_nSide671c;	// +0x671c: 4 for the right tentacle, else the left one
	char m_pad6720[0x6738 - 0x6720];
	EHANDLE m_h6738;	// +0x6738: the phys_animlink
	int m_nMode673c;	// +0x673c: the grabbing (2) / throwing (4) mode
	int m_n6740;	// +0x6740
	char m_bActive6744;	// +0x6744
	char m_pad6745[3];
	float m_f6748;	// +0x6748
	int m_n674c;	// +0x674c
	char m_b6750;	// +0x6750
public:
    virtual bool vfunc70();
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141();
	virtual void vfunc142();
	virtual void vfunc143_slot();
	virtual void vfunc144(int a);	// slot 144 "Event_Killed"-like: while the byte at +0x6744 is clear sets +0x200 = 1 and runs sub_10395c70; else tells the owner entity (handle +0x6670) sub_10397a50(this), runs sub_10397e90 / sub_10397f00 when the global 0x1093b9b4 is not (slot 1) and has +0x2c set and sub_10398870 is clear; then the Troika base
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153_slot();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158_slot();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161_slot();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166_slot();
	virtual void vfunc167();
	virtual void vfunc168_slot();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174_slot();
	virtual void vfunc175_slot();
	virtual void vfunc176_slot();
	virtual void vfunc177();
	virtual void vfunc178_slot();
	virtual void vfunc179();
	virtual void vfunc180_slot();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185();
	virtual void vfunc186();
	virtual void vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual void vfunc190();
	virtual void vfunc191();
	virtual void vfunc192();
	virtual void vfunc193();
	virtual void vfunc194_slot();
	virtual void vfunc195_slot();
	virtual void vfunc196_slot();
	virtual void vfunc197_slot();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202_slot();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207_slot();
	virtual void vfunc208_slot();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212_slot();
	virtual void vfunc213_slot();
	virtual void vfunc214_slot();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217_slot();
	virtual void vfunc218_slot();
	virtual void vfunc219_slot();
	virtual void vfunc220_slot();
	virtual void vfunc221_slot();
	virtual void vfunc222_slot();
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226_slot();
	virtual void vfunc227();
	virtual void vfunc228_slot();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232_slot();
	virtual void vfunc233_slot();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237_slot();
	virtual void vfunc238_slot();
	virtual void vfunc239();
	virtual void vfunc240();
	virtual void vfunc241();
	virtual void vfunc242();
	virtual void vfunc243();
	virtual void vfunc244();
	virtual void vfunc245();
	virtual void vfunc246();
	virtual void vfunc247();
	virtual void vfunc248();
	virtual void vfunc249();
	virtual void vfunc250();
	virtual void vfunc251();
	virtual void vfunc252();
	virtual void vfunc253();
	virtual void vfunc254();
	virtual void vfunc255();
	virtual void vfunc256();
	virtual void vfunc257();
	virtual void vfunc258();
	virtual void vfunc259(int *pEvent);	// slot 259 "HandleAnimEvent": event 0x7f8 (pickup) needs the mode at +0x673c to be 2 (sub_10398db0, else a warning), 0x802 / 0x803 do nothing, 0x834 / 0x835 spawn the debug marker at the origin (slot 220 with 5.0f, 0.6f, 0.2f, 512.0f or 15.0f, 1.0f, 1.5f, 1024.0f), 0xbbd (weapon throw) needs the mode 4 (sub_103990c0, else a warning), 0xbd7 starts the "Ming_xiao_vomit_emitter" at the "Bip01 MouthRoot" attachment (sub_102c42a0) and goes on to the Troika base like every other event
	virtual void vfunc260();
	virtual void vfunc261();
	virtual void vfunc262();
	virtual void vfunc263();
	virtual void vfunc264();
	virtual void vfunc265();
	virtual void vfunc266();
	virtual void vfunc267();
	virtual void vfunc268();
	virtual void vfunc269();
	virtual void vfunc270();
	virtual void vfunc271();
	virtual void vfunc272();
	virtual void vfunc273();
	virtual void vfunc274();
	virtual void vfunc275();
	virtual void vfunc276();
	virtual void vfunc277();
	virtual void vfunc278();
	virtual void vfunc279();
	virtual void vfunc280();
	virtual void vfunc281();
	virtual void vfunc282();
	virtual void vfunc283();
	virtual void vfunc284();
	virtual void vfunc285();
	virtual void vfunc286();
	virtual void vfunc287();
	virtual void vfunc288();
	virtual void vfunc289();
	virtual void vfunc290();
	virtual void vfunc291();
	virtual void vfunc292();
	virtual void vfunc293();
	virtual void vfunc294();
	virtual void vfunc295();
	virtual void vfunc296();
	virtual void vfunc297();
	virtual void vfunc298();
	virtual void vfunc299();
	virtual void vfunc300();
	virtual void vfunc301();
	virtual void vfunc302();
	virtual void vfunc303();
	virtual void vfunc304();
	virtual void vfunc305();
	virtual void vfunc306();
	virtual void vfunc307();
	virtual void vfunc308();
	virtual void vfunc309();
	virtual void vfunc310();
	virtual void vfunc311();
	virtual void vfunc312();
	virtual void vfunc313();
	virtual void vfunc314();
	virtual void vfunc315();
	virtual void vfunc316();
	virtual void vfunc317();
	virtual void vfunc318();
	virtual void vfunc319();
	virtual void vfunc320();
	virtual void vfunc321();
	virtual void vfunc322();
	virtual void vfunc323();
	virtual void vfunc324();
	virtual void vfunc325();
	virtual void vfunc326();
	virtual void vfunc327();
	virtual void vfunc328();
	virtual void vfunc329();
	virtual void vfunc330();
	virtual void vfunc331();
	virtual void vfunc332();
	virtual void vfunc333();
	virtual void vfunc334();
	virtual void vfunc335();
	virtual void vfunc336();
	virtual int vfunc337();
	virtual void vfunc338();
	virtual void vfunc339();
	virtual void vfunc340();
	virtual void vfunc341();
	virtual void vfunc342();
	virtual void vfunc343();
	virtual void vfunc344();
	virtual void vfunc345();
	virtual void vfunc346();
	virtual void vfunc347();
	virtual void vfunc348();
	virtual void vfunc349();
	virtual void vfunc350();
	virtual void vfunc351();
	virtual void vfunc352();
	virtual void vfunc353();
	virtual void vfunc354();
	virtual void vfunc355();
	virtual void vfunc356();
	virtual void vfunc357();
	virtual void vfunc358();
	virtual void vfunc359();
	virtual void vfunc360();
	virtual void vfunc361();
	virtual void vfunc362();
	virtual void vfunc363();
	virtual void vfunc364();
	virtual void vfunc365();
	virtual bool vfunc366(int, int, int);
	virtual void vfunc367();
	virtual void vfunc368();
	virtual void vfunc369();
	virtual void vfunc370();
	virtual void vfunc371();
	virtual void vfunc372();
	virtual void vfunc373();
	virtual void vfunc374();
	virtual void vfunc375();
	virtual void vfunc376_slot();
	virtual void vfunc377();
	virtual void vfunc378();
	virtual void vfunc379();
	virtual void vfunc380();
	virtual void vfunc381();
	virtual void vfunc382();
	virtual void vfunc383();
	virtual void vfunc384();
	virtual void vfunc385();
	virtual void vfunc386();
	virtual void vfunc387();
	virtual void vfunc388(int a, int b);
	virtual void vfunc389();
	virtual void vfunc390_slot();
	virtual void vfunc391();
	virtual void vfunc392();
	virtual void vfunc393();
	virtual void vfunc394();
	virtual void vfunc395();
	virtual void vfunc396();
	virtual void vfunc397();
	virtual void vfunc398();
	virtual void vfunc399();
	virtual void vfunc400();
	virtual void vfunc401();
	virtual void vfunc402();
	virtual void vfunc403();
	virtual void vfunc404();
	virtual void vfunc405();
	virtual void vfunc406();
	virtual void vfunc407();
	virtual void vfunc408_slot();
	virtual int vfunc409();
	virtual void vfunc410();
	virtual void vfunc411();
	virtual void vfunc412();
	virtual void vfunc413();
	virtual void vfunc414();
	virtual void vfunc415();
	virtual void vfunc416();
	virtual void vfunc417();
	virtual float vfunc418(float a);
	virtual void vfunc419();
	virtual void vfunc420();
	virtual void vfunc421();
	virtual void vfunc422();
	virtual void vfunc423();
	virtual void vfunc424();
	virtual void vfunc425();
	virtual void vfunc426();
	virtual void vfunc427();
	virtual void vfunc428();
	virtual void vfunc429();
	virtual void vfunc430();
	virtual void vfunc431();
	virtual int vfunc432(int);
	virtual void vfunc433();
	virtual void vfunc434();
	virtual void vfunc435();
	virtual void vfunc436();
	virtual int vfunc437();	// slot 437: marks the task state (+0x1b2c = 0x19); in state 5 stamps the source file / line (+0x1b30 / +0x1b34) and answers 0x157, else sends the grabbed target (handle +0x6680) to slot 388 and answers 0
	virtual void vfunc438();
	virtual void vfunc439();
	virtual int vfunc440(int a);	// slot 440: 0x147 answers 0x16f, else the Troika base
	int sub_102b12f0(int a);	// CAI_BaseNPCTroika::vfunc440 (stub 0x10001997), called directly
	virtual void vfunc441();
	virtual void vfunc442();
	virtual void vfunc443();
	virtual void vfunc444();
	virtual void vfunc445();
	virtual void vfunc446();
	virtual void vfunc447();
	virtual void vfunc448_slot();
	virtual void vfunc449();
	virtual void vfunc450();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual void vfunc453();
	virtual void vfunc454();
	virtual void vfunc455();
	virtual void vfunc456();
	virtual void vfunc457();
	virtual void vfunc458();
	virtual void vfunc459();
	virtual void vfunc460();
	virtual void vfunc461_slot();
	virtual void vfunc462();
	virtual void vfunc463();
	virtual void vfunc464();
	virtual void vfunc465(int act);	// slot 465 "CNPC_VMingXiao::SetActivity"-like: sets the playback rate (sub_1008d230) from the tuning block of the global 0x10739d08 for the activities 9 / 0x13 (the tentacle ones), 0x4b and the rest (scaled by 6 - the count at +0x670c and clamped from below while the target is not held), then sub_1039ab30 (tentacle or 0x1132) or sub_1039aca0, then the Troika base
	virtual void vfunc466();
	virtual void vfunc467();
	virtual void vfunc468();
	virtual void vfunc469();
	virtual void vfunc470();
	virtual void vfunc471();
	virtual void vfunc472();
	virtual int vfunc473();
	virtual void vfunc474();
	virtual void vfunc475();
	virtual void vfunc476();
	virtual void vfunc477();
	virtual void vfunc478();
	virtual void vfunc479();
	virtual void vfunc480();
	virtual void vfunc481();
	virtual void vfunc482_slot();
	virtual void vfunc483();
	virtual void vfunc484();
	virtual void vfunc485();
	virtual void vfunc486();
	virtual void vfunc487();
	virtual void vfunc488();
	virtual void vfunc489();
	virtual void vfunc490();
	virtual void vfunc491();
	virtual void vfunc492();
	virtual void vfunc493();
	virtual void vfunc494();
	virtual void vfunc495();
	virtual void vfunc496();
	virtual void vfunc497();
	virtual void vfunc498();
	virtual void vfunc499();
	virtual void vfunc500();
	virtual void vfunc501();
	virtual void vfunc502();
	virtual void vfunc503();
	virtual void vfunc504();
	virtual void vfunc505();
	virtual void vfunc506();
	virtual void vfunc507();
	virtual void vfunc508();
	virtual void vfunc509();
	virtual void vfunc510();
	virtual void vfunc511();
	virtual void vfunc512();
	virtual void vfunc513();
	virtual void vfunc514();
	virtual void vfunc515();
	virtual float vfunc516();
	virtual void vfunc517();
	virtual void vfunc518();
	virtual void vfunc519();
	virtual void vfunc520();
	virtual void vfunc521();
	virtual float vfunc522();
	virtual float vfunc523();
	virtual void vfunc524();
	virtual void vfunc525();
	virtual void vfunc526();
	virtual void vfunc527();
	virtual void vfunc528();
	virtual void vfunc529();
	virtual void vfunc530();
	virtual void vfunc531();
	virtual void vfunc532();
	virtual void vfunc533();
	virtual void vfunc534();
	virtual void vfunc535();
	virtual void vfunc536();
	virtual void vfunc537();
	virtual void vfunc538();
	virtual void vfunc539();
	virtual void vfunc540();
	virtual void vfunc541();
	virtual void vfunc542();
	virtual void vfunc543();
	virtual void vfunc544();
	virtual void vfunc545();
	virtual void vfunc546_slot();
	virtual void vfunc547();
	virtual void vfunc548();
	virtual void vfunc549();
	virtual void vfunc550();
	virtual void vfunc551();
	virtual void vfunc552();
	virtual void vfunc553();
	virtual void vfunc554();
	virtual void vfunc555();
	virtual void vfunc556();
	virtual void vfunc557();
	virtual void vfunc558();
	virtual void vfunc559();
	virtual void vfunc560();
	virtual void vfunc561();
	virtual void vfunc562();
	virtual void vfunc563_slot();
	virtual void vfunc564();
	virtual void vfunc565();
	virtual void vfunc566();
	virtual void vfunc567();
	virtual void vfunc568();
	virtual void vfunc569();
	virtual void vfunc570();
	virtual void vfunc571();
	virtual void vfunc572();
	virtual void vfunc573();
	virtual void vfunc574_slot();
	virtual void vfunc575();
	virtual void vfunc576();
	virtual void vfunc577();
	virtual void vfunc578();
	virtual void vfunc579();
	virtual int vfunc580();
	virtual void vfunc581();
	virtual void vfunc582();
	virtual void vfunc583();
	virtual void vfunc584();
	virtual void vfunc585();
	virtual void vfunc586();
	virtual void vfunc587();
	virtual void vfunc588();
	virtual void vfunc589();
	virtual void vfunc590();
	virtual void vfunc591();
	virtual void vfunc592();
	virtual void vfunc593();
	virtual void vfunc594();
	virtual void vfunc595();
	virtual void vfunc596();
	virtual void vfunc597();
	virtual void vfunc598();
	virtual bool vfunc599(int unused);
	virtual bool vfunc600(int unused);
	virtual void vfunc601(int a);
	virtual bool vfunc602();
};
