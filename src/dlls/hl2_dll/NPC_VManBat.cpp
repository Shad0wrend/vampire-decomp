// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1038fa50 size=0x23
#include "CAI_BaseNPCTroika.h"

extern char g_10642bcc[];

struct CUnknown1038fa50 {
	char m_pad0000[0x1b30];
	char *m_pszSourceFile;
	int m_nSourceLine;
	void sub_1038fa50(int unused);
};

// TARGET: CUnknown1038fa50::sub_1038fa50
void CUnknown1038fa50::sub_1038fa50(int unused)
{
	m_pszSourceFile = g_10642bcc;
	m_nSourceLine = 0x7d8;
	((CAI_BaseNPCTroika *)this)->sub_102ae750(0x15b, 0);
}
// END FUNCTION
