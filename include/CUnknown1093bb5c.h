// CUnknown1093bb5c: the global at 0x1093bb5c (a pointer to an object: its slot 1 answers a
// boolean and +0x2c is a pointer tested for null by CNPC_VMingXiao::vfunc438, the schedule pick).
#pragma once

class CUnknown1093bb5c
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();	// slot 1 (+0x4)
	char m_pad0004[0x2c - 4];
	void *m_p2c;	// +0x2c: non-null test in CNPC_VMingXiao::vfunc438
};

extern CUnknown1093bb5c *g_1093bb5c;
