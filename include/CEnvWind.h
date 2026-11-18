// CEnvWind: env_wind entity (derived from CBaseEntity at +0x0). Only what the matched functions need.
#pragma once

#include "CBaseEntity.h"

class CEnvWind : public CBaseEntity
{
public:
	virtual void vfunc113();
	virtual void vfunc103();	// slot 103 "CEnvWind::Spawn": the base, then SetSolid(6 when the entity of the handle at +0x254 resolves, else 1), AddSolidFlags(4), AddSolidFlags(8), SetMoveType(0, 0), SetModel(name), and bit 6 of the effect flags (+0x19c)

	void sub_100a53d0(int a);
	unsigned char sub_100fe6e0();	// CEnvWind::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141(int, int, int);
	virtual void vfunc142();
	virtual void vfunc143_slot();
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153_slot();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158_slot();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161_slot();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166();
	virtual void vfunc167();
	virtual void vfunc168_slot();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174(CBaseEntity *pOther);
	virtual void vfunc175_slot();
	virtual void vfunc176_slot();
	virtual void vfunc177();
	virtual void vfunc178_slot();
	virtual void vfunc179();
	virtual void vfunc180_slot();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185();
	virtual void vfunc186();
	virtual void vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual void vfunc190();
	virtual void vfunc191();
	virtual void vfunc192();
	virtual void vfunc193();
	virtual void vfunc194_slot();
	virtual void vfunc195_slot();
	virtual void vfunc196_slot();
	virtual void vfunc197_slot();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202_slot();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207_slot();
	virtual void vfunc208_slot();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212_slot();
	virtual void vfunc213_slot();
	virtual void vfunc214_slot();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217_slot();
	virtual void vfunc218_slot();
	virtual void vfunc219_slot();
	virtual void vfunc220_slot();
	virtual void vfunc221_slot();
	virtual void vfunc222_slot();
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226_slot();
	virtual void vfunc227();
	virtual void vfunc228_slot();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232_slot();
	virtual void vfunc233_slot();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237_slot();
	virtual void vfunc238_slot();
	virtual void vfunc239();
	virtual void vfunc240();
	virtual void vfunc241(int, int, int, int, int);
	char m_pad03e0[0x450 - 0x3e0];
	float m_flWindAngle;	// 0x0450
	float m_flWindChangesPerSecond;	// 0x0454
	float m_flWindMinSpeed;	// 0x0458
	float m_flWindMaxSpeed;	// 0x045c
};
