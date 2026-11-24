// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101847f0 size=0x1e
#include "VItemInfoUI.h"

// VC6 writes VItemInfoUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VItemInfoUI *pcd_emit_101847f0(const VItemInfoUI &other) { return new VItemInfoUI(other); }

// TARGET: ??_GVItemInfoUI@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10184810 size=0x49
#include "VItemInfoUI.h"
typedef vgui2::Label TLabel;
typedef vgui2::TextEntry TEntry;
// TARGET: ??1VItemInfoUI@@UAE@XZ
VItemInfoUI::~VItemInfoUI()
{
	sub_10184ba0();
	((TLabel *)((char *)this + 0x368))->TLabel::~TLabel();
	((TEntry *)((char *)this + 0x240))->TEntry::~TEntry();
	((TLabel *)((char *)this + 0x188))->TLabel::~TLabel();
}
// END FUNCTION

// FUNCTION: 0x10186860 size=0x25
#include "VItemInfoUI.h"
int sub_1016a6b0();
void VItemInfoUI::sub_10186860()
{
	int n = sub_1016a6b0();
	((CBasePanel *)((char *)this + 0x10))->vfunc33(n);
	((CBasePanel *)((char *)this + 0x10))->sub_101aa0a0(0x76c);
}
// END FUNCTION
