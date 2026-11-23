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

// FUNCTION: 0x1005f030 size=0x1
#include "CItemInfo.h"
void CItemInfo::vfunc97()
{
}
// END FUNCTION
