// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10031810 size=0x81
#include "CCollisionEvent.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct EntX {
    V100(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3();
    virtual void v174(EntX *other);
};
struct PhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual EntX *v6();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053a320[];
extern char g_106b8540[];
void CCollisionEvent::vfunc8(void *pObject1, void *pObject2)
{
    g_109f3620[*g_109f3680].a = g_1053a320;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    EntX *e1 = ((PhysObj *)pObject1)->v6();
    EntX *e2 = ((PhysObj *)pObject2)->v6();
    if (e1 && e2)
        e1->v174(e2);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100318d0 size=0x81
#include "CCollisionEvent.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct EntX {
    V100(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3(); virtual void j4(); virtual void j5();
    virtual void v176(EntX *other);
};
struct PhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual EntX *v6();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053a34c[];
extern char g_106b8540[];
void CCollisionEvent::vfunc9(void *pObject1, void *pObject2)
{
    g_109f3620[*g_109f3680].a = g_1053a34c;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    EntX *e1 = ((PhysObj *)pObject1)->v6();
    EntX *e2 = ((PhysObj *)pObject2)->v6();
    if (e1 && e2)
        e1->v176(e2);
    --*g_109f3680;
}
// END FUNCTION
