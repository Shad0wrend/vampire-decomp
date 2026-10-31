// CSceneTokenProcessor (RTTI .?AVCSceneTokenProcessor@@): the scene token processor, base ISceneTokenProcessor at +0x0 (its vtable pointer is kept as a plain member); only what matched code needs.
#pragma once

class CSceneTokenProcessor
{
public:
	bool vfunc1(int a);	// slot 1: m_4 = the engine's slot 98 (m_4, &m_8) (the global at 0x1070b22c), returns true
	void *m_vfptr;	// 0x0000: ISceneTokenProcessor vtable pointer
	int m_4;	// 0x0004
	int m_8;	// 0x0008: the second argument of the engine call (its address is passed)
public:
	char * vfunc0();
};
