// CUnknown101daec0: a record loaded from a keyvalues node ("HitTable", "Chance", "Count"); real name not yet known.
#pragma once

// A node of the engine's keyvalues tree, viewed as a plain list of slots (the slots we call are typed).
class IKVNodeView
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual IKVNodeView *vfunc2(const char *name);	// sub-node by name
	virtual IKVNodeView *vfunc3();	// next sibling node
	virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7();
	virtual void vfunc8(); virtual void vfunc9();
	virtual int vfunc10(const char *key, int defaultValue);	// +0x28: integer value
	virtual float vfunc11(const char *key, float defaultValue);	// +0x2c: float value
	virtual char vfunc12(const char *key, int defaultValue);	// +0x30: boolean value
	virtual const char *vfunc13(const char *key, const char *defaultValue);	// +0x34: string value
};

extern char g_106b8540[];	// the game's shared empty string
class CUnknown101e0940;

class CUnknown101daec0
{
public:
	int m_pad0;
	int m_nHitTable;	// 0x04: index looked up from the "HitTable" string
	int m_nChance;	// 0x08: "Chance", default 100
	int m_nCount;	// 0x0c: "Count", default 0

	char sub_101daec0(IKVNodeView *pKV, const char *pszName);	// false for a null node; loads the fields from the named sub-node (or the node itself when no name is given)
};
