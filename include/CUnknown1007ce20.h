// CUnknown1007ce20: a scene/choreography object holding a vector of event pointers (memory at +0x00, size at +0x0c);
// real name not yet known.
#pragma once

#include "CUnknown10075aa0.h"
#include "UtlMem6.h"

class CUnknown1007ce20
{
public:
	CUnknown10075aa0 **m_pMemory;	// 0x00
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_size;	// 0x0c
	CUnknown10075aa0 **m_pElements;	// 0x10
	char m_pad0014[0x3c - 0x14];
	UtlMem6 m_vec3c;	// 0x3c: the timed events
	char m_pad0050[0x5c - 0x50];
	int m_n5c;	// 0x5c
	char m_pad0060[4];
	UtlMem6 m_vec64;	// 0x64: the type 1 events
	char m_pad0078[0x7c - 0x78];
	float m_f7c;	// 0x7c
	float m_f80;	// 0x80
	int m_n84;	// 0x84
	int m_n88;	// 0x88
	float m_f8c;	// 0x8c
	float m_f90;	// 0x90
	int m_n94;	// 0x94
	float m_f98;	// 0x98
	int m_n9c;	// 0x9c

	char sub_1007d230(float a, float b);	// whether some type 1 event's time (+0x184) is not outside the range [a, b]; stops at the first (returns 1)
	int sub_1007d2b0(float v, float lo, float hi);
	int sub_1007d300(void *pEntity, float a2, float a3, char bFlag, int *pStatus);	// compares v with the range: 2 above hi, 1 below lo, else 0 (this unused; stub 0x10010285)
	float sub_1007ce20();	// the lowest time over the events (starting from 0.0f); type 5 events count with m_f98 subtracted
	float sub_1007ceb0();	// the highest time over the events (starting from 0.0f): the end time when the event has one, else the start time (+ m_f98 for type 5); the types 0xd / 0xe only count when both their times are below m_f80
	void sub_1007cfc0(char bUseStart, int a, int b);	// sorts the events into the two lists (type 1 events to +0x64, the timed ones to +0x3c), then caches the start / end times (+0x8c / +0x90; +0x7c is the end time, or the start time with bUseStart), the event count (+0x94) and the two arguments (+0x84 / +0x88)
};
