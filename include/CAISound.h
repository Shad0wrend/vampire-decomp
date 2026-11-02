// CAISound (ai_sound, RTTI .?AVCAISound@@, vtable 0x1047b87c): CPointEntity -> CBaseEntity, only what matched code needs.
#pragma once

#include "CBaseEntity.h"

class CAISound : public CBaseEntity
{
public:
	CAISound *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	datamap_t * vfunc82();

	char m_padSound[0x450 - 0x3e0];
	int m_iSoundType;	// 0x0450: the sound type (and context) handed to InsertSound

	void sub_101bb530(inputdata_t *pInput);	// "InsertSound" input handler: CSoundEnt::InsertSound(m_iSoundType, GetAbsOrigin(), the input's integer (0 unless its type is 4), 0.2f, 0, this)
};
