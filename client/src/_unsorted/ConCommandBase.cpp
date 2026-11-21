// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100df250 size=0x4d
#include "ConCommandBase.h"
struct CConCmdView {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	CConCmdView *m_pSelf;
	CConCmdView *m_pNext;
	char m_bRegistered;
	const char *m_pszName;
	const char *m_pszHelp;
	int m_nFlags;
};
extern const char *g_102b9b58;
extern CConCmdView *g_104cf3d4;
extern int g_104cf3d8;
// TARGET: ConCommandBase::vfunc2
void ConCommandBase::vfunc2(const char *pszName, const char *pszHelp, int nFlags)
{
	CConCmdView *p = (CConCmdView *)this;
	p->m_pszName = pszName;
	p->m_pSelf = p;
	p->m_bRegistered = 0;
	if (!pszHelp)
		pszHelp = g_102b9b58;
	p->m_pszHelp = pszHelp;
	p->m_nFlags = nFlags;
	if (!(nFlags & 1)) {
		p->m_pNext = g_104cf3d4;
		g_104cf3d4 = p;
	} else {
		p->m_pNext = 0;
	}
	if (g_104cf3d8)
		p->vfunc3();
}
// END FUNCTION
