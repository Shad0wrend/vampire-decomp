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

struct CTroikaBits	// a count at +0 and a table of flags at +4 (the layout of the navigator's net at +0x2c, seen as a set of flags)
{
	int m_nBits;
	int *m_pBits;
};

struct CTroikaReq	// the record at +4 of a holder: a list of required indices (count +0xc, indices from +0x14)
{
	char m_pad0000[0xc];
	int m_nCount;	// 0xc
	char m_pad0010[4];
	int m_aIndices[1];	// 0x14
	bool sub_10307ac0(CTroikaBits *pBits);	// stub 0x10008783: true when every index is in range and set in pBits (an index past the end bumps the global counter 0x106c994c); false for no table
};

struct CTroikaReqHolder	// the argument of CAI_BaseNPCTroika::sub_1029f610
{
	char m_pad0000[4];
	CTroikaReq *m_pReq;	// 0x04
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
