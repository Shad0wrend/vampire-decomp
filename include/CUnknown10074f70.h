// CUnknown10074f70: scene event object (the one CSceneEntity::vfunc248 handles); only the \"Processing choreo
// event\" trace is modelled. Real name not yet known.
#pragma once

class CUnknown10074f70_Actor
{
public:
	char m_pad0000[0x26c];
	const char *m_pszName;	// 0x26c
};

class CUnknown10074f70_Global	// object at g_106c851c
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x2c - 4];
	int m_n2c;	// 0x2c
};

class CUnknown10074f70
{
public:
	// the first two clean up their arguments in the caller (this in ecx): variadic members
	void sub_10074bf0(char *pBuf, ...);	// stub 0x10009ea3, fills the buffer with the event name
	int sub_10075b70(char *pBuf, const char *pszName, ...);	// stub 0x100029c8
	double sub_10075e70(int a);	// stub 0x100154e7, returns a double in st0

	void sub_10074f70(CUnknown10074f70_Actor *pActor);	// traces "Processing choreo event at %5.2f" with the actor name
};
