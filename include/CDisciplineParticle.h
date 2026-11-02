// CDisciplineParticle: discipline particle entity. Declared flat (bases not recovered).
#pragma once

struct datamap_t;

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

	void sub_1000f10f();	// destructor body
	void sub_10051650(CBaseEntity *pUser);	// "CDisciplineParticle::AddToUser": scope trace, stores pUser's handle at +0x4b8 (-1 for null) and appends this entity's handle to the handle vector at +0x14c0 of the user
	int sub_100511e0();	// "CDisciplineParticle::Update" (0x100511e0, plain ret, bool in al; called by the think at 0x100521e0): scope trace; user = m_hUser.Get() (CBaseCombatCharacter); flag = user->sub_1033d330(m_n4bc) | (m_n4c0 & GetMiscFlags(user)); stat index m_n4a4 in 0..16: walks user->m_pStatLists (+0x13bc count / +0x13c0 array, record type +0x10 == 3) else CVStatListSet::Of / default list (guard 0x109f0b2a, list 0x109f0b40) ->Find(m_n4a4); on a result > 0 (or the flag) lerps colour / alpha (sub_100fbac0(alpha, 0)); at the end calls slot 242, RemoveFromUser (sub_10051810), SetNextThink(10.0f) (sub_100fbbb0), clears m_b4b4 and returns false
	void sub_10051810();	// "CDisciplineParticle::RemoveFromUser": scope trace, removes this entity's handle from the user's handle vector (+0x14c0) and clears the user handle
	char vfunc86(int a, int b, int c, int d, int e);	// slot 86 "CDisciplineParticle::ShouldTransmit": scope trace; without the flag byte at +0x4b4 the CEnvParticle implementation, else true only when the user entity (handle at +0x4b8) has the edict b (its dword at +0x2e0)
	static CDisciplineParticle *sub_10050d90(int a1, int a2, int a3, int a4, int a5, int pszModel, int a7, int a8, int a9, int a10);	// "CDisciplineParticle::Create" overload taking a model name: precaches it (engine slot 17) and forwards to the full version
	static CDisciplineParticle *sub_10050e70(const char *pszClassname, int a2, int a3, int a4, int a5, int a6, int modelIndex, int a8, int a9, int a10, int a11, int a12);	// "CDisciplineParticle::Create" (stub 0x1001398f)
	static CDisciplineParticle *sub_10050b90(CDisciplineParticleParams *pParams, int a2, int a3, int a10, int a11);	// "CDisciplineParticle::Create" overload taking a parameter block: scope trace, precaches the model name of the block (engine slot 17) and forwards everything to the full version
	static CDisciplineParticle *sub_10050c70(CDisciplineParticleParams *pParams, int a2, int a3, int a10, int a11);	// "CDisciplineParticle::Create" overload that returns null unless the block has a model name; null strings become ""

	char m_pad004[0x44c];
	const char *m_pszModelName;	// 0x450
	int m_nModelIndex;	// 0x454
	char m_pad458[0x464 - 0x458];
	float m_flColor464;	// 0x464: the four floats Update sets to 0.0f / 1.0f or lerps toward m_n4ac (only when m_b4c4 is set)
	float m_flColor468;	// 0x468
	float m_flColor46c;	// 0x46c
	float m_flColor470;	// 0x470
	float m_flAlpha474;	// 0x474: set / lerped from m_n4b0
	char m_pad478[0x4a1 - 0x478];
	char m_b4a1;	// 0x4a1
	char m_pad4a2[2];
	int m_n4a4;	// 0x4a4: the discipline stat index (0..16): Update looks it up in the user's stat lists
	union { int m_n4a8; float m_fl4a8; };	// 0x4a8: float in Update (start value for sub_100fbac0, compared with 1.0f)
	union { int m_n4ac; float m_fl4ac; };	// 0x4ac: float colour target
	union { int m_n4b0; float m_fl4b0; };	// 0x4b0: float alpha target
	char m_b4b4;	// 0x4b4
	char m_pad4b5[3];
	EHANDLE m_hUser;	// 0x4b8
	int m_n4bc;	// 0x4bc
	int m_n4c0;	// 0x4c0
	char m_b4c4;	// 0x4c4
	char m_b4c5;	// 0x4c5
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CDisciplineParticle *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	virtual datamap_t * vfunc82();
	virtual void vfunc83();
	virtual void vfunc84();
	virtual void vfunc85();
	virtual void vfunc86_slot();
	virtual void vfunc87();
	virtual void vfunc88();
	virtual void vfunc89();
	virtual void vfunc90();
	virtual void vfunc91();
	virtual void vfunc92();
	virtual void vfunc93();
	virtual void vfunc94();
	virtual void vfunc95();
	virtual void vfunc96();
	virtual void vfunc97();
	virtual void vfunc98();
	virtual void vfunc99();
	virtual void vfunc100();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc103();
	virtual void vfunc104();
	virtual void vfunc105();
	virtual void vfunc106();
	virtual void vfunc107();
	virtual void vfunc108();
	virtual void vfunc109();
	virtual void vfunc110();
	virtual void vfunc111();
	virtual void vfunc112();
	virtual void vfunc113();
	virtual void vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
	virtual int vfunc117();
};
