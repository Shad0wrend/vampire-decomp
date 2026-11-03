// CEnvShake: declared by pcdecomp transplant for 0x10102cc0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

class CEnvShake : public CBaseEntity
{
public:
	CEnvShake *vfunc5(unsigned int flags);
	void sub_100117f2();
	void sub_10102c80();	// 0x10102c80: vtable store, DestroySpring of the controller at +0x478 (env slot 40), then the CBaseEntity destructor body (stub 0x1000cb8a)
	void vfunc103();	// "CBaseEntity::SetSolid"-style scope trace (entity name) around the collision property's SetSolid(0), then SetMoveType(0, 0) (slot 93); clears the dword at +0x45c when bit 0 of the byte at +0x204 is set
	virtual void vfunc134();	// slot 134, the shake think: every 1 / frequency seconds new random extents (maxForce at +0x46c, normalised and scaled by the current amplitude +0x468), then the shake vector (+0x480) follows sin(frequency / fraction * curtime) and decays; once the duration is over (fraction < 0) the effect object at +0x478 is told (slot 6)
	void sub_10102dd0(int cmd);
	void sub_10100f90(inputdata_t &inputdata);	// an input handler (stub of the shake command): picks the command bits from the spawn flags at +0x204 (1: everyone, 8: in air, 2: ...), then shakes the screens of everyone around the origin (flag 4 clear) or only of the activator when it answers slot 162; amplitude +0x450, frequency +0x454; then fires the output at +0x458 for the activator

	float Amplitude() const { return m_flAmplitude; }
	float Frequency() const { return m_flFrequency; }

	char m_padShake[0x450 - 0x3e0];
	float m_flAmplitude;	// 0x450
	float m_flFrequency;	// 0x454
	COutputEvent m_Output458;	// 0x458
public:
    virtual datamap_t * vfunc82();
	char m_pad0470[0x48c - 0x470];
};
