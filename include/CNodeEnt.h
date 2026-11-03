// CNodeEnt (RTTI .?AVCNodeEnt@@): derived from CBaseEntity.
// Only the members the recovered code needs are declared.
#pragma once

#include "CBaseEntity.h"

class CNodeEnt : public CBaseEntity
{
public:
	// Slot 202, called directly so far; declared as a plain member.
	void vfunc202(int a);
	CNodeEnt *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
	CNodeEnt *sub_102d7cd0();	// as in CKeepUpright (transplant)
	virtual void vfunc103();	// slot 103 (function 0x102d78d0): Spawn of the info_node* / info_hint* entities: the base spawn (sub_102d7d30), then by classname either the hint path (hint type m_w450 != 0: sub_102d2f30(name, origin, g_10926a38, ...)) or a new node in the node list g_1093407c (type 3 air / 2 ground / 4 climb) with its id registered in the network of g_10934088 (+0x454, CUnknown102f7970); ends with sub_101cd970(this)
	void sub_102d7d30();	// stub 0x10006802: the base spawn run first by slot 103
	char m_pad0450[0x450 - 0x3e0];	// CBaseEntity ends at 0x3e0 here
	short m_w450;	// 0x450: the hint type (0 = none; "WARNING: Hint node with no hint type!")
	char m_pad0452[2];
	int m_nId454;	// 0x454: the node's world-editor id (stored in the network's id table)
	int m_n458;	// 0x458: a second hint selector (with m_w450 it decides whether the node registers a hint through sub_102d2f30)
public:
    virtual datamap_t * vfunc82();
	char m_pad045c[0x46c - 0x45c];
};
