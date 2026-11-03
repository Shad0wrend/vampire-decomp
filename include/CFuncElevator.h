// CFuncElevator (RTTI .?AVCFuncElevator@@): func_elevator, flattened (the bases are not modelled).
// Only what recovered code needs: the member objects destroyed by the destructor.
#pragma once

struct datamap_t;

#include "CAI_InterestingPlaceConverstation.h"

struct inputdata_t;

class CFuncElevator
{
public:

	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)
	void sub_1020f3f0(inputdata_t *pInput);	// the "go to floor" input (the floor number is 1 based; 0 or a bad number warns): while the elevator stands still (+0x630 is not -1, flag byte +0x80c clear) a request for the floor it is heading to finishes the move (sub_1020f700), another valid floor starts the move to it (the floor heights are the floats at +0x608, the count at +0x62c, the destination x / y at +0x800 and the speed at +0x164), fires the output at +0x638, installs the think function, schedules the next think 0.1 seconds ahead and clears / sets the per-floor flag bytes at +0x80d
	void sub_1020f700(int nFloor);	// stops at the floor: fires the output at +0x650 and the floor's output (+0x680 + floor * 0x18) with this as activator and caller, then the floor at +0x630 is set to nFloor
	void vfunc130(int a);	// slot 130: calls CBaseEntity::vfunc130(a), then when a is set clears the floor at +0x630 after sub_100043cc(this, +0x800, 0) and the flag byte at +0x80c
	void vfunc133();	// slot 133 (0x1020f6c0): CBaseEntity::sub_100ac4e0(0, 0, 0), sub_1020f700 with the int at +0x634, then the tail call of CFuncMoveLinear::sub_10116bf0 on this

	char m_pad0004[0x4a4 - 4];
	CAI_IPItem m_item4a4;
	CAI_IPItem m_item4bc;
	char m_pad4d4[0x578 - 0x4d4];
	CAI_IPItem m_item578;
	CAI_IPItem m_item590;
	CAI_IPItem m_item5a8;
	CAI_IPItem m_item5c0;
	CAI_IPItem m_item5d8;
	CAI_IPItem m_item5f0;
	char m_pad0608[0x62c - 0x608];
	int m_nNumFloors;	// 0x062c
	int m_nFloor630;	// 0x630: the floor the elevator is at (-1 while it moves)
	int m_nTargetFloor;	// 0x0634
	CAI_IPItem m_item638;
	CAI_IPItem m_item650;
	CAI_IPItem m_item668;
	CAI_IPItem m_items680[8];	// 0x680
	CAI_IPItem m_items740[8];	// 0x740
	float m_vecDest800[3];	// 0x800: the destination x / y (and z)
	unsigned char m_flag80c;	// 0x80c: set while the elevator is moving
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CFuncElevator *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain slot: destroys the 0x18 byte member objects in reverse order, runs the base destructor body (sub_1000cb8a) and frees the object when bit 0 of flags is set
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
	virtual void vfunc106();
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
	virtual void vfunc117();
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
	virtual void vfunc130_slot();
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133_slot();
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
	virtual void vfunc178(int);
};
