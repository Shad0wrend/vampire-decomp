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

class CAI_LocalNavigator
{
public:
	char m_pad00[0x18];
	CAI_LocalNavigatorData *m_pData;	// 0x18, heap allocated

	CAI_LocalNavigator *vfunc0(unsigned int flags);
	void sub_10012d73();
	void sub_102ddb30();	// destructor body: frees the data object at +0x18 and resets the vtable pointers
};
