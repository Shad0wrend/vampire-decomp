// CSceneTokenProcessor (RTTI .?AVCSceneTokenProcessor@@): the scene token processor, base ISceneTokenProcessor at +0x0 (its vtable pointer is kept as a plain member); only what matched code needs.
#pragma once
#include "PcdVirtual.h"	// PCD_VIRTUAL: the real slots in the initializer units

class CSceneTokenProcessor
{
public:
	PCD_VIRTUAL char * vfunc0();	// slot 0
	PCD_VIRTUAL bool vfunc1(int a);	// slot 1: m_4 = the engine's slot 98 (m_4, &m_8) (the global at 0x1070b22c), returns true
	PCD_VIRTUAL bool vfunc2();	// slot 2 (0x100838d0, matched through the view CSceneTokenProcessorX): the SDK's TokenAvailable
	PCD_VIRTUAL void vfunc3(const char *pszFormat, ...);	// slot 3 (0x10083910, matched as the free cdecl sub_10083910): the SDK's Error
#ifndef PCD_INITIALIZERS	// the initializer units have the compiler's vtable pointer here
	void *m_vfptr;	// 0x0000: ISceneTokenProcessor vtable pointer
#endif
	int m_4;	// 0x0004
	int m_8;	// 0x0008: the second argument of the engine call (its address is passed)
};
