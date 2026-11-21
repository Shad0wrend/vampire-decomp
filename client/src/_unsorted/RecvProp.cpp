// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e1560 size=0x30
#include "RecvTable.h"

RecvProp::RecvProp()
{
	m_pVarName = 0;
	m_Offset = 0;
	m_RecvType = DPT_Int;
	m_Flags = 0;
	m_ProxyFn = 0;
	m_DataTableProxyFn = 0;
	m_pDataTable = 0;
	m_nElements = 1;
	m_ElementStride = -1;
	m_pArrayProp = 0;
	m_ArrayLengthProxy = 0;
	m_bInsideArray = false;
}
// END FUNCTION
