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

// FUNCTION: 0x1012ca50 size=0xbe
#include "IGameSystem.h"
#include "UtlMem.h"
#include "CUnknown1024b370.h"
extern char vt_10236680[];
extern "C" __declspec(dllimport) void Plat_Free(void *);
struct SESVec {
    void *m_pMemory;
    int m_alloc;
    int m_grow;
    int m_size;
    void *m_pElements;
};
struct SESView {
    void *m_vtbl;
    int pad04;
    void *m8;
    int mc;
    int m10;
    char pad14[0x24 - 0x14];
    CUnknown1024b370 l24;
    char pad50[4];
    void *m54;
    int m58;
    int m5c;
    char pad60[0x70 - 0x60];
    CUnknown1024b370 l70;
    SESVec v9c;
    CUnknown1024b370 lb0;
    char gs[4];
    void *sub_1012ca50(unsigned flags);
};
// TARGET: SESView::sub_1012ca50
void *SESView::sub_1012ca50(unsigned flags)
{
    ((IGameSystem *)(this ? gs : 0))->sub_100f3f80();
    m_vtbl = vt_10236680;
    lb0.sub_1013d330();
    SESVec *v = &v9c;
    v->m_size = 0;
    ((UtlMem *)v)->sub_1012d830();
    v->m_pElements = v->m_pMemory;
    if (v->m_grow != -1) {
        if (v->m_pMemory) {
            Plat_Free(v->m_pMemory);
            v->m_pMemory = 0;
        }
        v->m_alloc = 0;
    }
    l70.sub_1013d330();
    if (m5c != -1) {
        if (m54) {
            Plat_Free(m54);
            m54 = 0;
        }
        m58 = 0;
    }
    l24.sub_1013d330();
    if (m10 != -1) {
        if (m8) {
            Plat_Free(m8);
            m8 = 0;
        }
        mc = 0;
    }
    if (flags & 1)
        delete this;
    return this;
}
// END FUNCTION
