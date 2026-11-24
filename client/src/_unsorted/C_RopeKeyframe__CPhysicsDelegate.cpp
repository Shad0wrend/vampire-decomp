// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100be960 size=0x228
#include <math.h>
#include <stdlib.h>
#include "C_RopeKeyframe.h"
#include "ConVar.h"

class IVEngineClient_100be960
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
	virtual void v36(); virtual void v37(); virtual void v38();
	virtual float vfunc39(int a);
};

extern IVEngineClient_100be960 *g_104a57d4;
extern ConVar *g_104a3a5c;
extern float g_102b5c84;

extern void sub_100e2fc0(float flTime, Vector &vWind);
extern void sub_10108fd0(const float *start, float scale, const float *dir, float *dest);

static inline Vector RandomVector(float minVal, float maxVal)
{
	Vector random;
	float scale = (maxVal - minVal) * (1.0f / 32767.0f);
	random.x = minVal + (float)rand() * scale;
	random.y = minVal + (float)rand() * scale;
	random.z = minVal + (float)rand() * scale;
	return random;
}

void C_RopeKeyframe::CPhysicsDelegate::vfunc0(CRopeNode *pNodes, int iNode, Vector *pAccel)
{
	pAccel->Init(0.0f, 0.0f, -1500.0f);

	if (!(m_pKeyframe->m_LockedPoints[iNode >> 5] & (1 << (iNode & 31))) && m_pKeyframe->m_bApplyWind)
	{
		Vector vWind;
		sub_100e2fc0(g_104a57d4->vfunc39(0), vWind);
		if (vWind.LengthSqr() > 0.0f)
		{
			sub_10108fd0(pAccel->Base(), 10.0f, vWind.Base(), pAccel->Base());
		}
		else if (m_pKeyframe->m_flCurWindTime < m_pKeyframe->m_flWindDuration)
		{
			float flScale = 1.0 - cos((m_pKeyframe->m_flCurWindTime / m_pKeyframe->m_flWindDuration) * 3.141592653589793);
			*pAccel += m_pKeyframe->m_vWindDir * flScale;
		}
	}

	if (!g_104a3a5c->vfunc1() && g_104a3a5c->m_nValue)
	{
		*pAccel += RandomVector(-g_102b5c84, g_102b5c84);
	}

	*pAccel += m_pKeyframe->m_vForce * 20.0f;
	m_pKeyframe->m_vForce *= 0.95f;
}
// END FUNCTION
