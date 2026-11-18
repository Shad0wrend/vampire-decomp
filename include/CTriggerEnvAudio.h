// CTriggerEnvAudio (RTTI .?AVCTriggerEnvAudio@@): trigger_env_audio, only the members that recovered code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerEnvAudio : public CBaseTrigger
{
public:
	void vfunc175(CBaseEntity *pOther);	// slot 175: CBaseEntity::vfunc175(pOther); then, when pOther's object at +0xa8 is set, passes the id the trigger holds at +0x598 to 0x1000b6d1 (tail call)
	void vfunc176(CBaseEntity *pOther);	// slot 176: CBaseTrigger::vfunc176(pOther); then, when pOther's object at +0xa8 has the id the trigger holds at +0x598, stops that object (its member 0x1000b6d1 with -1)
	void sub_101753a0(int value);	// stores value at +0x1e08, then +0x1e0c = g_1070b22c->vfunc120() (the engine's dword answer)

	int m_i598;	// 0x598: the id of the object the trigger started
public:
    virtual datamap_t * vfunc82();
    void sub_101c5080();	// as in CTriggerPlayerActivityLevel (transplant)
    void vfunc103();	// as in CTriggerPlayerActivityLevel (transplant)
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
