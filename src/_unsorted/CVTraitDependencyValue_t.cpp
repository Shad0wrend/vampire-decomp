// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10205cd0 size=0x14
#include "CVTraitDependencyValue_t.h"
#include "CVDmg_t.h"

void CVTraitDependencyValue_t::vfunc0()
{
	((CVDmgBlock16_t *)((char *)this + 4))->sub_10204270();
	*(int *)((char *)this + 0x14) = -1;
}
// END FUNCTION

// FUNCTION: 0x10205d00 size=0x87
#include <string.h>
#include "CUnknown10205dc0.h"
#include "CUnknown102029c0.h"

char *sub_10203d60(const char *psz);

struct StatOwner2
{
	int sub_10203020(const char *pszName);
	CUnknown102029c0 *sub_10203190(int id);
};
extern StatOwner2 g_1074e968;

void CUnknown10205dc0::sub_10205d00(const char *pszText)
{
	if (*pszText)
	{
		char *pszCopy = sub_10203d60(pszText);
		char *pszBlock = strtok(pszCopy, " ");
		m_block.sub_10204570(pszBlock);
		char *pszStat = strtok(0, " ");
		if (pszStat)
		{
			int id = g_1074e968.sub_10203020("Equality");
			m_nStat = g_1074e968.sub_10203190(id)->sub_10202a50(pszStat);
			m_value.sub_100032a6(&m_block, strtok(0, " "));
		}
	}
}
// END FUNCTION
