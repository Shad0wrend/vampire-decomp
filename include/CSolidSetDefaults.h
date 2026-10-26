// CSolidSetDefaults: the solid set defaults a key/value block fills (the "contents" key, at +0x4). Only what decompiled code needs.
#pragma once

class CSolidSetDefaults
{
public:
	virtual void vfunc0(int unused, const char *pszKey, const char *pszValue);	// key/value: a "contents" key stores atoi(value) at +0x4
	int m_nContents;	// 0x4
};
