// CPushBlockerEnum (RTTI .?AVCPushBlockerEnum@@): partition enumerator that collects the entities blocking a push.
#pragma once

class CBaseEntity;

struct CPushBlockerEntry
{
	CBaseEntity *m_pEntity;
	int m_pad[3];
};

struct CPushBlockerList
{
	CPushBlockerEntry *m_pData;
	int m_pad[2];
	int m_nCount;
};

class CPushBlockerEnum
{
public:
	virtual void vfunc0();

	CPushBlockerList *m_pList;

	bool sub_10037750(CBaseEntity *pEnt);	// "CPushBlockerEnum::IsStandingOnPushable": scope trace, true when the entity from slot 209 of pEnt (or any, when pEnt has flag bit 0 set) is in the list
};
