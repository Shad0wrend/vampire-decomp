// CMeasureSection: declared by pcdecomp transplant for 0x10247710 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class CMeasureSection
{
public:
	char m_pad04[4];
	virtual CMeasureSection *vfunc0(unsigned int flags);
	void sub_1000881e();
	CMeasureSection *sub_10247690(int nName);	// constructor: clears the fields and links the section into the global list (head 0x10753734, count 0x10753738)

	int m_n08, m_n0c, m_n10, m_n14, m_n18, m_n1c;
	int m_n20;	// the constructor argument
	CMeasureSection *m_pNext24;	// the previous list head
};
