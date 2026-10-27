// CDevFlagObj: a developer-flag object (the debug-output gates of the game code); only the two members the
// decompiled code asks are known: slot 1 (a quiet-mode answer) and the dword at +0x2c (the flag value). The game
// code prints its debug messages when slot 1 is false and the dword is non-zero.
#pragma once

class CDevFlagObj
{
public:
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x28];
	int m_n2c;	// 0x2c
};
