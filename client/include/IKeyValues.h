// IKeyCacheable / IKeyValues (RTTI .?AVIKeyValues@@): the key/value file interface returned by the data file loader
// (sub_101f2e20). IKeyValues has its own vtable (21 slots) at +0 and a virtual base IKeyCacheable (vbptr at +4);
// slot 1 of the base is the release the loaders call when they are done.
#pragma once

#include "IKeyCacheable.h"	// the virtual base (slot 1 is the release the loaders call)

class IKeyValues : public virtual IKeyCacheable
{
public:
	virtual ~IKeyValues() {}	// IKeyCacheable's slot 2: the scalar deleting destructor is 0x101f2040
	virtual void kv0();
	virtual void kv1();
	virtual IKeyValues *kv2(const char *pszName);	// the sub key of that name, null when there is none
	virtual IKeyValues *kv3();	// the next key of the same level
	virtual void kv4(); virtual void kv5(); virtual void kv6(); virtual void kv7(); virtual void kv8();
	virtual void kv9(); virtual void kv10(); virtual void kv11(); virtual void kv12();
	virtual const char *kv13(const char *pszName, const char *pszDefault);	// "GetString" of the named sub key
	virtual void kv14(); virtual void kv15(); virtual void kv16(); virtual void kv17(); virtual void kv18();
	virtual void kv19(); virtual void kv20();
};
