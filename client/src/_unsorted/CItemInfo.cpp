// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005ed20 size=0x84
#include "CItemInfo.h"
// TARGET: ??0CItemInfo@@QAE@H@Z
CItemInfo::CItemInfo(int parent) : CManagedHudElement(parent, (int)"ItemInfo")
{
	sub_1005ee20();
	vfunc63(0);
	sub_101a9890(m_unk180, m_unk184);
	sub_101a98f0(m_unk178, m_unk17c);
	m_unk18c = 0;
	m_unk18e = 0;
	m_unk18d = 0;
	m_unk188 = 0;
	sub_1005eee0();
}
// END FUNCTION

// FUNCTION: 0x1005edc0 size=0x1e
#include "CItemInfo.h"

// VC6 writes CItemInfo's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CItemInfo *pcd_emit_1005edc0(const CItemInfo &other) { return new CItemInfo(other); }

// TARGET: ??_GCItemInfo@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005ede0 size=0x32
#include "CItemInfo.h"
// TARGET: ??1CItemInfo@@UAE@XZ
CItemInfo::~CItemInfo()
{
	sub_101a9ff0(0);
	delete m_unk190;
}
// END FUNCTION

// FUNCTION: 0x1005eeb0 size=0x23
#include "CItemInfo.h"
bool sub_10163bf0();
struct IUnkG286860 { virtual void v0(); virtual void v1(); virtual bool Check(int); };
extern IUnkG286860 *g_10286860;
bool CItemInfo::vfunc107()
{
	return sub_10163bf0() && !g_10286860->Check(0);
}
// END FUNCTION

// FUNCTION: 0x1005f030 size=0x1
#include "CItemInfo.h"
void CItemInfo::vfunc97()
{
}
// END FUNCTION
