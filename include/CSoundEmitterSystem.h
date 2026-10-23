// CSoundEmitterSystem: CSoundEmitterSystemBase (+0) plus the game system interface at +0xdc.
#pragma once
#include "CSoundEmitterSystemBase.h"
#include "IGameSystem.h"

class CSoundEmitterSystem : public CSoundEmitterSystemBase, public IGameSystem
{
public:
	CSoundEmitterSystem *sub_101b0110(unsigned char flags);	// slot 0, scalar deleting destructor: ~IGameSystem first, then the base body
};
