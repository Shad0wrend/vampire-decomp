// CBaseAnimating: entity with a studio model (CBaseToggle -> CBaseEntity).
#pragma once

#include "CBaseEntity.h"
#include "inputdata_t.h"

class CBaseAnimating : public CBaseEntity
{
public:
	void *sub_100952d0(int a);	// GetModelPtr-like, returns the studio header
	int sub_100945e0(int index);	// "CBaseAnimating::GetFlexDescFacs"
	void sub_10091c80();	// "CBaseAnimating::OnSequenceFinish" scope only
	float sub_10091740();	// "CBaseAnimating::GetIdealSpeed": returns the float at +0x654
	float sub_1008d190();	// "CBaseAnimating::GetGroundSpeedScalar": returns the float at +0x564
	void sub_1008d0f0(float scalar);	// "CBaseAnimating::SetGroundSpeedScalar": stores the float at +0x564
	char sub_100903e0();	// "CBaseAnimating::IsRagdoll": (field at +0x168) == 0x17
	void sub_10096490(int set);	// "CBaseAnimating::SetHitboxSet": stores the argument at +0x680
	void sub_100963d0();	// "CBaseAnimating::ResetClientsideFrame": scope trace, stores a global-object value at +0x710 and 1 at +0x1b1
	void sub_100977f0(int bone);	// "CBaseAnimating::TurnOnPhysicsChain": scope trace, clears bit (1 << bone) in the dword at +0x72c
	void sub_100978c0(int bone);	// "CBaseAnimating::TurnOffPhysicsChain": scope trace, sets bit (1 << bone) in the dword at +0x72c
	void sub_100904a0();	// "CBaseAnimating::ClearAllClientRagdollData"-like: scope trace (entity name), resets the four 3-int arrays at +0x574 (-2), +0x584 and +0x594 (0), and +0x168 from 0x17 to 0
	bool sub_1008be20(CBaseEntity *pOther);	// "CBaseAnimating::IsIgnoreCollisionEntity": scope trace (entity name), true when the entity behind the handle at +0x55c is pOther

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
	int sub_1008dac0(int a, char *bufB, char *bufA, int b);	// "CBaseAnimating::SelectWeightedSequence" worker (fills two 0x2000-byte buffers)
	int sub_1008dc40(int a, int b);	// "CBaseAnimating::SelectWeightedSequence": scope trace, worker, then a sort-like helper
	int sub_1008dd30(int a, int b);	// "CBaseAnimating::SelectHeaviestSequence"-like, called by vfunc253
	int sub_1008de20(int a, int b);	// "CBaseAnimating::SelectSameSequence"-like worker, called by vfunc254
	int sub_10093ef0();	// "CBaseAnimating::GetNumBodyGroups": scope trace, then a studio helper on GetModelPtr(-1)
	void sub_1008f540();	// "CBaseAnimating::ResetActivityIndexes ": scope trace, then a studio helper on GetModelPtr(-1)
	int sub_10096760();	// "CBaseAnimating::GetHitboxSetCount": scope trace, then a studio helper on GetModelPtr(-1)

	// Slot 249, called directly so far; declared as a plain member.
	float vfunc249();	// "CBaseAnimating::GetIdealAccel": slot 248 + constant
	int vfunc252(int a, int b, int c);	// "CBaseAnimating::SelectWeightedSequenceForStat": scope trace, then sub_1008dc40(a, -1)
	int vfunc253(int a, int b, int c);	// "CBaseAnimating::SelectHeaviestSequenceForStat": scope trace, then sub_1008dd30(a, -1)
	int vfunc254(int a, int b, int c);	// "CBaseAnimating::SelectSameSequenceForStat": scope trace, then sub_1008de20(a, -1)
	CBaseAnimating *vfunc5(unsigned int flags);	// as in CSimplePhysicsProp (transplant)
	void sub_10004c3c();	// as in CSimplePhysicsProp (transplant)
};
