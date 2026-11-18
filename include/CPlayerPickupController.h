// CPlayerPickupController (RTTI .?AVCPlayerPickupController@@): base CBaseEntity at +0x0.
// Holds the carry state (object at +0x450, its entity handle at +0x59c) and the player at +0x5cc.
#pragma once
#include "CBaseCombatWeapon.h"

#include "CBaseEntity.h"
#include "CUnknown1040cb60.h"
#include "CBaseCombatCharacter.h"

void *sub_100aa720(unsigned int size);

class CPlayerPickupController : public CBaseEntity
{
public:
	char m_pad03e0[0x450 - sizeof(CBaseEntity)];
	CUnknown1040cb60 m_Carry;	// 0x450
	CBaseCombatCharacter *m_pPlayer;	// 0x5cc

	CPlayerPickupController() : CBaseEntity(0) {}
	void *operator new(unsigned int size) { return sub_100aa720(size); }

	void sub_1040d0a0(char bThrow);	// releases the carried object (m_Carry), passes it to sub_101895d0 with the player and tells the player's active weapon (slot 315), then removes itself
	void sub_1040cfd0(CBaseCombatCharacter *pPlayer, CBaseEntity *pObject);	// "PickupObject"-like: unless the player's active weapon agrees (slot 316), drops everything (sub_1040d0a0(0)); else takes pObject (move type 2 when it was 1), sets the carry flag / constant at +0x490 / +0x495, remembers the player and hands both to the carry object (sub_1040c5d0)
	void sub_100a0670(CBaseEntity *pOwner, int a);	// stub 0x10005650
	bool sub_1040d440(void *pEntity);	// whether the carried object's handle (+0x59c) resolves to pEntity (stub 0x10002360)
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141();
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
	virtual bool vfunc157(int);
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
	virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float flUseValue);
	virtual void vfunc174_slot();
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
	virtual void vfunc226(int a);	// slot 226 (ret 4: one unused stack argument; empty body)
	virtual void vfunc227();
	virtual void vfunc228_slot();
	virtual void vfunc229(int);
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
