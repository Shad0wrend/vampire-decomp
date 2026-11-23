// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10051c60 size=0x9c
#include "CHudAreaIcon.h"
// TARGET: ??0CHudAreaIcon@@QAE@H@Z
CHudAreaIcon::CHudAreaIcon(int a)
    : CManagedHudElement(a, (int)"HudAreaIcon")
{
    m_p178 = 0;
    m_unk194 = 0;
    m_unk198 = 0;
    m_unk17c = -1;
    vfunc63(0);
    vfunc62(0);
    vfunc64(1);
    sub_101a99f0(1);
    m_b190 = true;
    m_unk1b0 = 0;
    m_unk1a8 = 0;
    m_unk1ac = 0;
    m_p19c = 0;
    m_p1a0 = 0;
    m_p1a4 = 0;
    sub_100527c0();
}
// END FUNCTION

// FUNCTION: 0x10051d20 size=0x1e
#include "CHudAreaIcon.h"

// VC6 writes CHudAreaIcon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudAreaIcon *pcd_emit_10051d20(const CHudAreaIcon &other) { return new CHudAreaIcon(other); }

// TARGET: ??_GCHudAreaIcon@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10051d40 size=0x5b
#include "CHudAreaIcon.h"
// TARGET: ??1CHudAreaIcon@@UAE@XZ
CHudAreaIcon::~CHudAreaIcon()
{
	if (m_p178)
		delete m_p178;
	if (m_p19c)
		delete m_p19c;
	if (m_p1a0)
		delete m_p1a0;
	if (m_p1a4)
		delete m_p1a4;
}
// END FUNCTION
