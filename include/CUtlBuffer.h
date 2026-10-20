// CUtlBuffer: growable byte buffer with a read cursor (not in the game's RTTI; layout read off the string getters).
#pragma once

class CUtlBuffer
{
public:
	char *m_pBuffer;	// 0x00
	int m_nSize;	// 0x04: end of the readable data
	int m_nGrow;	// 0x08
	int m_nGet;	// 0x0c: read cursor
	int m_nPut;	// 0x10
	unsigned char m_nError;	// 0x14: nonzero when the buffer is unusable; bit 1 set when a read ran past the end
	unsigned char m_nFlags;	// 0x15: bit 0 = text buffer

	void sub_1006bf40();	// skips the white space at the read cursor of a text buffer (stub 0x1000c35b)
	void sub_1006bfb0(char *pString);	// reads one string: to the terminating null of a binary buffer, or to the next white space of a text buffer
};
