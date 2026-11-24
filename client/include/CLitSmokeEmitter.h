// CLitSmokeEmitter: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases; nothing else yet
#pragma once
#include "CSimpleEmitter.h"

class CLitSmokeEmitter : public CSimpleEmitter
{
public:
	void sub_10030790(int a, int b, int c, int d);
	virtual void vfunc14(int a, int b, int c, int d, int e, int f, int g);
	CLitSmokeEmitter(const char *name) : CSimpleEmitter(name) {}
	int m_unk70;
	int m_unk74;
	CSmokeEmitterAux m_aux;
};
