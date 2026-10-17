// CItemContainer: lootable container. Layout declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

struct CItemContainerHandle
{
	unsigned int m_Index;
};

class CItemContainer
{
public:
	char pad0[0x1a2c];
	CItemContainerHandle m_hLock;	// EHANDLE to the CItemContainerLock

	void *sub_10209a20();	// returns the lock entity (dynamic_cast<CItemContainerLock *>) or NULL
};
