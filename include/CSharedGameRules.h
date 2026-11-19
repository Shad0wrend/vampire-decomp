// CSharedGameRules (RTTI .?AVCSharedGameRules@@): one slot (vtable 0x10516ce4); the game defines one global of it, whose constructor
// stores the vtable. Only the initializer units include this header.
#pragma once

class ISharedGameRules	// RTTI .?AVISharedGameRules@@, the interface CSharedGameRules implements (not in the reference SDKs: taken as CSharedGameRules's 1 slot)
{
public:
	virtual bool vfunc0(int a, int b) = 0;	// slot 0
};

class CSharedGameRules : public ISharedGameRules
{
public:
	virtual bool vfunc0(int a, int b);	// slot 0: function 0x1042df70 (a free __stdcall function in matched code, stub 0x1000e232)
};
