// CAI_BaseHumanoidSlots: virtual-slot call helpers for CAI_BaseHumanoid code. The class header
// (CAI_BaseHumanoid.h) models the slots as plain members, so the slots called virtually go through
// the object's vtable (the CAIHintSlots idiom). A __fastcall pointer gives
// `mov edx, [ecx]; call [edx + N*4]` with the extra argument pushed (ecx = this, edx = unused).
#pragma once

typedef float (__fastcall *CAI_HumanoidPoseGet)(void *pThis, void *pEdx, int index);
typedef float (__fastcall *CAI_HumanoidPoseSet)(void *pThis, void *pEdx, int index, float value, int a);

inline float CAI_Humanoid_GetPoseParameter(void *pThis, int index)
{
	return (*(CAI_HumanoidPoseGet **)pThis)[281](pThis, 0, index);	// slot 281 (+0x464) GetPoseParameter: the pose parameter value
}

inline float CAI_Humanoid_SetPoseParameter(void *pThis, int index, float value)
{
	return (*(CAI_HumanoidPoseSet **)pThis)[346](pThis, 0, index, value, 0);	// slot 346 (+0x568) SetPoseParameter: the set value
}
