// CAI_BaseHumanoid: humanoid NPC base. Only the members and slots that decompiled code needs are declared (slots as plain members).
#pragma once
#include "string_t.h"

struct datamap_t;

#include "Vector.h"
#include "CUtlVector56.h"

void sub_10264300(void *pElement, const void *pSrc);	// copies a 0x38-byte waypoint record into the element (cdecl, 2 args)

class CAI_HumanoidMotor;
class CAI_Navigator;

class CAI_BaseHumanoid
{
public:
	char pad0[0xfec];
	int m_state0fec;
	char pad1[0x5f4c - 0xff0];
	unsigned int m_flags5f4c;	// 0x5f4c: bit 1 = the eye position / facing vectors are stale (set while they are recomputed), bit 0 = the direction to the focus point is stale
	Vector m_vec5f50;	// 0x5f50
	Vector m_vec5f5c;	// 0x5f5c: the normalised direction from the eye position to the point slot 278 gives
	Vector m_vec5f68;	// 0x5f68: the facing vector
	char pad2[0x5f94 - 0x5f74];
	int m_unk5f94;
	int m_pad5f98;
	const char *m_pSceneName;	// 0x5f9c
	unsigned int m_hScene;	// 0x5fa0
	string_t m_iszExpressionOverride;	// 0x5fa4
	char m_pad5fa8[0x5fb8 - 0x5fa8];
	int m_nPose5fb8[10];	// 0x5fb8: pose parameter indices (body_trans_Y .. neck_trans)
	int m_nPose5fe0[3];	// 0x5fe0: pose parameter indices reset by sub_1025efc0
	int m_nPose5fec[13];	// 0x5fec: pose parameter indices (move_rightleft .. head_tilt)

	void sub_102627e0();	// 0x102627e0 (called by 0x10262590, itself from CAI_HumanoidMotor::vfunc19): recomputes the waypoint records' angles/positions (the CUtlVector56 at +0x6024 feeds the working one at +0x6038) and the visibility/rotation smoothing pass
	char m_pad6020[4];	// 0x6020 .. 0x6023
	CUtlVector56 m_Waypoints6024;	// 0x6024: the parsed waypoint records (0x38-byte elements)
	CUtlVector56 m_Waypoints6038;	// 0x6038: the working / smoothed waypoint records
	int sub_10262c20(int a, int b);	// 0x10262c20: waypoint smoothing test/writer for the records a and b (returns 0/1/2, how many records were written)
	int sub_10262ea0(int idx, float flAngle);	// helper of sub_10262c20: stores the angle at the record that idx picks, returns the record index

	void sub_1000245f(void *p);	// CBaseCombatCharacter::vfunc105 (stub), called directly
	int sub_10009ac5(const char *pszName);	// CBaseAnimating::sub_10092270 (stub): index of a pose parameter
	int sub_1001337c(const char *pszName);	// CBaseFlex::sub_100b5d10 (stub): index of a flex controller
	void vfunc105(void *p);

	CAI_BaseHumanoid *sub_10260b30();	// constructor body 0x10260b30 (returns this; called by npc_TestBaseHumanoid 0x102609e0 and the derived NPC constructors): CAI_BaseNPC ctor body 0x1027c300 (stub 0x10006659); then per level (CAI_ExpresserSink at +0x5f44 / CAI_ExpressiveNPC / CAI_BaseHumanoid) the vptr stores +0 / +0x19b0 / +0x5f44 (0x1049885c / 0x10498830 / 0x10498818, finally 0x10497d04 / 0x10497cd8 / 0x10497cc0); +0x5f48 (expresser) = 0, +0x5f4c = 0; the zero vector (0x1070d1b0) copied to +0x5f50, +0x5f5c, +0x5f68; +0x5f80 = 0, +0x5f84 = -1; the 36-byte-element CUtlVector at +0x5f88 (ctor stub 0x1000ac13 = CUtlMemory36::sub_10263fb0(0, 0), then +0x5f94 = 0, +0x5f98 = the memory pointer at +0x5f88); +0x5f9c (scene name) = 0, +0x5fa0 (scene handle) = -1, +0x5fa4..+0x5fb4 = 0 (kind strings); +0x6024..+0x6048 = 0 (ten dwords: two more vectors at +0x6024 / +0x6038 of the same CUtlVector kind, see vfunc5)
	void sub_1025efc0();	// resets the three pose parameters (slot 346(index, 0, 0)), runs CBaseAnimating::sub_100955c0 and clears bits 0 and 1 of +0x5f4c

