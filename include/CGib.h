// CGib: declared by pcdecomp transplant for 0x1012b6b0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CGib : public CBaseEntity
{
public:
	CGib *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void sub_1012b080(const char *pszModel);	// stub 0x10015b40: sets the model
	void sub_1012a1d0(CBaseEntity *pOwner, void *a, void *b);	// stub 0x1000b857: places and launches the gib for its owner
	char m_pad0004[0x67c - sizeof(CBaseEntity)];
	int m_nBody;	// 0x67c
	char m_pad0680[0x730 - 0x680];
	int m_n730;	// 0x730
	char m_pad0734[8];
	float m_flLife73c;	// 0x73c
};
