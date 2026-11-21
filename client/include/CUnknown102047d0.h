// CUnknown102047d0: parser state for a name like "f_name-part 5" (name provisional); a flag byte at +8.
#pragma once

class CUnknown102047d0
{
public:
	char m_pad00[8];
	char m_bDashed;	// 0x08: the name contained a '-'

	void sub_10160a50(const char *pszName, int *pGender, int *pValue);	// copies pszName (256 bytes), lowercases it, a "f_" prefix gives gender 0, "m_" gives 1 (else -1; the prefix is skipped), a '-' becomes a space and sets +8, the first token goes to sub_10204570 and the second one is the integer stored in *pValue
	char sub_10160660();	// stub 0x100051f0: whether the name is set
		// stub 0x10010573
	void sub_101608a0(const char *pszToken);	// stub 0x100045e3: takes the first token
};
