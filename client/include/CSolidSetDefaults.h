// CSolidSetDefaults: the solid set defaults a key/value block fills (the "contents" key, at +0x4). Only what decompiled code needs.
#pragma once
#include "IVPhysicsKeyHandler.h"

class CSolidSetDefaults : public IVPhysicsKeyHandler
{
public:
	virtual void vfunc0(void *unused, const char *pszKey, const char *pszValue);	// key/value: a "contents" key stores atoi(value) at +0x4
	virtual void vfunc1(void *pSolid);	// slot 1: copies the 12 dwords of the default block (0x1046ecb4) to the object's +0x610 and sets +0x4 to 1
	int m_nContents;	// 0x4
};
