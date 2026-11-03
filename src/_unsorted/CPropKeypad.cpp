// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1021d6d0 size=0x6
#include "CPropKeypad.h"
namespace lifted {
extern char g_105af80c;
}
datamap_t *CPropKeypad::vfunc82()
{
    return (datamap_t *)&lifted::g_105af80c;
}
// END FUNCTION

// FUNCTION: 0x1021d8e0 size=0x83
#include "CPropKeypad.h"

void __fastcall sub_10015708(void *p);
void __fastcall sub_10004c3c(CPropKeypad *p);
void sub_100aa7b0(void *p);

// TARGET: CPropKeypad::vfunc5
CPropKeypad *CPropKeypad::vfunc5(unsigned int flags)
{
	char *p = (char *)this;
	sub_10015708(p + 0x8a0);
	sub_10015708(p + 0x888);
	sub_10015708(p + 0x7f4);
	sub_10015708(p + 0x7dc);
	sub_10015708(p + 0x7c4);
	sub_10015708(p + 0x7ac);
	sub_10015708(p + 0x794);
	sub_10015708(p + 0x748);
	sub_10015708(p + 0x730);
	sub_10004c3c(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1021d9a0 size=0x15
#include "CPropKeypad.h"
void CPropKeypad::vfunc113()
{
    *(int *)((char *)this + 0x81c) = 0xa;
    *(int *)((char *)this + 0x820) = 4;
}
// END FUNCTION

// FUNCTION: 0x1021d9d0 size=0x4f
#include "CPropKeypad.h"
#include "CBreakableProp.h"
#include "globalvars.h"
#include "engineiface.h"
void sub_100027cf();
void CPropKeypad::vfunc104()
{
	m_nKeySound828 = enginesound->vfunc0("Environmental/Electronic/pad_keystroke_1.wav", 0);
	((CBreakableProp *)this)->vfunc104();
	sub_1021da40();
	((CBreakableProp *)this)->sub_10007fe5((void *)sub_100027cf, 0, 0);
	m_flNextThink17c = gpGlobals->curtime + 1.0;
}
// END FUNCTION

// FUNCTION: 0x1021dc00 size=0x6
#include "CPropKeypad.h"
int CPropKeypad::vfunc33()
{
    return 0x12d;
}
// END FUNCTION

// FUNCTION: 0x1021dc20 size=0x10
#include "CPropKeypad.h"
extern char g_106b8540[];
const char *CPropKeypad::sub_1021dc20()
{
	if (m_pszCode)
		return m_pszCode;
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x1021dc40 size=0x56
#include "CPropKeypad.h"
#include "COutputEvent.h"
#include "CEHandleGet.h"

// TARGET: CPropKeypad::vfunc275
void CPropKeypad::vfunc275()
{
	((COutputEvent *)((char *)this + 0x888))->sub_100cd660(EHandle_Get(m_hActivator), this, 0);
	m_bFlag8b8 = 1;
	m_bFlag8b9 = 0;
	sub_1021df90();
}
// END FUNCTION

// FUNCTION: 0x1021dcc0 size=0xa7
#include "CPropKeypad.h"
#include "COutputEvent.h"
#include "CEHandleGet.h"

struct CKeypadNameRecord
{
	int m_id;
	const char *m_psz;
};

extern int g_1074b344;
extern CKeypadNameRecord **g_1074b348;
extern int g_1074f75c;
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_106b8540[];

inline const char *RecordName(const char *const &r)
{
	if (!r)
		return g_106b8540;
	return r;
}

inline int FindRecordId(const char *pszWanted)
{
	for (int i = 0; i < g_1074b344; i++) {
		if (_strcmpi(RecordName(g_1074b348[i]->m_psz), pszWanted) == 0)
			return g_1074b348[i]->m_id;
	}
	return -1;
}

void CPropKeypad::vfunc276()
{
	((COutputEvent *)((char *)this + 0x8a0))->sub_100cd660(EHandle_Get(m_hActivator), this, 0);
	m_bFlag8b9 = 1;
	sub_1021df90();
	g_1074f75c = FindRecordId("error");
}
// END FUNCTION

// FUNCTION: 0x1021ddc0 size=0x14
#include "CPropKeypad.h"
#include "CBaseTerminal.h"
char CPropKeypad::vfunc32(int a)
{
	if (m_bFlag8b8)
		return 0;
	return ((CBaseTerminal *)this)->sub_102180c0(a);
}
// END FUNCTION

// FUNCTION: 0x1021ddf0 size=0x35
#include "CPropKeypad.h"
#include "CBaseTerminal.h"
#include "CBasePlayer.h"
extern char g_105b05bc[];
int sub_10070470(const char *pszName, int a, void *p1, void *p2, int b);
// TARGET: CPropKeypad::vfunc39
void CPropKeypad::vfunc39(CBasePlayer *pPlayer)
{
	((CBaseTerminal *)this)->vfunc39(pPlayer);
	sub_1021df90();
	int result = sub_10070470(g_105b05bc, 0, this, this, 0);
	pPlayer->sub_1017cef0((CBaseEntity *)result);
}
// END FUNCTION

// FUNCTION: 0x1021de40 size=0x18
#include "CPropKeypad.h"
#include "CBaseTerminal.h"
#include "CBasePlayer.h"

void CPropKeypad::vfunc42(CBasePlayer *pPlayer)
{
	((CBaseTerminal *)this)->CBaseTerminal::vfunc42(pPlayer);
	pPlayer->sub_1017cef0(0);
}
// END FUNCTION

// FUNCTION: 0x1021de70 size=0x24
#include "CBaseTerminal.h"
#include "CPropKeypad.h"

void __fastcall sub_10014a6a(void *p);

// TARGET: CPropKeypad::vfunc41
void CPropKeypad::vfunc41(void *pArg)
{
	((CBaseTerminal *)this)->vfunc41(pArg);
	if (m_bFlag8b8 != 0) {
		sub_10014a6a(pArg);
	}
}
// END FUNCTION
