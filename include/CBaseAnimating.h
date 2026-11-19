// CBaseAnimating: entity with a studio model (CBaseToggle -> CBaseEntity).
#pragma once

#include "CBaseEntity.h"
#include "CBaseToggle.h"
#include "inputdata_t.h"

// View of the client-ragdoll bookkeeping of CBaseAnimating (offsets from the entity start). It is kept out of
// the class itself because derived classes (CVampireProjectile, ...) size themselves from sizeof(CBaseAnimating).
struct CBaseAnimatingRagdoll
{
	char m_pad0000[0x56c];
	int m_n56c;					// 0x56c: toggled 0/1 when a ragdoll force is recorded
	char m_pad570[4];			// 0x570: padding (m_nIndex574 really sits at 0x574)
	int m_nIndex574[4];			// 0x574: the four entity indices (-2 unused)
	float m_flStart584[4];		// 0x584: start times (curtime + delay; -1.0f when already running)
	float m_flLength594[4];		// 0x594: lengths (-1.0f when already running)
	char m_pad5a4[0x660 - 0x5a4];
	int m_nForceBone660;		// 0x660: the bone the force is applied to
	Vector m_vecForce664;		// 0x664: the recorded force
};

class CBaseAnimating : public CBaseToggle
{
public:
	CBaseAnimating();	// 0x1008b230 (stub 0x100103fc)
	bool ComputeHitboxSurroundingBox(Vector *pVecWorldMins, Vector *pVecWorldMaxs);	// "CBaseAnimating::ComputeHitboxSurroundingBox" (0x10096c40, linker name now set): scope trace (entity name); the studio header of GetModel() (engine modelinfo slot 20); false with the zero vector in both outputs when there is no header or the name is "error/missing.mdl"; the hitbox set at +0x680, its first hitbox's bone map from the studio bone cache (sub_100c46c0, building it into a 0x41a0 byte matrix3x4_t buffer with vfunc257 when the cache misses) and each hitbox's bone-space box through sub_1013c0e0 (TransformAABB) into the union of world mins (start +FLT_MAX) / maxs (start -FLT_MAX); true
	void *sub_100952d0(int a);	// GetModelPtr-like, returns the studio header
	int sub_1008ed50(int sequence, int *pLocalSequence);	// "CBaseAnimating::LookupExtraAnimationModelIndexForSequence": scope trace (entity name), over the models -1, 0, 1 finds the one whose sequence range [sum of the earlier models' counts, + its count) holds sequence; stores the sequence relative to that model in *pLocalSequence and returns the model index; DevWarning and (0, -1) when none
	int sub_10094520();	// "CBaseAnimating::GetNumFlexControllers": scope trace (entity name), returns the dword at +0x160 of the studio header, 0 when missing
	int sub_10093be0(int a);	// "CBaseAnimating::GetBodygroup": scope trace (entity name), then a studio helper on (GetModelPtr(-1), dword at +0x67c, a)
	void sub_10093b10(int group, int value);	// "CBaseAnimating::SetBodygroup": scope trace (entity name), then the studio helper sub_10428c60(GetModelPtr(-1), &dword at +0x67c, group, value)
	int sub_100938a0(int sequence);	// "CBaseAnimating::GetEntryNode": scope trace (entity name), the dword at +0x270 of the sequence description sub_1008d990 finds, 0 when there is none
	int sub_10093970(int sequence);	// "CBaseAnimating::GetExitNode": as GetEntryNode with the dword at +0x274
	float sub_10093a40(int sequence);	// "CBaseAnimating::GetExitPhase": scope trace (entity name), the float at +0x280 of the sequence description sub_1008d990 finds, the file-scope zero when there is none
	const char *sub_100946b0(int index);	// "CBaseAnimating::GetFlexControllerName": scope trace (entity name), the name of the 0x14 byte controller record index (table at header + dword at +0x164), 0 when no header
	int sub_10094790(int index);	// "CBaseAnimating::GetFlexControllerType": scope trace (entity name), address of the 0x14 byte controller record [index] plus its first dword (an offset to the type string); 0 when no header
	int sub_100945e0(int index);	// "CBaseAnimating::GetFlexDescFacs"
	void sub_10091d10(CBaseEntity *pEnt);	// replaces the entity behind the handle at +0x5a8 (the old one goes to sub_101cd940)
	void sub_10091c80();	// "CBaseAnimating::OnSequenceFinish" scope only
	float sub_10091740();	// "CBaseAnimating::GetIdealSpeed": returns the float at +0x654
	float sub_1008d190();	// "CBaseAnimating::GetGroundSpeedScalar": returns the float at +0x564
	void sub_1008d0f0(float scalar);	// "CBaseAnimating::SetGroundSpeedScalar": stores the float at +0x564
	void sub_1008d230(float rate);	// "CBaseAnimating::SetPlaybackAndSpeed...": scope trace, a negative rate becomes 1.0f; calls SetGroundSpeedScalar(rate) and stores it at +0x6f4
	int sub_1008d7c0(int a, int b, int c);	// "CBaseAnimating::GetAnimFlags": scope trace (entity name), looks up the studio header of slot 8() through the engine (slot 18); 0 when missing, else sub_10005a6f(header, a, b, c)
	char sub_100903e0();	// "CBaseAnimating::IsRagdoll": (field at +0x168) == 0x17
	void sub_10096490(int set);	// "CBaseAnimating::SetHitboxSet": stores the argument at +0x680
	void sub_10096530(const char *name);	// "CBaseAnimating::SetHitboxSetByName": scope trace (entity name), stores the hitbox set index the studio helper finds for name in GetModelPtr(-1) at +0x680
	float sub_10095d80(int iController);	// "CBaseAnimating::GetBoneController": scope trace (entity name), the studio helper's value for (GetModelPtr(-1), iController, the encoded controller float at +0x6fc + iController*4)
	float sub_10095cb0(int iController, float flValue);	// "CBaseAnimating::SetBoneController": scope trace (entity name), the studio helper's value for (GetModelPtr(-1), iController, flValue, &the encoded controller float at +0x6fc + iController*4)
	void sub_10095be0();	// "CBaseAnimating::InitBoneControllers": scope trace (entity name), SetBoneController(i, 0) for i in 0..3, then slot 260(i, 0) for i in 0..0x17
	void sub_100963d0();	// "CBaseAnimating::ResetClientsideFrame": scope trace, stores a global-object value at +0x710 and 1 at +0x1b1
	void sub_100976e0();	// "CBaseAnimating::BlendTransformWithNextSequenceChange": scope trace (entity name), sets bit 11 of +0x19c and saves slot 217() to +0x714 and slot 219() to +0x720 (three floats each)
	void sub_100977f0(int bone);	// "CBaseAnimating::TurnOnPhysicsChain": scope trace, clears bit (1 << bone) in the dword at +0x72c
	void sub_100978c0(int bone);	// "CBaseAnimating::TurnOffPhysicsChain": scope trace, sets bit (1 << bone) in the dword at +0x72c
	int sub_10097980(const char *name);	// "CBaseAnimating::LookupPhysicsChain": scope trace (entity name), the index of the 0x1c byte chain record (count at +0x18c, offset at +0x190 of GetModelPtr(-1)) whose first dword is the bone LookupBone(name) finds; -1 for null, an unknown bone (DevWarning) or no match
	void sub_100904a0();	// "CBaseAnimating::ClearAllClientRagdollData"-like: scope trace (entity name), resets the four 3-int arrays at +0x574 (-2), +0x584 and +0x594 (0), and +0x168 from 0x17 to 0
	bool sub_1008be20(CBaseEntity *pOther);	// "CBaseAnimating::IsIgnoreCollisionEntity": scope trace (entity name), true when the entity behind the handle at +0x55c is pOther
	void sub_1008bc50(CBaseEntity *pOther);	// "CBaseAnimating::StopIgnoringCollision": scope trace (entity name), when this and pOther both have the physics object at +0x36c calls sub_1001474a(object, other object) and clears the handle at +0x55c to -1
	void sub_1008bd30();	// "CBaseAnimating::StopIgnoringCollision" (no argument): scope trace (entity name), sub_1008bc50(the entity behind the handle at +0x55c, null when stale)
	void sub_1008bb70(CBaseEntity *pOther);	// "CBaseAnimating::StartIgnoringCollision": scope trace (entity name), when this and pOther both have the physics object at +0x36c calls sub_10009d7c(object, other object) and stores pOther's handle at +0x55c
	void sub_1008cfc0(int unused, void *pEvent);	// "CBaseAnimating::DisplayAnimEvent": scope trace (entity name); when the global at 0x106ccf0c is not flagged by its slot 1 and its value (+0x2c) is set, formats "Processing anim event at %5.2f %d( %s )" (event time, event id, description from slot 241) into a 256 byte buffer and passes it to slot 18 with 9
	void sub_1008e480(CBaseEntity *pWind, int a, int b, int c, int d);	// called by CEnvWind::vfunc174 with the wind's four dwords at +0x450
	void sub_1008e630(CBaseEntity *pOther);	// "CBaseAnimating::RemoveWind": scope trace (entity name); clears the handle at +0x63c and the two dwords at +0x648/+0x64c unless the handle resolves to a live entity different from pOther
	void sub_10097310(CBaseAnimating *pOther);	// "CBaseAnimating::CopyAnimationDataFrom": scope trace (entity name), copies the model name (slot 212(*pOther->slot 9())) and model index (slot 10(pOther->slot 8())) and nine dwords of animation state (bit 4 added to the flags at +0x19c)
	int sub_100955c0();	// "CBaseAnimating::FlushBoneCache"-named trace: scope trace (entity name), with a 0x41a0 byte stack buffer: slot 257(buffer, 12), then returns the studio worker sub_100c47d0(GetModelPtr(-1), the dword at +0x6f0, the dword at +0x174, slot 219(), slot 217(), 12, buffer)
	int sub_10093fb0(int sequence, float *pMins, float *pMaxs);	// "CBaseAnimating::ExtractBbox": scope trace (entity name), copies the two vectors at +0x1c / +0x28 of the sequence description sub_1008d990 finds into pMins / pMaxs and returns 1; without a description zeroes both and returns 0

