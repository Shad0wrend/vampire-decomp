// CFuncElevator (RTTI .?AVCFuncElevator@@): func_elevator, flattened (the bases are not modelled).
// Only what recovered code needs: the member objects destroyed by the destructor.
#pragma once

#include "CAI_InterestingPlaceConverstation.h"

struct inputdata_t;

class CFuncElevator
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CFuncElevator *vfunc5(unsigned int flags);	// scalar deleting destructor, declared as a plain slot: destroys the 0x18 byte member objects in reverse order, runs the base destructor body (sub_1000cb8a) and frees the object when bit 0 of flags is set

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
	char m_pad608[0x630 - 0x608];
	int m_nFloor630;	// 0x630: the floor the elevator is at (-1 while it moves)
	char m_pad634[0x638 - 0x634];
	CAI_IPItem m_item638;
	CAI_IPItem m_item650;
	CAI_IPItem m_item668;
	CAI_IPItem m_items680[8];	// 0x680
	CAI_IPItem m_items740[8];	// 0x740
	float m_vecDest800[3];	// 0x800: the destination x / y (and z)
	unsigned char m_flag80c;	// 0x80c: set while the elevator is moving
public:
	virtual void vfunc178(int);
public:
	virtual int vfunc82();
};
