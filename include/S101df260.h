// S101df260: a record of five 0xac byte items followed by one small object and some flags (name provisional;
// CUnknown101e01e0 hands out arrays of pointers to these).
#pragma once

class CUnknown101e01e0;
class IKVNodeView;

struct S101ddec0	// 0xac byte item
{
	char m_pad[0xac];

	void sub_101ddec0();	// constructor body (stub 0x1000eeb2)
};

struct S101dda30	// 8 byte object at +0x364 of S101df260
{
	char m_pad[8];

	void sub_101dda30();	// constructor body (stub 0x10003cbf)
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
