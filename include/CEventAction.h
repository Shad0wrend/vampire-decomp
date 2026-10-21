// CEventAction: one action of an entity output (0x20 bytes, linked through +0x1c); real name not yet known.
#pragma once

class CEventAction
{
public:
	int m_iTarget;	// 0x00: pooled string, the target name
	int m_iTargetInput;	// 0x04: pooled string, the input name ("Use" when none)
	int m_iParameter;	// 0x08: pooled string, the parameter override
	int m_iUnk0c;	// 0x0c: pooled string of the sixth token
	float m_flDelay;	// 0x10
	int m_nTimesToFire;	// 0x14 (-1 = always)
	int m_iIDStamp;	// 0x18
	CEventAction *m_pNext;	// 0x1c

	static void *sub_100cd220(unsigned int size);	// operator new (stub 0x1000ffec)
	CEventAction *sub_100ccf90(const char *pszTargetName);	// constructor (stub 0x1000312a)
};
