// CEnvLaser: laser beam entity (CBeam -> CBaseEntity). Only the constructor chain is modelled: CBeamHead stands for
// the CBeam/CBaseEntity part whose constructor (0x100bac50) the CEnvLaser constructor calls before storing its vtable.
#pragma once

class CBeamHead
{
public:
	CBeamHead();	// 0x100bac50

	virtual void vfunc0();
};

class CEnvLaser : public CBeamHead
{
public:
	CEnvLaser();	// 0x10101480

	virtual void vfunc0();
	CEnvLaser *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CEnvLaser::KeyValue" (the position here is not its real slot): width, NoiseAmplitude and TextureScroll are stored as floats (+0x4b8 / +0x4c8 / +0x4d0), texture is handed to slot 212 as a pooled string, everything else goes to CBaseEntity::vfunc110; always true
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
	void sub_10101a90(void *pTrace);	// "CEnvLaser::UpdateEndPos"-like: stores the trace's end position (+0xc) as the beam end (+0x4d8), moves the end sprite (+0x4f8) there and, once 0.1 s have passed since the time at +0x454, relinks the beam (sub_100bbef0 with the trace, sub_100bbe70 between its end entity position and the end)
	float *sub_100bb270();	// CBeam::sub_100bb270 (stub 0x1001471d), called directly
	class CEntityVSlots *sub_100bbdf0(const char *pszName);	// CBeam: the entity behind a name (stub 0x10006faf)
	float *sub_100bb440();	// CBeam: the beam's start position (stub 0x10005c45)
	void sub_10101b30();	// the laser's think: traces from its origin to the end entity / end position, draws the trace in debug mode, updates the end sprite
	void sub_100bbe70(float *pStart, const float *pEnd);	// stub 0x10004b3d
	void sub_100bbef0(void *pTrace);	// stub 0x1001326e

	char m_pad0004[0x17c - 4];
	float m_flLastThink17c;	// 0x17c: the time of the last update
	char m_pad0180[0x19c - 0x180];
	unsigned int m_nEffectFlags;	// 0x19c
	char m_pad01a0[0x454 - 0x1a0];
	float m_flLastUpdate454;	// 0x454
	char m_pad0458[0x4b8 - 0x458];
	float m_flWidth;	// 0x4b8
	char m_pad04bc[0x4c8 - 0x4bc];
	float m_flNoiseAmplitude;	// 0x4c8
	char m_pad04cc[0x4d0 - 0x4cc];
	float m_flTextureScroll;	// 0x4d0
	char m_pad04d4[0x4f4 - 0x4d4];
	const char *m_pszEndEntity4f4;	// 0x4f4: name of the end entity (null when unset)
};
