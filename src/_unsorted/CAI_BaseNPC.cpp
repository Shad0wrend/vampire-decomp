// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a6840 size=0xb
void CAI_BaseNPC::vfunc483(int unused)
{
	vfunc158();
}
// END FUNCTION

// FUNCTION: 0x1026a8f0 size=0x8
// TARGET: CAI_BaseNPC::vfunc567
int CAI_BaseNPC::vfunc567(int unused)
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1026a910 size=0x9
extern float g_104454c4;
float CAI_BaseNPC::vfunc568(int a) { return g_104454c4; }
// END FUNCTION

// FUNCTION: 0x1026b4f0 size=0x6c
#include "CAI_BaseNPC.h"

#define V1(n) virtual void n();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct Vec3 { float x, y, z; };

struct NpcSlots {
    V100(a)
    V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6)
    V1(s0) V1(s1) V1(s2) V1(s3) V1(s4) V1(s5) V1(s6)
    virtual int vf167();
    V10(d1) V10(d2) V10(d3) V10(d4)
    V1(t0) V1(t1) V1(t2) V1(t3) V1(t4) V1(t5) V1(t6) V1(t7) V1(t8)
    virtual int vf217();
    V100(e)
    V10(f1) V10(f2) V10(f3) V10(f4) V10(f5) V10(f6) V10(f7)
    V1(u0)
    virtual Vec3 *vf389(Vec3 *out, int a);
    V100(g)
    V10(h1) V10(h2) V10(h3) V10(h4)
    V1(w0) V1(w1) V1(w2) V1(w3) V1(w4) V1(w5) V1(w6) V1(w7) V1(w8)
    virtual void vf539(Vec3 *p);
    V10(i1) V10(i2) V10(i3)
    V1(y0) V1(y1) V1(y2) V1(y3)
    virtual void vf574(Vec3 *out, Vec3 *v, int a, int b);
};

void CAI_BaseNPC::vfunc538()
{
    NpcSlots *w = (NpcSlots *)this;
    if (w->vf167()) {
        Vec3 t;
        Vec3 out;
        Vec3 c = *w->vf389(&out, w->vf217());
        w->vf574(&t, &c, 0, 0);
        w->vf539(&t);
    }
}
// END FUNCTION

// FUNCTION: 0x1027a400 size=0xd
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc552()
{
	return (((NpcFlags204 *)this)->m >> 9) & 1;
}
// END FUNCTION

// FUNCTION: 0x1027a530 size=0x6d
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S0 { TEN(a) };
struct S1 : S0 { TEN(b) };
struct S2 : S1 { TEN(c) };
struct S3 : S2 { TEN(d) };
struct S4 : S3 { TEN(e) };
struct S5 : S4 { TEN(f) };
struct S6 : S5 { TEN(g) };
struct S7 : S6 { TEN(h) };
struct S8 : S7 { TEN(i) };
struct S9 : S8 { TEN(j) };
struct S10 : S9 { TEN(k) };
struct S11 : S10 { virtual void l0(); virtual void l1(); virtual void l2(); virtual void l3(); virtual void l4(); virtual void l5(); virtual void l6(); virtual void l7(); virtual void l8(); virtual double l9(int); };
struct IChk { virtual void m0(); virtual void m1(); virtual int m2(int, int); };
extern S11 *g_1070b22c;
extern IChk *g_1070b244;

bool CAI_BaseNPC::vfunc510()
{
    int state = *(int *)((char *)this + 0x10e8);
    if (state == 0)
        return false;
    if (state == 8)
        return false;
    double t = *(float *)((char *)this + 0x10ec);
    if (g_1070b22c->l9(0) < t)
        return false;
    bool r = g_1070b244->m2(0, *(int *)((char *)this + 0x10e8)) == 0;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1027d9f0 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_1027d9f0(char *self, int, int a, int b)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CAI_BaseNPC::OverrideMoveFacing";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1027dc80 size=0x66
struct FObj { char pad[0x28]; float m_f; };
struct IObj { char pad[0x4f8]; int m_state; };
extern double g_104493d0;

// TARGET: sub_1027dc80
bool __stdcall sub_1027dc80(FObj* p, IObj* q, float f, int* out)
{
	if (p->m_f < f)
		return false;
	if (q->m_state != 1 && q->m_state != 3)
		return false;
	if (f < g_104493d0) {
		*out = -1;
		return true;
	}
	p->m_f = f;
	*out = 0;
	return true;
}
// END FUNCTION

// FUNCTION: 0x1027e120 size=0xd
struct NpcFlags204 { char pad[0x204]; unsigned int m; };
unsigned int CAI_BaseNPC::vfunc423()
{
	return (((NpcFlags204 *)this)->m >> 11) & 1;
}
// END FUNCTION
