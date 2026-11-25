// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100dfe00 size=0x28
#include "CBaseStaticModel.h"
CBaseStaticModel::CBaseStaticModel() : m_unk38(0), m_unk3e(0xff)
{
	m_unk3c = 0xffff;
}
// END FUNCTION

// FUNCTION: 0x100dfe50 size=0x24
#include "CBaseStaticModel.h"
struct CLeafView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void RemoveRenderable(unsigned short h);
};
extern CLeafView *g_104a57d8;
CBaseStaticModel::~CBaseStaticModel()
{
	if (m_unk3c != 0xFFFF)
		g_104a57d8->RemoveRenderable(m_unk3c);
}
// END FUNCTION

// FUNCTION: 0x100dff30 size=0x23
#include "CBaseStaticModel.h"
struct IModelInfo_ {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual bool v9(int);
};
extern IModelInfo_ *g_104a57f8;
bool CBaseStaticModel::IsTransparent()
{
	return m_unk3e < 255 || g_104a57f8->v9(m_unk38);
}
// END FUNCTION

// FUNCTION: 0x100dff60 size=0xb
#include "CBaseStaticModel.h"
namespace lifted {
extern int g_105f99d8;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual bool f10(); };
}
bool CBaseStaticModel::ShouldDraw()
{
    return ((lifted::V *)lifted::g_105f99d8)->f10();
}
// END FUNCTION

// FUNCTION: 0x100dff70 size=0x43
#include "CBaseStaticModel.h"
void CBaseStaticModel::GetRenderBounds(Vector &mins, Vector &maxs)
{
	mins = m_vecMins - m_vecOrigin;
	maxs = m_vecMaxs - m_vecOrigin;
}
// END FUNCTION

// FUNCTION: 0x100dffc0 size=0x2d
#include "CBaseStaticModel.h"
// TARGET: ?GetRenderBoundsWorldspace@CBaseStaticModel@@UAEXAAVVector@@0@Z
void CBaseStaticModel::GetRenderBoundsWorldspace(Vector &mins, Vector &maxs)
{
	mins = m_vecMins;
	maxs = m_vecMaxs;
}
// END FUNCTION

// FUNCTION: 0x100e0030 size=0xb8
#include "CBaseStaticModel.h"
struct CModelInfoView { virtual void *vfunc0(int handle); };
struct StudioView { char m_pad[0xa8]; char m_a8[0x48]; int m_nBones; };
extern CModelInfoView *g_104a57d8;
void sub_101094e0(const QAngle *ang, void *matrix);
void sub_10108430(void *a, void *b);
void sub_10107f80(void *a, void *b, void *c);
struct MatView { float m[12]; };
bool CBaseStaticModel::SetupBones(matrix3x4_t *pBoneToWorldOut, int nMaxBones, int boneMask, float currentTime, int a4)
{
	if (m_unk38) {
		const QAngle &ang = GetRenderAngles();
		const Vector &org = GetRenderOrigin();
		MatView mat;
		sub_101094e0(&ang, &mat);
		mat.m[3] = org.x;
		mat.m[7] = org.y;
		mat.m[11] = org.z;
		StudioView *hdr = (StudioView *)g_104a57d8->vfunc0(m_unk38);
		if (hdr) {
			for (int i = 0; i < hdr->m_nBones; i++)
				sub_10108430(&mat, (char *)pBoneToWorldOut + i * 0x30);
			if (a4)
				sub_10107f80(hdr->m_a8, &mat, (void *)a4);
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100e13b0 size=0x3
#include "CBaseStaticModel.h"
ICollideable * CBaseStaticModel::GetClientCollideable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e13c0 size=0x3
#include "CBaseStaticModel.h"
IClientNetworkable * CBaseStaticModel::GetClientNetworkable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e13d0 size=0xb
#include "CBaseStaticModel.h"
IClientRenderable * CBaseStaticModel::GetClientRenderable()
{
    if (((int)this) != 0) {
        return (IClientRenderable *)((char *)this + 4);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e13e0 size=0x3
#include "CBaseStaticModel.h"
IClientEntity * CBaseStaticModel::GetIClientEntity()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e13f0 size=0x3
#include "CBaseStaticModel.h"
C_BaseEntity * CBaseStaticModel::GetBaseEntity()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e1400 size=0x3
#include "CBaseStaticModel.h"
IClientThinkable * CBaseStaticModel::GetClientThinkable()
{
    return 0;
}
// END FUNCTION
