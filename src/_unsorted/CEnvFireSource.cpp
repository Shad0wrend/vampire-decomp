// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010bc50 size=0x13
#include "CEnvFireSource.h"

struct CEnvFireSourceStubs {
    void sub_10003e9f();
    void sub_10009a02();
};

// TARGET: CEnvFireSource::vfunc103
void CEnvFireSource::vfunc103()
{
    if (m_flags204 & 1) {
        ((CEnvFireSourceStubs *)this)->sub_10003e9f();
    } else {
        ((CEnvFireSourceStubs *)this)->sub_10009a02();
    }
}
// END FUNCTION

// FUNCTION: 0x1010c220 size=0x1e
#include "CEnvFireSource.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvFireSource::vfunc5
CEnvFireSource *CEnvFireSource::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
