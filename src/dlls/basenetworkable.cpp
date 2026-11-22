// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 27 blocks
#include "vampire.h"

// FUNCTION: 0x100b77a0 size=0x3
#include "CBaseNetworkable.h"
int CBaseNetworkable::vfunc5()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b77c0 size=0xa
#include "SendTable.h"
SendTable g_106d0694;
// END FUNCTION

// FUNCTION: 0x100b7840 size=0x5
int sub_100b7880(void);
int g_106d0690 = ((int (*)(int))sub_100b7880)(0);
// END FUNCTION

// FUNCTION: 0x100b7880 size=0x59
#include "SendProp.h"
struct CUnknown10247240 { void sub_10247240(int a, int b, int c); };
SendProp sub_10246af0(const char *name, int a, int b, int c, int d, int e, void *f);
extern CUnknown10247240 g_106d0694;
extern int g_106d070c;
extern int g_10559d74;
int sub_100b7880()
{
	static SendProp s_dummy = sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0);
	g_106d0694.sub_10247240((int)&g_106d070c, 0, g_10559d74);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100b7920 size=0x38
#include "CVTraitEffect_t.h"
#include "CBaseNetworkable.h"

CBaseNetworkable::CBaseNetworkable()
	: m_n0c(0xffffffff)
{
	m_pEdict = 0;
	m_n10 = 0;
}
// END FUNCTION

// FUNCTION: 0x100b7970 size=0x20
#include "CBaseNetworkable.h"

extern char g_10451544[];

void *IServerNetworkable::vfunc14(char flags)
{
	*(void **)this = g_10451544;
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100b79a0 size=0x3
#include "CBaseNetworkable.h"
char * CBaseNetworkable::vfunc2()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b79c0 size=0xb
char * __fastcall sub_100b79c0(char *self)
{
	return self ? self + 4 : 0;
}
// END FUNCTION

// FUNCTION: 0x100b79e0 size=0x3
#include "CBaseNetworkable.h"
void * CBaseNetworkable::vfunc4()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b7a00 size=0x4
struct CUnknown100b7a00 { char * sub_100b7a00(); };
char * CUnknown100b7a00::sub_100b7a00()
{
    return (char *)this + -4;
}
// END FUNCTION

// FUNCTION: 0x100b7a20 size=0x6
namespace lifted {
extern char g_106b8540;
}
int sub_100b7a20()
{
    return (int)&lifted::g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x100b7a40 size=0x12
struct CVirtSlots14 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11();
    virtual void vfunc12();
    virtual void vfunc13();
    virtual void vfunc14(int flag);
};

// TARGET: sub_100b7a40
void __fastcall sub_100b7a40(int *self)
{
    int *p = (int *)((int)self - 4);
    if (p != 0) {
        ((CVirtSlots14 *)(p + 1))->vfunc14(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100b7a70 size=0x3
int sub_100b7a70()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b7a90 size=0x22
struct CUnknown100b7a90 {
	void sub_10012891();
	void *sub_100b7a90(unsigned int flags);
};

// TARGET: CUnknown100b7a90::sub_100b7a90
void *CUnknown100b7a90::sub_100b7a90(unsigned int flags)
{
	sub_10012891();
	if (flags & 1) {
		operator delete((char *)this - 4);
	}
	return (char *)this - 4;
}
// END FUNCTION

// FUNCTION: 0x100b7ad0 size=0x45
struct HArg { int v; HArg(const HArg &o) { v = o.v; } };
struct CListObj { void sub_100f9f90(HArg a); };
extern CListObj g_106eb5d8;
extern void *vt_104514cc[];
extern void *vt_10451518[];
extern void *vt_10451544[];
void __fastcall sub_100b7da0(void *p);

struct CNetBase { void **vptr; };
struct CNetSub : CNetBase {
    void sub_100b7ad0();
};
struct CNetFull { void **vptr0; };
struct CNetFull2 : CNetFull, CNetSub {};

void CNetSub::sub_100b7ad0()
{
    vptr = vt_104514cc;
    void **full = (void **)((char *)this - 4);
    *full = vt_10451518;
    HArg h = *(HArg *)((int *(__fastcall *)(void *))vt_10451518[1])(full);	// slot 1 (GetRefEHandle) of the vtable just stored
    g_106eb5d8.sub_100f9f90(h);
    sub_100b7da0(full);
    CNetBase *p = (CNetFull2 *)((char *)this - 4);
    p->vptr = vt_10451544;
}
// END FUNCTION

// FUNCTION: 0x100b7b40 size=0x1d
void __fastcall sub_100b7b40(int this_)
{
    char *p = (char *)EngineGlobals::g_1070b22c->vfunc43();
    *(char **)(this_ + 8) = p;
    *(int *)(p + 0x40) = this_;
    p[0x44] = 0;
}
// END FUNCTION

// FUNCTION: 0x100b7b70 size=0x33
#include "CBaseNetworkable.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;

void CBaseNetworkable::sub_100b7b70(CBaseNetworkableEdict_t *pEdict)
{
    sub_100b7b40();
    g_106eb5d8.sub_100f9df0(n0(), sub_100b7de0(), -1);
}
// END FUNCTION

// FUNCTION: 0x100b7bc0 size=0xc
void __fastcall sub_100b7bc0(int *self, int, int *src)
{
	self[3] = *src;
}
// END FUNCTION

// FUNCTION: 0x100b7be0 size=0x4
#include "CBaseNetworkable.h"
unsigned int * CBaseNetworkable::vfunc1()
{
    return (unsigned int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x100b7c00 size=0x3
int sub_100b7c00()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b7c20 size=0x1
void sub_100b7c20()
{
}
// END FUNCTION

// FUNCTION: 0x100b7c40 size=0x4
struct CUnknown100b7c40 { int sub_100b7c40(); };
int CUnknown100b7c40::sub_100b7c40()
{
    return *(int *)((char *)this + 0xc);
}
// END FUNCTION

// FUNCTION: 0x100b7c60 size=0xa
#include "CUnknown100b7c60.h"
void CUnknown100b7c60::sub_100b7c60(int value)
{
	m_unkc = value;
}
// END FUNCTION

// FUNCTION: 0x100b7c80 size=0x4
struct CUnknown100b7c80 { int sub_100b7c80(); };
int CUnknown100b7c80::sub_100b7c80()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x100b7ca0 size=0x5
char __stdcall sub_100b7ca0(int a0, int a1, int a2, int a3, int a4)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100b7cc0 size=0x33
// TARGET: sub_100b7cc0
struct CVirtBox_100b7cc0 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6(void *p);
};
struct CVirtList_100b7cc0 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual char vfunc9(int flag, int a, int b, int c, int d);
    void sub_100b7cc0(int *p);
};
void CVirtList_100b7cc0::sub_100b7cc0(int *p)
{
    if (vfunc9(0, p[0], p[1], p[2], p[3])) {
        ((CVirtBox_100b7cc0 *)((char *)this - 4))->vfunc6(p);
    }
}
// END FUNCTION

// FUNCTION: 0x100b7d10 size=0x47
#include "CBaseNetworkable.h"

void CBaseNetworkable::vfunc6(CBaseNetworkableBits_t *pBits)
{
	int i = sub_100b7de0();
	if (!(pBits->m_pBits[i >> 3] & (1 << (i & 7))))
	{
		i = sub_100b7de0();
		pBits->m_pBits[i >> 3] |= (1 << (i & 7));
	}
}
// END FUNCTION
