// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102eeae0 size=0x4b
#include "CAI_BaseNPC.h"
#include "CAI_Navigator.h"
struct CNavNPCView : CAI_BaseNPC
{
	char m_pad[0x1b44 - 4];
	const char *m_pszFile;
	int m_nLine;
};

void CAI_Navigator::vfunc10(int a, float b)
{
	sub_102eeb70();
	CNavNPCView *pNPC = (CNavNPCView *)m_pOuter;
	pNPC->m_pszFile = "E:\\Vampire\\main\\dlls\\ai_navigator.cpp";
	((CNavNPCView *)m_pOuter)->m_nLine = 0x406;
	((CNavNPCView *)m_pOuter)->vfunc448(a);
	((CNavNPCView *)m_pOuter)->sub_10272650(((CNavNPCView *)m_pOuter)->sub_1027a6c0());
	m_b1c = 1;
}
// END FUNCTION
