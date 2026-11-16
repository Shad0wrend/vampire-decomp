// class CServerGameEnts (RTTI .?AVCServerGameEnts@@), primary vtable 0x10462768, 4 slots.
// The base IServerGameEnts is not modelled; only the slot numbers are kept.
#pragma once

class CBaseEntity;

struct CServerGameEntsEdict	// an edict as the engine sees it: only the pointer at +0x40 is used
{
	char m_pad0000[0x40];
	struct CServerGameEntsUnknown *m_pUnk;	// 0x40
};

#ifdef PCD_INITIALIZERS
#include "IServerGameEnts.h"
#endif

class CServerGameEnts
#ifdef PCD_INITIALIZERS
	: public IServerGameEnts	// the base the matched code does not model
#endif
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CServerGameEntsEdict *pFirst, CServerGameEntsEdict *pSecond);	// resolves both edicts to their entities and hands them, with a freshly cleared 0x54 byte record, to CBaseEntity::sub_1003e2e0
	virtual int vfunc3(int);
};
