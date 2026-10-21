// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10068bd0 size=0x1e
#include "CTETextMessage.h"

// TARGET: CTETextMessage::vfunc2
CTETextMessage *CTETextMessage::vfunc2(unsigned int flags)
{
	sub_10010e15();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10068c20 size=0xe1
#include "CTETextMessage.h"
#include "CBroadcastRecipientFilter.h"

extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

void CTETextMessage::vfunc3(const float *pOrigin, const float *pAngles)
{
    m_n0c = 0;
    m_f10 = 0.2f;
    m_f14 = 0.5f;
    m_n18 = 0;
    m_n1c = 100;
    m_n20 = 100;
    m_n24 = 200;
    m_n28 = 127;
    m_n2c = 200;
    m_n30 = 0;
    m_n34 = 100;
    m_n38 = 127;
    m_f3c = 1.0f;
    m_f40 = 1.0f;
    m_f44 = 1.0f;
    m_f48 = 2.0f;
    Q_strncpy(m_szText, "Testing CTETextMessage", 0x80);
    CBroadcastRecipientFilter filter;
    vfunc4(&filter, 0);
}
// END FUNCTION
