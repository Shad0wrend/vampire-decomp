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
