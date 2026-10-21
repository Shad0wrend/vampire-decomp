// CUnknown10936c84: the global object at 0x10936c84 (a pool that nodes of a chain are returned to / taken from); only
// the release and allocate calls are known.
#pragma once

struct CChainNodeStub;

class CUnknown10936c84
{
public:
	void sub_1013dce0(CChainNodeStub *pNode);	// returns the node to the pool (stub 0x1000330f)
	void *sub_1013dc60(unsigned int nSize);	// takes a block of nSize bytes from the pool (stub 0x1000bbd6)
};
