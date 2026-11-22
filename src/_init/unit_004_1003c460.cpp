// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1003c460 size=0xa
#include "ConVar.h"
ConVar g_106bd868("think_limit", "10", 8192, "Maximum think time in milliseconds, warning is printed if this is exceeded.");
// END FUNCTION

// FUNCTION: 0x1003c4f0 size=0xa
#define PCD_INITIALIZERS
#include "Pool.h"
Pool g_106bd904(20, 512, 0);
// END FUNCTION

// FUNCTION: 0x1003c580 size=0xa
#define PCD_INITIALIZERS
#include "CDataObjectAccessSystem.h"
#include "ScopeTrace.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
inline CDataObjectAccessSystem::CDataObjectAccessSystem()
{
	ScopeTrace trace("CDataObjectAccessSystem::CDataObjectAccessSystem", g_106b8540, g_106b8540);
	memset(m_data, 0, sizeof(m_data));
}
CDataObjectAccessSystem g_106bd930;
// END FUNCTION
