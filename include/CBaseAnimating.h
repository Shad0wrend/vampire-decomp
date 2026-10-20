// CBaseAnimating: entity with a studio model (CBaseToggle -> CBaseEntity).
#pragma once

#include "CBaseEntity.h"
#include "inputdata_t.h"

class CBaseAnimating : public CBaseEntity
{
public:
	void *sub_100952d0(int a);	// GetModelPtr-like, returns the studio header
	int sub_10094520();	// "CBaseAnimating::GetNumFlexControllers": scope trace (entity name), returns the dword at +0x160 of the studio header, 0 when missing
	int sub_10093be0(int a);	// "CBaseAnimating::GetBodygroup": scope trace (entity name), then a studio helper on (GetModelPtr(-1), dword at +0x67c, a)
	void sub_10093b10(int group, int value);	// "CBaseAnimating::SetBodygroup": scope trace (entity name), then the studio helper sub_10428c60(GetModelPtr(-1), &dword at +0x67c, group, value)
	int sub_100938a0(int sequence);	// "CBaseAnimating::GetEntryNode": scope trace (entity name), the dword at +0x270 of the sequence description sub_1008d990 finds, 0 when there is none
	int sub_10093970(int sequence);	// "CBaseAnimating::GetExitNode": as GetEntryNode with the dword at +0x274
	float sub_10093a40(int sequence);	// "CBaseAnimating::GetExitPhase": scope trace (entity name), the float at +0x280 of the sequence description sub_1008d990 finds, the file-scope zero when there is none
	const char *sub_100946b0(int index);	// "CBaseAnimating::GetFlexControllerName": scope trace (entity name), the name of the 0x14 byte controller record index (table at header + dword at +0x164), 0 when no header
	int sub_10094790(int index);	// "CBaseAnimating::GetFlexControllerType": scope trace (entity name), address of the 0x14 byte controller record [index] plus its first dword (an offset to the type string); 0 when no header
	int sub_100945e0(int index);	// "CBaseAnimating::GetFlexDescFacs"
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
	void sub_100963d0();	// "CBaseAnimating::ResetClientsideFrame": scope trace, stores a global-object value at +0x710 and 1 at +0x1b1
	void sub_100976e0();	// "CBaseAnimating::BlendTransformWithNextSequenceChange": scope trace (entity name), sets bit 11 of +0x19c and saves slot 217() to +0x714 and slot 219() to +0x720 (three floats each)
	void sub_100977f0(int bone);	// "CBaseAnimating::TurnOnPhysicsChain": scope trace, clears bit (1 << bone) in the dword at +0x72c
	void sub_100978c0(int bone);	// "CBaseAnimating::TurnOffPhysicsChain": scope trace, sets bit (1 << bone) in the dword at +0x72c
	void sub_100904a0();	// "CBaseAnimating::ClearAllClientRagdollData"-like: scope trace (entity name), resets the four 3-int arrays at +0x574 (-2), +0x584 and +0x594 (0), and +0x168 from 0x17 to 0
	bool sub_1008be20(CBaseEntity *pOther);	// "CBaseAnimating::IsIgnoreCollisionEntity": scope trace (entity name), true when the entity behind the handle at +0x55c is pOther
	void sub_1008cfc0(int unused, void *pEvent);	// "CBaseAnimating::DisplayAnimEvent": scope trace (entity name); when the global at 0x106ccf0c is not flagged by its slot 1 and its value (+0x2c) is set, formats "Processing anim event at %5.2f %d( %s )" (event time, event id, description from slot 241) into a 256 byte buffer and passes it to slot 18 with 9
	void sub_1008e630(CBaseEntity *pOther);	// "CBaseAnimating::RemoveWind": scope trace (entity name); clears the handle at +0x63c and the two dwords at +0x648/+0x64c unless the handle resolves to a live entity different from pOther
	void sub_10097310(CBaseAnimating *pOther);	// "CBaseAnimating::CopyAnimationDataFrom": scope trace (entity name), copies the model name (slot 212(*pOther->slot 9())) and model index (slot 10(pOther->slot 8())) and nine dwords of animation state (bit 4 added to the flags at +0x19c)

