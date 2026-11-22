// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 25 blocks
#include "vampire.h"

// FUNCTION: 0x10231870 size=0x6
#include "CVGuiScreen.h"
namespace lifted {
extern char g_10751480;
}
int CVGuiScreen::vfunc80()
{
    return (int)&lifted::g_10751480;
}
// END FUNCTION

// FUNCTION: 0x10231890 size=0x3
#include "CVGuiScreen.h"
int CVGuiScreen::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102318b0 size=0xa
#include "SendTable.h"
SendTable g_10751464;
// END FUNCTION

// FUNCTION: 0x10231930 size=0x5
int sub_10231970(void);
int g_10751460 = ((int (*)(int))sub_10231970)(0);
// END FUNCTION

// FUNCTION: 0x10231970 size=0x147
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);
SendProp sub_10006cc1(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, void *proxy);
void sub_10009539();
void sub_10006aeb();

extern SendTable g_10751464;
extern SendTable *g_1055282c;
extern const char *g_105b5c3c;

// TARGET: sub_10231970
int sub_10231970()
{
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_10006cc1("m_flWidth", 0x450, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10006aeb),
		sub_10006cc1("m_flHeight", 0x454, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10006aeb),
		sub_10007bfd("m_nAttachmentIndex", 0x45c, 4, 5, 1, 0, 0),
		sub_10007bfd("m_nPanelName", 0x458, 4, 8, 1, 0, 0),
		sub_10007bfd("m_fScreenFlags", 0x464, 4, 2, 1, 0, 0),
		sub_10007bfd("m_nOverlayMaterial", 0x460, 4, 0xa, 1, 0, 0),
	};
	g_10751464.sub_1000e8fe(props + 1, 7, g_105b5c3c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10231b50 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1048ebd4[];	// CVGuiScreen vftable
extern const char g_105b5ea8[];

// TARGET: vgui_screen
DLL_EXPORT CBaseEntity *vgui_screen()
{
	void *mem = sub_100aa720(0x468);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1048ebd4;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105b5ea8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10231bc0 size=0x5
#include "CPrecacheRegister.h"
CPrecacheRegister g_107511a8(&CPrecacheRegister::PrecacheFn_Other, "vgui_screen");
// END FUNCTION

// FUNCTION: 0x10231c10 size=0x6
#include "datamap.h"
#include "CVGuiScreen.h"
namespace lifted {
extern char g_105b5c40;
}
datamap_t * CVGuiScreen::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b5c40);
}
// END FUNCTION

// FUNCTION: 0x10231c30 size=0x5
int sub_10231c70(void);
int g_107511b8 = ((int (*)(int))sub_10231c70)(0);
// END FUNCTION

// FUNCTION: 0x10231c70 size=0x1a
namespace lifted {
extern int g_105b5c40;
extern int g_105b5c44;
extern char g_105b5c84;
}
int sub_10231c70()
{
    lifted::g_105b5c44 = 6;
    lifted::g_105b5c40 = (int)&lifted::g_105b5c84;
    return (int)&lifted::g_105b5c40;
}
// END FUNCTION

// FUNCTION: 0x10231ca0 size=0x51
#include "CVGuiScreen.h"
#include <string.h>
bool CVGuiScreen::vfunc110(const char *key, const char *value)
{
    char *p = strchr(key, '#');
    if (p)
        *p = 0;
    if (!strcmpi(key, "panelname")) {
        sub_10231f40(value);
        return true;
    }
    return CBaseEntity::vfunc110(key, value);
}
// END FUNCTION

// FUNCTION: 0x10231d20 size=0x9f
#include "CVGuiScreen.h"
#include "CUnknown101466e0.h"

struct VecL {
	float x, y, z;
	VecL(float a, float b) { x = a; y = b; }
	VecL(float a, float b, float c) { x = a; y = b; z = c; }
};

void CVGuiScreen::vfunc103()
{
	m_flags268 |= 0x80;
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	VecL maxs(*(float *)((char *)this + 0x450), *(float *)((char *)this + 0x454));
	*(int *)((char *)this + 0x45c) = 0;
	*(int *)((char *)this + 0x460) = 0xff;
	VecL mins(0.0f, 0.0f, -0.1f);
	maxs.z = 0.1f;
	*(int *)((char *)this + 0x464) = 1;
	sub_100adf10(&mins.x, &maxs.x);
	m_nTakeDamage = 0;
	sub_100b3580(0x8000);
}
// END FUNCTION

