// CSoundEmitterSystem: CSoundEmitterSystemBase (+0) plus the game system CAutoGameSystem at +0xdc, as the game's RTTI
// has them; the global is 0x1072be18 (the SDK's g_SoundEmitterSystem).
#pragma once
#include "CSoundEmitterSystemBase.h"
#include "GameSystemRoot.h"

// Both bases are built by their out-of-line constructors; the implicit destructor runs the game system's chain, then
// the sound emitter base's inline one.
class CSoundEmitterSystem : public CSoundEmitterSystemBase, public CAutoGameSystem
{
public:
	CSoundEmitterSystem() {}
	virtual void LogMessage(const char *pszFormat, ...);	// slot 3 (0x101aff60): with the developer object (0x1072bd5c) not answering true on slot 1 and its field +0x2c set, prints "(sv) <formatted text>" with Msg
	// CAutoGameSystem's slots 0..2: the game's words 0x101aff20, 0x101aff40, 0x101afff0 are matched under view
	// names; declared only, the standalone link takes the game's words
	virtual bool vfunc0(); virtual void vfunc1(); virtual void vfunc2();
};

extern CSoundEmitterSystem g_1072be18;	// the sound emitter system object (an object, not a pointer)
