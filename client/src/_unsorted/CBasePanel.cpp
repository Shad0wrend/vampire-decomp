// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10163b10 size=0x1e
#include "CBasePanel.h"

// VC6 writes CBasePanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CBasePanel *pcd_emit_10163b10(const CBasePanel &other) { return new CBasePanel(other); }

// TARGET: ??_GCBasePanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10163c30 size=0x157
#include "CBasePanel.h"

class ISurface_10163c30
{
public:
	virtual void v0() = 0;
	virtual void v1() = 0;
	virtual void v2() = 0;
	virtual void v3() = 0;
	virtual void v4() = 0;
	virtual void v5() = 0;
	virtual void v6() = 0;
	virtual void v7() = 0;
	virtual void v8() = 0;
	virtual void v9() = 0;
	virtual void DrawSetColor(int col) = 0; // slot 10 (+0x28)
	virtual void v11() = 0;
	virtual void v12() = 0;
	virtual void v13() = 0;
	virtual void v14() = 0;
	virtual void v15() = 0;
	virtual void v16() = 0;
	virtual void v17() = 0;
	virtual void v18() = 0;
	virtual void v19() = 0;
	virtual void v20() = 0;
	virtual void v21() = 0;
	virtual void v22() = 0;
	virtual void v23() = 0;
	virtual void v24() = 0;
	virtual void v25() = 0;
	virtual void v26() = 0;
	virtual void DrawSetTextureFile(int id, const char *filename, int hardwareFilter) = 0; // slot 27 (+0x6c)
	virtual void v28() = 0;
	virtual void v29() = 0;
	virtual void v30() = 0;
	virtual void DrawSetTexture(int id) = 0; // slot 31 (+0x7c)
	virtual void DrawGetTextureSize(int id, int &wide, int &tall) = 0; // slot 32 (+0x80)
	virtual void DrawTexturedRect(int x0, int y0, int x1, int y1) = 0; // slot 33 (+0x84)
	virtual void v34() = 0;
	virtual void v35() = 0;
	virtual void v36() = 0;
	virtual void v37() = 0;
	virtual int CreateNewTextureID(bool procedural) = 0; // slot 38 (+0x98)
};

ISurface_10163c30 *sub_101ac8d0();

struct PanelHelper_10163c30
{
	void sub_101a9920(int &wide, int &tall);
	void sub_101a9ea0();
};

struct CBasePanelFields_10163c30
{
	char pad0[0x58];
	bool m_bHasBg;
	char pad59[3];
	int m_iTextureID;
	char m_szTexture[0x100];
	bool m_bTile;
	char pad161[3];
	int m_iTileWide;
	int m_iTileTall;
};

// TARGET: CBasePanel::vfunc97
void CBasePanel::vfunc97()
{
	CBasePanelFields_10163c30 *f = (CBasePanelFields_10163c30 *)this;
	if (!f->m_bHasBg)
	{
		((PanelHelper_10163c30 *)this)->sub_101a9ea0();
		return;
	}

	if (f->m_iTextureID == -1)
	{
		f->m_iTextureID = sub_101ac8d0()->CreateNewTextureID(false);
		sub_101ac8d0()->DrawSetTextureFile(f->m_iTextureID, f->m_szTexture, 0);
	}

	int col;
	sub_101ac8d0()->DrawSetColor(*(int *)vfunc53((int)&col));
	sub_101ac8d0()->DrawSetTexture(f->m_iTextureID);

	if (f->m_bTile && !f->m_iTileWide)
	{
		sub_101ac8d0()->DrawGetTextureSize(f->m_iTextureID, f->m_iTileWide, f->m_iTileTall);
	}

	int w, h;
	((PanelHelper_10163c30 *)this)->sub_101a9920(w, h);

	if (f->m_bTile && f->m_iTileWide && f->m_iTileTall)
	{
		int x = 0;
		int y = 0;
		while (y < h)
		{
			sub_101ac8d0()->DrawTexturedRect(0, 0, f->m_iTileWide, f->m_iTileTall);
			x += f->m_iTileWide;
			if (x >= w)
			{
				x = 0;
				y += f->m_iTileTall;
			}
		}
	}
	else
	{
		sub_101ac8d0()->DrawTexturedRect(0, 0, w, h);
	}
}
// END FUNCTION

// FUNCTION: 0x10163d90 size=0x22
#include "CBasePanel.h"
namespace lifted {
int sub_101ac8d0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual int f30(int); };
}
void CBasePanel::vfunc110()
{
    if ((*(int *)((char *)this + 0x5c)) != -1) {
        int t0 = ((lifted::V *)(lifted::sub_101ac8d0()))->f30(*(int *)((char *)this + 0x5c));
        *(int *)((char *)this + 0x5c) = -1;
    }
}
// END FUNCTION

// FUNCTION: 0x10163ea0 size=0xa
#include "CBasePanel.h"
void CBasePanel::vfunc111(int a0)
{
    *(char *)((char *)this + 0x16c) = 1;
}
// END FUNCTION

// FUNCTION: 0x10164150 size=0x1
#include "CBasePanel.h"
void CBasePanel::vfunc2()
{
}
// END FUNCTION
