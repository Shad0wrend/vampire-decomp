// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10068b50 size=0x57
#include <string.h>
#include "CTETextMessage.h"
CTETextMessage::CTETextMessage(const char *name) : CBaseTempEntityHead(name)
{
	m_n0c = 0;
	m_f10 = 0;
	m_f14 = 0;
	m_n18 = 0;
	m_n28 = 0;
	m_n24 = 0;
	m_n20 = 0;
	m_n1c = 0;
	m_n38 = 0;
	m_n34 = 0;
	m_n30 = 0;
	m_n2c = 0;
	m_f3c = 0;
	m_f40 = 0;
	m_f44 = 0;
	m_f48 = 0;
	memset(m_szText, 0, sizeof(m_szText));
}
// END FUNCTION

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

// FUNCTION: 0x10068d50 size=0x39
#include "CTETextMessage.h"
#include "IVEngineServerFull.h"

void CTETextMessage::vfunc4(CRecipientFilter *pFilter, float flDelay)
{
	engine->vfunc103((int)pFilter, *(int *)&flDelay, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x10068e10 size=0x6
#include "CTETextMessage.h"
namespace lifted {
extern char g_106c65ac;
}
ServerClass * CTETextMessage::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c65ac);
}
// END FUNCTION

// FUNCTION: 0x10068e30 size=0x3
#include "CTETextMessage.h"
int CTETextMessage::vfunc1()
{
    return 0;
}
// END FUNCTION
