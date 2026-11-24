// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10042a50 size=0x28
#include "vgui2__Panel.h"
typedef vgui2::Panel PanelT;
struct VDlg { int m0, m4; void sub_100d3f70(); void *sub_10042a50(unsigned flags); };
// TARGET: ?sub_10042a50@VDlg@@QAEPAXI@Z
void *VDlg::sub_10042a50(unsigned flags) { PanelT *p = (PanelT *)((char *)this + 8); p->PanelT::~PanelT(); sub_100d3f70(); if (flags & 1) ::operator delete(this); return this; }
// END FUNCTION

// FUNCTION: 0x10042b50 size=0x3
#include "CClientModeDialog.h"
void CClientModeDialog::vfunc22(int a0, int a1)
{
}
// END FUNCTION
