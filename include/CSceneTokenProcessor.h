// CSceneTokenProcessor (RTTI .?AVCSceneTokenProcessor@@): the scene token processor, base ISceneTokenProcessor at +0x0
// in the initializer unit (the global 0x106c8618); elsewhere its vtable pointer is a plain member. Only what matched
// code needs.
#pragma once

#ifdef PCD_INITIALIZERS	// Source's interface (game_shared/iscenetokenprocessor.h); the game has no vtable of its own for it
class ISceneTokenProcessor
{
public:
	virtual const char *CurrentToken() = 0;
	virtual bool GetToken(bool crossline) = 0;
	virtual bool TokenAvailable() = 0;
	virtual void Error(const char *fmt, ...) = 0;
};
#endif

class CSceneTokenProcessor
#ifdef PCD_INITIALIZERS
	: public ISceneTokenProcessor
#endif
{
public:
#ifdef PCD_INITIALIZERS	// the four slots of vtable 0x1044f56c (matched as the plain members below)
	virtual const char *CurrentToken();
	virtual bool GetToken(bool crossline);
	virtual bool TokenAvailable();
	virtual void Error(const char *fmt, ...);
#endif
	char * vfunc0();	// slot 0
	bool vfunc1(int a);	// slot 1: m_4 = the engine's slot 98 (m_4, &m_8) (the global at 0x1070b22c), returns true
	bool vfunc2();	// slot 2 (0x100838d0, matched through the view CSceneTokenProcessorX): the SDK's TokenAvailable
	void vfunc3(const char *pszFormat, ...);	// slot 3 (0x10083910, matched as the free cdecl sub_10083910): the SDK's Error
#ifndef PCD_INITIALIZERS	// the initializer units have the compiler's vtable pointer here
	void *m_vfptr;	// 0x0000: ISceneTokenProcessor vtable pointer
#endif
	int m_4;	// 0x0004
	int m_8;	// 0x0008: the second argument of the engine call (its address is passed)
};
