// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005fb20 size=0x1e
#include "CProgBar.h"

// VC6 writes CProgBar's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CProgBar *pcd_emit_1005fb20(const CProgBar &other) { return new CProgBar(other); }

// TARGET: ??_GCProgBar@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005fc80 size=0x29
#include "CProgBar.h"
CProgBar::~CProgBar()
{
	sub_101a9ff0(0);
	sub_1005fcb0();
}
// END FUNCTION

// FUNCTION: 0x1005fe10 size=0x27
#include "CProgBar.h"
void CProgBar::vfunc112()
{
	m_b17c = 0;
	m_b17d = 0;
	m_b17e = 0;
	m_n178 = 0;
	m_n1a8 = 0;
	m_b1b4 = 0;
}
// END FUNCTION
