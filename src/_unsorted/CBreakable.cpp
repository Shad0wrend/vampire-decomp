// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010d8c0 size=0xa0
#include "CBreakable.h"
#include "IVEngineServer.h"

extern IVEngineServer *g_1070b22c;
extern char g_106b8540[];

void CBreakable::vfunc104()
{
	const char *pGibName = "models/gibs/woodgibs.mdl";
	switch (m_nMaterial) {
	case 1:
		pGibName = "models/gibs/woodgibs.mdl";
		break;
	case 3:
		pGibName = "models/gibs/fleshgibs.mdl";
		break;
	case 6:
		pGibName = "models/computergibs.mdl";
		break;
	case 0:
	case 7:
		pGibName = "models/gibs/glass_shard.mdl";
		break;
	case 2:
		pGibName = "models/gibs/metalgibs.mdl";
		break;
	case 4:
		pGibName = "models/gibs/concgibs.mdl";
		break;
	case 8:
		pGibName = "models/gibs/rockgibs.mdl";
		break;
	case 5:
		pGibName = "models/gibs/ceilinggibs.mdl";
		break;
	}
	if (m_iszGibModel) {
		pGibName = (const char *)m_iszGibModel;
		if (pGibName == 0)
			pGibName = g_106b8540;
	}
	m_nGibModelIndex = g_1070b22c->vfunc13(pGibName, 0);
}
// END FUNCTION

// FUNCTION: 0x1010f240 size=0x36
#include "CBreakable.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBreakable *CBreakable::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x484))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
