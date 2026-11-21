// RecvTable: a client network table (Source's dt_recv.h). BEGIN_RECV_TABLE defines one per table as
// DT_<name>::g_RecvTable, constructed empty; the table's init function fills it with Construct(props, count, name).
#pragma once

class RecvProp;
class CRecvDecoder;

class RecvTable
{
public:
	RecvTable();
	RecvTable(RecvProp *pProps, int nProps, char *pNetTableName);
	~RecvTable();

	void Construct(RecvProp *pProps, int nProps, char *pNetTableName);

	RecvProp *m_pProps;
	int m_nProps;
	CRecvDecoder *m_pDecoder;
	char *m_pNetTableName;
	bool m_bInitialized;
	bool m_bInMainList;
};
