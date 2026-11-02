// CUnknown10075aa0: 0x340 byte scene/choreography event object (constructed by 0x10075040 and 0x10075aa0); real name not yet known.
// Only the fields the recovered code touches are declared.
#pragma once

class CUnknown10077990;

struct CUnknown10075aa0Vec	// a five dword vector (memory, allocation count, grow size, size, element pointer)
{
	int m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int m_pElements;
};

struct CUnknown10075aa0Sample	// 8 byte ramp sample: the value and its time (the ramp's x axis is at +4)
{
	float m_flValue;	// 0x00
	float m_flTime;	// 0x04
};

class CUnknown10075aa0
{
public:
	int m_i00;	// 0x00
	char m_b04;	// 0x04
	char m_pad05[0x84 - 5];
	char m_b84;	// 0x84
	char m_pad85[0x104 - 0x85];
	char m_b104;	// 0x104
	char m_pad105[0x184 - 0x105];
	int m_i184;	// 0x184
	float m_f188;	// 0x188
	int m_i18c;	// 0x18c
	int m_i190;	// 0x190
	int m_i194;	// 0x194
	char m_b198;	// 0x198
	char m_pad199[0x19c - 0x199];
	CUnknown10075aa0Vec m_vec19c;	// 0x19c
	char m_b1b0;	// 0x1b0
	char m_pad1b1[0x2b4 - 0x1b1];
	int m_i2b4;	// 0x2b4
	int m_i2b8;	// 0x2b8
	CUnknown10075aa0Vec m_vec2bc;	// 0x2bc
	CUnknown10075aa0Vec m_vec2d0;	// 0x2d0
	CUnknown10075aa0Vec m_vec2e4[2];	// 0x2e4
	CUnknown10075aa0Vec m_vec30c;	// 0x30c
	char m_b320;	// 0x320
	char m_pad321[3];
	int m_i324;	// 0x324
	char m_b328;	// 0x328
	char m_pad329[3];
	int m_i32c;	// 0x32c
	int m_i330;	// 0x330
	int m_i334;	// 0x334
	int m_i338;	// 0x338
	char m_b33c;	// 0x33c
	char m_pad33d[3];

	void sub_10077bd0(int index, int a, int b);	// stub 0x10006717-built record (CUnknown10073b00 ctor with this, a, b) appended to the vector m_vec2e4[index] (inline AddToTail: grow sub_10079100, CUtlVector136::sub_10078f20, copy constructor sub_10073a90 when the slot is non null), then a second temp (1, "", 0) is built and the vector is bubble sorted: for i < count, for j = i + 1 < count, swap the 0x88 byte records i, j (through a 0x88 byte stack temp) when rec[j].sub_10073b00() compares above rec[i].sub_10073b00() (fcompp, test ah,5, jp); the per-index counts mirror at +0x2f0 + 0x14 * index
	CUnknown10075aa0 *sub_10075040(int arg);	// constructor: clears the vectors, then sub_10075aa0(arg); returns this
	CUnknown10075aa0 *sub_10075120(int a, int b, int c);	// constructor overload: clears the vectors, then sub_10075aa0(a), sub_10075b90(b), S10075bd0::sub_10075bd0(c); returns this
	CUnknown10075aa0 *sub_10075230(int a, int b, int c, int d);	// constructor overload: as sub_10075120, then S10075c20::sub_10075c20(d); returns this
	void sub_10075aa0(int arg);	// base constructor body: clears the fields, then sub_10076f10(0, 0, 0), stores arg at +0x330
	void sub_10076b60();	// clears the vector at +0x2bc (frees the memory unless the grow size is -1)
	void sub_10076f10(char c, const char *a, const char *b);	// stores c at +0x1b1 and copies the strings (the empty string for null) to +0x1b2 / +0x232 (stub 0x1000e822)
	float sub_10076b30();	// the event's remaining length: 0.0f unless it has a time range (stub 0x10014835)
	void sub_100754e0(CUnknown10077990 *pSource);	// copies the data of pSource into this event (stub 0x10014637)
	void sub_10075350();	// destructor body (the object itself is not freed): resets the event (sub_10077650), destroys and frees the object at +0x324, then purges the vectors at +0x30c, +0x2e4 (two), +0x2d0, +0x2bc and +0x19c
	void sub_10077650();	// resets the event data (stub 0x10007f0e), run first by the destructor
	float sub_10075e70();	// returns the float at +0x184 (stub 0x100154e7)
	float sub_10075f10();	// the event's end time (stub 0x10003fc6)
	int sub_10076690();	// returns the dword at +0x2b4 (the scene object, stub 0x10001b5e)
	int sub_100766d0();	// returns the dword at +0x2b8 (stub 0x100088d2)
	char *sub_10075c00();	// returns &m_b04, the event's name (stub 0x1000b0e1)
	float sub_10075fd0(float flTime);	// 0x10075fd0 (stub 0x10010f82 is the count): the ramp value at flTime in 0..1: 0.0f without an end time (sub_10075f30) or ramp samples; else the bracketing samples (sub_100789b0 over -1..count, clamped) go as 2D points (value, time, 0) through the Catmull-Rom spline (sub_1013bb40) with a fraction clamped to 0..1, the result clamped to 0..1. One function split by the analyser at 0x10076009 (second half, live eax = count / edi = this); 0x10076343 is the twin
	int sub_10078630();	// the number of ramp samples (the vector at +0x19c, size at +0x1a8; stub 0x10010f82)
	CUnknown10075aa0Sample *sub_100789b0(int index);	// stub 0x1000f47a: the ramp sample `index`; a static zero sample for index < 0, a static sample (0, sub_10076b30()) at or past the count
	char sub_10075f30();	// whether the event has an end time (stub 0x1000695b)
	int sub_10075b70();	// returns the type at +0x00 (stub 0x100029c8)
	void sub_10077860();	// stub 0x10001596, run on every event by CUnknown1007ce20::sub_1007cfc0 first
	char sub_10076b10();	// stub 0x1000cc52: whether the event is one of the timed (non type 1) events the scene keeps (the list at +0x3c)
};
