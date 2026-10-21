// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10061fb0 size=0x1e
#include "CTEFizz.h"

// TARGET: CTEFizz::vfunc2
CTEFizz *CTEFizz::vfunc2(unsigned int flags)
{
	sub_100142b8();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10062000 size=0xa2
#include "CTEFizz.h"
#include "CBroadcastRecipientFilter.h"
#include "IVEngineServer.h"

extern IVEngineServer *g_1070b22c;
extern char g_10543094[];	// "sprites/bubble.vmt"

void CTEFizz::vfunc3(const float *pOrigin, const float *pAngles)
{
	m_nModelIndex = g_1070b22c->vfunc13(g_10543094, 0);
	m_nDensity = 200;
	m_nCurrent = 1;
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x100620e0 size=0x13
#include "CTEFizz.h"
struct IEnginePrecache {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual int PrecacheModel(const char *name, int preload);
};
extern IEnginePrecache *g_1070b22c;

void CTEFizz::vfunc5()
{
	g_1070b22c->PrecacheModel("sprites/bubble.vmt", 0);
}
// END FUNCTION
