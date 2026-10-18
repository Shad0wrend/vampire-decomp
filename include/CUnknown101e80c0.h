// CUnknown101e80c0: object whose pointer at +0x1c leads (through +0x8) to a worker with a numeric query; real names not yet known.
#pragma once

struct CUnknown101e80c0Worker
{
	int sub_101e56e0(int a);
};

struct CUnknown101e80c0Inner
{
	char m_pad0000[8];
	CUnknown101e80c0Worker *m_pWorker;	// 0x8
};

class CUnknown101e80c0
{
public:
	char m_pad0000[0x1c];
	CUnknown101e80c0Inner *m_pInner;	// 0x1c

	void sub_101e80c0(int *pResult, int a, int unused, int limit);	// *pResult = 3 when the worker's value for a is at least limit, else 1
};
