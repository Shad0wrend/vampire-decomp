// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036b6b0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __stdcall sub_1036b6b0(int sector)
{
    g_109f3620[*g_109f3680].a = "CNPC_VChangBros::SectorIsInPit";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (sector > 0 && sector <= 2) {
        (*g_109f3680)--;
        return true;
    }
    (*g_109f3680)--;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1036d600 size=0x188
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VChangBros.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include <math.h>


struct FacingEntView
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18)
	CAI_NPC_V10(19) CAI_NPC_V10(20)
	CAI_NPC_V(210) CAI_NPC_V(211) CAI_NPC_V(212) CAI_NPC_V(213) CAI_NPC_V(214) CAI_NPC_V(215) CAI_NPC_V(216)
	virtual float *vfunc217();
	virtual float *vfunc218();
	virtual float *vfunc219();
};

void sub_10139970(const Vector *pForward, float *pAngles);
float sub_100097e6(float a, float b);

// TARGET: CNPC_VChangBros::sub_1036d600
void CNPC_VChangBros::sub_1036d600()
{
	ScopeTrace trace("CNPC_VChangBros::UpdateFacingTimer", g_106b8540);
	FacingEntView *pEnemy = (FacingEntView *)EHandle_Get(*(unsigned int *)((char *)this + 0x628c));
	if (pEnemy)
	{
		Vector vecDelta = *(Vector *)((FacingEntView *)this)->vfunc217() - *(Vector *)pEnemy->vfunc217();
		float flAbsZ = (float)fabs(vecDelta.z);
		if (flAbsZ < 50.0f)
		{
			vecDelta.z = 0;
			float flDist = VectorNormalize(vecDelta);
			if (flDist <= 150.0f && flDist > 1e-5f)
			{
				float angles[3];
				sub_10139970(&vecDelta, angles);
				float flEnemyYaw = pEnemy->vfunc219()[1];
				if ((float)fabs(sub_100097e6(flEnemyYaw, angles[1])) <= 70.0f)
					return;
			}
		}
	}
	*(float *)((char *)this + 0x66d0) = gpGlobals->curtime;
}
// END FUNCTION
