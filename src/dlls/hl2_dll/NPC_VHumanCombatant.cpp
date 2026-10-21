// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10387380 size=0x12d
#include "CBaseEntity.h"
#include "CNPC_VHumanCombatant.h"
#include "CNPC_VHuman.h"
#include "CEHandleGet.h"

extern "C" int strcmp(const char *, const char *);
#pragma intrinsic(strcmp)

struct SGlobalVars224
{
	char pad[0x24];
	const char *mapname;
};
extern SGlobalVars224 *g_1070b228;
extern char g_106b8540[];

#define SC_V1(n) virtual void f##n();
#define SC_V10(p) SC_V1(p##0) SC_V1(p##1) SC_V1(p##2) SC_V1(p##3) SC_V1(p##4) SC_V1(p##5) SC_V1(p##6) SC_V1(p##7) SC_V1(p##8) SC_V1(p##9)
#define SC_V100(p) SC_V10(p##0) SC_V10(p##1) SC_V10(p##2) SC_V10(p##3) SC_V10(p##4) SC_V10(p##5) SC_V10(p##6) SC_V10(p##7) SC_V10(p##8) SC_V10(p##9)

class SCombatSlots
{
public:
	SC_V100(a) SC_V100(b) SC_V100(c) SC_V100(d) SC_V100(e)
	SC_V10(g0) SC_V10(g1) SC_V10(g2) SC_V10(g3) SC_V10(g4) SC_V10(g5) SC_V10(g6) SC_V10(g7) SC_V10(g8)
	SC_V1(h0) SC_V1(h1) SC_V1(h2) SC_V1(h3) SC_V1(h4) SC_V1(h5) SC_V1(h6)
	virtual void vfunc597(CGlobalEntityList_Ent *pEnt, int a);
};

struct SCombatView
{
	char pad0[0x1b38];
	int n1b38;
	const char *psz1b3c;
	int n1b40;
	char pad1[0x5cc0 - 0x1b44];
	int nState5cc0;
	int nState5cc4;
	char pad2[0x628c - 0x5cc8];
	unsigned int h628c;
	char pad3[0x65f6 - 0x6290];
	char b65f6;
};

int CNPC_VHumanCombatant::vfunc461()
{
	SCombatView *v = (SCombatView *)this;
	CNPC_VHuman *pHuman = (CNPC_VHuman *)this;
	v->n1b38 = 0x15;
	switch (v->nState5cc0) {
	case 1:
		if (!v->b65f6) {
			if (pHuman->sub_10014df8(0x4c) || pHuman->sub_10014df8(0x4d) || pHuman->sub_10014df8(0x4e)) {
				v->psz1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHumanCombatant.cpp";
				v->n1b40 = 0x1c5;
				v->nState5cc4 = 3;
			}
		}
		if (pHuman->sub_10269d30(0x3e)) {
			if (EHandle_Get(v->h628c)) {
				if (strcmp(g_1070b228->mapname ? g_1070b228->mapname : g_106b8540, "la_empire_2") == 0)
					((SCombatSlots *)this)->vfunc597(EHandle_Get(v->h628c), 5);
			}
			v->psz1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHumanCombatant.cpp";
			v->n1b40 = 0x1d1;
			return v->nState5cc4 = 0xb;
		}
		break;
	}
	return pHuman->sub_103851e0();
}
// END FUNCTION