	void sub_1008e0a0(CBaseEntity *pModel, const char *pszA, const char *pszB, int n1, int n2);	// slot 245 "CBaseAnimating::AddExtraAnimationModels"

	int sub_10092550(int a);	// "CBaseAnimating::LookupBone"
	void sub_100926e0(int bone, int b, int c);	// "CBaseAnimating::GetBonePosition0"
	void sub_10092610(int a, int b, int c);	// "CBaseAnimating::GetBonePosition01": LookupBone(a), then GetBonePosition0(bone, b, c)
	int sub_10092e20(int a, int b, int c);	// "CBaseAnimating::GetAttachment01": scope trace, then sub_10005d12(sub_100060aa(a, b, c))
	char sub_100931d0(int a, int b, int c);	// "CBaseAnimating::GetAttachmentLocal01": LookupAttachment(a), then GetAttachmentLocal0(index, b, c); returns its flag
	int sub_10092d50(int name);	// "CBaseAnimating::LookupAttachment" (stub 0x100060aa)
	char sub_100932a0(int attachment, int b, int c);	// "CBaseAnimating::GetAttachmentLocal0" (stub 0x10012625), returns a success flag
	int sub_100060aa(int a, int b, int c);
	int sub_10005d12(int a);
	bool sub_10092ef0(int attachment, float *pOrigin, float *pAngles);	// "CBaseAnimating::GetAttachment" (stub 0x10005d12): scope trace (entity name), slot 262 fills a 3x4 matrix for the attachment; true after converting it to the origin (sub_10137ed0, stub 0x10012756) and the angles (sub_10138720(matrix, 3, pAngles), stub 0x10011342), else false
	int sub_10093cb0(int a);	// "CBaseAnimating::GetBodygroupName": scope trace, then a studio helper on GetModelPtr(-1)
	void sub_10090bc0(unsigned int flags);	// "CBaseAnimating::AddEffectsForNextSequence": scope trace, ors flags into the dword at +0x5b0
	void sub_10090890(float delay);	// "CBaseAnimating :: MarkEffectStartTime": scope trace, stores delay + curtime at +0x5a4
	void sub_1008d520(inputdata_t *inputdata);	// "CBaseAnimating::InputFadeToSkin": scope trace, then sub_1008d6d0(skin)
	void sub_1008d6d0(int skin);	// "CBaseAnimating::SetSkin"-like, called by InputFadeToSkin
	void sub_1008d450(inputdata_t *inputdata);	// "CBaseAnimating::InputSetSkinFadeTime": scope trace (entity name), then sub_1008d5f0(the input's float, 0 when it is not a float)
	void sub_1008d320(inputdata_t *inputdata);	// "CBaseAnimating::InputSetBodygroup": scope trace (entity name), the input as a string (converted when it is not one) is trimmed into a 64 byte buffer; the group is atoi of it, the value atoi of the text after the first space (0 without one); then SetBodygroup(group, value)
	void sub_1008d5f0(float time);	// "CBaseAnimating::SetSkinFadeTime"-like, called through the stub at 0x100151bd
	int sub_1008dac0(int a, char *bufB, char *bufA, int b);	// "CBaseAnimating::SelectWeightedSequence" worker (fills two 0x2000-byte buffers)
	int sub_1008dc40(int a, int b);	// "CBaseAnimating::SelectWeightedSequence": scope trace, worker, then a sort-like helper
	int sub_1008dd30(int a, int b);	// "CBaseAnimating::SelectHeaviestSequence"-like, called by vfunc253
	int sub_1008de20(int a, int b);	// "CBaseAnimating::SelectSameSequence"-like worker, called by vfunc254
	int sub_10093ef0();	// "CBaseAnimating::GetNumBodyGroups": scope trace, then a studio helper on GetModelPtr(-1)
	void sub_1008f540();	// "CBaseAnimating::ResetActivityIndexes ": scope trace, then a studio helper on GetModelPtr(-1)
	int sub_10096760();	// "CBaseAnimating::GetHitboxSetCount": scope trace, then a studio helper on GetModelPtr(-1)
	int sub_10092c90();	// "CBaseAnimating::GetNumBones": scope trace (entity name), then the int at +0xf0 of GetModelPtr(-1), 0 when missing
	int sub_10097110(int index);	// "CBaseAnimating::GetPhysicsBone": scope trace (entity name), the dword at +0x94 of the 0xa0 byte record [index] (table at header + dword at +0xf4, count at +0xf0) of GetModelPtr(-1); 0 when out of range or no header
	int sub_10096b50(int index);	// "CBaseAnimating::GetHitboxBone": scope trace (entity name), the first dword of the 0x20 byte hitbox [index] of the hitbox set at +0x680 (set table at header + dword at +0x104, 0xc byte sets: count at +4, offset at +8); 0 when out of range or no header
	int sub_10097000(int bone);	// "CBaseAnimating::GetBoneHitbox": scope trace (entity name), index of the first hitbox of the hitbox set at +0x680 whose first dword equals bone; 0 when not found or no header
	bool sub_10097200(const char *name, int *pSet, int *pHitbox);	// "CBaseAnimating::LookupHitbox": scope trace, stores -1 in both outputs, walks the hitbox sets of GetModelPtr(-1) (count at +0x100, table at +0x104, 0xc bytes each) with an empty inner loop; always false
	bool sub_10090e30(int sequence);	// "CBaseAnimating::IsValidSequence": scope trace (entity name), sub_1008d990(sequence) != 0
	bool sub_10092460(int sequence, int node);	// "CBaseAnimating::HasPoseParameter"-named trace: scope trace (entity name), false without a sequence description (sub_1008d990), else true when the dword at +0x244 or +0x248 of it equals node
	bool sub_10092380(int sequence, const char *name);	// "CBaseAnimating::HasPoseParameter01": scope trace (entity name), LookupPoseParameter(name), false when -1, else sub_10092460(sequence, index)
	int sub_1008d990(int sequence);
	void SetSequenceBox();	// worker of IsValidSequence (stub 0x1000b4f6)
	int sub_1008f7b0(const char *label);	// "CBaseAnimating::LookupSequence": scope trace (entity name), over the models -1, 0, 1 the first non-negative studio lookup (sub_10428470) of the label plus the sequences of the earlier models, else -1
	int sub_10092270(const char *name);	// "CBaseAnimating::LookupPoseParameter" (stub 0x10009ac5): scope trace (entity name), index of the first of 0x18 pose parameters of GetModelPtr(-1) whose name matches (case-insensitive), else -1
	const char *sub_1008fe80(int sequence);	// "CBaseAnimating::GetSequenceName": scope trace (entity name), the name string at the offset in the first dword of the sequence description sub_1008d990 finds, "SEQUENCE_NOT_FOUND" when there is none
	const char *sub_1008ff50(int sequence);	// "CBaseAnimating::GetSequenceActivityName": as GetSequenceName with the offset in the second dword, "SEQUENCE_NOT_FOUND" when there is none
	float sub_10091230(int sequence);	// "CBaseAnimating::GetSequenceCycleRate": scope trace (entity name), 1.0f / sub_10091080(sequence) when that is above 0, else 10.0f
	float sub_10091080(int sequence);	// sequence duration (stub 0x10009813), returns a float
	float sub_10091490(int sequence, float flRate);	// "CBaseAnimating::GetSequenceGroundSpeed"-like: scope trace (entity name), the sequence's ground distance times the ground speed scalar (+0x564) over its duration; with the byte at +0x5ac set the speed comes from the interval movement of one frame instead
	float sub_10094b70(float flInterval, char *pbLooped, float *pvecDelta, float *pvecAngles);	// "CBaseAnimating::GetIntervalMovement" (stub 0x10008d64)
	float sub_10092190(int iParameter);	// "CBaseAnimating::GetPoseParameter02": scope trace (entity name), the studio helper's value for (GetModelPtr(-1), iParameter, the float at +0x690 + iParameter*4), the file-scope zero for a negative index or no header
	float sub_100920d0(const char *name);	// "CBaseAnimating::GetPoseParameter01": scope trace (entity name), GetPoseParameter02(LookupPoseParameter(name))
	float sub_10094dc0(float flCycle);	// "CBaseAnimating::GetMovementFrame...": scope trace (entity name), without a studio header the file-scope zero, else the studio helper's value for (GetModelPtr(-1), the sequence at +0x6f0, the pose parameters at +0x690, flCycle)
	int sub_1008f6c0(int activity);	// "CBaseAnimating::LookupActivity": scope trace (entity name), the first non-negative result of the studio helper sub_10428360(GetModelPtr(i), activity) for i = -1, 0, 1; else -1

