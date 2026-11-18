// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1014edb0 size=0x6
#include "CPhysicsAnimlink.h"
namespace lifted {
extern char g_1057c1d8;
}
datamap_t * CPhysicsAnimlink::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057c1d8);
}
// END FUNCTION

// FUNCTION: 0x1014ef60 size=0x9
#include "CPhysicsAnimlink.h"

int CPhysicsAnimlink::vfunc117()
{
	return CBaseEntity::vfunc117() | 0x200;
}
// END FUNCTION

// FUNCTION: 0x1014ef80 size=0x1e
#include "CPhysicsAnimlink.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsAnimlink::vfunc5
CBaseEntity *CPhysicsAnimlink::vfunc5(unsigned int flags)
{
	sub_1000144c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1014f000 size=0x192
#include "CPhysicsAnimlink.h"
#include "CBaseAnimating.h"
#include "CRagdollProp.h"
#include "CGlobalEntityList.h"
#include <string.h>

extern CGlobalEntityList g_106eb5d8;

struct CAnimlinkView {
	char m_pad0000[0x450];
	const char *m_psz450;	// 0x450
	const char *m_psz454;	// 0x454
	const char *m_psz458;	// 0x458
	const char *m_psz45c;	// 0x45c
	float m_vec460[3];	// 0x460
	float m_vec46c[3];	// 0x46c
};

struct CStudioBoneView {
	char m_pad0000[0xf0];
	int m_nBones;	// 0xf0
	int m_iBoneIndex;	// 0xf4
};

void CPhysicsAnimlink::vfunc103()
{
	CAnimlinkView *pView = (CAnimlinkView *)this;
	if (!pView->m_psz450 || !pView->m_psz454 || !pView->m_psz458)
		return;
	int iBone = -1;
	CBaseEntity *pEnt = 0;
	CBaseAnimating *pAnim;
	do {
		pEnt = g_106eb5d8.sub_100f7770(pEnt, pView->m_psz450 ? pView->m_psz450 : "", 0, 0);
		if (!pEnt)
			return;
		pAnim = dynamic_cast<CBaseAnimating *>(pEnt);
		if (!pAnim)
			return;
		CStudioBoneView *pHdr = (CStudioBoneView *)pAnim->sub_100952d0(-1);
		for (int i = 0; i < pHdr->m_nBones; i++) {
			char *pBone = (char *)pHdr + pHdr->m_iBoneIndex + i * 0xa0;
			if (!_strcmpi(pView->m_psz454 ? pView->m_psz454 : "", pBone + *(int *)pBone)) {
				iBone = i;
				break;
			}
		}
	} while (iBone < 0);
	CBaseEntity *pPhys = 0;
	void *pObject;
	do {
		pPhys = g_106eb5d8.sub_100f7770(pPhys, pView->m_psz458 ? pView->m_psz458 : "", 0, 0);
		if (!pPhys)
			return;
		pObject = *(void **)((char *)pPhys + 0x36c);
		if (pView->m_psz45c) {
			CRagdollProp *pRagdoll = dynamic_cast<CRagdollProp *>(pPhys);
			if (pRagdoll)
				pObject = (void *)pRagdoll->vfunc265(pView->m_psz45c ? pView->m_psz45c : "");
		}
	} while (!pObject);
	sub_1014f210(pAnim, iBone, pObject, (int)pView->m_vec460, (int)pView->m_vec46c);
}
// END FUNCTION
