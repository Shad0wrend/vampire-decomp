// CLocalDLLChain (RTTI .?AVCLocalDLLChain@@): only the vtable head is modelled.
#pragma once

class CLocalDLLChainVisitor
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(void *pData, int nSize, class CLocalDLLChain *pChain);	// called per chain entry of type 1 or 4
};

#ifdef PCD_INITIALIZERS	// the initializer unit: the global 0x106eb3bc links itself into the imported chain
// The base the import ?g_DLLChainRoot@@3PAVCBaseDLLChain@@A (a CBaseDLLChain *, defined by another DLL) names: the
// chain is circular, +4 the previous and +8 the next link. The game's construct stores CLocalDLLChain's vtable before
// it links, so the base makes no code of its own (novtable, no constructor).
class __declspec(novtable) CBaseDLLChain
{
public:
	virtual void vfunc0(CLocalDLLChainVisitor *pVisitor) = 0;
	virtual void vfunc1(int value) = 0;

	CBaseDLLChain *m_pPrev;	// 0x04
	CBaseDLLChain *m_pNext;	// 0x08
};

extern __declspec(dllimport) CBaseDLLChain *g_DLLChainRoot;

class CLocalDLLChain : public CBaseDLLChain
{
public:
	CLocalDLLChain()
	{
		if (g_DLLChainRoot) {
			m_pNext = g_DLLChainRoot;
			m_pPrev = g_DLLChainRoot->m_pPrev;
			m_pPrev->m_pNext = this;
			m_pNext->m_pPrev = this;
		} else {
			m_pNext = this;
			m_pPrev = this;
			g_DLLChainRoot = this;
		}
	}
	~CLocalDLLChain() {}
	virtual void vfunc0(CLocalDLLChainVisitor *pVisitor);
	virtual void vfunc1(int value);	// slot 1 (0x100ed6c0, matched as the free __fastcall sub_100ed6c0): stores value in the global g_106eb3c8
};
#else
class CLocalDLLChain
{
public:
	virtual void vfunc0(CLocalDLLChainVisitor *pVisitor);	// walks a (zeroed) local chain of 0x34 byte entries and hands each entry of type 1 or 4 to the visitor's slot 2
};
#endif
