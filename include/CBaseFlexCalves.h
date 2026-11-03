// CBaseFlexCalves: the provisional classes of the objects CBaseFlex::vfunc289 (0x100b6960) drives, for the
// matched functions that have no header of their own yet. All are pointers stored in the argument record:
//   arg->[0] is seen as CUnknown10077710 / CUnknown10077430 (CUnknown10077430.h) / CUnknown10077730 (its own header)
//   arg->[1] is seen as CUnknown1007dfa0 / CUnknown100740d0 / CUnknown10074a30 (its header also has sub_10074a50,
//            sub_10074610) / CUnk100749a0 / CUnknown10074a00.
// The other classes already live in CUnknown10074050.h, CUnknown10074a30.h, CUnknown10077430.h, CUnknown10077730.h.
#pragma once

class CUnknown100740d0
{
public:
	char sub_100740d0();	// 0x100740d0: byte flag of the object (test al,al)
};

class CUnk100749a0
{
public:
	int sub_100749a0(int index);	// 0x100749a0: index for the given sub-index (-1 when out of range; the caller tests < 0)
};

class CUnknown10074a00
{
public:
	void sub_10074a00(int index, const char *pszName, int flags);	// 0x10074a00: names / sets up the track (3 args)
};

class CUnknown10077710
{
public:
	char sub_10077710();	// 0x10077710: whether the event is already in the state that skips the naming pass
};

class CUnknown1007dfa0
{
public:
	float sub_1007dfa0();	// 0x1007dfa0: a time / duration (returned in ST0)
};

class CUnk10076280
{
public:
	float sub_10076280(float flValue);	// 0x10076280: maps the value (returned in ST0; the matched name is only "unnamed")
};
