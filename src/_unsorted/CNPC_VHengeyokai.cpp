// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037ea60 size=0x1d
#include "CNPC_VHengeyokai.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b27c;
extern B g_10936c74;
int CNPC_VHengeyokai::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b27c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1037f960 size=0x73
#include "CNPC_VHengeyokai.h"

struct EngPrecache {
	virtual void v0(const char *name, int a);
};
struct EngPrecacheB {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual void v13(const char *name, int a);
	virtual void v14(); virtual void v15(); virtual void v16();
	virtual void v17(const char *name, int a);
};

extern EngPrecache *g_1070b248;
extern EngPrecacheB *g_1070b22c;
extern const char *g_1063bd94[4];
extern const char *g_1063bda4[3];
void sub_101d0ec0(const char *name);

void CNPC_VHengeyokai::vfunc104()
{
	sub_100013f7();
	for (unsigned i = 0; i < 4; i++)
		g_1070b248->v0(g_1063bd94[i], 0);
	for (unsigned j = 0; j < 3; j++)
		g_1070b248->v0(g_1063bda4[j], 0);
	g_1070b22c->v13("models/character/monster/Hengeyokai/hengeyokai.mdl", 0);
	g_1070b22c->v17("Hengeyokai_freeze_emitter", 0);
	sub_101d0ec0("item_w_hengeyokai_fist");
}
// END FUNCTION

// FUNCTION: 0x10380f90 size=0x18
#include "CNPC_VHengeyokai.h"

char CNPC_VHengeyokai::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x103817b0 size=0xe
#include "CNPC_VHengeyokai.h"
struct CUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern CUnk10924edc *g_10924edc;
// TARGET: CNPC_VHengeyokai::vfunc601
void CNPC_VHengeyokai::vfunc601(int unused)
{
	g_10924edc->v1();
}
// END FUNCTION
