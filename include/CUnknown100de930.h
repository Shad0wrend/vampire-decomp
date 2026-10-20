// CUnknown100de930: an object that holds the handle of an owner entity at +4 and is registered in a linked list
// (12 byte nodes, CUtlLinkedList12) embedded in that owner at +0x230.
#pragma once

#include "CUtlLinkedList12.h"

struct CUnknown100de930Owner
{
	char m_pad0000[0x230];
	CUtlLinkedList12 m_List;	// 0x230
};

class CUnknown100de930
{
public:
	int m_unk0;	// 0x00
	unsigned int m_hOwner;	// 0x04: handle of the owner entity

	void sub_100de930();	// removes this object from the list of the owner entity it points to (when the handle still resolves), then clears the handle
};
