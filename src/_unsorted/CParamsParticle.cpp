// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fccd0 size=0x6
#include "CParamsParticle.h"
namespace lifted {
extern char g_10566f60;
}
datamap_t *CParamsParticle::vfunc82()
{
    return (datamap_t *)&lifted::g_10566f60;
}
// END FUNCTION

// FUNCTION: 0x100fce00 size=0x41
#include "CParamsParticle.h"

extern char g_106b8540[];
void sub_101cf7c0(const char *src, char *dst, int size);

void CParamsParticle::vfunc104()
{
	char szName[260];
	const char *pszName = m_pszParticleName;
	if (!pszName)
		pszName = g_106b8540;
	sub_101cf7c0(pszName, szName, sizeof(szName));
	engine->vfunc17(szName, 1);
}
// END FUNCTION

// FUNCTION: 0x100fd530 size=0x1e
#include "CParamsParticle.h"

void sub_100aa7b0(void *p);

// TARGET: CParamsParticle::vfunc5
CParamsParticle *CParamsParticle::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
