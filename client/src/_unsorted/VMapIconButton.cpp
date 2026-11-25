// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10187000 size=0x1e
#include "VMapIconButton.h"

// VC6 writes VMapIconButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VMapIconButton *pcd_emit_10187000(const VMapIconButton &other) { return new VMapIconButton(other); }

// TARGET: ??_GVMapIconButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10187110 size=0x11
#include "VMapIconButton.h"
namespace lifted {
int sub_101aa640();
}
void VMapIconButton::vfunc85()
{
    int t0 = lifted::sub_101aa640();
    *(char *)((char *)this + 0xc1) = 1;
}
// END FUNCTION

// FUNCTION: 0x10187130 size=0x1e
#include "VMapIconButton.h"
void VMapIconButton::vfunc86() { Panel::vfunc86(); *((char *)this + 0xc1) = 0; *((char *)this + 0xc2) = 0; *(int *)((char *)this + 0xc4) = 0; }
// END FUNCTION

// FUNCTION: 0x10187150 size=0x50
#include "VMapIconButton.h"

extern char *g_102d27bc[];
extern char *g_102d27ec[];

struct CEngV27
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void vfunc27(const char *cmd, int arg);
};

extern CEngV27 *g_104a57d4;

void sub_10187fd0();
int sub_10187950();

void VMapIconButton::vfunc87(int arg)
{
	if (*(char *)((char *)this + 0xc0))
		return;
	*(char *)((char *)this + 0xc2) = 1;
	sub_10187fd0();
	if (sub_10187950())
		g_104a57d4->vfunc27(g_102d27ec[*(int *)((char *)this + 0xd0)], 1);
	else
		g_104a57d4->vfunc27(g_102d27bc[*(int *)((char *)this + 0xd0)], 1);
}
// END FUNCTION

// FUNCTION: 0x101871a0 size=0x14
#include "VMapIconButton.h"
void VMapIconButton::vfunc89(int a0)
{
    *(int *)((char *)this + 0xc4) = 6;
    *(char *)((char *)this + 0xc2) = 0;
}
// END FUNCTION
