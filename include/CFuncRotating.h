// CFuncRotating: rotating brush entity (CBaseEntity based); only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"

class CFuncRotating : public CBaseEntity
{
public:
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	CFuncRotating *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	float sub_100c0900(float flSpeed);	// scales flSpeed by the first non-zero of the floats at +0x190, +0x194, +0x198
	int vfunc124();	// "DrawDebugTextOverlays": the base's line offset, plus one line ("Speed cur (target)": floats at +0x164 and +0x45c through sub_100c0900) when the text overlay bit (byte at +0x224) is set
	virtual void vfunc103();	// slot 103 "CFuncRotating::Spawn" (0x100bfaa0): volume/attenuation defaults from m_flags204 (0x80 -> 2.0f, 0x100 -> 1.25f, else 0.8f), fan friction default 1.0f, the rotation axis m_vecMovedir from flags 4 (z) / 8 (x) / else y, negated when flag 2 set; scope-traced SetSolid(1); scope-traced AddSolidFlags(4) / RemoveSolidFlags(4) by flag 0x40; slot 93(8,0); sub_100b3b00(); the model name from slot 9 -> slot 105; m_f460 = |m_f460| (100.0f when 0) and m_pfnUse = 0x100130ac; flag 1 -> ThinkSet(sub_100a47b0,0,0) and m_flNextThink = curtime + 1.5; flag 0x20 -> m_pfnTouch = 0x100140ec; m_flSpeed164 = 0; vfunc104(); slot 223()
	virtual void vfunc104();	// slot 104 "CFuncRotating::Precache": precaches the running noise (name at +0x468) when it is set, and with non-zero angles (+0x3c8) schedules the move done function 1.5 seconds on
	void sub_100c0690();	// the move done function installed by Precache (stub 0x1000b884)
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CFuncRotating::KeyValue": "fanfriction" (percent) and "Volume" (tenths, clamped to 0..1), else CBaseEntity::vfunc110
	void vfunc178(CBaseEntity *pOther);	// slot 178 "CFuncRotating::Blocked": a damage info object (this as attacker and inflictor, +0x464 as the damage, bits 1, the last three arguments 0, 0, -1) handed to the entity pOther (CBaseEntity::sub_100a1250)
	bool sub_100c0760(float flStep);	// slows the rotation down: the speed at +0x164 loses (+0x460 * fan friction * a constant), clamped at 0; when that is not above |flStep| the speed becomes flStep (true), else the reduced value (negated for a negative speed) (false); either way handed to sub_100c0420
	void sub_100c01d0();	// "CFuncRotating::RampPitchVol": the volume (|speed +0x164| / max speed +0x460 times +0x458, clamped to 0..1) and the pitch (30 + 70 * that fraction, clamped to 0..255, 99 for 100) of the running noise (+0x468), sent as a reliable change message to the players that hear it
	void sub_100c0420(float flSpeed);
	void sub_100c0010(CBaseEntity *pOther);	// damage and knock back the entity pOther that this rotating brush blocked
	unsigned char sub_100bf8e0();	// CFuncRotating::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)	// stub 0x10002a59: applies the new speed

	void sub_100c0880();	// think function (stub): when sub_100c0760(0) is true calls sub_100c0970(m_flTargetSpeed), else +0x3fc = +0x3f4 + 0.1
	void sub_100c0970(float flSpeed);	// "UpdateSpeed" (the CFloatPair3f4 view declares it too): sets +0x45c = |flSpeed| (negated when byte +0x46c), picks the think function at +0x114

	char m_pad03e0[0x3f4 - sizeof(CBaseEntity)];
	float m_flLocalTime3f4;	// 0x3f4
	char m_pad03f8[4];
	float m_flNextThink3fc;	// 0x3fc
	char m_pad0400[0x450 - 0x400];
	float m_flFanFriction;	// 0x450
	float m_flAttenuation;	// 0x454
	float m_flVolume;	// 0x458
	float m_flTargetSpeed;	// 0x45c
	float m_f460;	// 0x460
	float m_f464;	// 0x464: the damage value of the blocked hit (vfunc178)
	const char *m_pszNoiseRunning;	// 0x468
public:
    virtual datamap_t * vfunc82();
public:
    virtual bool vfunc128();
    virtual int vfunc117();
	bool m_bReversed;	// 0x046c
	char m_pad046d[0x470 - 0x46d];
};
