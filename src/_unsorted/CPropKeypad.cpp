// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
