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
	static CDisciplineParticle *sub_10050d90(int a1, int a2, int a3, int a4, int a5, int pszModel, int a7, int a8, int a9, int a10);	// "CDisciplineParticle::Create" overload taking a model name: precaches it (engine slot 17) and forwards to the full version
	static CDisciplineParticle *sub_10050e70(const char *pszClassname, int a2, int a3, int a4, int a5, int a6, int modelIndex, int a8, int a9, int a10, int a11, int a12);	// "CDisciplineParticle::Create" (stub 0x1001398f)
	static CDisciplineParticle *sub_10050b90(CDisciplineParticleParams *pParams, int a2, int a3, int a10, int a11);	// "CDisciplineParticle::Create" overload taking a parameter block: scope trace, precaches the model name of the block (engine slot 17) and forwards everything to the full version

	char m_pad004[0x4b4];
	unsigned int m_hUser;	// 0x4b8
};
