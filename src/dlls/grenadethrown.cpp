// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10258880 size=0x53
#include "CThrownGrenade.h"
extern void (__cdecl *g_109f3628)(const char *fmt, ...);
CBaseEntity *sub_10136580(const char *name);
void sub_101cd940(CBaseEntity *p);

void sub_10258880(const char *pszName)
{
	CBaseEntity *pEnt = sub_10136580(pszName);
	if (!pEnt)
	{
		g_109f3628("NULL Ent in UTIL_PrecacheOtherGrenade\n");
		return;
	}
	CThrownGrenade *pGrenade = dynamic_cast<CThrownGrenade *>(pEnt);
	if (pGrenade)
		pGrenade->vfunc104();
	sub_101cd940(pEnt);
}
// END FUNCTION
