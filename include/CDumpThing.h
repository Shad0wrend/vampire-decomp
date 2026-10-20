// CDumpThing: element of a dumped list (first dword an index, name string at +8, vector of 4-byte items at +0xc/+0x10).
#pragma once

class CDumpThing
{
public:
	char m_pad0000[0x14];

	void sub_101f4eb0();	// debug dump: prints "[%d]: %s" header and one line per item
};
