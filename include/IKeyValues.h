// IKeyCacheable / IKeyValues (RTTI .?AVIKeyValues@@): the key/value file interface returned by the data file loader
// (sub_101f2e20). IKeyValues has its own vtable (21 slots) at +0 and a virtual base IKeyCacheable (vbptr at +4);
// slot 1 of the base is the release the loaders call when they are done.
#pragma once

class IKeyCacheable
{
public:
	virtual void vfunc0();
	virtual void vfunc1();	// release
	virtual void vfunc2();
};

class IKeyValues : public virtual IKeyCacheable
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual IKeyValues *vfunc2(const char *pszName);	// the sub key of that name, null when there is none
	virtual IKeyValues *vfunc3();	// the next key of the same level
	virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();
	virtual void vfunc9(); virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12();
	virtual const char *vfunc13(const char *pszName, const char *pszDefault);	// "GetString" of the named sub key
	virtual void vfunc14(); virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18();
	virtual void vfunc19(); virtual void vfunc20();
};
