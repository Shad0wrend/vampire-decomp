// CGib: declared by pcdecomp transplant for 0x1012b6b0 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CGib : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void sub_10129870();
	void sub_1012a800();	// "WaitTillLand" think: removes the gib outside the world; once its velocity is zero makes it opaque, non-solid, still, and fades it out after its life time (+0x73c); else thinks again in 0.5s
	void sub_10009a48(CBaseEntity *pOther);
	void sub_1012b080(const char *pszModel);	// stub 0x10015b40: sets the model
	void sub_1012a1d0(CBaseEntity *pOwner, void *a, void *b);	// stub 0x1000b857: places and launches the gib for its owner
	void sub_1012a1d0(CBaseEntity *pOwner, float flSpeedMin, float flSpeedMax);	// the same function with float arguments
	void sub_10012337(CBaseEntity *pOther);	// the touch function a window pane gets (stub 0x10012337)
	char m_pad0004[0x3f0 - sizeof(CBaseEntity)];
	float m_flFriction3f0;	// 0x3f0
	char m_pad03f4[0x67c - 0x3f4];
	int m_nBody;	// 0x67c
	char m_pad0680[0x730 - 0x680];
	int m_n730;	// 0x730
	int m_n734;
	int m_n738;
	float m_flLife73c;	// 0x73c
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
};
