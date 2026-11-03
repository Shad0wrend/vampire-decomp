// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cba80 size=0x6
#include "datamap.h"
#include "CTriggerEnvAudio.h"
namespace lifted {
extern char g_1059e878;
}
datamap_t * CTriggerEnvAudio::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e878);
}
// END FUNCTION

// FUNCTION: 0x101cbba0 size=0x10
#include "CTriggerEnvAudio.h"

// TARGET: CTriggerEnvAudio::vfunc103
void CTriggerEnvAudio::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101cbc10 size=0x39
// TARGET: CTriggerEnvAudio::vfunc176
#include "CTriggerEnvAudio.h"

struct CUnknownObj101cbc10
{
	int sub_1000a46b();
	void sub_1000b6d1(int a);
};

void CTriggerEnvAudio::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	if (pOther)
	{
		CUnknownObj101cbc10 *pObj = *(CUnknownObj101cbc10 **)((char *)pOther + 0xa8);
		if (pObj)
		{
			if (pObj->sub_1000a46b() == m_i598)
				pObj->sub_1000b6d1(-1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101cc440 size=0x4c
#include "CTriggerEnvAudio.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerEnvAudio::vfunc5
void *CTriggerEnvAudio::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
