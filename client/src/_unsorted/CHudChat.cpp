// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100f18f0 size=0xd7
#include "CHudChat.h"
#include <stdio.h>
void *sub_101ac650(unsigned);
struct IVguiLike { virtual int v0(); virtual int v1(); virtual int v2(); virtual int v3(); virtual int v4(); virtual int v5(); virtual int v6(); virtual int v7(); virtual int v8(); virtual int v9(); virtual int v10(); virtual int v11(); virtual int v12(); virtual int v13(); virtual int v14(); virtual int v15(); virtual int v16(); virtual int v17(); virtual int AddTickSignal(int, int); };
IVguiLike *sub_101ac8f0();
CHudChat::CHudChat(int a)
    : CHudElement(a), vgui2::Panel(0, (const char *)a)
{
	char *p = (char *)this;
	vgui2::Panel *pPanel = this;
	*(int *)(p + 0x84) = 0;
	for (int i = 0; i < 6; i++) {
		char sz[32];
		sprintf(sz, "ChatLine%02i", i);
		void *m = sub_101ac650(0xdc);
		CHudChatLine *l;
		if (m)
			l = ((CHudChatLine *)m)->sub_100f13a0(pPanel, sz);
		else
			l = 0;
		((CHudChatLine **)(p + 0x68))[i] = l;
		l->vfunc21(0);
	}
	int v = *(int *)(p + 0x14);
	p[0x80] = 1;
	p[0x81] = 1;
	p[0x88] = 1;
	*(int *)(p + 0x90) = 0;
	*(int *)(p + 0x8c) = 0;
	*(int *)(p + 0x94) = 0;
	*(int *)(p + 0x9c) = 0;
	*(int *)(p + 0x98) = 0;
	sub_101ac8f0()->AddTickSignal(v, 0);
	pPanel->sub_101ab300(0, 0);
}
// END FUNCTION

// FUNCTION: 0x100f19d0 size=0x1e
#include "CHudChat.h"

// VC6 writes CHudChat's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudChat *pcd_emit_100f19d0(const CHudChat &other) { return new CHudChat(other); }

// TARGET: ??_GCHudChat@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100f19f0 size=0x1f
#include "CHudChat.h"
CHudChat::~CHudChat() {}
// END FUNCTION
