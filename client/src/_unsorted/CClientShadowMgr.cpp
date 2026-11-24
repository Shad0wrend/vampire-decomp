// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100d5390 size=0x1
#include "CClientShadowMgr.h"
void CClientShadowMgr::vfunc3()
{
}
// END FUNCTION

// FUNCTION: 0x100d53a0 size=0x1
#include "CClientShadowMgr.h"
void CClientShadowMgr::vfunc4()
{
}
// END FUNCTION

// FUNCTION: 0x100d53b0 size=0x3
#include "CClientShadowMgr.h"
void CClientShadowMgr::vfunc7(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x100d5830 size=0xb2
#include "CClientShadowMgr.h"
#include "Vector.h"
struct IEng_100d5830 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
	virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
	virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
	virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74();
	virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84();
	virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
	virtual void v95();
	virtual int GetDXSupportLevel();
};
struct IMatSys_100d5830 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
	virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
	virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54();
	virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
	virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64();
	virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
	virtual void v70(); virtual void v71(); virtual void v72(); virtual void v73(); virtual void v74();
	virtual void v75(); virtual void v76(); virtual void v77(); virtual void v78(); virtual void v79();
	virtual void v80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void v84();
	virtual void v85(); virtual void v86(); virtual void v87(); virtual void v88(); virtual void v89();
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
	virtual void v95(); virtual void v96(); virtual void v97(); virtual void v98(); virtual void v99();
	virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103(); virtual void v104();
	virtual void v105(); virtual void v106(); virtual void v107(); virtual void v108(); virtual void v109();
	virtual void v110(); virtual void v111(); virtual void v112(); virtual void v113(); virtual void v114();
	virtual void v115(); virtual void v116(); virtual void v117(); virtual void v118(); virtual void v119();
	virtual void AddRestoreCallback(void (*fn)());
};
extern IEng_100d5830 *g_104a57d4;
extern IMatSys_100d5830 *g_104a57ec;
extern void sub_100d58f0();
struct MH_100d5830 {
	int m_h;
	void sub_100cd1f0(const char *name);
};
struct Sub_100d5830 {
	char m_data[0x90];
	void sub_100d4560();
};
struct SM_100d5830 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void SetShadowDir(const Vector &dir);
	char pad[0x14];
	MH_100d5830 m_18, m_1c, m_20, m_24, m_28;
	char pad2[0x1c];
	Sub_100d5830 m_48;
	bool m_d8;
	bool m_d9;
	bool sub_100d5830();
};
// TARGET: SM_100d5830::sub_100d5830
bool SM_100d5830::sub_100d5830()
{
	m_18.sub_100cd1f0("engine/simpleshadow");
	Vector dir(1.0f, 1.0f, -3.0f);
	SetShadowDir(dir);
	m_d8 = g_104a57d4->GetDXSupportLevel() >= 80;
	if (m_d8)
	{
		m_1c.sub_100cd1f0("engine/rendershadow");
		m_20.sub_100cd1f0("engine/rendershadow_soft");
		m_24.sub_100cd1f0("engine/rendermodelshadow");
		m_28.sub_100cd1f0("engine/shadowbuild");
		m_48.sub_100d4560();
	}
	m_d9 = false;
	g_104a57ec->AddRestoreCallback(sub_100d58f0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x100d5ce0 size=0x4f
#include "CClientShadowMgr.h"
#include "Vector.h"

void CClientShadowMgr::vfunc14(const void *pDirection)
{
	const Vector *pDir = (const Vector *)pDirection;
	Vector &vec = *(Vector *)&m_unk08;
	vec = *pDir;
	(*g_102be4e8)(vec);
	unsigned short h = m_Shadows.m_Head;
	while ( h != CUtlLinkedList240::InvalidIndex() )
		h = m_Shadows.m_pMemory[h].m_Next;
}
// END FUNCTION

// FUNCTION: 0x100d7e50 size=0x1c
#include "CClientShadowMgr.h"
void *CClientShadowMgr::vfunc16(unsigned short h)
{
	return &m_Shadows.m_pMemory[h].m_Data[0x54];
}
// END FUNCTION
