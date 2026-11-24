// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010f480 size=0xa2
#include "CWaterEnum.h"
#include "IClientEntity.h"

class IVEngineClient_1010f480
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
	virtual void v16(); virtual void v17();
	virtual int v18(int modelIndex);
	virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
	virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
	virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
	virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
	virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
	virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
	virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
	virtual void v64(); virtual void v65();
	virtual int v66(const Vector &pt, int headnode, const Vector &origin, const QAngle &angles);
};

extern IVEngineClient_1010f480 *g_104a57d4;

int CWaterEnum::vfunc0(IClientEntity *pEntity)
{
	int *pEntIndex = m_pEntIndex;
	if (pEntity && (pEntity->Collideable_vfunc7() & 0x20))
	{
		m_nContents = g_104a57d4->v66(
			m_vecPoint,
			g_104a57d4->v18(pEntity->GetCollisionModelIndex()),
			pEntity->GetAbsOrigin(),
			pEntity->GetAbsAngles());
		if (m_nContents)
		{
			if (pEntIndex)
				*pEntIndex = pEntity->entindex();
			return 1;
		}
	}
	return 0;
}
// END FUNCTION
