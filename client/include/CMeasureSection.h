// CMeasureSection: declared by pcdecomp transplant for 0x10247710 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class CMeasureSection
{
public:
	char m_pad04[4];
	virtual CMeasureSection *vfunc0(unsigned int flags);
	CMeasureSection(int nName);	// 0x10247690: clears the fields and links the section into the global list (head 0x10753734, count 0x10753738)
	~CMeasureSection();	// 0x10247740: unlinks the count (0x10753738) and clears the list link at +0x24

	int m_n08, m_n0c, m_n10, m_n14, m_n18, m_n1c;
	int m_n20;	// the constructor argument
	CMeasureSection *m_pNext24;	// the previous list head
};
