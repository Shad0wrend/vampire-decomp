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
	void vfunc134();	// slot 134 "Think": while the scene plays and the entity of the handle at +0x580 is live, advances the scene by the time since the last think (at most 0.1) and removes the entity once the scene has run out; else removes it at once
public:
	void vfunc261(int, int, int, int, int);
	void vfunc270(int, int);
	void vfunc271(int, int);
	void vfunc272(int);
	char m_pad0000[0x584 - 0x0];
};
