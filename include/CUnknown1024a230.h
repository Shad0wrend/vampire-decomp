// CUnknown1024a230: a holder of one heap object (the 0x44 byte symbol table at 0x1024a2b0's vtable); real name not yet known.
#pragma once

class CUnknown1024a230Obj
{
public:
	int sub_10249c70(int a);	// stub-less member at 0x10249c70 (the tree lookup of the object's links): returns the found entry or 0
};

class CUnknown1024a230
{
public:
	CUnknown1024a230Obj *m_pObj;\t// 0x00

	CUnknown1024a230 *sub_1024a230();\t// the constructor: allocates and builds the object (null when the allocation fails)
	const char *sub_102ea020(int a);\t// the name of the entry a (-1 gives "<<null>>"), tail calls the object's lookup sub_10249c70
};
