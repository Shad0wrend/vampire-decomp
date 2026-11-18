// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10029270 size=0x6
#include "CKeepUpright.h"
#include "datamap.h"
namespace lifted {
extern char g_10537530;
}
datamap_t * CKeepUpright::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10537530);
}
// END FUNCTION

// FUNCTION: 0x10029680 size=0x1e
#include "CKeepUpright.h"

void sub_100aa7b0(void *p);

// TARGET: CKeepUpright::vfunc5
CBaseEntity *CKeepUpright::vfunc5(unsigned int flags)
{
	sub_100057c2();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10029700 size=0x5c
#include "CKeepUpright.h"
struct CBaseEntityVectorsUnit
{
	void sub_100ad320(float *pForward, float *pRight, float *pUp);
};
void CKeepUpright::vfunc103()
{
	m_vecAxis460[0] = 0;
	m_vecAxis460[1] = 0;
	m_vecAxis460[2] = 1.0f;
	((CBaseEntityVectorsUnit *)this)->sub_100ad320(0, 0, m_vecUp454);
	vfunc93(0, 0);
	if (*(unsigned char *)((char *)this + 0x204) & 1)
		*((char *)this + 0x47c) = 0;
	else
		*((char *)this + 0x47c) = 1;
}
// END FUNCTION

// FUNCTION: 0x10029780 size=0xdc
#include "CBaseEntity.h"
#include "CKeepUpright.h"
struct Handle_10029780
{
	unsigned int m_Index;
	int GetEntryIndex() const { return m_Index & 0x1fff; }
	int GetSerialNumber() const { return m_Index >> 13; }
	char *Get() const;
};
struct EntInfo_10029780 { char *m_pEntity; int m_SerialNumber; int m_pad; };
struct EntList_10029780
{
	void *vtbl;
	EntInfo_10029780 m_EntPtrArray[1];
	char *LookupEntity(const Handle_10029780 &handle) const
	{
		if (handle.m_Index == 0xffffffff)
			return 0;
		const EntInfo_10029780 *pInfo = &m_EntPtrArray[handle.GetEntryIndex()];
		if (pInfo->m_SerialNumber == handle.GetSerialNumber())
			return pInfo->m_pEntity;
		else
			return 0;
	}
};
extern EntList_10029780 *g_10566458;
inline char *Handle_10029780::Get() const { return g_10566458->LookupEntity(*this); }

struct IMotionController_10029780
{
	virtual void vfunc0();
	virtual void SetEventHandler(void *handler);
	virtual void AttachObject(void *pObject);
};
struct IPhysicsEnvironment_10029780
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38();
	virtual IMotionController_10029780 *CreateMotionController(void *pHandler);
};
extern IPhysicsEnvironment_10029780 *g_10723940;
extern char g_106b8540[];
void *sub_1004d650(const char *name);
void sub_101cd940(CBaseEntity *ent);

void CKeepUpright::vfunc113()
{
	CBaseEntity::vfunc113();
	if (!m_pController)
	{
		void *pPhys;
		if (((Handle_10029780 *)&m_attachedObject)->Get())
			pPhys = *(void **)(((Handle_10029780 *)&m_attachedObject)->Get() + 0x36c);
		else
			pPhys = sub_1004d650(m_nameAttach ? m_nameAttach : g_106b8540);
		if (!pPhys)
		{
			sub_101cd940(this);
			return;
		}
		m_pController = g_10723940->CreateMotionController(&m_motionEvent);
		((IMotionController_10029780 *)m_pController)->AttachObject(pPhys);
	}
	else
	{
		((IMotionController_10029780 *)m_pController)->SetEventHandler(&m_motionEvent);
	}
}
// END FUNCTION