// FUNCTION: 0x10231df0 size=0x14
struct CUnknown10231df0 { void sub_10231df0(int); };
void CUnknown10231df0::sub_10231df0(int a0)
{
    *(volatile int *)((char *)this + 0x45c) = a0;
    *(volatile unsigned char *)((char *)this + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x10231e20 size=0x21
int sub_1011bc70(int a);

// TARGET: sub_10231e20
void __fastcall sub_10231e20(char *self, int dummy, int arg)
{
    *(int *)(self + 0x460) = sub_1011bc70(arg);
    *(char *)(self + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x10231e60 size=0xa
unsigned int __fastcall sub_10231e60(char *self)
{
	return *(unsigned int *)(self + 0x464) & 1;
}
// END FUNCTION

// FUNCTION: 0x10231e80 size=0x3f
namespace block_10231e80 {
#pragma auto_inline(off)
struct CUnk10231e80
{
	char m_pad0000[0x1b1];
	char m_b01b1;
	char m_pad01b2[0x464 - 0x1b2];
	unsigned int m_flags0464;
	unsigned int sub_10231e60();
	void sub_10231e80(char bOn);
};

unsigned int CUnk10231e80::sub_10231e60()
{
	return m_flags0464 & 1;
}
#pragma auto_inline(on)
inline void SetBit(unsigned int *pFlags, char *pChanged, char bOn)
{
	if (!bOn)
		*pFlags &= ~1;
	else
		*pFlags |= 1;
	*pChanged = 1;
}
}
using namespace block_10231e80;

// TARGET: block_10231e80::CUnk10231e80::sub_10231e80
void CUnk10231e80::sub_10231e80(char bOn)
{
	if (bOn != (char)sub_10231e60())
	{
		SetBit(&m_flags0464, &m_b01b1, bOn);
	}
}
// END FUNCTION

// FUNCTION: 0x10231ed0 size=0xc
#include "CUnknown10231ed0.h"
unsigned int CUnknown10231ed0::sub_10231ed0()
{
	return (m_flags464 >> 1) & 1;
}
// END FUNCTION

// FUNCTION: 0x10231ef0 size=0x3b
#include "CUnknown10231ed0.h"

namespace block_10231ef0 {
struct CUnknown10231ed0Unit : CUnknown10231ed0
{
	unsigned char sub_10231ed0();
};
unsigned char CUnknown10231ed0Unit::sub_10231ed0()
{
	return (m_flags464 >> 1) & 1;
}
struct Bits
{
	unsigned int b0 : 1;
	unsigned int b1 : 1;
};
}
using namespace block_10231ef0;

void CUnknown10231ed0::sub_10231ef0(bool bOn)
{
	CUnknown10231ed0Unit *p = (CUnknown10231ed0Unit *)this;
	if (bOn != p->sub_10231ed0())
	{
		Bits *b = (Bits *)&m_flags464;
		if (!bOn)
			b->b1 = 0;
		else
			b->b1 = 1;
		m_b1b1 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x10231f40 size=0x2f
#include "CVGuiScreen.h"

class CVGuiPanelFactory
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual int vfunc3(int a, const char *pszName, int b, int c);
};

extern CVGuiPanelFactory *g_1070b23c;
extern int g_10571c20;

// TARGET: CVGuiScreen::sub_10231f40
void CVGuiScreen::sub_10231f40(const char *pszPanelName)
{
	*(int *)((char *)this + 0x458) = g_1070b23c->vfunc3(g_10571c20, pszPanelName, 0, 0);
	*((char *)this + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x10231f80 size=0x1b
// TARGET: sub_10231f80
struct CUnk10231f80Iface {
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void a5();
    virtual void a6(int first, int second);
};
extern CUnk10231f80Iface *g_1070b23c;
extern int g_10571c20;
struct CUnk10231f80 {
    char pad[0x458];
    int m_n458;
    void sub_10231f80();
};
void CUnk10231f80::sub_10231f80()
{
    g_1070b23c->a6(g_10571c20, m_n458);
}
// END FUNCTION

// FUNCTION: 0x10231fb0 size=0x1e
struct CUnknown10231fb0 { int sub_10231fb0(int, int); };
int CUnknown10231fb0::sub_10231fb0(int a0, int a1)
{
    *(int *)((char *)this + 0x450) = a0;
    *(int *)((char *)this + 0x454) = a1;
    *(char *)((char *)this + 0x1b1) = 1;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10231fe0 size=0x1c
struct CUnk10231fe0Iface { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(int, int, int, int); };
extern CUnk10231fe0Iface *g_1070b23c;
extern int g_10571c20;

// TARGET: sub_10231fe0
void sub_10231fe0(int a)
{
	g_1070b23c->a3(g_10571c20, a, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10232010 size=0x5d
#include "CVGuiScreen.h"
extern float g_1070d1b0[3];
extern float g_1070d9d0[3];
CBaseEntity *sub_100a99d0(const char *pszName, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner);
struct CVGuiScreenView : CVGuiScreen
{
	void sub_10231df0(int n);
};

// TARGET: sub_10232010
CVGuiScreen *__cdecl sub_10232010(const char *pszPanelName, CBaseEntity *pOwner, int nIndex)
{
	CVGuiScreen *pScreen = (CVGuiScreen *)sub_100a99d0("vgui_screen", g_1070d1b0, g_1070d9d0, pOwner);
	pScreen->sub_10231f40(pszPanelName);
	pScreen->vfunc103();
	pScreen->sub_1009ee80(pOwner);
	pScreen->vfunc93(11, 0);
	((CVGuiScreenView *)pScreen)->sub_10231df0(nIndex);
	return pScreen;
}
// END FUNCTION

// FUNCTION: 0x10232090 size=0x12
void sub_10014614(void *p);

// TARGET: sub_10232090
void sub_10232090(void *p)
{
    if (p) {
        sub_10014614(p);
    }
}
// END FUNCTION

// FUNCTION: 0x102320c0 size=0x1e
#include "CVGuiScreen.h"

void sub_100aa7b0(void *p);

// TARGET: CVGuiScreen::vfunc5
CBaseEntity *CVGuiScreen::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
