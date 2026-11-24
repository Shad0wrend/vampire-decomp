// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10050f80 size=0xca
#include "CHealthAnkh.h"
extern CHealthAnkh *g_103ede9c;
// TARGET: ??0CHealthAnkh@@QAE@H@Z
CHealthAnkh::CHealthAnkh(int parent) : CManagedHudElement(parent, (int)"HealthAnkh")
{
	sub_10051100();
	vfunc63(0);
	sub_101a9890(m_unk178, m_unk17c);
	sub_101a98f0(m_unk180, m_unk184);
	m_unk18c = 1;
	m_unk18d = 1;
	m_unk18e = 0;
	m_unk188 = 0;
	vfunc114(100);
	vfunc64(1);
	g_103ede9c = this;
	m_unk198 = -1;
	m_unk19c = -1;
	m_unk1a0 = 0;
	m_unk1a4 = 0;
	m_unk1a8 = 0;
	m_unk1ac = 0;
	m_unk190 = 0;
	m_unk194 = 0;
}
// END FUNCTION

// FUNCTION: 0x10051050 size=0x1e
#include "CHealthAnkh.h"

// VC6 writes CHealthAnkh's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHealthAnkh *pcd_emit_10051050(const CHealthAnkh &other) { return new CHealthAnkh(other); }

// TARGET: ??_GCHealthAnkh@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10051070 size=0x62
#include "CHealthAnkh.h"
struct CHealthAnkhOwned { virtual ~CHealthAnkhOwned(); };
// TARGET: ??1CHealthAnkh@@UAE@XZ
CHealthAnkh::~CHealthAnkh()
{
	sub_101a9ff0(0);
	delete (CHealthAnkhOwned *)m_unk1a0;
	delete (CHealthAnkhOwned *)m_unk1a4;
	delete (CHealthAnkhOwned *)m_unk1a8;
	delete (CHealthAnkhOwned *)m_unk1ac;
}
// END FUNCTION

// FUNCTION: 0x100510e0 size=0x1e
struct V10e0 { char pad[0x190]; int a, b, c, d; void sub_100510e0(); };
void V10e0::sub_100510e0() { c = -1; d = -1; a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x100511b0 size=0x20
#include "CHealthAnkh.h"
namespace lifted {
int sub_10167af0();
}
void CHealthAnkh::vfunc114(int a0)
{
    if (a0 < (*(int *)((char *)this + 0x190))) {
        lifted::sub_10167af0();
    }
    *(int *)((char *)this + 0x190) = a0;
}
// END FUNCTION

// FUNCTION: 0x100511d0 size=0x36
#include "CHealthAnkh.h"
#include "CVStatInfoList_t.h"
extern CVStatInfoList_t g_105f9220;
// TARGET: CHealthAnkh::vfunc115
void CHealthAnkh::vfunc115(int a)
{
	int d = g_105f9220.sub_1015cfe0(0x11)->DefaultValue();
	m_unk194 = a * 100 / d;
}
// END FUNCTION

// FUNCTION: 0x10051210 size=0x23
#include "CHealthAnkh.h"
bool sub_10163bf0();
struct IUnkG286860 { virtual void v0(); virtual void v1(); virtual bool Check(int); };
extern IUnkG286860 *g_10286860;
bool CHealthAnkh::vfunc107()
{
	return sub_10163bf0() && !g_10286860->Check(0);
}
// END FUNCTION

// FUNCTION: 0x10051ad0 size=0x1
#include "CHealthAnkh.h"
void CHealthAnkh::vfunc97()
{
}
// END FUNCTION
