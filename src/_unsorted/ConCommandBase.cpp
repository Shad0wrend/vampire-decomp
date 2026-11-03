// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10245510 size=0x1e
#include "ConCommandBase.h"

// TARGET: ConCommandBase::vfunc0
ConCommandBase *ConCommandBase::vfunc0(unsigned int flags)
{
	sub_100049d0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102455a0 size=0x3
#include "ConCommandBase.h"
bool ConCommandBase::vfunc1()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x102455c0 size=0x4d
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
extern const char *g_105c4e70;
extern CConCmdView *g_10753434;
extern int g_10753438;
// TARGET: ConCommandBase::vfunc2
void ConCommandBase::vfunc2(const char *pszName, const char *pszHelp, int nFlags)
{
	CConCmdView *p = (CConCmdView *)this;
	p->m_pszName = pszName;
	p->m_pSelf = p;
	p->m_bRegistered = 0;
	if (!pszHelp)
		pszHelp = g_105c4e70;
	p->m_pszHelp = pszHelp;
	p->m_nFlags = nFlags;
	if (!(nFlags & 1)) {
		p->m_pNext = g_10753434;
		g_10753434 = p;
	} else {
		p->m_pNext = 0;
	}
	if (g_10753438)
		p->vfunc3();
}
// END FUNCTION

// FUNCTION: 0x10245630 size=0x1f
#include "ConCommandBase.h"

extern int g_10753438;

class IConCommandBaseAccessor
{
public:
	virtual bool RegisterConCommandBase(ConCommandBase *pVar);
};

void ConCommandBase::vfunc3()
{
	IConCommandBaseAccessor *pAccessor = (IConCommandBaseAccessor *)g_10753438;
	if (pAccessor && !*((char *)this + 0xc))
	{
		pAccessor->RegisterConCommandBase(this);
		*((char *)this + 0xc) = 1;
	}
}
// END FUNCTION
