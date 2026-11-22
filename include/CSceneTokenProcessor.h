// CSceneTokenProcessor (RTTI .?AVCSceneTokenProcessor@@): the scene token processor (the global 0x106c8618), base
// ISceneTokenProcessor at +0x0; the four slots of vtable 0x1044f56c are its own. Only what matched code needs.
#pragma once

// Source's interface (game_shared/iscenetokenprocessor.h); the game has no vtable of its own for it
class ISceneTokenProcessor
{
public:
	virtual const char *CurrentToken() = 0;
	virtual bool GetToken(bool crossline) = 0;
	virtual bool TokenAvailable() = 0;
	virtual void Error(const char *fmt, ...) = 0;
};

class CSceneTokenProcessor : public ISceneTokenProcessor
{
public:
	virtual const char *CurrentToken();	// 0x10083870: the token at +8
	virtual bool GetToken(bool crossline);	// 0x10083890: m_4 = the engine's slot 98 (ParseFile) (m_4, &m_8), returns true
	virtual bool TokenAvailable();	// 0x100838d0: false at a line end, ';', '#' or "//"
	virtual void Error(const char *fmt, ...);	// 0x10083910: formats into 0x800 bytes and prints it

	int m_4;	// 0x0004: the parse position (SDK: m_pBuffer)
	int m_8;	// 0x0008: the token (SDK: m_szToken); its address is the second argument of the engine call
};
