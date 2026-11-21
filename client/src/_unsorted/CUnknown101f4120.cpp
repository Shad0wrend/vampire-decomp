// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101553a0 size=0x18
#include "CUnknown101f4120.h"

class N101f35e0
{
public:
	void sub_10154af0();
};

CUnknown101f4120::~CUnknown101f4120()
{
	operator delete(*(void **)((char *)this + 0xc));
	((N101f35e0 *)((char *)this + 0x10))->sub_10154af0();
}
// END FUNCTION
