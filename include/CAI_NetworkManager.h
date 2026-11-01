// CAI_NetworkManager: declared by pcdecomp transplant for 0x102f5060 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CUnknown102f7970.h"

class CAI_NetworkManager : public CBaseEntity
{
public:
	CAI_NetworkManager *vfunc5(unsigned int flags);
	void sub_100107a3();
	CAI_NetworkManager *sub_102f4fe0();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// slot 103: scope traced SetSolid(0) inlined, then slot 93(0, 0)
	void sub_102f5bd0();	// stub 0x1000fede: loads the node graph of the current map (called by InitializeAINetworks when the map has one)

	void sub_102f6610();	// rebuilds the node graph (sub_102f4e00 on the graph at +0x458), writes it once, tells the engine ai_node_graph_built and logs DevMsg
	void sub_102f50e0();	// vtable function: ThinkSet(0, 0, 0), clears bit 28 of the network's flag word (+8), then sub_102f5190
	void sub_102f5190();	// stub 0x1000c51d: the graph at +0x458 sub_102f4be0, sub_102ccb80, sub_102ccb50, the network's sub_102f7a90, then its sub_102f7970 (tail call)
	void sub_102f51d0();	// stub 0x10007437: writes the node graph file of the map

	char m_padNM[0x450 - sizeof(CBaseEntity)];
	char m_b450;	// 0x450
	void *m_pNetwork;	// 0x454: the 0x18 byte network object (sub_102f8e30)
	char m_Graph[0x200];	// 0x458: the CAI_NodeGraph
	char m_b658;	// 0x658
	char m_b659;
	char m_sz65a[1];	// 0x65a: the name of the map to load after the rebuild
	void sub_102f6a50();	// InitializeAINetworks-like: rebuilds the node graph or loads it, then thinks / loads the map	// 0x659
public:
    virtual datamap_t * vfunc82();
};
