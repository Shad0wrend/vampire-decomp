// CUnknown101ad9a0: entity-like object with a target name (+0x4d4) and a cached handle to the entity of that
// name (+0x4d8); real name not yet known.
#pragma once

#include "CGlobalEntityList.h"

class CUnknown101ad9a0
{
public:
	char m_pad0000[0x4d4];
	const char *m_pszTargetName;	// 0x4d4
	unsigned int m_hTarget;	// 0x4d8

	CGlobalEntityList_Ent *sub_101ad9a0();	// the entity named m_pszTargetName: the cached handle when it still resolves, else looked up by name (and cached); null when there is none
};
