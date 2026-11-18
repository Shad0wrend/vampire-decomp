// CEnvLaser: laser beam entity (CBeam -> CBaseEntity). Its base members live in CBeam.h / CBaseEntity.h;
// the old names m_flWidth / m_flLastUpdate454 are unions there.
#pragma once

#include "CBeam.h"

struct datamap_t;

class CEnvLaserSprite
{
public:
	void sub_1042ef70();	// stub 0x1000c3ce, called directly when the laser is switched off
};

class CEnvLaser : public CBeam
{
public:
	CEnvLaser();	// 0x10101480

	virtual void vfunc0();
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CEnvLaser::KeyValue": width, NoiseAmplitude and TextureScroll are stored as floats (+0x4b8 / +0x4c8 / +0x4d0), texture is handed to slot 212 as a pooled string, everything else goes to CBaseEntity::vfunc110; always true
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
	void sub_10101a90(void *pTrace);	// "CEnvLaser::UpdateEndPos"-like: stores the trace's end position (+0xc) as the beam end (+0x4d8), moves the end sprite (+0x4f8) there and, once 0.1 s have passed since the time at +0x454, relinks the beam
	float *sub_100bb270();	// CBeam::sub_100bb270 (stub 0x1001471d), called directly
	virtual void vfunc104();	// slot 104 "CEnvLaser::Precache": precaches the model and sets the model index, then precaches the end sprite texture (+0x4fc) when there is one
	virtual void vfunc103();	// slot 103 "CEnvLaser::Spawn" (0x101014e0): GetModelName empty -> SetThink(SUB_Remove); else SetSolid(0) scope, SetThink(sub_10101b30), +0x4bc = width * 0.1, sub_100bb870(vfunc220(), vfunc220()), sub_100b3b00, Precache (vfunc104), end sprite (+0x4f8) created from the texture (+0x4fc) with SetParent(move parent, 0) and the colour bytes copied, then on / off
	class CEntityVSlots *sub_100bbdf0(const char *pszName);	// CBeam: the entity behind a name (stub 0x10006faf)
	float *sub_100bb440();	// CBeam: the beam's start position (stub 0x10005c45)
	void sub_10101a20();	// turns the laser off: clears bit 6 of the effect flags, switches the end sprite off, stamps +0x454 and sets the think to sub_10101b30
	void sub_10101b30();	// the laser's think: traces from its origin to the end entity / end position, draws the trace in debug mode, updates the end sprite
	void sub_100bbe70(float *pStart, const float *pEnd);	// stub 0x10004b3d
	void sub_100bbef0(void *pTrace);	// stub 0x1001326e

	char m_pad04e4[0x4f4 - 0x4e4];
	const char *m_pszEndEntity4f4;	// 0x4f4: name of the end entity (null when unset)
	class CEnvLaserSprite *m_pSprite4f8;	// 0x4f8: the end sprite
	const char *m_pszTexture4fc;	// 0x4fc: the sprite texture name (null when unset)

	virtual datamap_t * vfunc82();
	CEnvLaser *sub_10101480();	// as in CKeepUpright (transplant)
	float m_flStartFrame;	// 0x0500
};
