// CAI_BaseHumanoid: humanoid NPC base. Only the members and slots that decompiled code needs are declared (slots as plain members).
#pragma once

#include "Vector.h"

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
	char pad3[0x5fb8 - 0x5fa4];
	int m_nPose5fb8[10];	// 0x5fb8: pose parameter indices (body_trans_Y .. neck_trans)
	int m_nPose5fe0[3];	// 0x5fe0: pose parameter indices reset by sub_1025efc0
	int m_nPose5fec[13];	// 0x5fec: pose parameter indices (move_rightleft .. head_tilt)

	void sub_1000245f(void *p);	// CBaseCombatCharacter::vfunc105 (stub), called directly
	int sub_10009ac5(const char *pszName);	// CBaseAnimating::sub_10092270 (stub): index of a pose parameter
	int sub_1001337c(const char *pszName);	// CBaseFlex::sub_100b5d10 (stub): index of a flex controller
	void vfunc105(void *p);

	void sub_1025efc0();	// resets the three pose parameters (slot 346(index, 0, 0)), runs CBaseAnimating::sub_100955c0 and clears bits 0 and 1 of +0x5f4c

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
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
