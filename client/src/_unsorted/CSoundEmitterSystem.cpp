// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1012c9e0 size=0x61
#include "Tier1.h"
#include <stdarg.h>

extern int (*g_101e31a8)(char *pDest, int nSize, const char *pFmt, void *pArgList);
extern void *g_105e54d4;

struct EngineView {
	virtual void v0();
	virtual bool v1();
	char pad[0x2c - 4];
	void *m2c;
};

void sub_1012c9e0(int unused, const char *fmt, ...)
{
	if (((EngineView *)g_105e54d4)->v1() || !((EngineView *)g_105e54d4)->m2c)
		return;
	char buf[0x100];
	va_list ap;
	va_start(ap, fmt);
	g_101e31a8(buf, 0x100, fmt, ap);
	va_end(ap);
	g_101e3108("%s %s", "(cl)", buf);
}
// END FUNCTION
