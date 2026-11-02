// Think contexts save/restore (CThinkContextsSaveDataOps::Save 0x100a1e30 and its Restore twin): the element type of the
// think function list, the engine objects the ops talk to as slot views, and the guarded static of the vector ops that
// both functions share (guard 0x109f0b0c, object 0x109f0b10, atexit destroy stub 0x10014533).
#pragma once

#include "CUtlVectorDataOps.h"

struct thinkfunc_t	// 16 bytes: the context name, then the function record the save writes the name of (+4)
{
	const char *m_pszContext;
	int m_a;
	int m_b;
	int m_c;
};

struct CThinkVec	// the field the ops save: memory, allocation count, grow size, size (+0xc)
{
	thinkfunc_t *m_pMem;
	int m_nAlloc;
	int m_nGrow;
	int m_nSize;
};

typedef CUtlVectorDataOps<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t> >, 9> CThinkVecOps;

// ISave: slot 31 (+0x7c) writes a string
struct CThinkSaveView
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void c10(); virtual void WriteString(const char *psz);
};

// the entity (field owner) behind a SaveRestoreFieldInfo: slot 82 (+0x148) names a think function
struct CThinkOwnerView
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9();
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9();
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
	virtual void i0(); virtual void i1();
	virtual const char *FindFunctionName(const char *pszField, void *pFunc, int bNeeded);
};

struct SaveRestoreFieldInfoView	// SaveRestoreFieldInfo_t: the field's data, the owner, the type description
{
	CThinkVec *m_pField;
	CThinkOwnerView *m_pOwner;
	void *m_pTypeDesc;
};

inline CThinkVecOps *GetThinkVecOps()	// the guarded static shared by Save and Restore
{
	static CThinkVecOps s_ops;
	return &s_ops;
}
