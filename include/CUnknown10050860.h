// CUnknown10050860: object with a name string pointer at +4 (falls back to "Unnamed"); real name not yet known.
#pragma once

class CUnknown10050860
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// slot 3 (+0xc): the origin and angles of the temp entity tester that uses it

	const char *m_pszName;

	const char *sub_10050860();
	CUnknown10050860 *sub_10050880();	// stub 0x10005ed9: the next object of the list
};
