// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102885d0 size=0x8
class C
{
public:
	void foo();
};

void C::foo()
{
	typedef void (__fastcall *Fn)(C *);
	(*(Fn *)((char *)*(void **)this + 0xf8))(this);
}
// END FUNCTION
