// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x100b5b00 size=0x21
#include "CBaseFlex.h"

void CBaseFlex::sub_100b5b00(const float *v)
{
	m_vec848[0] = v[0];
	m_vec848[1] = v[1];
	m_vec848[2] = v[2];
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
