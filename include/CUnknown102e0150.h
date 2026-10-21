// CUnknown102e0150: enemy memory list (first node at +0xc, nodes linked through +0x38); real name not yet known.
#pragma once

class CBaseEntity;
class Vector;

class CUnknown102e0150
{
public:
	char m_pad0[0xc];
	void *m_pHead;	// +0x0c

	float sub_102e0150(void *pEnemy);	// "LastTimeSeen": time stamp of the node of pEnemy, else that of the last default node, else a constant (with a warning)
	char sub_102e0210(int pEnemy);	// a test on the node of pEnemy (stub 0x10010433)
	char sub_102df700(int a, int b, int c, int d);	// updates the list with (a, enemy, ...) (stub 0x1000d972)
	void sub_102dfed0(Vector *pOut, CBaseEntity *pEnemy);	// "LastKnownPosition": the position of the node of pEnemy, else the last visible node's, else the global vector at 0x1070d1b0 (with a DevWarning); stub 0x10010613
	void sub_102e0470(Vector *pOut, CBaseEntity *pEnemy);	// same lookup as sub_102dfed0 on the first three floats of the nodes (the position the enemy was last seen at)
};
