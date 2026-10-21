// CUnknown10205030: a (kind, id) reference to an entry of one of three global tables (kind 0..2, id -1 = none);
// real name not yet known.
#pragma once

class CUnknown101ff0b0;

class CUnknown10200370	// one of the three global tables (the same accessor serves all of them)
{
public:
	CUnknown101ff0b0 *sub_10200370(int id, int param);	// stub 0x1000ffb0: the entry of that id for param
};

class CUnknown101ff0b0	// a table entry
{
public:
	int sub_101ff0b0();	// stub 0x10007ecd
	const char *sub_101fdda0();	// stub 0x1000c112: the entry's name
};

class CUnknown10205030
{
public:
	int m_nKind;	// 0x00: which table (0..2)
	int m_nId;	// 0x04: the entry id, -1 when none

	int sub_10205030(int param);	// the value of the referenced entry for param, 0 without a valid kind / id
};
