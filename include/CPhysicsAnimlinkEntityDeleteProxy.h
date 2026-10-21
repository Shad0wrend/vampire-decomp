// CPhysicsAnimlinkEntityDeleteProxy: declared by pcdecomp transplant for 0x1014eb70 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class CBaseEntity;

class CPhysicsAnimlinkEntityDeleteProxy
{
public:
	CPhysicsAnimlinkEntityDeleteProxy *vfunc2(unsigned int flags);
	void sub_10007c11();
	void vfunc1(CBaseEntity *pEntity);	// "OnEntityDeleted"-like (slot 1, declared as a plain member): when the deleted entity is one of the two watched ones (handles at +8 / +0xc) detaches the animlink (sub_1000460b) and removes it (sub_101cd940)

	char m_pad0000[4];
	void *m_pAnimlink;	// 0x04
	unsigned int m_hEntityA;	// 0x08
	unsigned int m_hEntityB;	// 0x0c
};
