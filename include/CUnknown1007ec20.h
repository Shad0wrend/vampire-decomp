// CUnknown1007ec20: a parser for a block of "event" entries; real name not yet known.
// +0xa8: the token reader it reads from.
#pragma once

class CUnknown1007ec20_Reader
{
public:
	virtual const char *vfunc0();	// the current token
	virtual bool vfunc1(bool bCrossLine);	// reads the next token, false at the end
	virtual void vfunc2();
	virtual void vfunc3(const char *pszFormat, ...);	// reports a parse error (printf style)
};

class CUnknown1007ec20
{
public:
	char m_pad0000[0xa8];
	CUnknown1007ec20_Reader *m_pReader;	// 0xa8

	void sub_1007ec20(CUnknown1007ec20_Reader *pReader, int a, int b, int c);	// reads "event" entries (each one handed to sub_1007ab40(a, b, c)) until the reader ends or an unexpected token shows up, then runs sub_1007e5f0
	void sub_1007ab40(int a, int b, int c);	// parses one entry (stub 0x10010ccb)
	void sub_1007e5f0();	// finishes the block (stub 0x1000cfcc)
};
