// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d00a0 size=0x70
#include "CPyObjStrSaveRestoreDataOps.h"
#define V5(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4();
struct IRestoreLike {
    V5(a) V5(b)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
    virtual int v14();
    virtual void f0(); virtual void f1(); virtual void v17(bool *out, int a, int b);
    virtual void g0(); virtual void g1(); virtual void g2();
    virtual void v21(char *buf, int a, int b);
};
extern void *(*g_109f37c8)(char *);
extern "C" void *malloc(unsigned);
extern "C" void free(void *);
void CPyObjStrSaveRestoreDataOps::vfunc1(void **field, IRestoreLike *restore)
{
    void **dest = (void **)*field;
    bool has = false;
    restore->v17(&has, 1, 1);
    if (has) {
        int len = restore->v14() + 1;
        char *buf = (char *)malloc(len);
        restore->v21(buf, len, len);
        *dest = g_109f37c8(buf);
        free(buf);
    } else
        *dest = 0;
}
// END FUNCTION
