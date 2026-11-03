// CFunc_LOD (RTTI .?AVCFunc_LOD@@): func_lod entity. Declared flat on top of the stub entity base from CConstraintAnchor.h.
#pragma once
#include "CConstraintAnchor.h"

class CFunc_LOD : public CConstraintAnchorBase
{
public:
	CFunc_LOD();
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CConstraintAnchor *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc103();	// "CFunc_LOD::Spawn": sets the model from slot 9's name (slot 105), SetSolid(1) (inlined scope trace), CBaseEntity::vfunc103, then slot 223
	virtual void s107(); virtual void s108(); virtual void s109();
	virtual bool vfunc110(const char *key, const char *value);	// "CFunc_LOD::KeyValue": "Solid" with a non-zero value adds solid flag 4 (inlined AddSolidFlags), else CBaseEntity::KeyValue
public:
	virtual int vfunc81();
	virtual int vfunc80();
	virtual datamap_t *vfunc82();	// slot 82 GetDataDescMap (0x10114990)
	virtual void vfunc111();	// slot 111: CBaseEntity's 0x10026bb0 in the game
	virtual void vfunc112();
	virtual void vfunc113();
	virtual void vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
	unsigned char sub_10114a50();	// CFunc_LOD::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)
	virtual int vfunc117();
	virtual void vfunc118();
	virtual void vfunc119();
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual void vfunc124();
	virtual void vfunc125();
	virtual void vfunc126();
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141();
	virtual void vfunc142();
	virtual void vfunc143();
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166();
	virtual void vfunc167();
	virtual void vfunc168();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174();
	virtual void vfunc175();
	virtual void vfunc176();
	virtual void vfunc177();
	virtual void vfunc178();
	virtual void vfunc179();
	virtual void vfunc180();
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
	virtual void vfunc194();
	virtual void vfunc195();
	virtual void vfunc196();
	virtual void vfunc197();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207();
	virtual void vfunc208();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212();
	virtual void vfunc213();
	virtual void vfunc214();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217();
	virtual void vfunc218();
	virtual void vfunc219();
	virtual void vfunc220();
	virtual void vfunc221();
	virtual void vfunc222();
	virtual bool vfunc223();
	char m_pad0004[0x454 - 0x4];
};