	void sub_1008b800(int index, float flDelay, float flDuration, const Vector *pForce, int nForceBone);	// \"CBaseAnimating::TriggerClientRagdoll\"-like worker (ret 0x14)
	bool sub_10090180(const Vector *pForce, int nForceBone, bool bKeepSolid);	// \"CBaseAnimating::BecomeClientRagdoll\": scope trace (entity name), true when the model type of slot 8() is valid

	virtual bool vfunc99(int pRay, int mask, int pTrace);	// slot 99 \"CBaseAnimating::TestCollision\": scope trace (entity name); a ray (byte +0x30) or the custom ray / box solid flags (IsSolidFlagSet, inlined scope traces) go through slot 100 (TestHitboxes) and answer true unless the trace is a clean miss (fraction >= 1.0, no allsolid / startsolid); otherwise warns (Warning for SOLID_VPHYSICS, slot 92 == 6, DevMsg for the others) and answers false

	void vfunc105(const char *pModelName);	// slot 105 "CBaseAnimating::SetModel"
	void vfunc256(int iBone, float *pMatrix);	// slot 256 "CBaseAnimating::GetBoneTransform": scope trace (entity name), copies the cached bone matrix (sub_100c45c0 of the bone cache sub_10095460) of iBone, or the entity's own matrix at +0x130 (after slot 98 when bit 11 of +0x268 is set), to pMatrix; for move types 0xb / 0xc it then re-expresses it relative to the matching bone (found by name) of the parent entity's model (the aim entity handle at +0x37c, its slot 137)

