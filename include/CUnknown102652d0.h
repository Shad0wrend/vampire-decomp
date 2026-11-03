// CUnknown102652d0: object with a value at +0 that is only exposed when the field at +0xc is non-zero; real name not yet known.
#pragma once

class CUnknown102652d0
{
public:
	int m_unk0;
	char pad4[8];
	int m_unkC;

	int sub_102652d0();
	int sub_102652f0();	// the element count (stub 0x1000477d)
	void sub_102653f0(void *p);	// removes the element p from the list
};

extern CUnknown102652d0 g_1090fe10;	// 0x1090fe10: the global list (sub_102652d0 = element array, sub_102652f0 = count)
