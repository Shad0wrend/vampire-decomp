// CAI_TroikaLink: the records the Troika NPC's hint-link check walks (names provisional).
#pragma once

struct CTroikaCand	// a candidate record found for a link
{
	char m_pad0000[0x64];
	unsigned int m_nMask;	// 0x64: one bit per time slot
};

struct CTroikaNode	// an AI node
{
	CTroikaCand *sub_102f96e0(int id);	// stub 0x1000e9ad: the candidate of that id on the node
};

struct CTroikaNodeNet	// the node list of the navigator: count at +0, node pointers at +4
{
	int m_nNodes;
	CTroikaNode **m_ppNodes;
};

struct CTroikaNav	// the navigator object at +0x5d34 of the NPC
{
	int sub_102ee620();	// stub 0x100037e2: the navigator's state (8 = ready)

	char m_pad0000[0x2c];
	CTroikaNodeNet *m_pNet;	// 0x2c
};

struct CTroikaLinkRef
{
	char m_pad0000[0x10];
	int m_id;	// 0x10
};

struct CTroikaLink	// a link record: node index (+0x10), flags (+0x28), reference (+0x30)
{
	char m_pad0000[0x10];
	int m_iNode;	// 0x10
	char m_pad0014[0x28 - 0x14];
	unsigned char m_nFlags;	// 0x28
	char m_pad0029[0x30 - 0x29];
	CTroikaLinkRef *m_pRef;	// 0x30
};
