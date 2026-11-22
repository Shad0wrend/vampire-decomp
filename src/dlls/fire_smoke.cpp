// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 20 blocks
#include "vampire.h"

// FUNCTION: 0x10056f50 size=0x1e
#include "CBaseFire.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseFire::vfunc5
CBaseFire *CBaseFire::vfunc5(unsigned int flags)
{
	sub_10007c9d();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10056f80 size=0xb
namespace lifted {
extern char g_1044cce4;
int sub_1000cb8a();
}
struct CUnknown10056f80 { int sub_10056f80(); };
int CUnknown10056f80::sub_10056f80()
{
    *(int *)this = (int)&lifted::g_1044cce4;
    return lifted::sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x10056fa0 size=0x17
#include "CBaseFire.h"
void CBaseFire::sub_10056fa0(int a, int b)
{
	m_field454 = a;
	m_field458 = b;
}
// END FUNCTION

// FUNCTION: 0x10056fd0 size=0x21
#include "CBaseFire.h"

void CBaseFire::sub_10056fd0(int a, int b, int c)
{
	m_field450 = a;
	m_field454 = b;
	m_field458 = c;
}
// END FUNCTION

// FUNCTION: 0x10057010 size=0x24
#include "CBaseFire.h"

void CBaseFire::vfunc243(int on)
{
	if (on)
		m_flags45c |= 1;
	else
		m_flags45c &= ~1;
}
// END FUNCTION

// FUNCTION: 0x10057050 size=0x43
#include "platform.h"
#include "CBaseEntity.h"
#include "CFireSmoke.h"

void *sub_100aa720(int size);
extern char g_1053faa0[];

// TARGET: _firesmoke
DLL_EXPORT CBaseEntity *_firesmoke()
{
	void *mem = sub_100aa720(0x464);
	CFireSmoke *p;
	if (mem)
		p = ((CFireSmoke *)mem)->sub_10057470();
	else
		p = 0;
	p->vfunc106(g_1053faa0);
	return (CBaseEntity *)p;
}
// END FUNCTION

// FUNCTION: 0x100570c0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106be224;
extern char g_1053f8a8[];
ServerClassReg g_106be494("CFireSmoke", &g_106be224, g_1053f8a8);
// END FUNCTION

// FUNCTION: 0x10057130 size=0x6
#include "CFireSmoke.h"
namespace lifted {
extern char g_106be494;
}
int CFireSmoke::vfunc80()
{
    return (int)&lifted::g_106be494;
}
// END FUNCTION

// FUNCTION: 0x10057150 size=0x3
#include "CFireSmoke.h"
int CFireSmoke::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10057170 size=0xa
#include "SendTable.h"
SendTable g_106be224;
// END FUNCTION

// FUNCTION: 0x100571f0 size=0x5
int sub_10057230(void);
int g_106be220 = ((int (*)(int))sub_10057230)(0);
// END FUNCTION

// FUNCTION: 0x10057230 size=0x12d
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
void sub_10246300();

extern SendTable g_106be224;
extern SendTable *g_1055282c;
extern const char *g_1053f8b4;

// TARGET: sub_10057230
int sub_10057230()
{
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_10006cc1("m_flStartScale", 0x450, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10006cc1("m_flScale", 0x454, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10006cc1("m_flScaleTime", 0x458, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10246300),
		sub_10007bfd("m_nFlags", 0x45c, 4, 8, 1, 0, 0),
		sub_10007bfd("m_nFlameModelIndex", 0x460, 4, 0xb, 0, 0, 0),
	};
	g_106be224.sub_1000e8fe(props + 1, 6, g_1053f8b4);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100573e0 size=0x6
#include "CFireSmoke.h"
#include "datamap.h"
namespace lifted {
extern char g_1053f8b8;
}
datamap_t *CFireSmoke::vfunc82()
{
    return (datamap_t *)&lifted::g_1053f8b8;
}
// END FUNCTION

// FUNCTION: 0x10057400 size=0x5
int sub_10057440(void);
int g_106be240 = ((int (*)(int))sub_10057440)(0);
// END FUNCTION

// FUNCTION: 0x10057440 size=0x1a
namespace lifted {
extern int g_1053f8b8;
extern int g_1053f8bc;
extern char g_1053f8fc;
}
int sub_10057440()
{
    lifted::g_1053f8bc = 4;
    lifted::g_1053f8b8 = (int)&lifted::g_1053f8fc;
    return (int)&lifted::g_1053f8b8;
}
// END FUNCTION

// FUNCTION: 0x10057470 size=0x4b
#include "engineserver.h"
extern int vt_1044d17c;
void __fastcall sub_10006bd1(void *pThis);
// TARGET: sub_10057470
int *__fastcall sub_10057470(int *pThis)
{
	sub_10006bd1(pThis);
	pThis[0] = (int)&vt_1044d17c;
	pThis[0x115] = 0;
	pThis[0x116] = 0;
	pThis[0x117] = 0;
	pThis[0x118] = engine->vfunc13("sprites/fire1.vmt", 0);
	pThis[0x9a] |= 0x80;
	return pThis;
}
// END FUNCTION

// FUNCTION: 0x100574e0 size=0x1e
#include "CFireSmoke.h"

void sub_100aa7b0(void *p);

// TARGET: CFireSmoke::vfunc5
CFireSmoke *CFireSmoke::vfunc5(unsigned int flags)
{
	sub_1000eff7();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10057510 size=0x2b
extern char g_1053fae4[];

struct CFireSmokeUnit10057510 {
    char pad[0x460];
    int m_i460;
    void sub_1000961a(int a);
    void sub_10057510(int a);
};

// TARGET: sub_10057510
void CFireSmokeUnit10057510::sub_10057510(int a)
{
    m_i460 = engine->vfunc13(g_1053fae4, 0);
    sub_1000961a(a);
}
// END FUNCTION

// FUNCTION: 0x10057550 size=0xb
namespace lifted {
extern char g_1044d17c;
int sub_10007c9d();
}
struct CUnknown10057550 { int sub_10057550(); };
int CUnknown10057550::sub_10057550()
{
    *(int *)this = (int)&lifted::g_1044d17c;
    return lifted::sub_10007c9d();
}
// END FUNCTION

// FUNCTION: 0x10057570 size=0x13
#include "CFireSmoke.h"
void CFireSmoke::sub_10057570()
{
	engine->vfunc13("sprites/fire1.vmt", 0);
}
// END FUNCTION
