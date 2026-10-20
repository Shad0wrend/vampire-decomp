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
	int vfunc269(int a);	// slot 269: like slot 267 for the slot 559 request of the object at +0x94 of the entity of the handle at +0x580; falls back to CSceneEntity::vfunc268(a, 0)
	int sub_10083cd0(int a, int b);	// CSceneEntity::vfunc268, called directly
};
