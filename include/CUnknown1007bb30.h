// CUnknown1007bb30: an object with a text reader at +0xa8; real name not yet known.
#pragma once

class CUnknown1007bb30Reader	// the object at +0xa8
{
public:
	virtual const char *vfunc0();	// the current string
	virtual char vfunc1(int a);	// advances to the next token (answers whether there is one)
	virtual char vfunc2();	// whether another token is available on the line (the game tests al)
	virtual void vfunc3(const char *pszFormat, ...);	// reports an error (variadic: the object is pushed as the first stack argument)
};

class CUnknown1007bb30Dest	// the receiver of the copied text
{
public:
	void sub_10002eb9(const char *a, const char *b);
	void sub_10072db0(const char *a, const char *b);	// copies both strings (empty when null) into the 0x28 byte buffers at +0x114 and +0x13c

	char m_pad0000[0x114];
	char m_szFirst114[0x28];
	char m_szSecond13c[0x28];
};

class CUnknown1007bb30
{
public:
	char m_pad0000[0xa8];
	CUnknown1007bb30Reader *m_pReader;	// 0xa8

	void sub_1007bb30(CUnknown1007bb30Dest *pDest);	// reads two strings from the reader: the first is copied into a 256 byte buffer, the second is handed to pDest together with the buffer
};
