// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10109c10 size=0x36
#include "CFire.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CFire *CFire::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x4ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x494))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10109c60 size=0x70
#include "CFire.h"
struct S248 {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6();
	virtual void vfunc7(int h);
};
struct S22c {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual int vfunc35(int ent, int n, const char *s);
};
extern S248 *g_1070b248;
extern S22c *g_1070b22c;
void CFire::vfunc180()
{
	int ent = *(int *)((char *)this + 0x2e0);
	g_1070b248->vfunc7(g_1070b22c->vfunc35(ent, 2, "environmental/fire/fire_crackeling.wav"));
	int ent2 = *(int *)((char *)this + 0x2e0);
	g_1070b248->vfunc7(g_1070b22c->vfunc35(ent2, 2, "environmental/fire/fire_roaring.wav"));
	sub_1010b3c0();
	CBaseEntity::vfunc180();
}
// END FUNCTION
