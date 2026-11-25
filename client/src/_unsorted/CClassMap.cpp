// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100ce2b0 size=0x8b
#include "CClassMap.h"
#include <string.h>
void *CClassMap::vfunc2(const char *classname)
{
	for (int i = 0; i < m_NumElements; i++)
	{
		const char *pszName = (const char *)&m_Memory[(unsigned short)i] + 0xc;
		if (pszName && !strcmp(pszName, classname))
		{
			if (*(void *(**)())(pszName + 0x80))
				return (*(void *(**)())(pszName + 0x80))();
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100ce340 size=0x82
#include <string.h>
#include "CClassMap.h"
#include "utlrbtree.h"

struct classentry_100ce340
{
	char mapname[128];
	void *factory;
	int size;
};

struct DictElem_100ce340
{
	const char *pszName;
	classentry_100ce340 elem;
};

struct ClassMapFields_100ce340
{
	void *vtable;
	CUtlRBTree<DictElem_100ce340, unsigned short> m_Elements;
};

// TARGET: CClassMap::vfunc3
int CClassMap::vfunc3(const char *classname)
{
	ClassMapFields_100ce340 *self = (ClassMapFields_100ce340 *)this;
	int c = self->m_Elements.Count();
	for (int i = 0; i < c; i++)
	{
		classentry_100ce340 *lookup = &self->m_Elements[i].elem;
		if (!lookup)
			continue;

		if (!strcmp(lookup->mapname, classname))
			return lookup->size;
	}
	return -1;
}
// END FUNCTION
