// S101df260: a record of five 0xac byte items followed by one small object and some flags (name provisional;
// CUnknown101e01e0 hands out arrays of pointers to these).
#pragma once

class CUnknown101e01e0;
class IKVNodeView;

struct S101dda30	// 8 byte object at +0x364 of S101df260 (and five times in S101ddec0)
{
	char m_pad[8];

	void sub_101dda30();	// constructor body (stub 0x10003cbf)
};

struct S101ddbe0	// 0xc byte object at +0x50 of S101ddec0
{
	char m_pad[0xc];

	void sub_101ddbe0();	// constructor body (stub 0x10003936)
};

struct S101dcb20	// 0x1c byte object at +0x5c / +0x78 of S101ddec0
{
	char m_pad[0x1c];

	void sub_101dcb20();	// constructor body (stub 0x10002036)
};

struct S101dc1c0	// 0x10 byte object at +0x94 of S101ddec0
{
	char m_pad[0x10];

	void sub_101dc1c0();	// constructor body (stub 0x1001232d)
};

struct S101ddec0	// 0xac byte item
{
	char m_b00;
	char m_pad01[3];
	S101dda30 m_o04;
	S101dda30 m_o0c;
	S101dda30 m_o14;
	char m_b1c;
	char m_b1d;
	char m_b1e;
	char m_pad1f;
	S101dda30 m_o20;
	S101dda30 m_o28;
	int m_n30;	// 0x32 after construction
	int m_n34;
	int m_n38;	// -1 after construction
	int m_n3c;	// -1 after construction
	int m_n40;
	int m_n44;
	int m_n48;
	int m_n4c;
	S101ddbe0 m_o50;
	S101dcb20 m_o5c;
	S101dcb20 m_o78;
	S101dc1c0 m_o94;
	int m_na4;
	int m_na8;

	S101ddec0 *sub_101ddec0();	// constructor body (stub 0x1000eeb2), returns this
};

struct S101df260
{
	int m_n00;
	char m_pad04[4];
	S101ddec0 m_items[5];	// 0x08
	S101dda30 m_obj364;	// 0x364
	int m_n36c;	// 0x36c: -1 when unset
	char m_b370;
	char m_b371;
	char m_pad372[2];

	S101df260 *sub_101df260(int a);	// constructor body: the five items, the object, +0x36c = -1, +0 = a, both flags cleared; returns this
	bool sub_101dfa00(CUnknown101e01e0 *pOwner, IKVNodeView *pNode, const char *pszName);	// loads the record from its node (stub 0x1000b541); false when the base record it inherits from is not known yet
};
