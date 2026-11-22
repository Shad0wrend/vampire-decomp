// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aff60 size=0x61
#include "CSoundEmitterSystem.h"
#include <stdarg.h>

struct CDevInfo
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad04[0x2c - 4];
	int m_n2c;
};
extern CDevInfo *g_1072bd5c;
extern int (__cdecl *g_109f387c)(char *pDest, int maxLen, const char *pFormat, va_list params);
__declspec(dllimport) void Msg(const char *pszFormat, ...);

void CSoundEmitterSystem::LogMessage(const char *pszFormat, ...)
{
	char szText[256];
	if (!g_1072bd5c->vfunc1() && g_1072bd5c->m_n2c) {
		va_list args;
		va_start(args, pszFormat);
		g_109f387c(szText, sizeof(szText), pszFormat, args);
		va_end(args);
		Msg("%s %s", "(sv)", szText);
	}
}
// END FUNCTION

// FUNCTION: 0x101b0110 size=0xbe
#define PCD_INITIALIZERS	// the class as the initializer units see it: its real bases and inline destructor
#include "CSoundEmitterSystem.h"

// VC6 writes CSoundEmitterSystem's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CSoundEmitterSystem *pcd_emit_101b0110() { return new CSoundEmitterSystem; }

// TARGET: ??_GCSoundEmitterSystem@@UAEPAXI@Z
// END FUNCTION
