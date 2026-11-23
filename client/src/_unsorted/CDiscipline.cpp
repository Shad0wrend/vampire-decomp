// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004ea80 size=0x75
#include "CDiscipline.h"
// TARGET: ??1CDiscipline@@UAE@XZ
CDiscipline::~CDiscipline()
{
	CBasePanel::sub_101a9ff0(0);
	for (int i = 0; i < m_nEntries; i++)
		if (m_Entries[i].m_nId != -1)
			sub_1004ed00(m_Entries[i].m_nId);
	if (m_p1f4) delete m_p1f4;
	if (m_p1f8) delete m_p1f8;
}
// END FUNCTION
