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
CBaseFlex *CBaseFlex::vfunc5(unsigned int flags)
{
	sub_100152ad();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
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
