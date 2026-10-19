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

	int sub_10092550(int a);	// "CBaseAnimating::LookupBone"
	void sub_100926e0(int bone, int b, int c);	// "CBaseAnimating::GetBonePosition0"
	void sub_10092610(int a, int b, int c);	// "CBaseAnimating::GetBonePosition01": LookupBone(a), then GetBonePosition0(bone, b, c)
	void sub_10093cb0(int a);	// "CBaseAnimating::GetBodygroupName": scope trace, then a studio helper on GetModelPtr(-1)
	void sub_10090bc0(unsigned int flags);	// "CBaseAnimating::AddEffectsForNextSequence": scope trace, ors flags into the dword at +0x5b0
	void sub_1008d520(inputdata_t *inputdata);	// "CBaseAnimating::InputFadeToSkin": scope trace, then sub_1008d6d0(skin)
	void sub_1008d6d0(int skin);	// "CBaseAnimating::SetSkin"-like, called by InputFadeToSkin
	int sub_1008dac0(int a, char *bufB, char *bufA, int b);	// "CBaseAnimating::SelectWeightedSequence" worker (fills two 0x2000-byte buffers)
	int sub_1008dc40(int a, int b);	// "CBaseAnimating::SelectWeightedSequence": scope trace, worker, then a sort-like helper
	int sub_1008dd30(int a, int b);	// "CBaseAnimating::SelectHeaviestSequence"-like, called by vfunc253
	int sub_1008de20(int a, int b);	// "CBaseAnimating::SelectSameSequence"-like worker, called by vfunc254
	int sub_10093ef0();	// "CBaseAnimating::GetNumBodyGroups": scope trace, then a studio helper on GetModelPtr(-1)
	int sub_10096760();	// "CBaseAnimating::GetHitboxSetCount": scope trace, then a studio helper on GetModelPtr(-1)

	// Slot 249, called directly so far; declared as a plain member.
	float vfunc249();	// "CBaseAnimating::GetIdealAccel": slot 248 + constant
	int vfunc252(int a, int b, int c);	// "CBaseAnimating::SelectWeightedSequenceForStat": scope trace, then sub_1008dc40(a, -1)
	int vfunc253(int a, int b, int c);	// "CBaseAnimating::SelectHeaviestSequenceForStat": scope trace, then sub_1008dd30(a, -1)
	int vfunc254(int a, int b, int c);	// "CBaseAnimating::SelectSameSequenceForStat": scope trace, then sub_1008de20(a, -1)
	CBaseAnimating *vfunc5(unsigned int flags);	// as in CSimplePhysicsProp (transplant)
	void sub_10004c3c();	// as in CSimplePhysicsProp (transplant)
};
