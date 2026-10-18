// SendProp: the engine's networked-property description (0x54 bytes, vtable + 0x50 bytes of data).
#pragma once

class SendProp
{
public:
	virtual ~SendProp();

	char m_data[0x50];
	SendProp *vfunc0(unsigned int flags);	// as in CDataObjectAccessSystem (transplant)
	void sub_1000648d();	// as in CDataObjectAccessSystem (transplant)
};
