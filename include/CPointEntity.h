// CPointEntity (RTTI CPointEntity : CBaseEntity), vtable 0x1044b584: point entity; no members of its own.
// Its constructor is CBaseEntity(0) (stub 0x100090fc) and then the vftable store; CMessage and the other point
// entities derive from it. The real CBaseEntity is 0x450 bytes; ours ends at 0x3e0.
#pragma once

#include "CBaseEntity.h"

#define CPOINTENTITY_BASED

void *sub_100aa720(unsigned int size);	// the entities' operator new (stub 0x1000db89)

class CPointEntity : public CBaseEntity
{
public:
	CPointEntity() : CBaseEntity(0) {}
	void *operator new(unsigned int size) { return sub_100aa720(size); }
	void vfunc103();	// slot 103 override: the game's 0x101c0820
	int vfunc117();	// slot 117 override: the game's 0x100b4340
	CPointEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (hides the base slot; VC6 has no covariant returns)

	// slots 134..240 are CBaseEntity's in the game; our CBaseEntity.h has them as plain members, so they start here
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
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226(int a);
	virtual void vfunc227();
	virtual void vfunc228(int a, int b);
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232(int a);
	virtual int vfunc233(int *pList, int maxObjects);
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual int vfunc237();
	virtual void vfunc238(int a, int b, int c, int d);
	virtual void vfunc239();
	virtual void vfunc240();

	void sub_1000cb8a();	// destructor body
	void sub_101c0820();	// slot 103 (Spawn): SetSolid(SOLID_NONE) on the collision property at +0x270 (scope trace "CBaseEntity::SetSolid"), then CBaseEntity::sub_100b3b00()
	void sub_1009d980(char bAddAsDefault);	// CBaseEntity::CBaseEntity body (entity base constructor, stub 0x100090fc)

	char m_pad03e0[0x450 - 0x3e0];	// the rest of CBaseEntity
};
