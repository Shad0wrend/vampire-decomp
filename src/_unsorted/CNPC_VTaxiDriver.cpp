// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b2f50 size=0x5
#include "CNPC_VTaxiDriver.h"
bool CNPC_VTaxiDriver::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103b2f70 size=0x6
#include "CNPC_VTaxiDriver.h"
namespace lifted {
extern char g_1093c7a8;
}
int CNPC_VTaxiDriver::vfunc580()
{
    return (int)&lifted::g_1093c7a8;
}
// END FUNCTION

// FUNCTION: 0x103b2f90 size=0x6
#include "CNPC_VTaxiDriver.h"
namespace lifted {
extern int g_10651f50;
}
int CNPC_VTaxiDriver::vfunc451()
{
    return lifted::g_10651f50;
}
// END FUNCTION

// FUNCTION: 0x103b2fb0 size=0x6
#include "datamap.h"
#include "CNPC_VTaxiDriver.h"
namespace lifted {
extern char g_10651ed8;
}
datamap_t *CNPC_VTaxiDriver::vfunc82()
{
    return (datamap_t *)&lifted::g_10651ed8;
}
// END FUNCTION

// FUNCTION: 0x103b3110 size=0x6
extern char g_10651f48;
// TARGET: sub_103b3110
char sub_103b3110() { return g_10651f48; }
// END FUNCTION

// FUNCTION: 0x103b3170 size=0x1d
#include "CNPC_VTaxiDriver.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c7f0;
extern B g_10936c74;
int CNPC_VTaxiDriver::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c7f0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b3580 size=0x5
#include "CNPC_VTaxiDriver.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VTaxiDriver::vfunc375
// the game's 0x103b3580: a tail call (jmp) of CNPC_VHuman::vfunc375
int CNPC_VTaxiDriver::vfunc375(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc375(a0);
}
// END FUNCTION

// FUNCTION: 0x103b3630 size=0x6
#include "CNPC_VTaxiDriver.h"
int CNPC_VTaxiDriver::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x103b3650 size=0xd
struct CNPC_VHumanFwd;
struct CNPC_VTaxiDriverFwd {
    void sub_103b3650(int a);
};
struct CNPC_VHumanFwd {
    void sub_10385a10(int a);
};

// TARGET: sub_103b3650
void CNPC_VTaxiDriverFwd::sub_103b3650(int a)
{
    a = *(volatile int *)&a;
    ((CNPC_VHumanFwd *)this)->sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x103b3670 size=0xf
#include "CNPC_VTaxiDriver.h"
namespace lifted {
int sub_10015ad2();
}
int CNPC_VTaxiDriver::vfunc438()
{
    *(int *)((char *)this + 0x1b2c) = 0x14;
    return lifted::sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x103b36d0 size=0x167
#include "CNPC_VTaxiDriver.h"
#include "CNPC_VHuman.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct NpcSlots {
    V100(a) V100(b) V100(c) V10(d)
    virtual void SetActivity(int act);
};
void CNPC_VTaxiDriver::vfunc442(const int *pTask)
{
    switch (*pTask) {
    case 0x2b: case 0x2e: case 0x2f: case 0x31: case 0xb2:
    case 0xba: case 0xbb: case 0xbc: case 0xbd:
    case 0xf8: case 0xf9: case 0xfb: case 0xfc: case 0xfd:
    case 0x11b: case 0x11d:
        sub_1000ac68(0);
        return;
    case 0xb9:
        break;
    default:
        ((CNPC_VHuman *)this)->sub_10013336(pTask);
        return;
    }
    if (sub_100125bc() == -1) {
        sub_1000ac68(0);
        return;
    }
    ((NpcSlots *)this)->SetActivity(0x114e);
}
// END FUNCTION

// FUNCTION: 0x103b38a0 size=0x50
#include "CNPC_VTaxiDriver.h"
#include "CEntityVSlots.h"
void CNPC_VTaxiDriver::vfunc444(const int *pTask)
{
	if (*pTask != 0xb9) {
		sub_10384ab0(pTask);
		return;
	}
	if (sub_100125bc() == -1) {
		sub_1000ac68(0);
		sub_10269b50(0x6f);
		m_b6660 = 0;
		((CEntityVSlots *)this)->slot310(1);
	}
}
// END FUNCTION

// FUNCTION: 0x103b3910 size=0x5
#include "CNPC_VTaxiDriver.h"
int CNPC_VTaxiDriver::vfunc142(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103b3930 size=0x5
#include "CNPC_VTaxiDriver.h"
int CNPC_VTaxiDriver::vfunc390(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103b3950 size=0x3
#include "CNPC_VTaxiDriver.h"
void CNPC_VTaxiDriver::vfunc144(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x103b3970 size=0x1e
#include "CNPC_VTaxiDriver.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VTaxiDriver::vfunc5
CNPC_VTaxiDriver *CNPC_VTaxiDriver::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
