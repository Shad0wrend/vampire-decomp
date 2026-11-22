// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 16 blocks
#include "vampire.h"

// FUNCTION: 0x10057bf0 size=0x6
#include "CSteamJet.h"
namespace lifted {
extern char g_106be568;
}
int CSteamJet::vfunc80()
{
    return (int)&lifted::g_106be568;
}
// END FUNCTION

// FUNCTION: 0x10057c10 size=0x3
#include "CSteamJet.h"
int CSteamJet::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10057c30 size=0xa
#include "SendTable.h"
SendTable g_106be544;
// END FUNCTION

// FUNCTION: 0x10057cb0 size=0x5
int sub_10057cf0(void);
int g_106be540 = ((int (*)(int))sub_10057cf0)(0);
// END FUNCTION

// FUNCTION: 0x10057cf0 size=0x1c3
#include "SendTable.h"

SendProp sub_10246af0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int a, void *varProxy);
SendProp sub_10246dc0(const char *pVarName, int offset, int a, void *varProxy);
SendProp sub_10246510(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLowValue, float fHighValue, int varProxy);
void sub_10246300();
void sub_102464d0();
extern SendTable g_106be544;
extern int g_106ad4e0;
extern const char *g_1053ff34;

int sub_10057cf0()
{
	static SendProp s_props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_106ad4e0, sub_102464d0),
		sub_10246510("m_SpreadSpeed", 0x450, 4, 0, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246510("m_Speed", 0x454, 4, 0, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246510("m_StartSize", 0x458, 4, 0, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246510("m_EndSize", 0x45c, 4, 0, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246510("m_Rate", 0x460, 4, 0, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246510("m_JetLength", 0x464, 4, 0, 4, 0.0f, -121121.125f, (int)sub_10246300),
		sub_10246af0("m_bEmit", 0x468, 4, 1, 1, 0, 0),
		sub_10246af0("m_bFaceLeft", 0x46c, 1, 1, 1, 0, 0),
		sub_10246af0("m_nType", 0x470, 4, 0x20, 1, 0, 0),
	};
	g_106be544.sub_10247240(&s_props[1], 10, g_1053ff34);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10057f70 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100012e4(GP *);
extern int vt_1044d614;
extern char g_105403c4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: env_steam
DLL_EXPORT GP *env_steam()
{
	GP *p = (GP *)sub_1000db89(0x474);
	if (p) {
		sub_100012e4(p);
		*(int **)p = &vt_1044d614;
	} else {
		p = 0;
	}
	p->name(g_105403c4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10057fe0 size=0x49
#include "platform.h"
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100012e4(GP *);
extern int vt_1044d614;
extern char g_105403d0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: env_steamjet
DLL_EXPORT GP *env_steamjet()
{
	GP *p = (GP *)sub_1000db89(0x474);
	if (p) {
		sub_100012e4(p);
		*(int **)p = &vt_1044d614;
	} else {
		p = 0;
	}
	p->name(g_105403d0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10058050 size=0x6
#include "datamap.h"
#include "CSteamJet.h"
namespace lifted {
extern char g_1053ff38;
}
datamap_t *CSteamJet::vfunc82()
{
    return (datamap_t *)&lifted::g_1053ff38;
}
// END FUNCTION

// FUNCTION: 0x10058070 size=0x5
int sub_100580b0(void);
int g_106be560 = ((int (*)(int))sub_100580b0)(0);
// END FUNCTION

// FUNCTION: 0x100580b0 size=0x1a
namespace lifted {
extern int g_1053ff38;
extern int g_1053ff3c;
extern char g_1053ff7c;
}
int sub_100580b0()
{
    lifted::g_1053ff3c = 0xd;
    lifted::g_1053ff38 = (int)&lifted::g_1053ff7c;
    return (int)&lifted::g_1053ff38;
}
// END FUNCTION

// FUNCTION: 0x100580e0 size=0x41
#include "CSteamJet.h"
#include <string.h>

extern char g_106b8540[];

void CSteamJet::vfunc103()
{
	const char *pszName = m_pszClassname11c;
	if (!pszName)
		pszName = g_106b8540;
	if (strcmpi(pszName, "env_steamjet") == 0)
		m_bIsSteamJet46c = true;
	if (m_bFlag46d)
		m_nFlag468 = 1;
}
// END FUNCTION

// FUNCTION: 0x10058150 size=0x5e
#include "CSteamJet.h"
void CSteamJet::vfunc173(void *pActivator, void *pCaller, int useType, float value)
{
	if (useType == 0)
		m_nFlag468 = 0;
	else if (useType == 1)
		m_nFlag468 = 1;
	else if (useType == 2)
		m_nFlag468 = (int)value != 0;
	else if (useType == 3)
		m_nFlag468 = m_nFlag468 == 0;
}
// END FUNCTION

// FUNCTION: 0x100581d0 size=0x16
// TARGET: sub_100581d0
void __fastcall sub_100581d0(char *pThis, int, int)
{
	*(int *)(pThis + 0x468) = *(int *)(pThis + 0x468) == 0;
}
// END FUNCTION

// FUNCTION: 0x10058200 size=0xd
#include "CUnknown10058200.h"
// TARGET: CUnknown10058200::sub_10058200
void CUnknown10058200::sub_10058200(int unused)
{
	m_unk468 = 1;
}
// END FUNCTION

// FUNCTION: 0x10058220 size=0xd
#include "CUnknown10058220.h"
void CUnknown10058220::sub_10058220(int unused)
{
	m_unk468 = 0;
}
// END FUNCTION

// FUNCTION: 0x10058240 size=0x1e
#include "CSteamJet.h"

void sub_100aa7b0(void *p);

// TARGET: CSteamJet::vfunc5
CSteamJet *CSteamJet::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
