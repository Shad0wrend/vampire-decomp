// CAI_Network: the AI node network (not in the game's RTTI; name from the "AI network" role of the object that
// the network manager entity keeps at +0x454). Only what recovered code needs.
#pragma once

class CAI_Network
{
public:
	char m_pad0000[0xc];
	int m_nNumNodes;	// 0x0c

	int sub_102f6d10(int wcId);	// the node index of a worldcraft node id, -1 when unknown (called through the stub at 0x100012a8)
};

// The object at the global 0x10934088 (the network manager entity); it points at the network at +0x454.
struct CAI_NetworkOwner
{
	char m_pad0000[0x454];
	CAI_Network *m_pNetwork;	// 0x454
};
