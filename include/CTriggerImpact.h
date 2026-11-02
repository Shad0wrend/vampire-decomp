// CTriggerImpact: declared by pcdecomp transplant for 0x101cc2c0 from CBaseButton (0x100c8760);
// only what matched code needs, as plain members.
#pragma once

#include "COutputEvent.h"

struct datamap_t;
struct inputdata_t;

class CTriggerImpact
{
public:
	void sub_101cb250(inputdata_t *pInput);	// "CTriggerImpact::InputImpact"-like: the output at +0x5bc is set to the angles vector scaled by the magnitude, fired for the input's activator / caller, the trigger is enabled and thinks again in 0.1s (disables via sub_101c4dd0)
	CTriggerImpact *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	int vfunc124();	// "CTriggerImpact::DrawDebugTextOverlays": the base overlay lines, then (with bit 0 of the flags at +0x224) a "Magnitude: %3.2f" line below them; returns the line count
	void vfunc174(class CBaseEntity *pOther);	// slot 174 "CTriggerImpact::StartTouch": with a physics object on pOther applies a random-varied impulse along the angles (scaled by the magnitude) to it (physics slot 30); with a model on pOther (+0xa8) and a non-zero magnitude also gives pOther a velocity impulse (its slot 169) along the angles scaled by -(+0x5b8 * magnitude) * a constant
	int sub_100104e2();	// CBaseTrigger::vfunc124 (DrawDebugTextOverlays), called directly

	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x224 - 0x180];
	unsigned char m_flags224;	// 0x224
	char m_pad0225[0x2e0 - 0x225];
	int m_pEdict2e0;	// 0x2e0
	char m_pad02e4[0x5b0 - 0x2e4];
	float m_flMagnitude;	// 0x5b0
	float m_flRandomness;	// 0x5b4
	float m_f5b8;	// 0x5b8
	COutputEvent m_out5bc;	// 0x5bc: the output whose value is set from the angles * magnitude
public:
	datamap_t * vfunc82();
	int vfunc103();
	void vfunc171();
};
