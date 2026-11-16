// CUnknown102652d0: object with a value at +0 that is only exposed when the field at +0xc is non-zero; real name not yet known.
// (It is the SDK's CAI_Manager g_AI_Manager: CUtlVector<CAI_BaseNPC *> m_AIs, the constructor EnsureCapacity(MAX_AIS).)
#pragma once

#ifdef PCD_INITIALIZERS	// the initializer unit: the global 0x1090fe10 is built by the out-of-line constructor and
#include "utlvector.h"	// destroyed by the vector's inline destructor
class CUnknown102652d0
{
public:
	CUnknown102652d0();	// function 0x10265290
	CUtlVector<int> m_AIs;
};
#else
class CUnknown102652d0
{
public:
	int m_unk0;
	char pad4[8];
	int m_unkC;

	int sub_102652d0();
	int sub_102652f0();	// the element count (stub 0x1000477d)
	void sub_102653f0(void *p);	// removes the element p from the list
};
#endif

extern CUnknown102652d0 g_1090fe10;	// 0x1090fe10: the global list (sub_102652d0 = element array, sub_102652f0 = count)
