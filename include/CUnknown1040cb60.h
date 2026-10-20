// CUnknown1040cb60: an object holding an entity handle at +0x14c, per-physics-object parameters at +0x4c and an engine handle at +0x178; real name not yet known.
#pragma once

class CUnknown1040cb60
{
public:
	char m_pad0000[0x14c];
	unsigned int m_hEntity;	// 0x14c
	char m_pad0150[0x178 - 0x150];
	int m_hEngine;	// 0x178

	void sub_1040cb60();	// releases the physics objects of the entity behind m_hEntity (restores each object's state from the parameters at +0x4c), then clears the handle and frees the engine handle
	void sub_1040bfc0(const float *a, const float *b);	// stores the two vectors at +4 / +0x10 and the frame counter at +0x34; when the entity behind m_hEntity has a physics object (+0x36c) calls its slot 2, else releases (sub_1040cb60)
};
