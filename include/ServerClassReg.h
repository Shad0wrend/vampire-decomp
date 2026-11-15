// ServerClassReg.h: IMPLEMENT_SERVERCLASS's global, which links itself in (the 2003 constructor; the 2004 SDK sorts
// by name). Apart from ServerClass.h on purpose: there even the constructor's declaration moves the registers of
// matched functions that read that header (0x10073c20, 0x1016fa90), and so do the 0x10/0x14 fields and the
// head's extern next to ~ConCommand: they stay here, which only the initializer units include.
#ifndef SERVERCLASSREG_H
#define SERVERCLASSREG_H
#include "ServerClass.h"

struct ServerClass;
extern ServerClass *g_1072bbd8;	// g_pServerClassHead: the list every ServerClass puts itself at the head of

struct ServerClassReg : public ServerClass
{
	ServerClassReg(const char *pNetworkName, void *pTable, void *p10)
	{
		m_pNetworkName = pNetworkName;
		m_pTable = pTable;
		m_pNext = g_1072bbd8;
		g_1072bbd8 = this;
		m_10 = p10;
		m_InstanceBaselineIndex = -1;	// INVALID_STRING_INDEX
	}

	void *m_10;	// 0x10: a pointer to data the game's units give (not in the 2003/2004 SDK)
	int m_InstanceBaselineIndex;	// 0x14
};

#endif
