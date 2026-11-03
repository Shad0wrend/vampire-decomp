// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010bde0 size=0x6
#include "datamap.h"
#include "CEnvFireSensor.h"
namespace lifted {
extern char g_1056d1ac;
}
datamap_t *CEnvFireSensor::vfunc82()
{
    return (datamap_t *)&lifted::g_1056d1ac;
}
// END FUNCTION

// FUNCTION: 0x1010bfb0 size=0x13
#include "CEnvFireSensor.h"

struct CEnvFireSensorView
{
	void sub_1010c190();
};

void CEnvFireSensor::vfunc103()
{
	if (*(unsigned int *)((char *)this + 0x204) & 1)
		sub_1010c150();
	else
		((CEnvFireSensorView *)this)->sub_1010c190();
}
// END FUNCTION

// FUNCTION: 0x1010bfe0 size=0x11d
#include "vampire_all.h"
#include "CEnvFireSensor.h"
#include "CEntityVSlots.h"
#include "COutputEvent.h"


struct CFireHeatView {
	char m_pad0000[0x46c];
	float m_flHeat;
};

int sub_10108f60(CFireHeatView **pList, int nMax, int flag, const Vector *pOrigin, float flRadius);

struct CEnvFireSensorView : CEntityVSlots {
	char m_pad0004[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x450 - 0x180];
	char m_bEnabled;	// 0x450
	char m_bTriggered;	// 0x451
	char m_pad0452[2];
	float m_flRadius;	// 0x454
	float m_flLevel;	// 0x458
	float m_flTime;	// 0x45c
	float m_flAccum;	// 0x460
	COutputEvent m_OnStart;	// 0x464
	COutputEvent m_OnEnd;	// 0x47c
};

// TARGET: CEnvFireSensor::vfunc134
void CEnvFireSensor::vfunc134()
{
	CEnvFireSensorView *p = (CEnvFireSensorView *)this;
	if (p->m_bEnabled) {
		float flInterval = p->m_flTime * 0.25;
		if (flInterval < 0.1)
			flInterval = 0.1f;
		p->m_flNextThink = flInterval + gpGlobals->curtime;

		CFireHeatView *pFires[128];
		float flHeat = 0.0f;
		int nFires = sub_10108f60(pFires, 128, 1, p->slot217(), p->m_flRadius);
		for (int i = 0; i < nFires; i++)
			flHeat += pFires[i]->m_flHeat;

		if (flHeat >= p->m_flLevel) {
			p->m_flAccum = flInterval + p->m_flAccum;
			if (p->m_flAccum >= p->m_flTime && !p->m_bTriggered) {
				p->m_bTriggered = 1;
				p->m_OnStart.sub_100cd660(p, p, 0.0f);
			}
		} else {
			p->m_flAccum = 0.0f;
			if (p->m_bTriggered) {
				p->m_bTriggered = 0;
				p->m_OnEnd.sub_100cd660(p, p, 0.0f);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1010c250 size=0x36
#include "CEnvFireSensor.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CEnvFireSensor *CEnvFireSensor::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x47c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x464))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
