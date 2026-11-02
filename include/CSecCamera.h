// CSecCamera: declared by pcdecomp transplant for 0x1020b370 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

class CSecCamera : public CBaseEntity
{
public:
	CSecCamera *sub_1020bf00();
	virtual void vfunc103();	// slot 103 (Spawn): CBreakableProp::vfunc103, movedir (0, 1, 0), RemoveFlag(0xfffbffff), movetype 8, the sweep length and the end positions from the angles, state 0, the swing angle at +0x798 = cos(half of it in radians), then Precache (slot 104)
	void vfunc104();	// slot 104 (Precache): precaches the four model names at +0x7c4 / +0x7c8 / +0x7cc / +0x7d0 when set, then CBreakableProp::vfunc104
	void sub_1000978c();	// CBreakableProp::vfunc104, called directly (tail call)
	void sub_1020c890();	// when the sound pointer at +0x7d4 is set: has the engine sound object (global 0x1070b248, slot 11, EmitSound with 11 arguments) play to a broadcast recipient filter (every player) on this entity's engine index (IndexOfEdict, engine slot 35), then clears the pointer
	void sub_1020c3d0();	// the think function: once the time at +0x7a0 has passed advances the camera state machine (state at +0x79c): 0 -> 2, 1 -> 3, 2 -> fires the output at +0x7f4 then 1, 3 -> fires the output at +0x80c then 0, 4 -> 6 or 5 (sub_1020cd30), 5 -> 8, 8 -> 1, 6 / 7 nothing, else a DevMsg and the byte at +0x77c cleared
	void sub_1020c4f0(int nState);	// switches the camera to the given state (stub 0x10002973)
	bool sub_1020cc60(CBaseEntity *pTarget);	// stub 0x100150c3: whether the target (which needs the object at +0xa8) is inside the swing cone of the camera
	char sub_1020cd30();	// stub 0x1000e089
	void sub_1020c2a0();	// the camera's think (next think 0.1 s later): while the byte at +0x77c is set runs the state machine (sub_1020c3d0), every 0.25 s asks sub_1020cd30 and goes to state 4 unless already in 4 or 6; in the states 4 / 5 sets the playback rate (+0x6f4 = 1 / the float at +0x7c0), advances the animation (slot 250) and, with the byte at +0x65c set, restarts "idle" (state 5) or "zoom_idle" (state 4)
	void sub_1020cbf0(const char *pszSequence);	// starts the named sequence (stub 0x1000aaab): LookupSequence, ResetSequence, then sub_100963d0; DevMsg "Security Camera no sequence named:%s" and sequence 0 when unknown
	int sub_1008f7b0(const char *pszSequence);	// CBaseAnimating::LookupSequence (stub 0x1000e057), called directly
	void sub_10090950();	// CBaseAnimating member (stub 0x100117b1), called directly
	void sub_100963d0();	// CBaseAnimating member (stub 0x100024b9), called directly
	void vfunc113();	// slot 113: CBreakableProp::vfunc113 (0x10004dbd), then the think (sub_1020c2a0) set +0.0 s later, the nothing-else timer at +0x7a0 (1020c250)
	void vfunc133();	// slot 133: the think timer and the sound: sub_1020c890, sub_10007725, then the global 0x1070b228's +0xc as the next state time at +0x7a0, then sub_1020c3d0
	void sub_10007725();	// the member called by vfunc133 after sub_1020c890 (stub 0x10007725)

	// Placeholder slots 134..191, then the slots the camera's code calls (192 WorldSpaceCenter, 217 GetAbsOrigin, 221 GetAngles).
#define CSC_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
	virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	CSC_V10(s14) CSC_V10(s15) CSC_V10(s16) CSC_V10(s17) CSC_V10(s18)
	virtual void s190(); virtual void s191();
	virtual Vector vfunc192();	// slot 192 \"WorldSpaceCenter\" (by value, hidden result pointer)
	virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199();
	CSC_V10(s20) virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual float *vfunc217();	// slot 217 \"GetAbsOrigin\"
	virtual void s218(); virtual void s219(); virtual void s220();
	virtual float *vfunc221();	// slot 221 \"GetAngles\"

	char m_pad03e0[0x6f0 - 0x3e0];
	int m_nSequence6f0;	// 0x6f0: the current sequence
	char m_pad06f4[0x77c - 0x6f4];
	char m_b77c;	// 0x77c
	char m_pad77d[0x780 - 0x77d];
	float m_flF780;	// 0x780: divisor of the sweep length
	char m_pad784[0x788 - 0x784];
	float m_flF788;	// 0x788: the sweep distance (truncated, made positive)
	float m_flF78c;	// 0x78c: m_flF788 as a fraction of m_flF780
	char m_pad790[0x798 - 0x790];
	float m_flF798;	// 0x798: the swing angle in degrees (becomes its cosine at Spawn)
	int m_nState79c;	// 0x79c
	float m_flNextStateTime7a0;	// 0x7a0
	char m_pad07a4[0x7a8 - 0x7a4];
	Vector m_vecStart7a8;	// 0x7a8: the angles at Spawn
	Vector m_vecEnd7b4;	// 0x7b4: those angles plus the sweep along the movedir
	char m_pad07c0[0x7f4 - 0x7c0];
	COutputEvent m_Output7f4;	// 0x7f4
	COutputEvent m_Output80c;	// 0x80c
public:
    virtual datamap_t * vfunc82();
    void vfunc266(const float *pVelocity);	// as in CWeaponPhysCannon (transplant)
    void sub_10015208(const float *pVelocity);	// as in CWeaponPhysCannon (transplant)
};
