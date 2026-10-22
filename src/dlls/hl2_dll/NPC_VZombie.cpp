// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e05e0 size=0xb6
#include "CNPC_VZombie.h"
#include "CPASFilter.h"

struct CZombieEngineSound
{
	virtual void v0();
	virtual void v1();
	virtual void v2(CRecipientFilter *pFilter, int a, const float *pOrigin, const float *pAngles, int nSound);
};
extern CZombieEngineSound *g_10540528;
void sub_10139970(const Vector *pDir, Vector *pAngles);

// TARGET: CNPC_VZombie::sub_103e05e0
void CNPC_VZombie::sub_103e05e0(int nSound)
{
	Vector vecOrigin, vecDir, vecAngles;
	sub_10331da0(&vecOrigin, &vecDir);
	sub_10139970(&vecDir, &vecAngles);
	CPASFilter filter(&vecOrigin.x);
	g_10540528->v2(&filter, 0, &vecOrigin.x, &vecAngles.x, nSound);
}
// END FUNCTION
