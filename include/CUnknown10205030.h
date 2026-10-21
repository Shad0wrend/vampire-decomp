// CUnknown10205030: a (kind, id) reference to an entry of one of three global tables (kind 0..2, id -1 = none);
// real name not yet known.
#pragma once

class CUnknown101ff0b0;
class CBaseCombatCharacter;

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
	int sub_101ff060();	// stub 0x10003152: the entry's upper limit
};

class CUnknown10205030Tables	// the object at +0x13dc of a character: finds the table entry of a (kind, id) reference
{
public:
	CUnknown101ff0b0 *sub_101f9e80(int kind, int id);	// stub 0x1000484f
};

class CUnknown10205030
{
public:
	int m_nKind;	// 0x00: which table (0..2)
	int m_nId;	// 0x04: the entry id, -1 when none

	int sub_10205030(int param);	// the value of the referenced entry for param, 0 without a valid kind / id
	int sub_10204dd0(CUnknown101ff0b0 *pEntry, int value, int base);	// stub 0x1000fc18
	int sub_10205240(CBaseCombatCharacter *pCharacter);	// the entry's value for the character (30000 for an unknown kind, 0 without an id)
};
