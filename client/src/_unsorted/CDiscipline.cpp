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

// FUNCTION: 0x1004f270 size=0x62
#include "CDiscipline.h"

void CDiscipline::vfunc114(int id, int val)
{
	int idx = sub_1004ec90(id);
	if (idx == -1)
	{
		idx = sub_1004ecb0(id);
		if (idx == -1)
			return;
	}

	if (m_Entries[idx].m_unk4 < val)
	{
		sub_1004ed80(id, 1, 0);
	}
	else if (m_Entries[idx].m_unk4 > 0 && val == 0)
	{
		sub_1004ed80(id, 0, 0);
	}

	m_Entries[idx].m_unk4 = val;

	if (val <= 0)
	{
		sub_1004ed00(id);
	}
}
// END FUNCTION
