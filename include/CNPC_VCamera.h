// CNPC_VCamera: camera NPC. Declared standalone: only the members the decompiled code needs
// are named, and the vtable slots are not modelled (the position of the virtual below is not its real slot, 461).
#pragma once

class CNPC_VCamera
{
public:
	virtual int vfunc461();

	char pad0004[0x1b2c - 4];
	int m_n1b2c;
	char pad1b30[0x1b38 - 0x1b30];
	int m_n1b38;
	const char *m_p1b3c;
	int m_n1b40;
	char pad1b44[0x5cc4 - 0x1b44];
	int m_n5cc4;

	int sub_10368f20();
};
