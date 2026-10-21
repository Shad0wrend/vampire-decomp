// CTriggerImpact: declared by pcdecomp transplant for 0x101cc2c0 from CBaseButton (0x100c8760);
// only what matched code needs, as plain members.
#pragma once

class CTriggerImpact
{
public:
	CTriggerImpact *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	int vfunc124();	// "CTriggerImpact::DrawDebugTextOverlays": the base overlay lines, then (with bit 0 of the flags at +0x224) a "Magnitude: %3.2f" line below them; returns the line count
	int sub_100104e2();	// CBaseTrigger::vfunc124 (DrawDebugTextOverlays), called directly

	char m_pad0000[0x224];
	unsigned char m_flags224;	// 0x224
	char m_pad0225[0x2e0 - 0x225];
	int m_pEdict2e0;	// 0x2e0
	char m_pad02e4[0x5b0 - 0x2e4];
	float m_flMagnitude;	// 0x5b0
};
