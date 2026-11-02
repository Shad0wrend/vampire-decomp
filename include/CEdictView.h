// CEdictView: the engine's edict as the game's code reads it (CBaseEntity::Instance inlined): the object at +0x40 is the
// entity's "unknown" (IServerUnknown) whose slot 4 returns the CBaseEntity. Write CBaseEntity::Instance as
//   edict = engine->vfunc38(index); { ScopeTrace t("CBaseEntity::Instance", g_106b8540, g_106b8540); if (!edict) edict = engine->vfunc38(0);
//   pEnt = (edict && edict->m_pUnk) ? edict->m_pUnk->vfunc4() : 0; }
// (the first PEntityOfEntIndex call comes BEFORE the scope; 0x10142e90 and 0x1021f710 show it).
#pragma once

struct CEdictBaseEntSource
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void *vfunc4();	// slot 4 (+0x10): the CBaseEntity (cast to the entity view you need)
};

struct CEdictView
{
	char m_pad0000[0x40];
	CEdictBaseEntSource *m_pUnk;	// 0x40
};
