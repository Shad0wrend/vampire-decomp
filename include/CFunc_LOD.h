// CFunc_LOD (RTTI CFunc_LOD : CBaseEntity, vtable 0x104612ac): func_lod entity.
#pragma once
#include "CBaseEntity.h"

struct datamap_t;

class CFunc_LOD : public CBaseEntity
{
public:
	CFunc_LOD();
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (0x10114a70, matched as the free __fastcall sub_10114a70)
	virtual int vfunc80();
	virtual int vfunc81();
	virtual datamap_t *vfunc82();	// slot 82 GetDataDescMap (0x10114990)
	virtual void vfunc103();	// "CFunc_LOD::Spawn": sets the model from slot 9's name (slot 105), SetSolid(1) (inlined scope trace), CBaseEntity::vfunc103, then slot 223
	virtual bool vfunc110(const char *key, const char *value);	// "CFunc_LOD::KeyValue": "Solid" with a non-zero value adds solid flag 4 (inlined AddSolidFlags), else CBaseEntity::KeyValue
	virtual void vfunc113();	// a tail call of CBaseEntity::vfunc113
	virtual int vfunc117();	// 0x10114a50, matched as sub_10114a50
	unsigned char sub_10114a50();	// CFunc_LOD::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)

	// slots 134..222 are CBaseEntity's in the game; our CBaseEntity.h has them as plain members, so they start here
	// (as in CPointEntity); 223 is CFunc_LOD's own
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual bool vfunc140(CBaseEntity *pAttacker);
	virtual void vfunc141();
	virtual void vfunc142();
	virtual int vfunc143(float flHealth, int bitsDamageType);
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual int vfunc153();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual bool vfunc158();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual bool vfunc161(const char *name);
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
	virtual void vfunc174(CBaseEntity *pOther);
	virtual void vfunc175(CBaseEntity *pOther);
	virtual void vfunc176(CBaseEntity *pOther);
	virtual void vfunc177();
	virtual void vfunc178(CBaseEntity *pOther);
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
	virtual int vfunc196(int a);
	virtual int vfunc197(int a, int b, int c, int d);
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202(CBaseEntity *pOwner);
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual bool vfunc207();
	virtual void vfunc208(CBaseEntity *pEnt);
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212(int set);
	virtual void vfunc213(const float *size);
	virtual float * vfunc214();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual float * vfunc217();
	virtual void vfunc218(const float *absAngles);
	virtual float * vfunc219();
	virtual float * vfunc220();
	virtual float * vfunc221();
	virtual int vfunc222(int a);
	virtual bool vfunc223();

	char m_pad03e0[0x450 - 0x3e0];	// the rest of CBaseEntity
	float m_fDisappearDist;	// 0x0450
};
