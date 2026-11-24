// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ca050 size=0x53
// TARGET: FactoryView::sub_100ca050
#include "CVGuiScreenPanel.h"

extern "C" void *__cdecl sub_101ac650(unsigned int size);

struct CtorHelper
{
	void *sub_100c8c50(int a, int b);
};

struct FactoryView
{
	void *sub_100ca050(int arg0, int arg1, int arg2, int arg3);
};

void *FactoryView::sub_100ca050(int arg0, int arg1, int arg2, int arg3)
{
	char *pMem = (char *)sub_101ac650(0x7c);
	if ( pMem )
	{
		CVGuiScreenPanel *p = (CVGuiScreenPanel *)((CtorHelper *)(void *)pMem)->sub_100c8c50(arg3, arg0);
		if ( !p || p->vfunc118(arg1, arg2) )
			return p;
		delete p;
	}
	return 0;
}
// END FUNCTION
