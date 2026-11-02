// CPropSign (RTTI .?AVCPropSign@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right.
#pragma once

struct datamap_t;

#include "CCollisionProperty.h"
#include "COutputEvent.h"

class CBaseEntity;
class CBasePlayer;

struct CPropSignHandle
{
	unsigned int m_Index;
};

class CPropSign;

struct CPropSignUserList	// the 0x1c byte object embedded at +0x74c
{
	char m_pad0000[0x1c];
	void sub_100cd660(CBasePlayer *pPlayer, CPropSign *pOwner, int a);	// stub 0x10010794
};

class CPropSign
{
public:
	    
	    
	    
	    
	    
	    
	    
	    
	void sub_100a4fe0(CBasePlayer *pPlayer);	// CBaseEntity::vfunc39 (stub 0x10015262), called directly by vfunc39
	void sub_100a5030(CBasePlayer *pPlayer);	// CBaseEntity::vfunc42 (stub 0x10010e60), called directly
	char m_pad0004[0x8c - 4];
	CPropSignHandle m_hAttached;	// +0x8c
	char m_pad0090[0x26c - 0x90];
	const char *m_name26c;	// 0x26c
	CCollisionProperty m_Collision;	// 0x270
	char m_pad02b8[0x734 - 0x270 - sizeof(CCollisionProperty)];
	COutputEvent m_Output734;	// 0x734 (fired by vfunc39, destroyed by sub_100cd2d0 in the destructor 0x10211af0)
	CPropSignUserList m_Users74c;	// 0x74c; really an output event (0x18 bytes, destroyed by sub_100cd2d0) followed by the sign text pointer m_pText764 (+0x764, freed with operator delete in the destructor)
	int m_field768;
	void sub_10001a0a();	// as in CPhysForce (transplant)
	void vfunc103();	// slot 103 "CPropSign::Spawn": CBaseProp::vfunc103, then with a studio header: stops the movement (slot 93), makes the entity solid (SetSolid 3), takes the collision bounds from the header (+0xb4 / +0xc0), sets collision group 1 and refreshes the partition (sub_100ddd90) and the entity (sub_100b3b00)
	void sub_1018df70();	// CBaseProp::vfunc103 (stub 0x10011793), called directly
	void *sub_100952d0(int a);	// CBaseAnimating::sub_100952d0 (stub 0x10013d8b): GetModelPtr-like, returns the studio header
	void sub_100adf10(const float *mins, const float *maxs);	// CBaseEntity::SetSize (stub 0x100115e0)
	void sub_100aaa40(int group);	// CBaseEntity::SetCollisionGroup (stub 0x10013c00)
	void sub_100b3b00();	// CBaseEntity::sub_100b3b00 (stub 0x1001514a), called directly
	void sub_102120c0(CBaseEntity *pPlayer);	// sends the user message 0x10726088 to pPlayer (when set): a zero value, the float 0.5f and the engine index of this entity (edict at +0x2e0)
	void sub_10211f10(CBaseEntity *pPlayer);	// like sub_102120c0 with the value 1, followed by the sign's flag byte (+0x76c) and its text (the string at +0x764, else the one at +0x730, else ""); first runs sub_10212200
	void sub_10211af0();	// destructor body (called by vfunc5): vptr, operator delete of the text at +0x764, sub_100cd2d0 on +0x74c and +0x734, then jmp CBaseAnimating::sub_1008b3c0
	void sub_10212200();	// stub 0x10014074, run before the sign text is sent to a player
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPropSign *vfunc5(unsigned int flags);
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
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
	virtual bool vfunc32(void *pEntity);
	virtual int vfunc33();
	virtual bool vfunc34(int a);
	virtual int vfunc35(int a);
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39(CBasePlayer *pPlayer);	// slot 39 override (0x10211db0): CBaseEntity::vfunc39 (sub_100a4fe0, stub 0x10015262), fires the output at +0x734 (player, this, 0), sends the sign text (sub_10211f10), then sub_1015ef40 and sub_10181580(1) on the player
	virtual void vfunc40();
	virtual void vfunc41(CBasePlayer *pPlayer);
	virtual void vfunc42(CBasePlayer *pPlayer);	// slot 42 override: CBaseEntity::vfunc42, registers the player with the user list at +0x74c, sub_102120c0, then slot 192 (the center) is handed to the player (sub_10178590), sub_1015ef40 / sub_1015ef60 and clears flag bit 1 (sub_101815b0(1)) of the player
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
	virtual datamap_t * vfunc82();
};
