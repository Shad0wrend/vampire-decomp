// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10247ba0 size=0x19
#include "CUnknown10248a50.h"

// TARGET: CUnknown10248a50::CUnknown10248a50
CUnknown10248a50::CUnknown10248a50(const char *pszName)
{
	m_pszName = 0;
	sub_10247cf0(pszName);
}
// END FUNCTION

// FUNCTION: 0x10247da0 size=0x57
#include "CUnknown10248a50.h"

extern char g_10753f68;

CUnknown10248a50::~CUnknown10248a50()
{
	CUnknown10248a50 *pNode = m_pSub;
	while (pNode) {
		CUnknown10248a50 *pNext = pNode->m_pPeer;
		pNode->sub_100046f1();
		operator delete(pNode);
		pNode = pNext;
	}
	delete m_pszName;
	delete m_pszString;
	m_pszString = 0;
	g_10753f68 = 0;
	m_pszName = 0;
	m_pPeer = 0;
	m_pSub = 0;
	*(int *)m_pad0018 = 0;
}
// END FUNCTION
