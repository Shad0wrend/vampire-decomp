// CAI_LocalNavigator: declared by pcdecomp transplant for 0x102ddb00 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

#include "UtlMem.h"

struct CAI_LocalNavigatorVec : public UtlMem
{
	int m_size;	// 0x0c
	int *m_pElements;	// 0x10
};

struct CAI_LocalNavigatorData
{
	char m_pad00[0x3c];
	CAI_LocalNavigatorVec m_vecA;	// 0x3c
	CAI_LocalNavigatorVec m_vecB;	// 0x50
};

void __fastcall sub_102deea0(int *pVec);

struct CAI_LocalNavigatorStopState	// the state object vfunc7 reads: only the float it compares against
{
	char m_pad00[0x28];
	float m_flStop28;	// 0x28
	float m_flStop2c;	// 0x2c
};

class CAI_LocalNavigator
{
public:
	char m_pad00[0x18];
	CAI_LocalNavigatorData *m_pData;	// 0x18, heap allocated

	CAI_LocalNavigator *vfunc0(unsigned int flags);
	bool vfunc7(CAI_LocalNavigatorStopState *pState, float flDist, int *pResult, int unused);	// slot 7 "CAI_LocalNavigator_MoveCalcStop" (profiler scope; this unused): flDist below the state's float at +0x28: *pResult = -4 when flDist < 0.1, else the float is set to flDist and *pResult = 0; otherwise *pResult = 0; always true
	void sub_10012d73();
	void sub_102ddb30();	// destructor body: frees the data object at +0x18 and resets the vtable pointers
	void sub_102ddc00(void *pMovementSink);	// "CAI_LocalNavigator::Init" (stub 0x10012878): takes the navigator's movement sink (its secondary base at +0x10)
};
