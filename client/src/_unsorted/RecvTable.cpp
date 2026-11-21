// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e1590 size=0x12
#include "RecvTable.h"
RecvTable::RecvTable()
{
    Construct(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x100e15b0 size=0x1f
#include "RecvTable.h"
RecvTable::RecvTable(RecvProp *pProps, int nProps, char *pNetTableName)
{
    Construct(pProps, nProps, pNetTableName);
}
// END FUNCTION

// FUNCTION: 0x100e15e0 size=0x22
#include "RecvTable.h"
void RecvTable::Construct(RecvProp *pProps, int nProps, char *pNetTableName)
{
    m_pProps = pProps;
    m_nProps = nProps;
    m_pDecoder = 0;
    m_pNetTableName = pNetTableName;
    m_bInitialized = false;
    m_bInMainList = false;
}
// END FUNCTION
