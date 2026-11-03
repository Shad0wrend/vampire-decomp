// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1030bfb0 size=0x6
#include "CAI_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_106129e0;
}
int CAI_SaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_106129e0;
}
// END FUNCTION

// FUNCTION: 0x1030bfd0 size=0x163
#include "CSave.h"
#include "CAI_SaveRestoreBlockHandler.h"
#include "CUnknown102652d0.h"

#define V(n) virtual void s##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct NpcV {
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
    V100(1) V100(2) V100(3) V100(4)
    V10(50) V10(51) V10(52) V10(53)
    V(540)
    virtual const char *s541();
    char pad[0x5bb0 - 4];
    int a5bb0;
    char pad2[0x5da4 - 0x5bb4];
    int a5da4;
};

#define W(n) virtual void w##n();
struct SaveW {
    W(0) W(1)
    virtual void w2(void *p, const char *s);
    W(3) W(4) W(5) W(6) W(7)
    virtual void w8(int *p, int n);
    W(9) W(10) W(11) W(12) W(13) W(14) W(15) W(16)
    virtual void w17(const char *name, const char **p, int n);
    W(18) W(19) W(20) W(21) W(22) W(23) W(24) W(25) W(26) W(27) W(28) W(29) W(30) W(31)
    virtual void w32(NpcV **p, int n);
};

struct AINameNode { AINameNode *next; const char *name; };
extern AINameNode *g_10936c68;
extern char g_106b8540[];
extern char g_10614c70[];
extern char g_1060dde8[];
extern CUnknown102652d0 g_1090fe10;

// TARGET: CAI_SaveRestoreBlockHandler::vfunc2
void CAI_SaveRestoreBlockHandler::vfunc2(CSave *pSave)
{
    SaveW *s = (SaveW *)pSave;
    int count = 0;
    AINameNode *p;
    for (p = g_10936c68; p; p = p->next)
        count++;
    s->w8(&count, 1);
    for (p = g_10936c68; p; p = p->next) {
        const char *name = p->name;
        if (!name) name = g_106b8540;
        const char *str = *name ? name : 0;
        s->w17(g_106b8540, &str, 1);
        s->w2(p, g_10614c70);
    }
    int n = 0;
    NpcV **arr = (NpcV **)g_1090fe10.sub_102652d0();
    int i;
    for (i = 0; i < g_1090fe10.sub_102652f0(); i++) {
        NpcV *e0 = arr[i];
        if ((e0->a5bb0 > 0 || !e0->a5da4) && e0->s541())
            n++;
    }
    s->w8(&n, 1);
    NpcV *e;
    for (i = 0; i < g_1090fe10.sub_102652f0(); i++) {
        if ((arr[i]->a5bb0 > 0 || !arr[i]->a5da4) && arr[i]->s541()) {
            e = arr[i];
            s->w32(&e, 1);
            const char *nm = arr[i]->s541();
            s->w2((void *)nm, g_1060dde8);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1030c1a0 size=0x13
#include "vampire.h"

struct CUnknown1030c1a0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(const void *pData, int a);
};

extern char g_10612968[];

// TARGET: sub_1030c1a0
void __stdcall sub_1030c1a0(CUnknown1030c1a0 *pObj)
{
	pObj->v8(g_10612968, 1);
}
// END FUNCTION

// FUNCTION: 0x1030c1d0 size=0x2b
#include "CPython_SaveRestoreBlockHandler.h"
#include "CAI_SaveRestoreBlockHandler.h"

extern short g_10612968;

// TARGET: CAI_SaveRestoreBlockHandler::vfunc6
void CAI_SaveRestoreBlockHandler::vfunc6(IRestorePy *pRestore)
{
	short version;
	pRestore->ReadShort(&version, 1, 0);
	*(bool *)((char *)this + 4) = (version == g_10612968);
}
// END FUNCTION
