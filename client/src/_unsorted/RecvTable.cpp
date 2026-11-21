// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

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
