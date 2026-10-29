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

struct CTroikaPick	// a record with a current index (+0x10) into a list of node indices (+0x14..)
{
	char m_pad0000[0x10];
	int m_iCur;	// 0x10
	int m_aNodes[1];	// 0x14
};

struct CTroikaPickHolder
{
	char m_pad0000[4];
	CTroikaPick *m_pPick;	// 0x04
};

struct CTroikaNodeObj
{
	char m_pad0000[0xa0];
	int m_nValue;	// 0xa0
};

struct CTroikaNodeObjNet	// count at +0, object pointers at +4
{
	int m_nNodes;
	CTroikaNodeObj **m_ppNodes;
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
