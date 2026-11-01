// CLogicPythonCheck: declared by pcdecomp transplant for 0x10136170 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CLogicPythonCheck
{
public:
	CLogicPythonCheck *vfunc5(unsigned int flags);
	bool sub_10135290();	// runs the Python snippet at +0x450 in __main__ (logging it when the developer cvar is set) and returns whether the result is a non-zero int

	char m_pad0000[0x450];
	const char *m_pszCode;	// 0x450
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
