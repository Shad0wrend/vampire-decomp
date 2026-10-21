// CUnknown102e0150: enemy memory list (first node at +0xc, nodes linked through +0x38); real name not yet known.
#pragma once

class CUnknown102e0150
{
public:
	char m_pad0[0xc];
	void *m_pHead;	// +0x0c

	float sub_102e0150(void *pEnemy);	// "LastTimeSeen": time stamp of the node of pEnemy, else that of the last default node, else a constant (with a warning)
	char sub_102e0210(int pEnemy);	// a test on the node of pEnemy (stub 0x10010433)
};
