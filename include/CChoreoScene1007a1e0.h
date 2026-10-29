// CChoreoScene1007a1e0: a choreography object with a second pointer vector (array at +0x28, count at +0x34) whose
// elements are found by name (placeholder class name of the function at 0x1007a1e0; the real class is not known yet).
#pragma once

struct CChoreoSceneItem1007a1e0
{
	const char *sub_10073520();	// the item's name (stub 0x10009e67)
};

class CChoreoScene1007a1e0
{
public:
	char m_pad0000[0x28];
	CChoreoSceneItem1007a1e0 **m_ppItems;	// 0x28
	char m_pad002c[0x34 - 0x2c];
	int m_nItems;	// 0x34

	CChoreoSceneItem1007a1e0 *sub_1007a1e0(const char *pszName);	// the item with that name (case-insensitive), 0 when none
};
