#pragma once
#include "CBaseEntityList.h"
// a sub-object at +0x1803c of an entity list (the game's code reaches the slot table from there)
class CEntListView
{
public:
	void *sub_100d0a40(unsigned int hHandle);
	int m_unk0;
};
