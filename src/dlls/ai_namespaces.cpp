// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 6 blocks
#include "vampire.h"

// FUNCTION: 0x102ea020 size=0x1c
#include "CUnknown1024a230.h"

// TARGET: CUnknown1024a230::sub_102ea020
const char *CUnknown1024a230::sub_102ea020(int a)
{
	if (a == -1)
		return "<<null>>";
	return (const char *)m_pObj->sub_10249c70(a);
}
// END FUNCTION

// FUNCTION: 0x102ea050 size=0x7
namespace lifted {
struct C1000cc2a { int sub_1000cc2a(); };
}
struct CUnknown102ea050 { int sub_102ea050(); };
int CUnknown102ea050::sub_102ea050()
{
    return ((lifted::C1000cc2a *)(*(int *)this))->sub_1000cc2a();
}
// END FUNCTION

// FUNCTION: 0x102ea070 size=0x4
struct CUnknown102ea070 { int sub_102ea070(); };
int CUnknown102ea070::sub_102ea070()
{
    return *(int *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x102ea090 size=0x38
// TARGET: CUnknown102ea090::sub_102ea090
struct CUnknown102ea090
{
	int m_a;
	int m_b;
	int m_c;
	int m_d;
	int m_e;
	int m_f;
	CUnknown102ea090 *sub_102ea090(char bFlag);
};

CUnknown102ea090 *CUnknown102ea090::sub_102ea090(char bFlag)
{
	m_a = bFlag ? 0 : -1;
	m_b = bFlag ? 0 : 9999;
	m_c = -1;
	m_d = -1;
	m_e = 0;
	m_f = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102ea0e0 size=0x3d
namespace block_102ea0e0 {
struct CUnknownArg102ea0e0
{
    int m_n0;
    int m_n4;
    int sub_102ea070();
};
int CUnknownArg102ea0e0::sub_102ea070()
{
    return m_n4;
}
struct CUnknownTimer102ea0e0
{
    int m_n0;
    int m_n4;
    int m_n8;
    int m_nC;
    int m_n10;
    int m_n14;
    bool sub_102ea0e0(CUnknownArg102ea0e0 *pOwner, int nValue);
};
}
using namespace block_102ea0e0;

// TARGET: block_102ea0e0::CUnknownTimer102ea0e0::sub_102ea0e0
bool block_102ea0e0::CUnknownTimer102ea0e0::sub_102ea0e0(CUnknownArg102ea0e0 *pOwner, int nValue)
{
    if (m_nC != -1)
    {
        m_n4 = nValue ? 9999 : 0;
        m_n8 = -1;
        m_nC = -1;
    }
    m_n10 = nValue;
    m_n14 = (int)pOwner;
    m_n0 = pOwner->sub_102ea070();
    return true;
}
// END FUNCTION

// FUNCTION: 0x102ea130 size=0xc3
#include "CUnknown10359c50.h"

extern void (__cdecl *g_109f3628)(const char *pszFormat, ...);	// tier0 Msg

// TARGET: CUnknown10359c50::sub_102ea130
bool CUnknown10359c50::sub_102ea130(const char *pszSymbol, int nLocalId, const char *pszIdType, const char *pszClassName)
{
	if (!m_pSymbols) {
		g_109f3628("ERROR: Adding symbol to uninitialized table %s\n", pszClassName);
		return false;
	}
	if (m_nLocalBase == 9999 && !sub_102ea240(nLocalId)) {
		g_109f3628("ERROR: Bad %s LOCALID for %s\n", pszIdType, pszClassName);
		return false;
	}
	if (nLocalId < m_nLocalBase) {
		g_109f3628("ERROR: %s First added %s must be first LOCALID!\n", pszIdType, pszClassName);
		return false;
	}
	if (m_nHighestLocal != -1) {
		if (nLocalId > m_nHighestLocal) {
			m_nHighestLocal = nLocalId;
			m_nHighestGlobal = m_nGlobalBase - m_nLocalBase + nLocalId;
		}
	} else {
		m_nHighestLocal = m_nLocalBase;
		m_nHighestGlobal = m_nGlobalBase;
	}
	int nGlobalId = sub_102ea2d0(nLocalId);
	m_pSymbols->sub_102e9fe0(pszSymbol, nGlobalId);
	return true;
}
// END FUNCTION
