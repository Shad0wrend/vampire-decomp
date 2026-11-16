// InterfaceReg: node of the global linked list of exported interface factories (Source's InterfaceReg).
#pragma once

class InterfaceReg
{
public:
	void *m_CreateFn;
	const char *m_pName;
	InterfaceReg *m_pNext;

#ifdef PCD_INITIALIZERS	// only the initializer units (EXPOSE_INTERFACE's globals) construct one
	typedef void *(*InstantiateInterfaceFn)();
	InterfaceReg(InstantiateInterfaceFn fn, const char *pName);	// function 0x1012ee70 (stub 0x1000f867)
#endif

	// The constructor, InterfaceReg(createFn, name); registers this node at the head of the global list.
	InterfaceReg *sub_1012ee70(void *createFn, const char *pName);
};
