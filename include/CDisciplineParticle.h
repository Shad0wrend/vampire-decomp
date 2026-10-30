// CDisciplineParticle: discipline particle entity. Declared flat (bases not recovered).
#pragma once

class CBaseEntity;

struct CDisciplineParticleParams	// the parameter block of the Create overload at 0x10050b90 (0x24 bytes)
{
	const char *m_pszClassname;	// 0x00
	int m_n04;
	int m_n08;
	int m_n0c;
	const char *m_pszModel;	// 0x10
	int m_n14;
	int m_n18;
	int m_n1c;
	int m_n20;
};

class CDisciplineParticle
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDisciplineParticle *vfunc5(unsigned int flags);	// scalar deleting destructor

	void sub_1000f10f();	// destructor body
	void sub_10051650(CBaseEntity *pUser);	// "CDisciplineParticle::AddToUser": scope trace, stores pUser's handle at +0x4b8 (-1 for null) and appends this entity's handle to the handle vector at +0x14c0 of the user
	void sub_10051810();	// "CDisciplineParticle::RemoveFromUser": scope trace, removes this entity's handle from the user's handle vector (+0x14c0) and clears the user handle
	char vfunc86(int a, int b, int c, int d, int e);	// slot 86 "CDisciplineParticle::ShouldTransmit": scope trace; without the flag byte at +0x4b4 the CEnvParticle implementation, else true only when the user entity (handle at +0x4b8) has the edict b (its dword at +0x2e0)
	static CDisciplineParticle *sub_10050d90(int a1, int a2, int a3, int a4, int a5, int pszModel, int a7, int a8, int a9, int a10);	// "CDisciplineParticle::Create" overload taking a model name: precaches it (engine slot 17) and forwards to the full version
	static CDisciplineParticle *sub_10050e70(const char *pszClassname, int a2, int a3, int a4, int a5, int a6, int modelIndex, int a8, int a9, int a10, int a11, int a12);	// "CDisciplineParticle::Create" (stub 0x1001398f)
	static CDisciplineParticle *sub_10050b90(CDisciplineParticleParams *pParams, int a2, int a3, int a10, int a11);	// "CDisciplineParticle::Create" overload taking a parameter block: scope trace, precaches the model name of the block (engine slot 17) and forwards everything to the full version
	static CDisciplineParticle *sub_10050c70(CDisciplineParticleParams *pParams, int a2, int a3, int a10, int a11);	// "CDisciplineParticle::Create" overload that returns null unless the block has a model name; null strings become ""

	char m_pad004[0x44c];
	const char *m_pszModelName;	// 0x450
	int m_nModelIndex;	// 0x454
	char m_pad458[0x4a1 - 0x458];
	char m_b4a1;	// 0x4a1
	char m_pad4a2[2];
	int m_n4a4;	// 0x4a4
	int m_n4a8;	// 0x4a8
	int m_n4ac;	// 0x4ac
	int m_n4b0;	// 0x4b0
	char m_b4b4;	// 0x4b4
	char m_pad4b5[3];
	EHANDLE m_hUser;	// 0x4b8
	int m_n4bc;	// 0x4bc
	int m_n4c0;	// 0x4c0
	char m_b4c4;	// 0x4c4
	char m_b4c5;	// 0x4c5
public:
	virtual int vfunc82();
public:
	virtual int vfunc117();
};
