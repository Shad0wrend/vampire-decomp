// ServerClass: the engine's description of a networked server class.
#pragma once

struct ServerClass
{
	const char *m_pNetworkName;
	void *m_pTable;	// SendTable *
	ServerClass *m_pNext;
	int m_ClassID;
};
