// CUnknown1023e0b0: an object with a CSActs "Nosferatu tolerant" input handler; real name not yet known.
#pragma once

struct inputdata_t;

struct CUnknown1023e0b0Target	// the object sub_1023bd00 returns
{
	char m_pad0000[0x1b1];
	char m_bDirty;	// 0x1b1
	char m_pad01b2[0x4a8 - 0x1b2];
	char m_bNosferatuTolerant;	// 0x4a8

	void SetNosferatuTolerant(bool bTolerant)
	{
		m_bNosferatuTolerant = bTolerant;
		m_bDirty = 1;
	}
};

class CUnknown1023e0b0
{
public:
	void sub_1023e0b0(inputdata_t *pInput);	// input handler: stores the boolean input (false for other types) as the target's tolerant flag at +0x4a8 and marks it dirty (+0x1b1); logs the change when the developer variable is set
	CUnknown1023e0b0Target *sub_1023bd00();	// called through the stub at 0x1000aa0b
};
