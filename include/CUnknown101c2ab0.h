// CUnknown101c2ab0: a byte getter of the damage-info-like object at 0x101c2ab0 (reads +0x48);
// real class name not known yet. The saved symbol is ?sub_101c2ab0@CUnknown101c2ab0@@QAEDXZ.
#pragma once

class CUnknown101c2ab0
{
public:
	char m_pad0000[0x48];
	char m_b48;	// 0x48

	char sub_101c2ab0();	// 0x101c2ab0: returns the byte at +0x48
};
