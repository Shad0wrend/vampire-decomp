// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
