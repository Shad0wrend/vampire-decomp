// CNPC_VMingXiao: declared by pcdecomp transplant for 0x10391390 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

#include "CTakeDamageInfo.h"

class CNPC_VMingXiaoTentacle;

class CNPC_VMingXiao : public CBaseEntity
{
public:
	virtual void vfunc104();	// Precache: the Troika base, the eleven Ming Xiao particle emitters, the move sound list, then the weapons item_w_mingxiao_melee / _tentacle / _spit
	virtual void vfunc123();	// DrawDebugTextOverlays-like: with bit 29 of the overlay flags (+0x224) set, dispatches four red markers (sub_10144a30) along x = 100, 150, 200, 300 at the entity's origin (slot 220); then the Troika base
	void sub_10298ad0();	// CAI_BaseNPCTroika::vfunc104 (stub 0x100097b4), called directly
	void sub_1029ca50();	// CAI_BaseNPCTroika::vfunc123 (stub 0x10008a3f), called directly

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
	void sub_10397930(int index);	// resets tentacle slot [index]: clears the handle (+0x66a8) and flag (+0x6684) and the new-tentacle handle (+0x668c), copies a float of the global 0x10739d08 object to +0x66dc, stamps curtime + 10.0f / + 1.0f at +0x66c4 / +0x66f4, then starts the gesture 0x1124 + index (AddGesture)

	char m_pad03e0[0x6290 - 0x3e0];
	Vector m_vecAxis6290;	// +0x6290
	Vector m_vecExtent629c;	// +0x629c
	char m_pad62a8[0x6684 - 0x62a8];
	char m_bSlotFlag[6];	// +0x6684
	char m_pad668a[2];
	int m_hSlotNew[6];	// +0x668c
	float m_flTime66a4;	// +0x66a4
	int m_hSlotOld[6];	// +0x66a8
	char m_pad66c0[4];
	float m_flSlotTimeA[6];	// +0x66c4
	float m_flSlotValue[6];	// +0x66dc
	float m_flSlotTimeB[6];	// +0x66f4
	int m_n670c;	// +0x670c: the count the delay is scaled by (6 - count)
};
