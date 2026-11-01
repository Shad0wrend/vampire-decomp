// CEnvLaser: laser beam entity (CBeam -> CBaseEntity). Only the constructor chain is modelled: CBeamHead stands for
// the CBeam/CBaseEntity part whose constructor (0x100bac50) the CEnvLaser constructor calls before storing its vtable.
#pragma once

struct datamap_t;

class CBeamHead
{
public:
	CBeamHead();	// 0x100bac50

	virtual void vfunc0();
};

class CEnvLaserSprite
{
public:
	void sub_1042ef70();	// stub 0x1000c3ce, called directly when the laser is switched off
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
	void vfunc104();	// slot 104 "CEnvLaser::Precache" (plain member): precaches the model and sets the model index, then precaches the end sprite texture (+0x4fc) when there is one
	class CEntityVSlots *sub_100bbdf0(const char *pszName);	// CBeam: the entity behind a name (stub 0x10006faf)
	float *sub_100bb440();	// CBeam: the beam's start position (stub 0x10005c45)
	void sub_10101a20();	// turns the laser off: clears bit 6 of the effect flags, switches the end sprite off, stamps +0x454 and sets the think to sub_10101b30
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
	class CEnvLaserSprite *m_pSprite4f8;	// 0x4f8: the end sprite
	const char *m_pszTexture4fc;	// 0x4fc: the sprite texture name (null when unset)
public:
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5_slot();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual const char **vfunc9(int *pOut);	// CBaseEntity slot 9: the model name slot
	virtual void vfunc10(int index);	// CBaseEntity slot 10: SetModelIndex
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	virtual Datamap82 vfunc82();
};
