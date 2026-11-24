// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10105e90 size=0x5a
#include "CUserCmd.h"

extern char g_1022e8d4;

void *CUserCmd::vfunc0(char flags)
{
	if ( flags & 2 )
	{
		int n = *(int *)((char *)this - 4);
		CUserCmd *pFirst = (CUserCmd *)((char *)this - 4);
		CUserCmd *p = (CUserCmd *)((char *)this + n * 0x60);

		if ( --n >= 0 )
		{
			++n;

			do
			{
				p = (CUserCmd *)((char *)p - 0x60);
				*(void **)p = &g_1022e8d4;
			}
			while ( --n != 0 );
		}

		if ( flags & 1 )
			operator delete( pFirst );

		return pFirst;
	}

	*(void **)this = &g_1022e8d4;

	if ( flags & 1 )
		operator delete( this );

	return this;
}
// END FUNCTION
