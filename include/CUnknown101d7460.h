// CUnknown101d7460: the player template table (real name not yet known): the object at 0x10738cf0 holding an array of
// template objects at +0x8, picked by a character's value of stat 0x21.
#pragma once

struct CUnknown101d7460Template
{
	void sub_101d6aa0(void *pCharacter);	// stub 0x100102cb: applies this template to the character
};

class CUnknown101d7460
{
public:
	char m_pad0000[8];
	CUnknown101d7460Template **m_pTemplates;	// 0x08

	void sub_101d7460(void *pCharacter);	// applies the template its stat 0x21 (of the stat list of type 0) names to the character; nothing for a null character or a negative stat
};
