// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10055980 size=0x71
#include "CHudInfo.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
char *sub_1018c870(const char *);
// TARGET: ??0CHudInfo@@QAE@H@Z
CHudInfo::CHudInfo(int a)
    : CManagedHudElement(a, (int)"HudInfo")
{
    memset(m_arr198, 0, sizeof(m_arr198));
    vfunc63(0);
    m_n180 = 0;
    IFontLike *p = sub_101ac830();
    m_nFont = p->GetFont(sub_1018c870("Trebuchet"));
}
// END FUNCTION

// FUNCTION: 0x10055a00 size=0x1e
#include "CHudInfo.h"

// VC6 writes CHudInfo's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudInfo *pcd_emit_10055a00(const CHudInfo &other) { return new CHudInfo(other); }

// TARGET: ??_GCHudInfo@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10055a20 size=0x22
#include "CHudInfo.h"
CHudInfo::~CHudInfo()
{
	sub_101a9ff0(0);
}
// END FUNCTION

// FUNCTION: 0x10055d20 size=0xe
struct V_10055d20 { int m_unk[0x198 / 4]; char m_b198; };
// TARGET: sub_10055d20
int __fastcall sub_10055d20(V_10055d20 *self)
{
	return self->m_b198 != 0;
}
// END FUNCTION
