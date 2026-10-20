// CUnknown1007bb30: an object with a text reader at +0xa8; real name not yet known.
#pragma once

class CUnknown1007bb30Reader	// the object at +0xa8
{
public:
	virtual const char *vfunc0();	// the current string
	virtual void vfunc1(int a);	// advances
};

class CUnknown1007bb30Dest	// the receiver of the copied text
{
public:
	void sub_10002eb9(const char *a, const char *b);
};

class CUnknown1007bb30
{
public:
	char m_pad0000[0xa8];
	CUnknown1007bb30Reader *m_pReader;	// 0xa8

	void sub_1007bb30(CUnknown1007bb30Dest *pDest);	// reads two strings from the reader: the first is copied into a 256 byte buffer, the second is handed to pDest together with the buffer
};
