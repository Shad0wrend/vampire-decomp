// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004bab0 size=0xb6
#include "CAmmoCounter.h"
char *sub_1018c870(const char *);
extern float g_103edde0;
// TARGET: ??0CAmmoCounter@@QAE@H@Z
CAmmoCounter::CAmmoCounter(int a)
    : CManagedHudElement(a, (int)"AmmoCounter")
{
	sub_1004bc40();
	vfunc63(0);
	sub_101a9890(m_n178, m_n17c);
	sub_101a98f0(m_n180, m_n184);
	m_b19c = 1;
	m_b19d = 1;
	m_b19e = 0;
	m_n198 = 0;
	sub_1004bdd0();
	IFontLike *p = sub_101ac830();
	m_nFont = p->GetFont(sub_1018c870("Copperplate"));
	g_103edde0 = 0.1f;
}
// END FUNCTION

// FUNCTION: 0x1004bbd0 size=0x1e
#include "CAmmoCounter.h"

// VC6 writes CAmmoCounter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CAmmoCounter *pcd_emit_1004bbd0(const CAmmoCounter &other) { return new CAmmoCounter(other); }

// TARGET: ??_GCAmmoCounter@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1004bbf0 size=0x35
#include "CAmmoCounter.h"
CAmmoCounter::~CAmmoCounter()
{
	if (m_pUnk1a4)
		delete m_pUnk1a4;
	m_pUnk1a4 = 0;
}
// END FUNCTION

// FUNCTION: 0x1004bc30 size=0xb
#include "CAmmoCounter.h"
namespace lifted {
extern int g_103edde0;
}
void CAmmoCounter::vfunc112()
{
    lifted::g_103edde0 = 0;
}
// END FUNCTION

// FUNCTION: 0x1004c2a0 size=0x1
#include "CAmmoCounter.h"
void CAmmoCounter::vfunc97()
{
}
// END FUNCTION
