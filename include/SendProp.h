// SendProp: the engine's networked-property description (0x54 bytes, vtable + 0x50 bytes of data).
#pragma once

class SendProp
{
public:
	SendProp();	// stub 0x10015d8e for 0x10247140: sets every field to its default (type slots 0, +0x28 = 1, +0x2c = -1, +0x50 = 0xfe)
	virtual ~SendProp();

	int m_n04;
	int m_n08;
	int m_n0c;
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;
	int m_n20;
	int m_n24;
	int m_n28;
	int m_n2c;
	const char *m_pszVarName;	// 0x30
	const char *m_pszExcludeDTName;	// 0x34
	int m_n38;
	int m_nFlags;	// 0x3c
	int m_n40;
	int m_n44;
	int m_n48;
	int m_n4c;
	unsigned char m_b50;
	SendProp *vfunc0(unsigned int flags);	// as in CDataObjectAccessSystem (transplant)
	void sub_1000648d();	// as in CDataObjectAccessSystem (transplant)
};