	int sub_10092550(int a);	// "CBaseAnimating::LookupBone"
	void sub_100926e0(int bone, int b, int c);	// "CBaseAnimating::GetBonePosition0"
	void sub_10092610(int a, int b, int c);	// "CBaseAnimating::GetBonePosition01": LookupBone(a), then GetBonePosition0(bone, b, c)
	int sub_10092e20(int a, int b, int c);	// "CBaseAnimating::GetAttachment01": scope trace, then sub_10005d12(sub_100060aa(a, b, c))
	char sub_100931d0(int a, int b, int c);	// "CBaseAnimating::GetAttachmentLocal01": LookupAttachment(a), then GetAttachmentLocal0(index, b, c); returns its flag
	int sub_10092d50(int name);	// "CBaseAnimating::LookupAttachment" (stub 0x100060aa)
	char sub_100932a0(int attachment, int b, int c);	// "CBaseAnimating::GetAttachmentLocal0" (stub 0x10012625), returns a success flag
	int sub_100060aa(int a, int b, int c);
	int sub_10005d12(int a);
	void sub_10093cb0(int a);	// "CBaseAnimating::GetBodygroupName": scope trace, then a studio helper on GetModelPtr(-1)
	void sub_10090bc0(unsigned int flags);	// "CBaseAnimating::AddEffectsForNextSequence": scope trace, ors flags into the dword at +0x5b0
	void sub_10090890(float delay);	// "CBaseAnimating :: MarkEffectStartTime": scope trace, stores delay + curtime at +0x5a4
	void sub_1008d520(inputdata_t *inputdata);	// "CBaseAnimating::InputFadeToSkin": scope trace, then sub_1008d6d0(skin)
	void sub_1008d6d0(int skin);	// "CBaseAnimating::SetSkin"-like, called by InputFadeToSkin
	void sub_1008d450(inputdata_t *inputdata);	// "CBaseAnimating::InputSetSkinFadeTime": scope trace (entity name), then sub_1008d5f0(the input's float, 0 when it is not a float)
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
	int sub_1008d990(int sequence);	// worker of IsValidSequence (stub 0x1000b4f6)
	int sub_10092270(const char *name);	// "CBaseAnimating::LookupPoseParameter" (stub 0x10009ac5): scope trace (entity name), index of the first of 0x18 pose parameters of GetModelPtr(-1) whose name matches (case-insensitive), else -1
	const char *sub_1008fe80(int sequence);	// "CBaseAnimating::GetSequenceName": scope trace (entity name), the name string at the offset in the first dword of the sequence description sub_1008d990 finds, "SEQUENCE_NOT_FOUND" when there is none
	const char *sub_1008ff50(int sequence);	// "CBaseAnimating::GetSequenceActivityName": as GetSequenceName with the offset in the second dword, "SEQUENCE_NOT_FOUND" when there is none

	// Slot 249, called directly so far; declared as a plain member.
	float vfunc249();	// "CBaseAnimating::GetIdealAccel": slot 248 + constant
	int vfunc252(int a, int b, int c);	// "CBaseAnimating::SelectWeightedSequenceForStat": scope trace, then sub_1008dc40(a, -1)
	int vfunc253(int a, int b, int c);	// "CBaseAnimating::SelectHeaviestSequenceForStat": scope trace, then sub_1008dd30(a, -1)
	int vfunc254(int a, int b, int c);	// "CBaseAnimating::SelectSameSequenceForStat": scope trace, then sub_1008de20(a, -1)
	bool vfunc68(CBaseEntity *pOther);	// slot 68 "CBaseAnimating::ShouldIgnoreCollision": scope trace (entity name), returns the result of sub_10158b90(this, pOther); declared as a plain member
	CBaseAnimating *vfunc5(unsigned int flags);	// as in CSimplePhysicsProp (transplant)
	void sub_10004c3c();	// as in CSimplePhysicsProp (transplant)
	void sub_10091f10(const char *name, float value);	// slot 261 "CBaseAnimating::SetPoseParameter01": scope trace (entity name), then slot 260(LookupPoseParameter(name), value)
	void vfunc103();	// slot 103 "CBaseAnimating::Spawn": scope trace (entity name), CBaseEntity::vfunc103, then initialises the three 4-dword arrays at +0x574 (-2), +0x584 and +0x594 (0)
};
