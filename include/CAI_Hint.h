// CAI_Hint: an AI hint node entity.
// Only the vtable slots that decompiled code needs are given their real names,
// the others are placeholders that keep the slot indices of the game's primary
// vtable (the slots up to 181 are declared so far).
#pragma once

struct datamap_t;

#include "Vector.h"

// 0x18-byte member objects of CAI_Hint, initialised by sub_100cd2a0.
struct CAI_HintItem
{
	char m_pad[0x18];

	void sub_100cd2a0();
	void sub_100cd2d0();	// destroys the item (stub 0x10015708): the destructor ~CAI_Hint calls it for +0x5f4, +0x5bc and the 8 items below (+0x4fc..)
};

class CAI_Hint
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CAI_Hint *vfunc5(unsigned int flags);
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
	virtual datamap_t * vfunc82();
	virtual void vfunc83();
	virtual void vfunc84();
	virtual void vfunc85();
	virtual void vfunc86();
	virtual void vfunc87();
	virtual void vfunc88();
	virtual void vfunc89();
	virtual void vfunc90();
	virtual void vfunc91();
	virtual void vfunc92();
	virtual void vfunc93();
	virtual void vfunc94();
	virtual void vfunc95();
	virtual void vfunc96();
	virtual void vfunc97();
	virtual void vfunc98();
	virtual void vfunc99();
	virtual void vfunc100();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc103();
	virtual void vfunc104();
	virtual void vfunc105();
	virtual void vfunc106(const char *pszName);
	virtual void vfunc107();
	virtual void vfunc108();
	virtual void vfunc109();
	virtual void vfunc110();
	virtual void vfunc111();
	virtual void vfunc112();
	virtual void vfunc113();
	virtual void vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
	virtual int vfunc117();
	virtual void vfunc118();
	virtual void vfunc119();
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual int vfunc124();	// slot 124 "CAI_Hint::DrawDebugTextOverlays": the base entity's line count, plus (while bit 0 of the byte at +0x224 is set) two overlay lines: the hint's node id (+0x5dc) and "delay %f" (the lock time at +0x5ec minus curtime, at least 0)
	virtual void vfunc125();
	virtual void vfunc126();
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130(int a);	// slot 130 (KeyValue-like): the base entity's slot 130, then the node record of sub_102d3e60: warning when there is none, else slot 181 with the record's position and the record's owner (+0xa0) set to this
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
	virtual char vfunc163();
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
	virtual void vfunc181(Vector *pPos, int a, int b);
	void sub_10005e98();
	void sub_100a8990();	// CBaseEntity::vfunc78 (stub 0x1000468d), called directly by vfunc78	// as in CPhysForce (transplant)
	void sub_100a8710();	// CBaseEntity::vfunc77 (stub 0x100011cc), called directly

	char m_pad0004[0x4f8];
	CAI_HintItem m_items4fc[8];
	CAI_HintItem m_item5bc;
	char m_pad05d4[4];
	CAI_Hint *m_pNext;	// +0x5d8: previous head of the global hint list
	int m_n5dc;
	int m_n5e0;
	char m_pad05e4[4];
	int m_n5e8;
	int m_n5ec;
	char m_pad05f0[4];
	CAI_HintItem m_item5f4;

	void sub_1009d980(int a);	// entity base constructor
	CAI_Hint *sub_102d2e30();
	void sub_102d3040();	// body of ~CAI_Hint (vfunc5 calls it): unlinks this from the global hint list (head g_10925450, next m_pNext +0x5d8), clears g_10925454 / g_1092545c when they are this, decrements the count g_10925458, destroys m_item5f4, m_item5bc and m_items4fc[7..0] (sub_100cd2d0), then tail-jumps to the CBaseEntity destructor body 0x1009df20 (stub 0x1000cb8a); first, when the entity behind the handle +0x5e0 has an NPC (+0x98), rings g_10924a6c slot 1 and calls CAI_BaseNPC::sub_10269a20(0x29), CAI_BaseNPCTroika::sub_10295ab0(0)
	char sub_102d14c0();	// "IsLocked": a lock owner is set, or the lock timeout at +0x5ec is still in the future, or the owner handle at +0x5e0 resolves (stub 0x1000cc39)
	char sub_102d1450(void *pOwner);	// "IsLockedBy" (stub 0x10010154)
	void sub_102d1420(float delay);	// "Unlock" (stub 0x10013d68)
	char *sub_102d3e60();
	unsigned char sub_102d2ee0();	// CAI_Hint::vfunc117 body (CBaseEntity::vfunc117 & 0xfd)	// the node record this hint belongs to (stub 0x10007cca); its position is at +8 and its owner at +0xa0
};
