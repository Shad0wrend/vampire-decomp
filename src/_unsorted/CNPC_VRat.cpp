// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ad630 size=0x19
#include "CNPC_VRat.h"
#include "CNPC_VScurrying.h"

extern char g_10650370;

// TARGET: CNPC_VRat::vfunc103
void CNPC_VRat::vfunc103()
{
	m_p10e4 = g_10650370 ? &g_10650370 : 0;
	((CNPC_VScurrying *)this)->CNPC_VScurrying::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x103ad660 size=0x6
#include "CNPC_VRat.h"
int CNPC_VRat::vfunc138()
{
    return 0xd;
}
// END FUNCTION

// FUNCTION: 0x103ad680 size=0x5
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc294(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103ad6d0 size=0x22
struct CNPC_VRatX
{
    int sub_1000ab23();
    bool sub_1000f9de(int nIndex);
    bool sub_103ad6d0(int nIndex);
};

// TARGET: sub_103ad6d0
bool CNPC_VRatX::sub_103ad6d0(int nIndex)
{
    if (nIndex == sub_1000ab23()) {
        return true;
    }
    return sub_1000f9de(nIndex);
}
// END FUNCTION

// FUNCTION: 0x103ad790 size=0x3
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc615()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad7b0 size=0x5
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc295(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad7d0 size=0x3
#include "CNPC_VRat.h"
void CNPC_VRat::vfunc333(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x103ad7f0 size=0x14
#include "CNPC_VRat.h"

// TARGET: CNPC_VRat::vfunc370
int CNPC_VRat::vfunc370(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPC_VRat::*pm)(int);
	} u;
	u.p = vt[368];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x103ad820 size=0x14
#include "CNPC_VRat.h"

// TARGET: CNPC_VRat::vfunc371
int CNPC_VRat::vfunc371(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPC_VRat::*pm)(int);
	} u;
	u.p = vt[369];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x103ad850 size=0x3
#include "CNPC_VRat.h"
void CNPC_VRat::vfunc316(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x103ad870 size=0x5
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc317(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad890 size=0x5
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc318(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad8b0 size=0x5
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc319(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad8d0 size=0x5
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc320(int a0, int a1)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad8f0 size=0x3
#include "CNPC_VRat.h"
bool CNPC_VRat::vfunc590()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103ad910 size=0x3
#include "CNPC_VRat.h"
void CNPC_VRat::vfunc330(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x103ad930 size=0x1e
#include "CNPC_VRat.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VRat::vfunc5
CNPC_VRat *CNPC_VRat::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
