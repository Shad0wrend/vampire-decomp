// CUnknown10183aa0: a scoreboard-like panel (members known so far, named by offset).
#pragma once
#include "vgui2__Panel.h"

struct CScoreRow14 { vgui2::Panel *m_p0; vgui2::Panel *m_p4; vgui2::Panel *m_p8; vgui2::Panel *m_pc; vgui2::Panel *m_p10; };

class CUnknown10183aa0
{
public:
	char m_unk0[0x1d40];
	vgui2::Panel *m_pPanel1d40;
	vgui2::Panel *m_pPanel1d44;
	vgui2::Panel *m_pPanel1d48;
	CScoreRow14 m_rows[10];
	char m_b1e14;

	void sub_10183810();
};
