// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017c950 size=0x1e
#include "VHButton.h"

// VC6 writes VHButton's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VHButton *pcd_emit_1017c950(const VHButton &other) { return new VHButton(other); }

// TARGET: ??_GVHButton@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017ce20 size=0x295
#include "VHButton.h"
#include <stdlib.h>
#include <string.h>

void __cdecl sub_1007db20();
int sub_1017ce10();

struct CStatBlock_1017ce20
{
	int m_a, m_b, m_c, m_d;

	int GetType() const { return m_a; }
	int GetStat() const { return m_b; }
	void *sub_101613a0(const char *pszName);
	bool sub_10160660();
	void sub_101608a0(const char *pszName);
	bool sub_101613e0(const CStatBlock_1017ce20 *pOther);
};

struct CStatLabel_1017ce20
{
	void sub_1017d310(char bHighlight);
};

struct CStatRow_1017ce20
{
	CStatLabel_1017ce20 *m_pLabel;
	int m_pad[8];
};

struct CStatGroup_1017ce20
{
	char m_pad[0x3c];
	CStatRow_1017ce20 *m_pRows;

	int sub_1017f870(int statId);
	void HighlightRow(int idx, char bHighlight)
	{
		m_pRows[idx].m_pLabel->sub_1017d310(bHighlight);
	}
};

struct CStatsPanel_1017ce20
{
	void sub_10182100(int arg);
};

struct CVFeat_1017ce20
{
	int m_id;
	char m_pad04[0x18];
	int m_nBlocks;
	CStatBlock_1017ce20 *m_pBlocks;
	char m_pad24[0x14];

	void *sub_1014ada0(int id);
};

extern int g_105e8138;
extern CVFeat_1017ce20 **g_105e813c;
extern unsigned char g_10680f34;
extern CVFeat_1017ce20 g_10680f40;

extern int g_105fb600[];
extern int g_105fb640[];
extern CStatsPanel_1017ce20 *g_105fb6e4;
extern CStatGroup_1017ce20 *g_105fb6e8;
extern CStatGroup_1017ce20 *g_105fb6ec;
extern CStatGroup_1017ce20 *g_105fb6f0;

inline CVFeat_1017ce20 *FindFeat_1017ce20(int id)
{
	for (int i = 0; i < g_105e8138; i++)
	{
		if (g_105e813c[i]->m_id == id)
			return g_105e813c[i];
	}
	if (!(g_10680f34 & 1))
	{
		g_10680f34 |= 1;
		g_10680f40.sub_1014ada0(-1);
		atexit(sub_1007db20);
	}
	return &g_10680f40;
}

// TARGET: VHButton::vfunc86
void VHButton::vfunc86()
{
	typedef vgui2::Button BaseClass;
	BaseClass::vfunc86();

	if (!g_105fb6e4)
		return;

	g_105fb6e4->sub_10182100(0);

	const char *pszName = vfunc18();
	if (pszName[0] == 'f' && pszName[1] == ' ')
	{
		CStatBlock_1017ce20 *pBlocks = FindFeat_1017ce20(g_105fb600[atoi(pszName + 2)])->m_pBlocks;
		for (int i = 0; i < 2; i++)
		{
			int idx;
			switch (pBlocks[i].GetType())
			{
			case 0:
				idx = g_105fb6e8->sub_1017f870(pBlocks[i].GetStat());
				if (idx != -1)
					g_105fb6e8->HighlightRow(idx, 0);
				break;
			case 1:
				idx = g_105fb6ec->sub_1017f870(pBlocks[i].GetStat());
				if (idx != -1)
					g_105fb6ec->HighlightRow(idx, 0);
				break;
			case 2:
				idx = g_105fb6f0->sub_1017f870(pBlocks[i].GetStat());
				if (idx != -1)
					g_105fb6f0->HighlightRow(idx, 0);
				break;
			}
		}
	}
	else
	{
		CStatBlock_1017ce20 block;
		block.sub_101613a0(pszName);
		if (block.sub_10160660())
		{
			const char *pSpace = strrchr(pszName, ' ');
			if (pSpace)
				block.sub_101608a0(pSpace + 1);
		}

		CStatLabel_1017ce20 **pFeatLabels = (CStatLabel_1017ce20 **)sub_1017ce10();
		if (!pFeatLabels)
			return;

		for (int i = 0; i < 16; i++)
		{
			CStatBlock_1017ce20 *pBlocks = FindFeat_1017ce20(i)->m_pBlocks;
			for (int j = 0; j < FindFeat_1017ce20(i)->m_nBlocks; j++)
			{
				if (pBlocks[j].sub_101613e0(&block))
				{
					int labelIdx = g_105fb640[i];
					if (labelIdx >= 0 && labelIdx < 16)
						pFeatLabels[labelIdx]->sub_1017d310(0);
					break;
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1017d0c0 size=0x4e
#include "VHButton.h"

extern void sub_1017c680(const char *);

void VHButton::vfunc143(char state)
{
	bool bWasArmed = vfunc144();
	Button::vfunc143(state);
	if (vfunc144() != bWasArmed)
	{
		sub_1017c680(vfunc144() ? "interface/bubble_click_on.wav" : "interface/bubble_click_off.wav");
	}
}
// END FUNCTION
