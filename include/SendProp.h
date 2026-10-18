// SendProp: engine send-table property (0x54 bytes). Only the size and the destructor are modelled.
#pragma once

class SendTable;

class SendProp
{
public:
	char m_data[0x54];

	SendProp(const SendProp &);
	~SendProp();	// 0x1000648d (stub for 0x102471b0)
};
