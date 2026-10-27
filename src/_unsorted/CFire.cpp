// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10109a20 size=0x26
#include "CFire.h"



// TARGET: CFire::sub_10109a20
void CFire::sub_10109a20(CBaseEntity *p)
{
    if (*(int *)((char *)p + 0x9c) != 0) {
        *(float *)((char *)this + 0x460) = gpGlobals->curtime;
    }
    CBaseEntity::vfunc174(p);
}
// END FUNCTION

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

// FUNCTION: 0x1010a130 size=0x18b
#include "CBaseEntity.h"
#include "CFire.h"
#include "CEntityVSlots.h"
#include "CUnknown1020a240.h"

struct CFireFields
{
	char m_pad0000[0x19c];
	unsigned int m_nFlags19c;
	char m_pad01a0[0x1fc - 0x1a0];
	int m_n1fc;
	char m_pad0200[4];
	unsigned int m_nSpawnFlags;
	char m_pad0208[0x458 - 0x208];
	int m_n458;
	int m_n45c;
	char m_pad0460[0x468 - 0x460];
	float m_flSize;
	float m_flHeat;
	float m_flHeatLevel;
	char m_pad0474[0x480 - 0x474];
	int m_n480;
	char m_pad0484[0x490 - 0x484];
	unsigned char m_bStartDisabled;
};

struct V3 { float x, y, z; void Init(float a, float b, float c) { x = a; y = b; z = c; } };

CBaseEntity *sub_1020a0a0(const char *pszClass, const float *pOrigin, const float *pAngles);
void sub_10011432(CBaseEntity *pEnt, const float *pMins, const float *pMaxs);
void sub_10014614(CBaseEntity *pEnt);

// TARGET: CFire::vfunc103
void CFire::vfunc103()
{
	CFireFields *f = (CFireFields *)this;
	CBaseEntity::vfunc103();
	vfunc104();
	f->m_n1fc = 0;
	f->m_nFlags19c |= 0x40;
	{
		float maxs[3], mins[3];
		maxs[0] = 8.0f;
		maxs[1] = 8.0f;
		maxs[2] = 8.0f;
		mins[0] = -8.0f;
		mins[1] = -8.0f;
		mins[2] = 0;
		sub_10011432(this, mins, maxs);
	}
	f->m_flHeatLevel = f->m_flHeat * 0.05;
	f->m_flHeat = 0;
	sub_1010a450((const float *)((CEntityVSlots *)this)->slot217(), f->m_flSize, f->m_n480, f->m_n45c, f->m_nSpawnFlags, f->m_n458);
	f->m_bStartDisabled = ~(f->m_nSpawnFlags >> 8) & 1;
	Vector *pAngles = ((CEntityVSlots *)this)->slot219();
	CUnknown1020a240 *pFire = (CUnknown1020a240 *)sub_1020a0a0("env_fire", (const float *)((CEntityVSlots *)this)->slot217(), (const float *)pAngles);
	if (pFire) {
		pFire->sub_1020a240("env_fire entities have been removed from the game.", 255, 0, 0, 255);
		pFire->sub_1020a240("Please use env_particle entities instead.", 255, 0, 0, 255);
		float flHalf = f->m_flSize * 0.5f;
		flHalf = flHalf * 0.5f;
		V3 mins2, maxs2;
		mins2.z = 0;
		maxs2.Init(flHalf, flHalf, f->m_flSize);
		mins2.x = -flHalf;
		mins2.y = -flHalf;
		sub_10011432((CBaseEntity *)pFire, &mins2.x, &maxs2.x);
	}
	sub_10014614(this);
}
// END FUNCTION

// FUNCTION: 0x1010a330 size=0x27
#include "CFire.h"

// TARGET: CFire::vfunc113
void CFire::vfunc113()
{
    CBaseEntity::vfunc113();
    if (*(unsigned char *)((char *)this + 0x204) & 4) {
        *(int *)((char *)this + 0x46c) = *(int *)((char *)this + 0x478);
        sub_10109e90();
    }
}
// END FUNCTION
