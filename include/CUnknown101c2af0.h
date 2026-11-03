// CUnknown101c2af0: a byte getter of the damage-info-like object at 0x101c2af0 (reads +0x49);
// real class name not known yet. The saved symbol is ?sub_101c2af0@CUnknown101c2af0@@QAEDXZ.
#pragma once

class CUnknown101c2af0
{
public:
	char m_pad0000[0x49];
	char m_b49;	// 0x49

	char sub_101c2af0();	// 0x101c2af0: returns the byte at +0x49
};
