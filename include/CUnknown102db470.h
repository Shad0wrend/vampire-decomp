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

struct CUnknown102db470Sub	// small polymorphic object embedded at +0x270
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
};

class CUnknown102db470
{
public:
	char m_pad0000[0x270];
	CUnknown102db470Sub m_sub270;	// 0x270 (vptr + nothing else known)
	char m_pad0274[0x62fc - 0x274];
	CUnknown102db470Node *m_pCurrentNode;	// 0x62fc
};
