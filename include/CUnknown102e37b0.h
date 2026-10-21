// CUnknown102e37b0: nav trace helper holding an entity pointer at +4; real name not yet known.
#pragma once

class CBaseEntity;

class CUnknown102e37b0
{
public:
	void sub_102e37b0(const float *pStart, const float *pEnd, unsigned int fMask, bool bUseOwner, struct CGameTrace *pTrace);	// traces a ray start->end with a CTraceFilterNav, draws it when the debug switch is on

	int m_pad0000;
	CBaseEntity *m_pEnt;	// 0x04
};
