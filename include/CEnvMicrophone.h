// CEnvMicrophone (RTTI .?AVCEnvMicrophone@@): CPointEntity -> CBaseEntity.
// primary vtable 0x1045963c (241 slots). Only what recovered code needs.
#pragma once

#include "CPointEntity.h"
#include "CBaseHandle.h"
#include "COutputFloat.h"

struct CSound;

class CEnvMicrophone : public CPointEntity
{
public:
	CEnvMicrophone() {}
	virtual void vfunc103();	// slot 103 "CEnvMicrophone::Spawn": collects the speaker flags from the spawn flags (table of 4 pairs at 0x10569a70), clamps the sensitivity (+0x45c: 0 gives 1.0, above 10.0 gives 10.0) and the smoothing factor (+0x460: 0.0 .. 0.9), and schedules the first think 0.1 after curtime unless the byte at +0x450 says it is disabled
	virtual void vfunc113();	// slot 113 "CEnvMicrophone::Activate": CBaseEntity::vfunc113, then resolves the measure target named at +0x20c into the handle at +0x454 (Warning "EnvMicrophone - Measure target not found..." when it is gone or has no edict), a missing name falls back to the entity itself (slot 1)
	virtual void vfunc134();	// slot 134 "CEnvMicrophone::Think": the loudest sound the speakers (+0x458 flags) can hear (sub_10102730 per active sound), smoothed with the factor at +0x460 into the SoundLevel output (+0x464, fired when the level changed), then the next think 0.1 s ahead
	bool sub_10102730(CSound *pSound, float *pLevel);	// stub 0x1001343a: the level of the sound as heard by the measure target; false when it is out of range

	char m_bDisabled;	// 0x450
	char m_padEM451[3];
	CBaseHandle m_hMeasureTarget;	// 0x454
	unsigned int m_nSpeakerFlags;	// 0x458
	float m_flSensitivity;	// 0x45c
	float m_flSmoothFactor;	// 0x460
	COutputFloat m_SoundLevel;	// 0x464
public:
    virtual datamap_t * vfunc82();
    virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (VC6 has no covariant returns)	// as in CNPC_VGargoyle (transplant)
};