	float vfunc250(float a);	// slot 250: clears the stale flags and advances the animation (CBaseAnimatingOverlay::vfunc250)
	bool vfunc586();
	float vfunc516();
	const char *vfunc589(int type);	// returns the string registered for the given kind (1, 2, 3, 5/7 at +0x5fa8/+0x5fb0/+0x5fac/+0x5fb4), or the override string at +0x5fa4 when set (and the kind is not 7); null when unset
	Vector vfunc193();	// returns the vector at +0x5f50 (hidden result pointer), after sub_10010be5()
	Vector vfunc373();	// returns the vector at +0x5f5c (hidden result pointer), after sub_10010be5()
	Vector vfunc370();	// slot 370: the facing vector of slot 371 with its vertical part dropped, normalised
	Vector vfunc372();	// slot 372: the horizontal part of the vector slot 373 gives (z cleared), normalised
	Vector vfunc371();	// returns the facing vector at +0x5f68 (hidden result pointer), after sub_10010be5()
	void sub_10010be5();
	void sub_1025e7b0();	// the function behind the stub sub_10010be5: recomputes the cached eye position (+0x5f50) and facing vector (+0x5f68) when bit 1 of +0x5f4c is clear, and the normalised direction (+0x5f5c) from the eye to the point of slot 278 when bit 0 is clear
	bool sub_10092e20(const char *pszName, Vector *pOrigin, Vector *pAngles);	// CBaseAnimating::GetAttachment01 (named attachment), called directly
	Vector sub_100b4b40();	// CBaseEntity::vfunc193 (stub 0x10007941), called directly
	CAI_BaseHumanoid *vfunc5(unsigned int flags);	// scalar deleting destructor: purges the three vectors at +0x6038, +0x6024 and +0x5f88 (grow size at +8, size at +0xc, element pointer at +0x10 of each), runs the base destructor body (stub 0x1000aa51) and, with bit 0 of flags, deletes this
	void sub_1000aa51();	// base destructor body, called directly
	void vfunc277(const float *v);	// slot 277: clears bit 0 of the int at +0x5f4c, then tail-calls CBaseFlex::sub_100b5b00(v)
	void sub_10260670(const char *pszName);	// sets the scene name at +0x5f9c: clears it for an empty name, else (unless it is already the current name) starts the scene through sub_10084b40 (handle into +0x5fa0) and stores the name when the handle resolves
	CAI_HumanoidMotor *vfunc427();	// "CAI_BaseHumanoid::vfunc427": new CAI_HumanoidMotor(this), the motor's base constructor sub_102e0900 on the new object, null when the allocation fails
	CAI_Navigator *vfunc429();	// "CAI_BaseHumanoid::vfunc429": new CAI_HumanoidNavigator(this) (0x6c bytes), its base constructor on the new object, null when the allocation fails
	char vfunc587(const Vector &vecPos);	// slot 587 (plain member): whether the position lies in front of the NPC: the direction from the eye position (slot 193) to it, normalised, dotted with the facing vector of slot 371, is above 0.5
	char vfunc588(const Vector &vecPos);	// slot 588 (plain member): like slot 587 with the vector of slot 369 (dot above -0.5) and the vertical part of the normalised direction under 0.7 in magnitude
	void vfunc463(int a, int b);	// slot 463: sets the scene name from slot 589(b) through sub_10260670, then CAI_BaseNPC::vfunc463(a, b)
public:
	datamap_t * vfunc82();
	char m_pad604c[0x6058 - 0x604c];
};
