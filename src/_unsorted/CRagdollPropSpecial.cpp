// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101575b0 size=0x6
#include "CRagdollPropSpecial.h"
#include "datamap.h"
namespace lifted {
extern char g_1057e9ac;
}
datamap_t * CRagdollPropSpecial::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057e9ac);
}
// END FUNCTION

// FUNCTION: 0x10157640 size=0x22
#include "CRagdollPropSpecial.h"
void CRagdollPropSpecial::vfunc113()
{
	CBaseEntity::vfunc113();
	m_b103c = 1;
	m_f1044 = 100.0f;
	m_f1048 = 100.0f;
}
// END FUNCTION

// FUNCTION: 0x10157680 size=0x22
// TARGET: CRagdollPropSpecial::vfunc73
#include "CRagdollPropSpecial.h"
bool CRagdollPropSpecial::vfunc73(CBaseEntity *pOther)
{
    if (*(int *)((char *)pOther + 0x9c) != 0) {
        if (m_b103c != 0) {
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x101576c0 size=0x14e
#include "CBaseEntity.h"
#include "CRagdollPropSpecial.h"
struct CPhysObjStub {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void GetVelocity(float *pVel, int a);
};
struct CPhysDamageInfo {
	char m_data[0x4c];
	void sub_101c26d0(CBaseEntity *pInflictor, CBaseEntity *pAttacker, float flDamage, int a, int b, int c, int d);
};
extern float (__cdecl *g_10579660)(float);
CBaseEntity *__fastcall sub_100a8240(CBaseEntity *p);
void sub_10032720(CBaseEntity *pEnt, CPhysDamageInfo *pInfo);

// TARGET: CRagdollPropSpecial::vfunc174
void CRagdollPropSpecial::vfunc174(CBaseEntity *pOther)
{
	if (*(int *)((char *)pOther + 0x9c) && m_b103c && m_obj36c)
	{
		float vel[3];
		((CPhysObjStub *)m_obj36c)->GetVelocity(vel, 0);
		float speed = g_10579660(vel[0] * vel[0] + vel[2] * vel[2] + vel[1] * vel[1]);
		if (speed > m_f1044)
		{
			float damage;
			if (m_f1048 == m_f1044)
				damage = m_f1040;
			else
			{
				float range = m_f1048 - m_f1044;
				float c = (m_f1048 < speed) ? m_f1048 : (m_f1044 > speed) ? m_f1044 : speed;
				damage = (c - m_f1044) / range * m_f1040;
			}
			CBaseEntity *pAttacker;
			if (!sub_100a8240(this))
				pAttacker = this;
			else
				pAttacker = sub_100a8240(this);
			CPhysDamageInfo info;
			info.sub_101c26d0(this, pAttacker, damage, 1, 0, 0, -1);
			sub_10032720(pOther, &info);
			m_b103c = 0;
		}
	}
	sub_10157ca0(pOther);
}
// END FUNCTION

// FUNCTION: 0x10157870 size=0xd
#include "CRagdollPropSpecial.h"
struct RagdollField1040 { char pad[0x1040]; int m; };
void CRagdollPropSpecial::vfunc191(int value)
{
	((RagdollField1040 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x10157be0 size=0x8c
#include "CRagdollPropSpecial.h"
#include "IPhysicsObject.h"

struct CCollisionEventX
{
	char m_pad0000[0x68];
	CBaseEntity *m_pEntities[2];	// 0x68
};

void CRagdollPropSpecial::vfunc230(int index, void *pEvent)
{
	CBaseEntity::vfunc230(index, pEvent);
	CBaseEntity *pOther = ((CCollisionEventX *)pEvent)->m_pEntities[index == 0];
	if (pOther && pOther != this) {
		IPhysicsObject *pPhysics = (IPhysicsObject *)m_obj36c;
		if (pPhysics) {
			Vector vecVelocity;
			pPhysics->vfunc40(&vecVelocity.x, 0);
			if (vecVelocity.Length() > 150.0)
				sub_10157ca0(pOther);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10158120 size=0x1e
#include "CRagdollPropSpecial.h"

void sub_100aa7b0(void *p);

// TARGET: CRagdollPropSpecial::vfunc5
CBaseEntity *CRagdollPropSpecial::vfunc5(unsigned int flags)
{
	sub_10014317();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
