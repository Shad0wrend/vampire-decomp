// CItemContainer: lootable container. Layout declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

struct datamap_t;

#include "COutputEvent.h"

class CBaseEntity;

struct CItemContainerHandle
{
	unsigned int m_Index;
};

class CVDmg_t;

struct CItemDamageInfo	// the damage info of slot 142 (OnTakeDamage)
{
	CVDmg_t *m_pDmg;	// 0x00: the damage record, or null
	char pad04[0x2c - 4];
	CBaseEntity *m_pAttacker;	// 0x2c
	float m_flDamage;	// 0x30: used without a damage record
};

class CItemContainer
{
public:
	char pad0[0xb4];
	int m_nVSoundGroupb4;	// 0xb4
	char padb8[0x1fc - 0xb8];
	int m_nTakeDamage1fc;	// 0x1fc
	int m_nField200;	// 0x200: 2 once the container is broken
	char pad204[0x210 - 0x204];
	int m_iHealth;	// 0x210
	char pad214[0x498 - 0x214];
	int m_nState498;	// 0x498
	int m_nState49c;	// 0x49c
	char pad4a0[0x19b0 - 0x4a0];
	COutputEvent m_Output19b0;	// 0x19b0: destroyed last of the three outputs
	COutputEvent m_Output19c8;	// 0x19c8
	COutputEvent m_Output19e0;	// 0x19e0: the break output
	char pad19f8[0x1a28 - 0x19f8];
	CItemContainerHandle m_hUser;	// EHANDLE at +0x1a28 (the entity using the container)
	CItemContainerHandle m_hLock;	// EHANDLE to the CItemContainerLock
	const char *m_pszBreakModel1a30;	// 0x1a30: the model of the broken container

	void *sub_10209a20();	// returns the lock entity (dynamic_cast<CItemContainerLock *>) or NULL
	char sub_100eef10();	// stub 0x100127ec: asked by the lock; true when the container is open (the byte at +0x1480)
	char sub_100eedd0();	// stub 0x1000cc57: asked by the lock's slot 35 when the lock is closed (the byte at +0x1480 clear)
	void vfunc71();
	void vfunc113();	// slot 113: CBaseEntity::vfunc113, then sets the use function (+0x1f0) to CBaseToggle::sub_101c1dc0
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	void vfunc103();	// slot 103 (0x10209350): see CItemContainer_vfunc103.h for the derived view with the base chain and the 12 precache strings
	void vfunc104();	// base vfunc104, precaches the model name (slot 9) and the break model
	CItemContainer *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10005718();	// as in CPhysForce (transplant)
	unsigned int vfunc35(int unused);	// slot 35: 0 while the handle at +0x1a28 names a live entity (the entity list entry's serial matches), else the dword at +0x1a34
	void vfunc350(int unused);	// when the handle at +0x1a28 resolves, sub_1000e020(that entity, 1)
	void sub_1000e020(CBaseEntity *pEnt, int flag);
	void sub_103411c0(CBaseEntity *pEnt, int flag);	// CBaseCombatCharacter member (stub 0x10007e73), called directly
	void sub_101c1720();	// CBaseToggle::vfunc133 (stub 0x10013912), called directly
	void vfunc133();	// slot 133: after the base, acts on the user (+0x1a28) by the state pair (+0x49c, +0x498)
	CItemContainer *sub_102087e0();	// constructor body: base constructor (stub 0x100046c9), the three embedded lists at +0x19b0 / +0x19c8 / +0x19e0, the vftable, the open flag (+0x1480), the lock and user handles (-1)
	void sub_10208b00();	// destructor body (called by vfunc5 via stub 0x10005718): vptr = 0x10483d14, ~COutputEvent (sub_100cd2d0) of +0x19e0, +0x19c8, +0x19b0, then tail jmp to the base destructor body 0x103274d0 (CBaseCombatCharacter, stub 0x100078c4)
	void sub_100046c9();	// base class constructor body (stub 0x100046c9)
	int vfunc142(CItemDamageInfo *pInfo);	// slot 142 \"OnTakeDamage\": subtracts the damage from the health (+0x210); breaks the container (attacker as activator) when it reaches 0 and returns 0, else 1; 1 when it takes no damage
	void sub_10209b20(CBaseEntity *pActivator);	// breaks the container (called by the damage slot 142): unless it is already broken switches to the break model (slot 105, slot 225, a vphysics object and its slot 24), removes flag 0x20000000, marks it broken (+0x200 = 2, +0x1fc = 0), removes the lock entity and fires the break output at +0x19e0; \"Broken container ... invalid break model\" warning for a container without one
public:
	bool vfunc72(int);
	datamap_t * vfunc82();
	int vfunc117();
	bool vfunc294(int);
	void vfunc316(int, int, int);
	bool vfunc317(int);
	bool vfunc318(int, int, int);
	bool vfunc319(int, int, int);
	bool vfunc320(int, int);
	void vfunc330(int, int);
	bool vfunc362(int);
	bool vfunc363(int);
	bool vfunc364(int);
	bool vfunc365(int);
	bool vfunc377(int, int);
	bool vfunc378(int, int);
	int vfunc383(int, int);
	bool vfunc388(int, int);
	void vfunc406();	// slot 406 (plain member): state +0x49c 1 -> sub_101c1bc0(state), 2 -> sub_101c1bc0(3)
	void sub_101c1bc0(int a);	// CBaseToggle member (stub 0x1000d90e), called directly
	bool vfunc408();
	bool vfunc409();
	int vfunc370(int a);	// as in CNPCMaker (transplant)
	int vfunc371(int a);	// as in CNPCMaker (transplant)
};
