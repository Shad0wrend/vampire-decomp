// CVTriggerCasting_t: one "cast a targeted discipline" trigger of the discipline data: the internal name of the
// discipline plus which of the two characters (0 = the target, 1 = the source) plays the source and the target role.
#pragma once

class CVTriggerCasting_t
{
public:
	const char *m_pszDiscipline;	// 0x00: internal name of the targeted discipline
	int m_nSrcType;	// 0x04: 0 = the second character is the source, 1 = the first
	int m_nDstType;	// 0x08: 0 = the second character is the target, 1 = the first

	void sub_101ddcd0(void *pFirst, void *pSecond, int a);	// casts the discipline from one character on the other
	void sub_101e33c0(int a, int b, int c, int d);	// two steps of the casting: the stdcall sub_1000dba2(a, c), then sub_1000ae07(a, b, c, d) on this
};
