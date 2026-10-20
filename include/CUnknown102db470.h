// CUnknown102db470: an NPC that picks among the registered nodes (singly linked list, head in a global, next pointer
// at +0x540, rank at +0x578) the ones that can serve it; real name not yet known.
#pragma once

class CUnknown102db470;

class CUnknown102db470Node
{
public:
	char m_pad0000[0x540];
	CUnknown102db470Node *m_pNext;	// 0x540
	char m_pad0544[0x578 - 0x544];
	int m_nRank;	// 0x578

	bool sub_102dad60(CUnknown102db470 *pNPC, float *pOut1, float *pOut2);	// whether the node can serve the NPC (stub 0x1000f826)
};

class CUnknown102db470
{
public:
	char m_pad0000[0x62fc];
	CUnknown102db470Node *m_pCurrentNode;	// 0x62fc

	int sub_102db470();	// collects into the global table at 0x10926d80 the usable nodes of the best (highest) rank other than the current one, falling back to the current node; returns how many
};
