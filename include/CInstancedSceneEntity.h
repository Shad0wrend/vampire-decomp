// CInstancedSceneEntity: declared by pcdecomp transplant for 0x10084f80 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CInstancedSceneEntity
{
public:
	CInstancedSceneEntity *vfunc5(unsigned int flags);
	void sub_1000b1ef();
	int vfunc267(int a);	// slot 267: the dword at +0x94 of the entity the handle at +0x580 resolves to when that entity is live and the dword is set, else CSceneEntity::vfunc267
	int sub_10083c90(int a);	// CSceneEntity::vfunc267, called directly
};
