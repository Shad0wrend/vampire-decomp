// CGridEntry: one cell of vgui2::CGrid (20 bytes), as far as CGrid::SetDimensions needs it.
#pragma once

class CGridEntry
{
public:
	CGridEntry();
	~CGridEntry() {}
	void *m_pPanel;
	bool m_bUnused;
	int m_unk08; int m_unk0c; int m_unk10;
};