	// Slot 249, called directly so far; declared as a plain member.
	float vfunc249();	// "CBaseAnimating::GetIdealAccel": slot 248 + constant
	char vfunc251();	// slot 251: the byte at +0x65c
	int vfunc252(int a, int b, int c);	// "CBaseAnimating::SelectWeightedSequenceForStat": scope trace, then sub_1008dc40(a, -1)
	int vfunc253(int a, int b, int c);	// "CBaseAnimating::SelectHeaviestSequenceForStat": scope trace, then sub_1008dd30(a, -1)
	int vfunc254(int a, int b, int c);	// "CBaseAnimating::SelectSameSequenceForStat": scope trace, then sub_1008de20(a, -1)
	bool vfunc68(CBaseEntity *pOther);	// slot 68 "CBaseAnimating::ShouldIgnoreCollision": scope trace (entity name), returns the result of sub_10158b90(this, pOther); declared as a plain member
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CSimplePhysicsProp (transplant)
	void sub_10004c3c();	// as in CSimplePhysicsProp (transplant)
	void sub_10091f10(const char *name, float value);	// slot 261 "CBaseAnimating::SetPoseParameter01": scope trace (entity name), then slot 260(LookupPoseParameter(name), value)
	void vfunc241(char *pszOut, int *pEvent);	// slot 241 "CBaseAnimating::GetEventName" (0x1008c170, ret 8, plain member): scope trace (entity name or "NULL ENTITY"), then a switch on *pEvent (SPECIFIC 0, SCRIPTED 0x3e8, SHARED 0x7d0, NPC_*, WEAPON_*, CL_EVENT_* ...) that strcpy's the event's name into pszOut (an inline strcpy loop per case); the default case at 0x1008cb69 is not read yet
	void vfunc243(const char *pszModel, bool bDeathFX);	// slot 243 "CBaseAnimating::BurnModel" (0x10090580, ret 8, plain member): scope trace (entity name or "NULL ENTITY" for a null this); +0x168 = 0x1b, flags +0x19c |= 0xa0, effect time +0x5a4 = curtime; with a studio header (sub_100952d0(-1)) and bDeathFX and !sub_100b5190(): per hitbox of set 0 (count at header + [header + 0x104] + 4, 0x20 byte records at +8, bone = first dword) a "DMGFX_vampire_death" particle (sub_100fbc90(name, 0x1070d1b0, 0x1070d9d0, -1.0f), cdecl) -> CEnvParticle::sub_100fb1f0(this, 4, bone), CThinkView::sub_100fbb40(0.1f, 1.5f); with pszModel a "dynamic_prop" (sub_10136580, __RTDynamicCast to CDynamicProp - not possible until CDynamicProp derives CBaseEntity) gets slot 105(pszModel), sub_101d1280, sub_100b3640(0x40000), engine slot 35(edict +0x2e0), +0x168 = 0x1b, +0x5a4 = curtime + 0.5f, ThinkSet(sub_101c0b10), +0x17c = +0x5a4 + 3.0f, sub_1009ee80(this), slot 93(0xb, 0), flags |= 0xa0; finally the EHANDLE at +0x5a8 (Get) goes to sub_101cd940
	void vfunc103();	// slot 103 "CBaseAnimating::Spawn": scope trace (entity name), CBaseEntity::vfunc103, then initialises the three 4-dword arrays at +0x574 (-2), +0x584 and +0x594 (0)
	void vfunc130(int a);	// slot 130 "CBaseAnimating::OnRestore": scope trace (entity name), restores the bone controller / pose data (sub_100c7be0 for the two models) when the handle at +0x5b8 resolves, else slot 246(); clears +0x648/+0x64c when the handle at +0x63c is stale; then CBaseEntity::vfunc130(a)
	bool vfunc262(int iAttachment, float *pMatrix);	// slot 262 "CBaseAnimating::GetAttachment03": scope trace (entity name); false for no studio header or an attachment outside 1..count (dword +0x148, 0x3c byte records at +0x14c); else asks slot 256 (the owner's character at +0x9c when the aim entity handle at +0x37c resolves and it knows the bone named by the attachment's bone record, otherwise this entity) for the bone matrix and converts it with the attachment's local matrix (+0xc) into pMatrix; true
	void sub_1008e770(Vector *pos, class Quaternion *q, int iSequence, int nCycle, float *pPoseParams, class CUnknown100c81b0 *pBoneMask);

#include "CBaseAnimating_ext.h"
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
    virtual int vfunc79();
};
