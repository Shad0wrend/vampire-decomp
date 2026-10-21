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
	void sub_100bbe70(float *pStart, const float *pEnd);	// stub 0x10004b3d
	void sub_100bbef0(void *pTrace);	// stub 0x1001326e

	char m_pad0004[0x4b8 - 4];
	float m_flWidth;	// 0x4b8
	char m_pad04bc[0x4c8 - 0x4bc];
	float m_flNoiseAmplitude;	// 0x4c8
	char m_pad04cc[0x4d0 - 0x4cc];
	float m_flTextureScroll;	// 0x4d0
};
