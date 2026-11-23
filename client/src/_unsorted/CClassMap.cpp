// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

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
