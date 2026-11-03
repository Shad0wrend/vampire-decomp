// CBaseGameSystem: base of the registered game systems (RTTI-less in the game,
// but the game's linker names its destructor ??1CBaseGameSystem@@UAE@XZ).
// Its destructor stores the IGameSystem vftable (0x10516c94) and removes the
// object from the global game-system list through sub_1042c420.
#pragma once

class CBaseGameSystem
{
public:
	virtual ~CBaseGameSystem();
};
