// CPASAttenuationFilter (RTTI .?AVCPASAttenuationFilter@@, vtable 0x104470b0): the players that can hear an origin,
// minus the ones too far for the attenuation (Source's recipientfilter.h). On the stack:
//   CPASAttenuationFilter filter(this);           // entity: GetSoundEmissionOrigin (slot 222, +0x378) is called twice
//   CPASAttenuationFilter filter(vecOrigin, 0.8f); // origin
//   CPASAttenuationFilter filter(this, soundlevel); // a soundlevel_t: attenuation SNDLVL_TO_ATTN(soundlevel)
//   CPASAttenuationFilter filter(this, soundIndex); // an int: the sound level is looked up inside the constructor
//                                                   // (sub_101b19e0, 0x10004480), after AddRecipientsByPAS
// = the origin, the CRecipientFilter constructor call, CPASFilter's vptr, AddRecipientsByPAS(origin), this vptr,
// Filter(origin, attenuation) (0x1019d4b0, stub 0x1000dfa3). ATTN_NORM is 0.8f. The entity constructor takes any class
// that declares `Vector GetSoundEmissionOrigin()` in slot 222 (CEntitySoundOriginView.h has the slot list).
#pragma once

#include "CPASFilter.h"
#include "CRecipientVec.h"

#define ATTN_NONE 0.0f
#define ATTN_NORM 0.8f

#ifndef SNDLVL_TO_ATTN
enum soundlevel_t	// Source's sound levels (dB); a soundlevel_t argument picks the soundlevel constructors below
{
	SNDLVL_NONE = 0,
	SNDLVL_IDLE = 60,
	SNDLVL_TALKING = 60,
	SNDLVL_NORM = 75,
	SNDLVL_GUNFIRE = 140
};
// the game's form: an int division (idiv, then fild), 4.0 a double constant (0x10449148)
#define SNDLVL_TO_ATTN(a) ((a) > 50 ? (20 / ((a) - 50)) : 4.0)
#endif

int sub_101b19e0(int soundIndex);	// the sound level of a sound (stub 0x10004480)

class CPASAttenuationFilter : public CPASFilter
{
public:
	template <class E>
	CPASAttenuationFilter(E *entity, float attenuation = ATTN_NORM) : CPASFilter(entity->GetSoundEmissionOrigin())
	{
		Filter(entity->GetSoundEmissionOrigin(), attenuation);
	}
	CPASAttenuationFilter(const Vector &origin, float attenuation = ATTN_NORM) : CPASFilter(origin)
	{
		Filter(origin, attenuation);
	}
	template <class E>
	CPASAttenuationFilter(E *entity, soundlevel_t soundlevel) : CPASFilter(entity->GetSoundEmissionOrigin())
	{
		Filter(entity->GetSoundEmissionOrigin(), SNDLVL_TO_ATTN(soundlevel));
	}
	CPASAttenuationFilter(const Vector &origin, soundlevel_t soundlevel) : CPASFilter(origin)
	{
		Filter(origin, SNDLVL_TO_ATTN(soundlevel));
	}
	template <class E>
	CPASAttenuationFilter(E *entity, int soundIndex) : CPASFilter(entity->GetSoundEmissionOrigin())
	{
		int soundlevel = sub_101b19e0(soundIndex);
		float attenuation = (float)SNDLVL_TO_ATTN(soundlevel);
		Filter(entity->GetSoundEmissionOrigin(), attenuation);
	}
	CPASAttenuationFilter();	// out of line: the matched source of ??_GCPASAttenuationFilter (0x1002ac40) defines it to make VC6 emit that destructor

	void Filter(const Vector &origin, float attenuation = ATTN_NORM);	// 0x1019d4b0 (stub 0x1000dfa3)
};
