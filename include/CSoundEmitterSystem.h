// CSoundEmitterSystem: CSoundEmitterSystemBase (+0) plus the game system interface at +0xdc.
#pragma once
#include "CSoundEmitterSystemBase.h"
#include "IGameSystem.h"

#ifdef PCD_INITIALIZERS	// the initializer unit: the global 0x1072be18
#include "GameSystemRoot.h"
// Both bases are built by their out-of-line constructors; the implicit destructor runs the game system's chain, then
// the sound emitter base's inline one.
class CSoundEmitterSystem : public CSoundEmitterSystemBase, public CAutoGameSystem
{
public:
	CSoundEmitterSystem() {}
	virtual void LogMessage(const char *pszFormat, ...);
};
#else
// The flat model keeps CSoundEmitterSystemBase's vtable pointer as a plain member, so the game-system part at +0xdc
// (CAutoGameSystem in the game's RTTI) is a plain view here too: a base with a vtable pointer would go to +0.
class CSoundEmitterGameSystemPart
{
public:
	void sub_1000cfbd();	// IGameSystem's destructor (stub 0x1000cfbd)
};

class CSoundEmitterSystem : public CSoundEmitterSystemBase, public CSoundEmitterGameSystemPart
{
public:
	void vfunc3(const char *pszFormat, ...);	// slot 3 (the base's variadic log hook): with the developer object (0x1072bd5c) not answering true on slot 1 and its field +0x2c set, prints "(sv) <formatted text>" with Msg
	CSoundEmitterSystem *sub_101b0110(unsigned char flags);	// slot 0, scalar deleting destructor: ~IGameSystem first, then the base body
};
#endif
