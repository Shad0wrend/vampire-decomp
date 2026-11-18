// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b5520 size=0x6
#include "CBaseFlex.h"
namespace lifted {
extern char g_106d05b0;
}
int CBaseFlex::vfunc80()
{
    return (int)&lifted::g_106d05b0;
}
// END FUNCTION

// FUNCTION: 0x100b5540 size=0x3
#include "CBaseFlex.h"
int CBaseFlex::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100b57b0 size=0x6
#include "datamap.h"
#include "CBaseFlex.h"
namespace lifted {
extern char g_10559360;
}
datamap_t * CBaseFlex::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10559360);
}
// END FUNCTION

// FUNCTION: 0x100b58b0 size=0x6
#include "CBaseFlex.h"
namespace lifted {
extern char g_105594ac;
}
int CBaseFlex::vfunc79()
{
    return (int)&lifted::g_105594ac;
}
// END FUNCTION

// FUNCTION: 0x100b5940 size=0x1e
#include "CBaseFlex.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseFlex::vfunc5
CBaseEntity *CBaseFlex::vfunc5(unsigned int flags)
{
	sub_100152ad();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100b5a90 size=0x5
#include "CBaseFlex.h"
#include "CBaseAnimatingOverlay.h"

// TARGET: CBaseFlex::vfunc31
// the game's 0x100b5a90: a tail call (jmp) of CBaseAnimatingOverlay::vfunc31
void CBaseFlex::vfunc31(int a0)
{
	((CBaseAnimatingOverlay *)this)->CBaseAnimatingOverlay::vfunc31(a0);
}
// END FUNCTION

// FUNCTION: 0x100b5ab0 size=0x39
#include "CBaseFlex.h"
#include "CBaseAnimating.h"

#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CFlexSlotView
{
	CSV_ROW(r0)
	CSV_ROW(r1)
	CSV_ROW(r2)
	CSV_ROW(r3)
	CSV_ROW(r4)
	CSV_ROW(r5)
	CSV_ROW(r6)
	CSV_ROW(r7)
	CSV_ROW(r8)
	CSV_ROW(r9)
	CSV_ROW(r10)
	CSV_ROW(r11)
	CSV_ROW(r12)
	CSV_ROW(r13)
	CSV_ROW(r14)
	CSV_ROW(r15)
	CSV_ROW(r16)
	CSV_ROW(r17)
	CSV_ROW(r18)
	CSV_ROW(r19)
	CSV_ROW(r20)
	CSV_ROW(r21)
	CSV_ROW(r22)
	CSV_ROW(r23)
	CSV_ROW(r24)
	CSV_ROW(r25)
	CSV_ROW(r26)
	virtual void r270();
	virtual void r271();
	virtual void r272();
	virtual void r273();
	virtual void r274();
	virtual void r275();
	virtual void r276();
	virtual void r277();
	virtual void r278();
	virtual void vfunc279(int a, int b);
};

namespace block_100b5ab0 {
	struct CBaseFlexUnit : CBaseFlex
	{
		void sub_10005100(const char *pszModel);
	};
}

// TARGET: CBaseFlex::vfunc105
void CBaseFlex::vfunc105(const char *pszModel)
{
	((block_100b5ab0::CBaseFlexUnit *)this)->sub_10005100(pszModel);
	int nCount = ((CBaseAnimating *)this)->sub_10094520();
	for (int i = 0; i < nCount; i++) {
		((CFlexSlotView *)this)->vfunc279(i, 0);
		nCount = ((CBaseAnimating *)this)->sub_10094520();
	}
}
// END FUNCTION

// FUNCTION: 0x100b5b00 size=0x21
#include "CBaseFlex.h"

void CBaseFlex::sub_100b5b00(const float *v)
{
	m_vec848[0] = v[0];
	m_vec848[1] = v[1];
	m_vec848[2] = v[2];
}
// END FUNCTION

// FUNCTION: 0x100b5b40 size=0x7
#include "CBaseFlex.h"
char * CBaseFlex::vfunc278()
{
    return (char *)this + 0x848;
}
// END FUNCTION

// FUNCTION: 0x100b5b60 size=0x25
#include "CBaseFlex.h"

// TARGET: CBaseFlex::vfunc280
void CBaseFlex::vfunc280(int a, float b)
{
	vfunc279(sub_1001337c(a), b);
}
// END FUNCTION

// FUNCTION: 0x100b5ba0 size=0x58
#include "CBaseFlex.h"
// TARGET: CBaseFlex::vfunc279
void CBaseFlex::vfunc279(int nController, float flValue)
{
	if (nController >= 0 && nController < sub_10094520()) {
		CFlexStudioHdr *pHdr = sub_100952d0(-1);
		if (pHdr) {
			CFlexControllerDesc *pDesc = pHdr->GetController(nController);
			if (pDesc->m_flMax != pDesc->m_flMin)
				flValue = (flValue - pDesc->m_flMin) / (pDesc->m_flMax - pDesc->m_flMin);
			m_flFlexWeight[nController] = flValue;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100b5c20 size=0x1e
#include "CBaseFlex.h"

// TARGET: CBaseFlex::vfunc282
float CBaseFlex::vfunc282(const char *pszName)
{
	return vfunc281(sub_100b5d10(pszName));
}
// END FUNCTION

// FUNCTION: 0x100b5c50 size=0x69
#include "CBaseFlex.h"
#include "CBaseAnimating.h"

extern float g_104454c4;

struct FlexControllerHdr {
	char m_pad[0x164];
	int m_nControllerIndex;
};
struct FlexController {
	char m_pad[0xc];
	float m_flMin;
	float m_flMax;
};

float CBaseFlex::vfunc281(int index)
{
	if (index >= 0 && index < ((CBaseAnimating *)this)->sub_10094520()) {
		FlexControllerHdr *pHdr = (FlexControllerHdr *)((CBaseAnimating *)this)->sub_100952d0(-1);
		if (pHdr) {
			FlexController *pCtrl = (FlexController *)((char *)pHdr + pHdr->m_nControllerIndex + index * 0x14);
			if (pCtrl->m_flMax != pCtrl->m_flMin)
				return (pCtrl->m_flMax - pCtrl->m_flMin) * m_flFlexWeight[index] + pCtrl->m_flMin;
			return m_flFlexWeight[index];
		}
	}
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x100b5ce0 size=0x14
#include "CBaseFlex.h"

void CBaseFlex::sub_100b5ce0()
{
	m_toggle854 = !m_toggle854;
}
// END FUNCTION

// FUNCTION: 0x100b5d80 size=0xa7
#include "CBaseFlex.h"
#include <string.h>

void CBaseFlex::vfunc285(int nKey)
{
	if (!nKey) {
		m_nItems = 0;
		return;
	}
	for (int i = 0; i < m_nItems; i++) {
		CBaseFlexItem *pItem = &m_pItems[i];
		if (pItem->m_n04 == nKey) {
			pItem->m_pObject->sub_100029c8();
			pItem->m_pObject = 0;
			pItem->m_n04 = 0;
			pItem->m_b08 = 0;
			int nMove = m_nItems - i - 1;
			if (nMove > 0)
				memmove(&m_pItems[i], &m_pItems[i + 1], nMove * sizeof(CBaseFlexItem));
			m_nItems--;
			i--;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100b5e60 size=0x272
#include "CBaseFlex.h"
#include "utlvector.h"

struct SFlexEvent
{
	int sub_100029c8();
	const char *sub_10006fdc();
	int sub_100088d2();
	float sub_10014835();
	float sub_100154e7();
	float sub_10008a4e(float f);
};

struct SFlexScene
{
	void sub_1000632f(int channel);
	float sub_1000b9a1();
};

struct SFlexInfo
{
	SFlexEvent *m_pEvent;
	SFlexScene *m_pScene;
	char m_bStarted;
	int m_iLayer;
	int m_nSequence;
	float m_flStartAnim;
	int m_pad18;
};

struct SFlexAnim
{
	int sub_1000e057(const char *name);
	int sub_10014ffb(int seq);
	float sub_10009813(int seq);
	char m_pad[0x174];
	float m_flAnimTime;
};

extern void (*g_109f3628)(const char *pMsg, ...);
extern void (*g_109f3650)(int level, const char *fmt, ...);

void CBaseFlex::vfunc286(int a, void *pEvent)
{
	SFlexScene *scene = (SFlexScene *)a;
	SFlexEvent *event = (SFlexEvent *)pEvent;
	if (!scene || !event) {
		g_109f3628("CBaseFlex::AddExpression:  scene or event was NULL!!!\n");
		return;
	}
	SFlexInfo info;
	int tmp;
	info.m_pEvent = event;
	info.m_pScene = scene;
	info.m_bStarted = 0;
	SFlexAnim *pThis = (SFlexAnim *)this;
	switch (event->sub_100029c8()) {
	case 6:
		info.m_nSequence = pThis->sub_1000e057(event->sub_10006fdc());
		info.m_iLayer = -1;
		if (info.m_nSequence >= 0) {
			scene->sub_1000632f(event->sub_100088d2());
			info.m_iLayer = -1;
			event->sub_10014835();
			if (pThis->sub_10014ffb(info.m_nSequence) & 1) {
				g_109f3650(1, "vcd error, gesture %s of model %s is marked as STUDIO_LOOPING!\n", event->sub_10006fdc(), *(const char **)vfunc9(&tmp));
			}
			float dt = scene->sub_1000b9a1() - event->sub_100154e7();
			info.m_flStartAnim = pThis->m_flAnimTime - dt;
			float duration = event->sub_10014835();
			pThis->sub_10009813(info.m_nSequence);
			event->sub_10008a4e((pThis->m_flAnimTime - info.m_flStartAnim + 0.1) / duration);
		}
		break;
	case 7:
		info.m_nSequence = pThis->sub_1000e057(event->sub_10006fdc());
		info.m_iLayer = -1;
		if (info.m_nSequence >= 0) {
			scene->sub_1000632f(event->sub_100088d2());
			info.m_iLayer = -1;
			info.m_flStartAnim = pThis->m_flAnimTime;
		}
		break;
	}
	((CUtlVector<SFlexInfo> *)&m_pItems)->AddToTail(info);
}
// END FUNCTION

// FUNCTION: 0x100b6180 size=0x94
#include "CBaseFlex.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

void CBaseFlex::vfunc287(CBaseFlexItemObject *pObject)
{
	int i = 0;
	CBaseFlexItem *p;
	if (m_nItems > 0) {
		p = m_pItems;
		do {
			if (p->m_pObject == pObject)
				goto found;
			i++;
			p++;
		} while (i < m_nItems);
	}
	return;
found:
	pObject->sub_100029c8();
	p->m_pObject = 0;
	p->m_n04 = 0;
	p->m_b08 = 0;
	int nToMove = m_nItems - i - 1;
	if (nToMove > 0)
		memmove(&m_pItems[i], &m_pItems[i + 1], nToMove * sizeof(CBaseFlexItem));
	m_nItems--;
}
// END FUNCTION

// FUNCTION: 0x100b6250 size=0x34
#include "CBaseFlex.h"

// TARGET: CBaseFlex::vfunc283
void CBaseFlex::vfunc283()
{
	for (int i = 0; i < sub_10094520(); i++)
		vfunc279(i, 0);
	vfunc284();
}
// END FUNCTION

// FUNCTION: 0x100b65b0 size=0x208
#include "CBaseFlex.h"
extern void __cdecl sub_10003463(char *pIn, char *pOut);
extern struct IGameRules { virtual void vfunc0(); virtual bool vfunc1(); char pad[0x28]; int m2c; } *g_106d056c;
__declspec(dllimport) char *Q_strncpy(char *, const char *, int);
__declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);

// TARGET: CBaseFlex::vfunc284
void CBaseFlex::vfunc284()
{
	for (int i = 0; i < m_nItems; i++) {
		CBaseFlexItem *pItem = &m_pItems[i];
		CBaseFlexItemObject *pObj = pItem->m_pObject;
		CFlexPlayerSource *pSource = (CFlexPlayerSource *)pItem->m_n04;
		switch (pObj->sub_100029c8()) {
		case 10:
			if (pObj->sub_1000695b())
				vfunc289(pItem);
			break;
		case 2:
			if (pObj->sub_1000695b()) {
				const char *pszName = pObj->sub_10006fdc();
				void *pTrack = pObj->sub_1000b93d();
				if (pszName && pTrack) {
					CBaseFlexFileData *pFile = sub_100b62a0(pszName);
					if (pFile) {
						CBaseFlexFileData *pFile2 = 0;
						CFlexStudioHdr *pHdr = sub_100952d0(-1);
						if (pHdr && !g_106d056c->vfunc1() && g_106d056c->m2c) {
							char szModel[260];
							char szShort[260];
							char szPath[260];
							Q_strncpy(szModel, pHdr->m_pad00 + 0xc, 260);
							sub_10003463(szModel, szShort);
							Q_snprintf(szPath, 260, "%s/%s", szShort, pszName);
							pFile2 = sub_100b62a0(szPath);
						}
						float flTime = pSource->sub_1007dfa0();
						float flWeight = pObj->sub_10002900(flTime);
						vfunc288(pTrack, flWeight, pFile, pFile2, pItem->m_b08 == 0);
					}
				}
			}
			break;
		case 7:
			vfunc290((CFlexRequest *)pItem);
			break;
		case 6:
			vfunc291((CFlexRequest *)pItem);
			break;
		}
		pItem->m_b08 = 1;
	}
}
// END FUNCTION

// FUNCTION: 0x100b6960 size=0x2cc
#include "CBaseFlex.h"
#include "CBaseFlexCalves.h"
#include "CUnknown10077430.h"
#include "CUnknown10077730.h"
#include "CUnknown10074a30.h"
#include "CUnknown10074050.h"
#include "Tier1.h"
#include <string.h>

// TARGET: CBaseFlex::vfunc289
void CBaseFlex::vfunc289(CBaseFlexItem *info)
{
	if (!info)
		return;

	CBaseFlexItemObject *event = info->m_pObject;
	if (!event)
		return;

	void *scene = (void *)info->m_n04;
	if (!scene)
		return;

	if (!((CUnknown10077710 *)event)->sub_10077710()) {
		for (int i = 0; i < ((CUnknown10077430 *)event)->sub_10077430(); i++) {
			void *track = ((CUnknown10077430 *)event)->sub_10077450(i);
			if (!track)
				continue;

			if (((CUnknown10074a30 *)track)->sub_10074a50()) {
				char name[512];
				g_109f3890(name, "right_", sizeof(name));
				strcat(name, ((CUnknown10074050 *)track)->sub_10074050());
				((CUnknown10074a00 *)track)->sub_10074a00(0, sub_100b5d10(name), 0);

				g_109f3890(name, "left_", sizeof(name));
				strcat(name, ((CUnknown10074050 *)track)->sub_10074050());
				((CUnknown10074a00 *)track)->sub_10074a00(0, sub_100b5d10(name), 0);
			} else {
				((CUnknown10074a00 *)track)->sub_10074a00(0, sub_100b5d10(((CUnknown10074050 *)track)->sub_10074050()), 0);
			}
		}
		((CUnknown10077730 *)event)->sub_10077730(1);
	}

	float scenetime = ((CUnknown1007dfa0 *)scene)->sub_1007dfa0();
	float weight = ((CUnk10076280 *)event)->sub_10076280(scenetime);

	for (int i = 0; i < ((CUnknown10077430 *)event)->sub_10077430(); i++) {
		void *track = ((CUnknown10077430 *)event)->sub_10077450(i);
		if (!track)
			continue;
		if (!((CUnknown100740d0 *)track)->sub_100740d0())
			continue;

		if (((CUnknown10074a30 *)track)->sub_10074a50()) {
			for (int side = 0; side < 2; side++) {
				int controller = ((CUnk100749a0 *)track)->sub_100749a0(side);
				float flIntensity = ((CUnknown10074a30 *)track)->sub_10074610(scenetime, side);
				if (controller >= 0) {
					float orig = vfunc281(controller);
					vfunc279(controller, orig * (1 - weight) + flIntensity * weight);
				}
			}
		} else {
			int controller = ((CUnk100749a0 *)track)->sub_100749a0(0);
			float flIntensity = ((CUnknown10074a30 *)track)->sub_10074610(scenetime, 0);
			if (controller >= 0) {
				float orig = vfunc281(controller);
				vfunc279(controller, orig * (1 - weight) + flIntensity * weight);
			}
		}
	}

	info->m_b08 = 1;
}
// END FUNCTION

// FUNCTION: 0x100b6cf0 size=0x1a1
#include "CBaseFlex.h"
#include "CUnknown100b6f10.h"
#include "CUnknown100b6f80.h"

extern "C" int __cdecl _strcmpi(const char *pStr1, const char *pStr2);
typedef unsigned char byte;

struct flexweight_t { int key; float weight; float influence; };
struct flexmarkovgroup_t { int settingnumber; int weight; };
struct flexsettinghdr_t;

struct flexsetting_t
{
	int nameindex;
	int type;
	int numsettings;
	int index;
	int currentindex;
	int settingindex;

	char *pszName() const { return (char *)(((byte *)this) + nameindex); }
	bool IsMarkov() const { return type == 1; }
	flexmarkovgroup_t *pMarkovGroup(int member) const
	{
		if (!IsMarkov())
			return 0;
		if (member < 0 || member >= numsettings)
			return 0;
		flexmarkovgroup_t *group = (flexmarkovgroup_t *)(((byte *)this) + settingindex) + member;
		return group;
	}
	int GetMarkovSetting(int member) const
	{
		flexmarkovgroup_t *group = pMarkovGroup(member);
		if (!group)
			return -1;
		return group->settingnumber;
	}
	inline int psetting(byte *base, int i, flexweight_t **weights) const;
};

struct flexsettinghdr_t
{
	char pad[0x8c];
	int numflexsettings;
	int flexsettingindex;
	flexsetting_t *pSetting(int i) const { return (flexsetting_t *)(((byte *)this) + flexsettingindex) + i; }
	int pad94[5];
	int keymappingindex;
	int *pLocalToGlobal(int i) const { return (int *)(((byte *)this) + keymappingindex) + i; }
	int LocalToGlobal(int i) const { return *pLocalToGlobal(i); }

	flexsetting_t *pTranslatedSetting(int i) const
	{
		flexsetting_t *setting = (flexsetting_t *)(((byte *)this) + flexsettingindex) + i;
		if (!setting->IsMarkov())
			return setting;
		int newindex = setting->GetMarkovSetting(setting->currentindex);
		if (newindex == -1)
			return setting;
		return (flexsetting_t *)((CUnknown100b6f10 *)this)->sub_100b6f10(newindex);
	}
};

inline int flexsetting_t::psetting(byte *base, int i, flexweight_t **weights) const
{
	*weights = 0;
	if (IsMarkov()) {
		int settingnum = GetMarkovSetting(currentindex);
		if (settingnum == -1)
			return -1;
		flexsetting_t *setting = ((flexsettinghdr_t *)base)->pSetting(settingnum);
		if (!setting)
			return -1;
		return ((CUnknown100b6f80 *)setting)->sub_100b6f80((CUnknown100b6f80Hdr *)base, i, (int *)weights);
	}
	*weights = (flexweight_t *)(((byte *)this) + settingindex) + i;
	return numsettings;
}

void __cdecl sub_100b68d0(flexsettinghdr_t *pSettinghdr, flexsetting_t *pSetting);

struct CFlexSeqHdrOps
{
	const flexsetting_t *sub_100b6850(flexsettinghdr_t const *pSettinghdr, const char *expr);
};

#define expr ((const char *)expr0)
#define pSettinghdr ((flexsettinghdr_t *)pSettinghdr0)
#define pOverrideHdr ((flexsettinghdr_t *)pOverrideHdr0)
// TARGET: CBaseFlex::vfunc288
void CBaseFlex::vfunc288(void *expr0, float scale, CBaseFlexFileData *pSettinghdr0, CBaseFlexFileData *pOverrideHdr0, bool newexpression)
{
	int i;
	flexsetting_t const *pSetting = 0;

	for (i = 0; i < pSettinghdr->numflexsettings; i++)
	{
		pSetting = pSettinghdr->pSetting(i);
		if (!pSetting)
			continue;
		const char *name = pSetting->pszName();
		if (!_strcmpi(name, expr))
			break;
	}

	if (i >= pSettinghdr->numflexsettings)
	{
		return;
	}

	if (newexpression)
	{
		if (pSetting->type == 1)
		{
			sub_100b68d0(pSettinghdr, (flexsetting_t *)pSetting);
		}
	}

	pSetting = pSettinghdr->pTranslatedSetting(i);

	if (pOverrideHdr)
	{
		const char *resolvedName = pSetting->pszName();
		if (resolvedName)
		{
			flexsetting_t const *override = ((CFlexSeqHdrOps *)this)->sub_100b6850(pOverrideHdr, resolvedName);
			if (override)
			{
				pSettinghdr0 = pOverrideHdr0;
				pSetting = override;
			}
		}
	}

	flexweight_t *pWeights = 0;
	int truecount = pSetting->psetting((byte *)pSettinghdr, 0, &pWeights);
	if (!pWeights)
		return;

	for (i = 0; i < truecount; i++, pWeights++)
	{
		int index = pSettinghdr->LocalToGlobal(pWeights->key);
		float value = vfunc281(index) + scale * pWeights->weight;
		vfunc279(index, value);
	}
}
// END FUNCTION

// FUNCTION: 0x100b7040 size=0x75
#include "CBaseFlex.h"

// TARGET: CBaseFlex::vfunc291
void CBaseFlex::vfunc291(CFlexRequest *pRequest)
{
	if (pRequest) {
		CFlexPlayerTrack *pTrack = pRequest->m_pTrack;
		if (pTrack) {
			CFlexPlayerSource *pSource = pRequest->m_pSource;
			if (pSource && pRequest->m_n0c >= 0) {
				float flDuration = pTrack->sub_10076b30();
				sub_10091080(pRequest->m_nSequence);
				pTrack->sub_10077f10((*(float *)((char *)this + 0x174) - pRequest->m_flStartTime + 0.1) / flDuration);
				pTrack->sub_10076280(pSource->sub_1007dfa0());
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100b70e0 size=0x33
#include "CBaseFlex.h"

// TARGET: CBaseFlex::vfunc290
void CBaseFlex::vfunc290(CFlexRequest *pRequest)
{
	if (pRequest)
	{
		CFlexPlayerTrack *pTrack = pRequest->m_pTrack;
		if (pTrack)
		{
			CFlexPlayerSource *pSource = pRequest->m_pSource;
			if (pSource)
			{
				if (pRequest->m_n0c >= 0)
					pTrack->sub_10076280(pSource->sub_1007dfa0());
			}
		}
	}
}
// END FUNCTION
