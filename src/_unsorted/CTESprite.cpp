// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10067c80 size=0x1e
#include "CTESprite.h"

// TARGET: CTESprite::vfunc2
CTESprite *CTESprite::vfunc2(unsigned int flags)
{
	sub_10013ee4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10067cd0 size=0xc7
#include "IVEngineServerFull.h"
extern IVEngineServerFull *g_1070b22c;

// TARGET: CTESprite::vfunc5
void CTESprite::vfunc5()
{
    g_1070b22c->PrecacheModel("sprites/gunsmoke.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number0.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number1.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number2.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number3.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number4.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number5.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number6.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number7.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number8.vmt", 0);
    g_1070b22c->PrecacheModel("sprites/floaters/number9.vmt", 0);
}
// END FUNCTION
