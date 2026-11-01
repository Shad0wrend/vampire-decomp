// CUnknown102e0150: enemy memory list (first node at +0xc, nodes linked through +0x38); real name not yet known.
#pragma once

class CBaseEntity;
class Vector;

#define EMS_V(n) virtual void v##n();
#define EMS_V10(p) EMS_V(p##0) EMS_V(p##1) EMS_V(p##2) EMS_V(p##3) EMS_V(p##4) EMS_V(p##5) EMS_V(p##6) EMS_V(p##7) EMS_V(p##8) EMS_V(p##9)

struct CUnknown102e0150Sink	// the object at +0: the listener that is told which enemy the list is asked about; only slot 58 is typed
{
	EMS_V10(0) EMS_V10(1) EMS_V10(2) EMS_V10(3) EMS_V10(4)
	EMS_V(50) EMS_V(51) EMS_V(52) EMS_V(53) EMS_V(54) EMS_V(55) EMS_V(56) EMS_V(57)
	virtual void vfunc58(CBaseEntity *pEnemy);
};

#undef EMS_V10
#undef EMS_V

struct CUnknown102e0150HandleSink	// the object at +4, used instead of the one at +0 when the byte at +8 is set
{
	void sub_10316bc0(CBaseEntity *pEnemy);	// stub 0x10002e0a
};

class CUnknown102e0150
{
public:
	CUnknown102e0150Sink *m_pSink;	// +0x00
	CUnknown102e0150HandleSink *m_pHandleSink;	// +0x04
	char m_bUseHandleSink;	// +0x08
	char m_pad9[3];
	void *m_pHead;	// +0x0c

	char sub_102dfa20(void *pEnemy);	// "HasMemory"-like test on the node of pEnemy (stub 0x10002c1b)
	float sub_102e0150(void *pEnemy);	// "LastTimeSeen": time stamp of the node of pEnemy, else that of the last default node, else a constant (with a warning)
	char sub_102e0210(int pEnemy);	// a test on the node of pEnemy (stub 0x10010433)
	char sub_102df700(int a, int b, int c, int d);	// updates the list with (a, enemy, ...) (stub 0x1000d972)
	Vector *sub_102dfed0(Vector *pOut, CBaseEntity *pEnemy);	// "LastKnownPosition": the position of the node of pEnemy, else the last visible node's, else the global vector at 0x1070d1b0 (with a DevWarning); stub 0x10010613
	Vector sub_102e0470(CBaseEntity *pEnemy);	// same lookup as sub_102dfed0 on the first three floats of the nodes (the position the enemy was last seen at); returns the Vector by value (hidden pointer)
	char sub_102e0290(CBaseEntity *pEnemy, Vector *pPos, Vector *pPos2);	// like sub_102dfed0, also giving the vector at +0x18 of the node (the second position); true when a node was found (or a visible one used)
};
