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
	void vfunc103();	// "CBaseEntity::SetSolid"-style scope trace (entity name) around the collision property's SetSolid(0), then SetMoveType(0, 0) (slot 93); clears the dword at +0x45c when bit 0 of the byte at +0x204 is set
	void sub_10100f90(inputdata_t &inputdata);	// an input handler (stub of the shake command): picks the command bits from the spawn flags at +0x204 (1: everyone, 8: in air, 2: ...), then shakes the screens of everyone around the origin (flag 4 clear) or only of the activator when it answers slot 162; amplitude +0x450, frequency +0x454; then fires the output at +0x458 for the activator

	float Amplitude() const { return m_flAmplitude; }
	float Frequency() const { return m_flFrequency; }

	char m_padShake[0x450 - 0x3e0];
	float m_flAmplitude;	// 0x450
	float m_flFrequency;	// 0x454
	COutputEvent m_Output458;	// 0x458
};
