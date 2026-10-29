// CLocalDLLChain (RTTI .?AVCLocalDLLChain@@): only the vtable head is modelled.
#pragma once

class CLocalDLLChainVisitor
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(void *pData, int nSize, class CLocalDLLChain *pChain);	// called per chain entry of type 1 or 4
};

class CLocalDLLChain
{
public:
	virtual void vfunc0(CLocalDLLChainVisitor *pVisitor);	// walks a (zeroed) local chain of 0x34 byte entries and hands each entry of type 1 or 4 to the visitor's slot 2
};
