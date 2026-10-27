// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cba80 size=0x6
#include "CTriggerEnvAudio.h"
namespace lifted {
extern char g_1059e878;
}
datamap_t * CTriggerEnvAudio::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e878);
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
