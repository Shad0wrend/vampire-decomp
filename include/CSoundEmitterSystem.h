// CSoundEmitterSystem: CSoundEmitterSystemBase (+0) plus the game system interface at +0xdc.
#pragma once
#include "CSoundEmitterSystemBase.h"
#include "IGameSystem.h"

class CSoundEmitterSystem : public CSoundEmitterSystemBase, public IGameSystem
{
public:
	void vfunc3(int unused, const char *pszFormat, ...);	// slot 3 (the base's variadic log hook): with the developer object (0x1072bd5c) not answering true on slot 1 and its field +0x2c set, prints "(sv) <formatted text>" with Msg
	CSoundEmitterSystem *sub_101b0110(unsigned char flags);	// slot 0, scalar deleting destructor: ~IGameSystem first, then the base body
};
