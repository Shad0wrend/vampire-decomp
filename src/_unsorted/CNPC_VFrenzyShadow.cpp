// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10375240 size=0x6
#include "CNPC_VFrenzyShadow.h"
namespace lifted {
extern char g_1093ae48;
}
int CNPC_VFrenzyShadow::vfunc580()
{
    return (int)&lifted::g_1093ae48;
}
// END FUNCTION

// FUNCTION: 0x10375260 size=0x6
#include "CNPC_VFrenzyShadow.h"
namespace lifted {
extern int g_10637b4c;
}
int CNPC_VFrenzyShadow::vfunc451()
{
    return lifted::g_10637b4c;
}
// END FUNCTION

// FUNCTION: 0x10375280 size=0x6
#include "CNPC_VFrenzyShadow.h"
#include "datamap.h"
namespace lifted {
extern char g_10637aa8;
}
datamap_t *CNPC_VFrenzyShadow::vfunc82()
{
    return (datamap_t *)&lifted::g_10637aa8;
}
// END FUNCTION

// FUNCTION: 0x103753e0 size=0x6
extern unsigned char g_10637b44;
// TARGET: sub_103753e0
unsigned char sub_103753e0()
{
    return g_10637b44;
}
// END FUNCTION

// FUNCTION: 0x10375440 size=0x1d
#include "CNPC_VFrenzyShadow.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093ae28;
extern B g_10936c74;
int CNPC_VFrenzyShadow::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093ae28.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10375c50 size=0x15
#include "CNPC_VFrenzyShadow.h"
#include "CNPC_VPlayerController.h"

struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

void CNPC_VFrenzyShadow::vfunc103()
{
    ((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
    ((CNPC_VPlayerController *)this)->CNPC_VPlayerController::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10375d70 size=0x6
#include "CNPC_VFrenzyShadow.h"
int CNPC_VFrenzyShadow::vfunc138()
{
    return 3;
}
// END FUNCTION

// FUNCTION: 0x10375ed0 size=0x32
#include "CNPC_VFrenzyShadow.h"
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c { virtual void vfunc0(); virtual void vfunc1(); };
extern CUnknown10924a6c *g_10924a6c;
void __fastcall sub_10013f2f(void *self);

void CNPC_VFrenzyShadow::vfunc433()
{
    sub_10013f2f(this);
    if (m_n6664 > 1) {
        g_10924a6c->vfunc1();
        ((CAI_BaseNPCTroika *)this)->sub_100041b0(0x79);
        return;
    }
    ((CAI_BaseNPCTroika *)this)->sub_10015839(0x79);
}
// END FUNCTION

// FUNCTION: 0x10375f20 size=0x1f
#include "CNPC_VHuman.h"
#include "CNPC_VFrenzyShadow.h"

// TARGET: CNPC_VFrenzyShadow::vfunc440
void CNPC_VFrenzyShadow::vfunc440(int a)
{
    if (((CAI_BaseNPCTroika *)this)->sub_102b11c0(a) == 0)
    {
        ((CNPC_VHuman *)this)->vfunc440(a);
    }
}
// END FUNCTION

// FUNCTION: 0x10376b10 size=0x24
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();

struct CUnk10376b10Obj {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8) P10(p9)
	P10(p10) P10(p11) P10(p12) P10(p13) P10(p14) P10(p15) P10(p16) P10(p17) P10(p18) P10(p19)
	P10(p20) P10(p21) P10(p22) P10(p23) P10(p24) P10(p25) P10(p26) P10(p27) P10(p28) P10(p29)
	P10(p30) P10(p31) P10(p32) P10(p33) P10(p34) P10(p35) P10(p36) P10(p37) P10(p38)
	virtual void vfunc390(int a);
};

struct CUnk10376b10Ent {
	char m_pad0000[0x9c];
	CUnk10376b10Obj *m_9c;
};

// Local view of the vtable: slot 97 gives the entity, slot 390 of its +0x9c object is the virtual call.
struct CUnk10376b10 {
	P10(p0) P10(p1) P10(p2) P10(p3) P10(p4) P10(p5) P10(p6) P10(p7) P10(p8)
	virtual void p90(); virtual void p91(); virtual void p92(); virtual void p93(); virtual void p94(); virtual void p95(); virtual void p96();
	virtual CUnk10376b10Ent *vfunc97();
	int sub_10376b10(int a);
};

// TARGET: CUnk10376b10::sub_10376b10
int CUnk10376b10::sub_10376b10(int a)
{
	CUnk10376b10Ent *e = vfunc97();
	if (e)
		e->m_9c->vfunc390(a);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10376b50 size=0x3
#include "CNPC_VFrenzyShadow.h"
void CNPC_VFrenzyShadow::vfunc144(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10376b70 size=0x1a
#include "CNPC_VFrenzyShadow.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
char CNPC_VFrenzyShadow::sub_10376b70(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x10376ba0 size=0x17
#include "CNPC_VFrenzyShadow.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
bool CNPC_VFrenzyShadow::sub_10376ba0(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x10376bd0 size=0xe
#include "CNPC_VFrenzyShadow.h"
struct CUnknown10924edc
{
	virtual void slot0();
	virtual void slot1();
};
extern CUnknown10924edc *g_10924edc;

void CNPC_VFrenzyShadow::vfunc601(int unused)
{
	g_10924edc->slot1();
}
// END FUNCTION

// FUNCTION: 0x10376bf0 size=0x3
#include "CNPC_VFrenzyShadow.h"
bool CNPC_VFrenzyShadow::vfunc602()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10376f20 size=0x1e
#include "CNPC_VFrenzyShadow.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VFrenzyShadow::vfunc5
CNPC_VFrenzyShadow *CNPC_VFrenzyShadow::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
