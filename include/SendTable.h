// SendTable: the engine's networked-table description (an object the game defines per server class; only its
// registration call is known). BEGIN_SEND_TABLE initialises a guarded static array of SendProp (the first one is the
// "should_never_see_this" dummy) and then registers everything after it with the table.
#pragma once

#include "SendProp.h"

class CSendTablePrecalc;

class SendTable
{
public:
	SendTable();	// function 0x102471f0: Construct(NULL, 0, NULL)
	~SendTable();	// function 0x10247220: empty
	void sub_10247240(SendProp *pProps, int nProps, const char *pNetTableName);	// stub 0x1000e8fe: SendTable::Construct

	// the 2003 tree's members (src_main public/dt_send.h): Construct stores pProps, nProps and the name, then 0,
	// false, -1 and 0; the engine fills m_pPrecalc .. m_nDataTableProxies. 0x1c bytes, as the game's objects.
	SendProp	*m_pProps;
	int			m_nProps;
	char		*m_pNetTableName;	// The name matched between client and server.
	CSendTablePrecalc	*m_pPrecalc;	// The engine hooks the SendTable here.

protected:
	bool		m_bInitialized;
	int			m_nWriteSpawnCount;
	int			m_nDataTableProxies;	// data table props without SPROP_PROXY_ALWAYS_YES
};
