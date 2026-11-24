// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1002a1e0 size=0x7
#include "CInput.h"
float CInput::vfunc50()
{
    return *(float *)((char *)this + 0x138);
}
// END FUNCTION

// FUNCTION: 0x1002a1f0 size=0x7
#include "CInput.h"
float CInput::vfunc51()
{
    return *(float *)((char *)this + 0xfc);
}
// END FUNCTION

// FUNCTION: 0x1002a200 size=0x7
#include "CInput.h"
float CInput::vfunc52()
{
    return *(float *)((char *)this + 0x100);
}
// END FUNCTION

// FUNCTION: 0x1002a210 size=0x17
#include "CInput.h"
int CInput::vfunc46(int a0, int a1)
{
    *(int *)((char *)this + 0x1b0) = a0;
    *(int *)((char *)this + 0x1b4) = a1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100ff7c0 size=0x14
#include "CInput.h"
namespace lifted {
extern char g_104d2700;
struct C100dfa90 { int sub_100dfa90(int); };
}
int CInput::vfunc34()
{
    *(char *)((char *)this + 0xf0) = 1;
    return ((lifted::C100dfa90 *)((int)&lifted::g_104d2700))->sub_100dfa90(0);
}
// END FUNCTION

// FUNCTION: 0x100ff7e0 size=0x14
#include "CInput.h"
namespace lifted {
extern char g_104d2700;
struct C100dfa90 { int sub_100dfa90(int); };
}
int CInput::vfunc35()
{
    *(char *)((char *)this + 0xf0) = 0;
    return ((lifted::C100dfa90 *)((int)&lifted::g_104d2700))->sub_100dfa90(0);
}
// END FUNCTION

// FUNCTION: 0x100ff900 size=0x8
#include "CInput.h"
void CInput::vfunc37()
{
    *(char *)((char *)this + 0xf8) = 1;
}
// END FUNCTION

// FUNCTION: 0x100ff910 size=0x8
#include "CInput.h"
void CInput::vfunc38()
{
    *(char *)((char *)this + 0xf8) = 0;
}
// END FUNCTION

// FUNCTION: 0x100ff920 size=0x8
#include "CInput.h"
void CInput::vfunc39()
{
    *(char *)((char *)this + 0xf9) = 1;
}
// END FUNCTION

// FUNCTION: 0x100ff930 size=0x8
#include "CInput.h"
void CInput::vfunc40()
{
    *(char *)((char *)this + 0xf9) = 0;
}
// END FUNCTION

// FUNCTION: 0x100ff940 size=0x7
#include "CInput.h"
bool CInput::vfunc48()
{
    return *(bool *)((char *)this + 0x1b8);
}
// END FUNCTION

// FUNCTION: 0x100ff9b0 size=0x1b
#include "CInput.h"
namespace lifted {
extern char g_104d2700;
struct C100dfa90 { int sub_100dfa90(int); };
}
int CInput::vfunc47()
{
    *(char *)((char *)this + 0xf0) = 0;
    *(char *)((char *)this + 0x1b8) = 1;
    return ((lifted::C100dfa90 *)((int)&lifted::g_104d2700))->sub_100dfa90(0);
}
// END FUNCTION

// FUNCTION: 0x100ff9d0 size=0x1
#include "CInput.h"
void CInput::vfunc41()
{
}
// END FUNCTION

// FUNCTION: 0x100ff9e0 size=0xf
#include "CInput.h"
int CInput::vfunc42()
{
    *(int *)((char *)this + 0xf4) = 0;
    *(int *)((char *)this + 0xec) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ff9f0 size=0x1
#include "CInput.h"
void CInput::vfunc43()
{
}
// END FUNCTION

// FUNCTION: 0x100ffa00 size=0x15
#include "CInput.h"
int CInput::vfunc44()
{
    *(int *)((char *)this + 0x19c) = 0;
    *(int *)((char *)this + 0xf4) = 0;
    *(int *)((char *)this + 0xec) = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ffaf0 size=0x7
#include "CInput.h"
float CInput::vfunc53()
{
    return *(float *)((char *)this + 0x104);
}
// END FUNCTION

// FUNCTION: 0x100ffb60 size=0x21
#include "CInput.h"
int CInput::vfunc32(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x164);
    *(int *)((char *)a0 + 4) = *(int *)((char *)this + 0x168);
    *(int *)((char *)a0 + 8) = *(int *)((char *)this + 0x16c);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x100ffd10 size=0x7
#include "CInput.h"
int CInput::vfunc45()
{
    return *(int *)((char *)this + 0xec);
}
// END FUNCTION

// FUNCTION: 0x10101da0 size=0x7
#include "CInput.h"
int CInput::vfunc56()
{
    return *(int *)((char *)this + 0x1c4);
}
// END FUNCTION

// FUNCTION: 0x10102500 size=0x17
#include "CInput.h"
struct IGlobal_105f99d8 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual int v16(int a, int b, int c);
};
extern IGlobal_105f99d8 *g_105f99d8;
int CInput::vfunc10(int a, int b, int c)
{
	if (g_105f99d8)
		return g_105f99d8->v16(a, b, c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10103310 size=0x3
#include "CInput.h"
void CInput::vfunc8(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10104440 size=0x15
#include "CInput.h"
char *CInput::vfunc7(int i)
{
	return *(char **)((char *)this + 0x1c0) + i * 96;
}
// END FUNCTION

// FUNCTION: 0x10104730 size=0x15
#include "CInput.h"
namespace lifted {
extern int g_104d3e38;
}
int CInput::vfunc55(int a0)
{
    lifted::g_104d3e38 = lifted::g_104d3e38 | a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10104790 size=0x1d
#include "CInput.h"
struct SubObj_10104790
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual int v8();
};
struct Player_10104790
{
	int m_unk0, m_unk4, m_unk8;
	SubObj_10104790 m_sub;
};
extern Player_10104790 *g_104a0d50;
// TARGET: CInput::vfunc26
bool CInput::vfunc26()
{
	if (g_104a0d50 && g_104a0d50->m_sub.v8() == 9)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10105ef0 size=0x2b
#include "CInput.h"
namespace lifted {
struct C10101df0 { int sub_10101df0(); };
struct V { virtual int f0(int); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual int f17(); };
}
void CInput::vfunc1()
{
    ((lifted::V *)this)->f17();
    int t0 = ((lifted::C10101df0 *)this)->sub_10101df0();
    if ((*(int *)((char *)this + 0x1c0)) != 0) {
        ((lifted::V *)(*(int *)((char *)this + 0x1c0)))->f0(3);
    }
    *(int *)((char *)this + 0x1c0) = 0;
}
// END FUNCTION

// FUNCTION: 0x10105f20 size=0x8
#include "CInput.h"
void CInput::vfunc54()
{
    *(char *)((char *)this + 0xe4) = 1;
}
// END FUNCTION

// FUNCTION: 0x101062d0 size=0x9
#include "CInput.h"
bool CInput::vfunc18() { if (m_unk28) return true; return false; }
// END FUNCTION

// FUNCTION: 0x10106310 size=0x2a
#include "CInput.h"
struct IEngA {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45();
	virtual int v46(int); virtual int v47();
};
extern IEngA *g_104a57d4;
void CInput::vfunc25()
{
	int a = g_104a57d4->v47();
	int b = g_104a57d4->v46(a);
	sub_10106880(b);
}
// END FUNCTION

// FUNCTION: 0x101069a0 size=0x11
#include "CInput.h"
// TARGET: CInput::vfunc21
void CInput::vfunc21(char b) { m_unk24 = b != 0; }
// END FUNCTION

// FUNCTION: 0x101069c0 size=0x9
#include "CInput.h"
bool CInput::vfunc24() { if (m_unk24) return true; return false; }
// END FUNCTION
