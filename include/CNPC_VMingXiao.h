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
	virtual void vfunc144(int a);	// slot 144 "Event_Killed"-like: while the byte at +0x6744 is clear sets +0x200 = 1 and runs sub_10395c70; else tells the owner entity (handle +0x6670) sub_10397a50(this), runs sub_10397e90 / sub_10397f00 when the global 0x1093b9b4 is not (slot 1) and has +0x2c set and sub_10398870 is clear; then the Troika base
	virtual void vfunc465(int act);	// slot 465 "CNPC_VMingXiao::SetActivity"-like: sets the playback rate (sub_1008d230) from the tuning block of the global 0x10739d08 for the activities 9 / 0x13 (the tentacle ones), 0x4b and the rest (scaled by 6 - the count at +0x670c and clamped from below while the target is not held), then sub_1039ab30 (tentacle or 0x1132) or sub_1039aca0, then the Troika base
	virtual void vfunc259(int *pEvent);	// slot 259 "HandleAnimEvent": event 0x7f8 (pickup) needs the mode at +0x673c to be 2 (sub_10398db0, else a warning), 0x802 / 0x803 do nothing, 0x834 / 0x835 spawn the debug marker at the origin (slot 220 with 5.0f, 0.6f, 0.2f, 512.0f or 15.0f, 1.0f, 1.5f, 1024.0f), 0xbbd (weapon throw) needs the mode 4 (sub_103990c0, else a warning), 0xbd7 starts the "Ming_xiao_vomit_emitter" at the "Bip01 MouthRoot" attachment (sub_102c42a0) and goes on to the Troika base like every other event
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
	char m_pad1578[0x6264 - 0x1578];
	float m_f6264;	// +0x6264
	char m_pad6268[0x6290 - 0x6268];
	Vector m_vecAxis6290;	// +0x6290
	Vector m_vecExtent629c;	// +0x629c
	char m_pad62a8[0x6670 - 0x62a8];
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
	virtual void vfunc434();
public:
	virtual bool vfunc602();
public:
	virtual bool vfunc366(int, int, int);
};
