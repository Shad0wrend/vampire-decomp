// S1033d380: the character the targeted discipline callbacks work on (an array of 16 byte records at +0xfb4, count at +0xfc0); real name not yet known.
#pragma once

struct S1033d380
{
	char m_pad0000[0xfb4];
	int *m_pRecords;	// 0xfb4
	char m_pad0fb8[0xfc0 - 0xfb8];
	int m_nRecords;	// 0xfc0

	int sub_1033d380(int key);	// the object (field +0x9c) of the entity behind the record `key`, 0 when none
	int sub_1033d410(int key);	// the value at +8 of the record `key`, -1 when none
	char sub_1033d2f0(int key);	// whether the character has a record `key` (stub 0x1000d3d7)
	int sub_1033d190(int key);	// drops the record `key` (stub 0x10004f7f)
};
