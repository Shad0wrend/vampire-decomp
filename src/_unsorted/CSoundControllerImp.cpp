// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101bd650 size=0x11
struct S { void sub_10005cdb(int); };
void __stdcall sub_101bd650(S *p, int a)
{
    p->sub_10005cdb(a);
}
// END FUNCTION

// FUNCTION: 0x101bd680 size=0x101
#include "CSoundControllerImp.h"

struct IUniformRandomStream { virtual void v0(); virtual float RandomFloat(float flMin, float flMax); };
extern IUniformRandomStream *g_1070b244;
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

float CSoundControllerImp::vfunc16(void *pSound, int command, envelopePoint_t *points, int numPoints)
{
	float amplitude = 0.0f;
	float duration = 0.0f;
	float totalDuration = 0.0f;
	vfunc4(pSound);
	for (int i = 0; i < numPoints; i++)
	{
		if (points[i].amplitudeMin == -1.0f && points[i].amplitudeMax == -1.0f)
		{
			if (i == 0)
				Msg("Invalid starting amplitude value in envelope!  (Cannot be -1)\n");
		}
		else
			amplitude = g_1070b244->RandomFloat(points[i].amplitudeMin, points[i].amplitudeMax);
		if (points[i].durationMin == -1.0f && points[i].durationMax == -1.0f)
		{
			if (i == 0)
				Msg("Invalid starting duration value in envelope! (Cannot be -1)\n");
		}
		else
			duration = g_1070b244->RandomFloat(points[i].durationMin, points[i].durationMax);
		vfunc3(pSound, totalDuration, command, duration, amplitude);
		totalDuration += duration;
	}
	return totalDuration;
}
// END FUNCTION
