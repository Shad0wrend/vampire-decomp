// CUnknown102dfc10: a queue of pending (entity handle, two vectors) records that is flushed into one of two sinks
// (real name not yet known): the object at +0 (virtual slot 56) or, when the byte at +8 is set, the one at +4.
#pragma once

#include "Vector.h"
#include "CUnknown10316890.h"

class CBaseEntity;

#define SINK_V1(n) virtual void v##n();
#define SINK_V10(p) SINK_V1(p##0) SINK_V1(p##1) SINK_V1(p##2) SINK_V1(p##3) SINK_V1(p##4) SINK_V1(p##5) SINK_V1(p##6) SINK_V1(p##7) SINK_V1(p##8) SINK_V1(p##9)

struct CUnknown102dfc10Sink	// the object at +0; only slot 56 is typed
{
	SINK_V10(0) SINK_V10(1) SINK_V10(2) SINK_V10(3) SINK_V10(4)
	SINK_V1(50) SINK_V1(51) SINK_V1(52) SINK_V1(53) SINK_V1(54) SINK_V1(55)
	virtual void vfunc56(CBaseEntity *pEnt, Vector a, Vector b, int c);
};

#undef SINK_V10
#undef SINK_V1

struct CUnknown102dfc10Node	// a pending record
{
	char m_pad0000[0x0c];
	Vector m_vecA;	// 0x0c
	Vector m_vecB;	// 0x18
	unsigned int m_hEnt;	// 0x24: entity handle
	char m_pad0028[0x38 - 0x28];
	CUnknown102dfc10Node *m_pNext;	// 0x38
};

class CUnknown102dfc10
{
public:
	CUnknown102dfc10Sink *m_pSink;	// 0x00
	CUnknown10316890 *m_pHandleSink;	// 0x04
	char m_bUseHandleSink;	// 0x08
	CUnknown102dfc10Node *m_pHead;	// 0x0c

	void sub_102dfc10(int c);	// takes every pending record off the queue, hands (entity of the handle or null, both vectors, c) to the sink (when it is set) and frees the record
};
