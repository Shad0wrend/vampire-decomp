// IPhysicsCollision: vphysics' collision interface behind the engine pointer at 0x1072393c (physcollision). Only the
// slots the decompiled code calls are typed; the others are placeholders that keep the slot numbers right.
#pragma once

#include "Vector.h"

#define PCOL1(n) virtual void vfunc##n();
#define PCOL10(p) PCOL1(p##0) PCOL1(p##1) PCOL1(p##2) PCOL1(p##3) PCOL1(p##4) PCOL1(p##5) PCOL1(p##6) PCOL1(p##7) PCOL1(p##8) PCOL1(p##9)

struct CPhysCollide;
struct CGameTrace;

class IPhysicsCollision
{
public:
	PCOL10() PCOL10(1)
	PCOL1(20) PCOL1(21)
	// slot 22 (+0x58) TraceBox(start, end, mins, maxs, pCollide, collideOrigin, collideAngles, ptr): thiscall, ret 0x20
	virtual void vfunc22(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs,
		const CPhysCollide *pCollide, const Vector &collideOrigin, const Vector &collideAngles, CGameTrace *ptr);
	PCOL1(23) PCOL1(24) PCOL1(25) PCOL1(26) PCOL1(27) PCOL1(28) PCOL1(29)
	PCOL1(30) PCOL1(31) PCOL1(32) PCOL1(33)
	virtual int vfunc34(int stat);	// slot 34 (+0x88) ReadStat(0): the dot counter of the last trace
	PCOL1(35) PCOL1(36) PCOL1(37) PCOL1(38) PCOL1(39)
};

#undef PCOL1
#undef PCOL10
