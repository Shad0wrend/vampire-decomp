// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10358f90 size=0x103
#include "CNPC_Crow.h"
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern char g_10628c84[];
extern char g_10628c68[];
void sub_101434b0(int index, int line, const char *text, int duration, int r, int g, int b, int a);
int CNPC_Crow::vfunc124()
{
	char buf[512];
	int line = sub_102767d0();
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		Q_snprintf(buf, 512, g_10628c84, *(int *)((char *)this + 0x5f50));
		int edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(g_1070b22c->vfunc35(edict), line, buf, 0, 255, 255, 255, 255);
		line++;
		if (((CAI_BaseNPC *)this)->vfunc167()) {
			Q_snprintf(buf, 512, g_10628c68, ((CBaseEntity *)((CAI_BaseNPC *)this)->vfunc167())->sub_1009f200(), (double)*(float *)((char *)this + 0x5f4c));
			int edict2 = *(int *)((char *)this + 0x2e0);
			sub_101434b0(g_1070b22c->vfunc35(edict2), line, buf, 0, 255, 255, 255, 255);
			line++;
		}
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x10359240 size=0x1d
#include "CNPC_Crow.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a070;
extern B g_10936c74;
int CNPC_Crow::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a070.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10359b70 size=0x1e
#include "CNPC_Crow.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_Crow::vfunc5
CNPC_Crow *CNPC_Crow::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
