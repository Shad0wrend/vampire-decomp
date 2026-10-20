// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10389df0 size=0x1e
#include "CNPC_VManBat.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VManBat::vfunc5
CNPC_VManBat *CNPC_VManBat::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10389f50 size=0x1d
#include "CNPC_VManBat.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b89c;
extern B g_10936c74;
int CNPC_VManBat::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b89c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1038aec0 size=0x118
#include "CNPC_VManBat.h"
#include "CUnknown1070b22c.h"

extern CUnknown1070b22c *g_1070b22c;
struct CPrecacheIface248
{
	virtual void slot0(const char *pszName, int bPreload);
};
extern CPrecacheIface248 *g_1070b248;
extern const char *g_10640ce0[4];
extern const char *g_10640d10[3];
extern const char *g_10640d1c[3];
extern const char *g_10640d28[3];
void sub_101d0ec0(const char *name);

// TARGET: CNPC_VManBat::vfunc104
void CNPC_VManBat::vfunc104()
{
	sub_100013f7();
	for (unsigned int i = 0; i < 4; i++)
		g_1070b22c->vfunc13(g_10640ce0[i], 0);
	g_1070b22c->vfunc17((int)"Manbat_screechcone_emitter", 1);
	g_1070b22c->vfunc17((int)"Manbat_player_emitter", 1);
	g_1070b22c->vfunc17((int)"HUD_Manbat_emitter", 1);
	g_1070b22c->vfunc17((int)"Manbat_blast_player", 1);
	for (unsigned int j = 0; j < 3; j++)
		g_1070b248->slot0(g_10640d10[j], 0);
	for (unsigned int k = 0; k < 3; k++)
		g_1070b248->slot0(g_10640d1c[k], 0);
	for (unsigned int m = 0; m < 3; m++)
		g_1070b248->slot0(g_10640d28[m], 0);
	g_1070b248->slot0("character/male/sheriff_manbat/screech.wav", 0);
	g_1070b248->slot0("character/male/sheriff_manbat/fall.wav", 0);
	g_1070b22c->vfunc17((int)"sheriff_teleport_emitter", 1);
	g_1070b22c->vfunc17((int)"sheriff_teleport_emitter", 1);
	sub_101d0ec0("item_w_manbat_claw");
}
// END FUNCTION
