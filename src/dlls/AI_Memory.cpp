// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e0730 size=0x24
#include "CUnknown102dfc10.h"

extern char g_10591ae8[];
extern char g_1060e390[];
int sub_100067f3(char *pszFormat, char *pszFile, int line);

struct CUnknown102e0730 {
	void sub_102e0730();
};

// TARGET: CUnknown102e0730::sub_102e0730
void CUnknown102e0730::sub_102e0730()
{
	int r = sub_100067f3(g_10591ae8, g_1060e390, 0x325);
	((CUnknown102dfc10 *)this)->sub_102dfc10(r);
}
// END FUNCTION
