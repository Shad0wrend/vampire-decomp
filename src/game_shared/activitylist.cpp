// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 4 blocks
#include "vampire.h"

// FUNCTION: 0x104123a0 size=0x59
#include "CUnknown10249fc0.h"
struct CActivityEntry { int pad[1]; unsigned short m_act; };
CActivityEntry *sub_10412420(const char *name);
CActivityEntry *sub_10412470(const char *name);
void sub_10412260(const char *a, const char *b, int c);
__declspec(dllimport) void Warning(const char *fmt, ...);
extern CUnknown10249fc0 g_1094afe0;
bool sub_104123a0(const char *a, const char *b)
{
	CActivityEntry *p = sub_10412420(a);
	if (p == 0)
		p = sub_10412470(b);
	if (p != 0) {
		Warning("***\nShared activity collision! %s<->%s\n***\n", a, g_1094afe0.sub_10249fc0(p->m_act));
		return false;
	} else {
		sub_10412260(a, b, 0);
		return true;
	}
}
// END FUNCTION

// FUNCTION: 0x10412420 size=0x3f
struct CActivityTable
{
	int sub_1000cc2a(const char *pszName);	// the index of the name, -1 when there is none (stub 0x1000cc2a)
};

struct CActivityEntry
{
	int m_n00;
	int m_n04;
};

extern CActivityTable g_1094afe0;
extern CActivityEntry *g_109d3010;
extern char g_10684a44[];
typedef void (*FnDevWarning)(int level, const char *pszFormat, ...);
extern FnDevWarning g_109f3658;

// TARGET: sub_10412420
CActivityEntry *sub_10412420(const char *pszName)
{
	int iIndex = g_1094afe0.sub_1000cc2a(pszName);
	if (iIndex < 0) {
		return 0;
	}
	if (iIndex >= 0x118d) {
		g_109f3658(1, g_10684a44, pszName);
		return 0;
	}
	return &g_109d3010[iIndex];
}
// END FUNCTION

// FUNCTION: 0x10412470 size=0x2a
struct CUnknown10412470Ent
{
    int key;
    int value;
};

extern int g_109d301c;
extern CUnknown10412470Ent *g_109d3010;

// TARGET: sub_10412470
CUnknown10412470Ent *sub_10412470(int key)
{
    int i;
    for (i = 0; i < g_109d301c; i++) {
        if (g_109d3010[i].key == key)
            return &g_109d3010[i];
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x104124b0 size=0x42
struct CActivityEntry { int m_nActivity; short m_nIndex; char m_bShared; };
struct ActEntry;
CActivityEntry *sub_10412420(const char *);
ActEntry *sub_10412260(const char *, int, bool);
extern int g_109d3080;
extern "C" __declspec(dllimport) void __cdecl Warning(const char *, ...);
// TARGET: sub_104124b0
int sub_104124b0(const char *pszActivityName)
{
	CActivityEntry *pEntry = sub_10412420(pszActivityName);
	if (pEntry)
	{
		if (!pEntry->m_bShared)
		{
			Warning("***\nShared<->Private Activity collision!\n***\n");
			return -1;
		}
	}
	else
		pEntry = (CActivityEntry *)sub_10412260(pszActivityName, g_109d3080 + 1, true);
	return pEntry->m_nActivity;
}
// END FUNCTION
