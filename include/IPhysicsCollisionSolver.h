// IPhysicsCollisionSolver: the vphysics collision solver callback interface (vtable at 0x1044920c, slot 4 is the game's empty `ret 8` body (0x1002f0c0), the rest pure).
#pragma once

class IPhysicsCollisionSolver
{
public:
	virtual void solverfunc0() = 0;
	virtual void solverfunc1() = 0;
	virtual void solverfunc2() = 0;
	virtual void solverfunc3() = 0;
	virtual void solverfunc4(void *pObject1, void *pObject2);
};
