// InterfaceReg: node of the global linked list of exported interface factories (Source's InterfaceReg).
#pragma once

class InterfaceReg
{
public:
	void *m_CreateFn;
	const char *m_pName;
	InterfaceReg *m_pNext;

	// The constructor, InterfaceReg(createFn, name); registers this node at the head of the global list.
	InterfaceReg *sub_1012ee70(void *createFn, const char *pName);
};
