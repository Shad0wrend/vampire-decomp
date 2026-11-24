// C_PlayerResource: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseEntity.h"

class C_PlayerResource : public C_BaseEntity
{
public:
	C_PlayerResource();
	virtual ~C_PlayerResource();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_PlayerResource's own function
	virtual int vfunc15();
	virtual int vfunc16();
	// the slots C_PlayerResource adds to its base's vtable: 120-138, vfuncK at slot K
	virtual int vfunc120(int);
	virtual int vfunc121(int);
	virtual int vfunc122(int);
	virtual int vfunc123(int);
	virtual int vfunc124(int);
	virtual void vfunc125();
	virtual int vfunc126(int);
	virtual void vfunc127();
	virtual void vfunc128();
	virtual int vfunc129(int);
	virtual int vfunc130(int);
	virtual int vfunc131(int);
	virtual void vfunc132();
	virtual bool vfunc133(int);
	virtual char vfunc134(int);
	virtual int vfunc135(int);
	virtual int vfunc136(int);
	virtual float vfunc137(int);
	virtual void vfunc138(int);
	char m_pad0014[0x410 - 0x14];
	int m_a410[0x21];
	int m_a494[0x21];
	int m_a518[0x21];
	int m_a59c[0x21];
	int m_a620[0x21];
	int m_a6a4[0x21];
	int m_a728[0x108];
	int m_ab48[0x21];
	int m_abcc[0x21];
	int m_ac50[0x21];
	int m_acd4[0x21];
	char m_ad58[0x21];
	char m_ad79[0x21];
	char m_pad0d9a[6];
};
