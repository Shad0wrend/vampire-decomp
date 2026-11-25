// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101666f0 size=0x1e
#include "vgui2__CGrid.h"

// VC6 writes vgui2::CGrid's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::CGrid *pcd_emit_101666f0(const vgui2::CGrid &other) { return new vgui2::CGrid(other); }

// TARGET: ??_GCGrid@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10166c30 size=0xdc
#include "vgui2__CGrid.h"

struct GridCell
{
	short m_0, m_2;
	char m_visible, m_5;
	short m_6, m_8, m_a, m_c;
	int m_10;
};

struct ISurfaceV
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10();
	virtual void v11(int, int, int, int);
	virtual void v12(int, int, int, int);
};

class PV
{
public:
	int sub_101ab130();
};

int sub_101ac8d0();

// TARGET: vgui2::CGrid::vfunc98
void vgui2::CGrid::vfunc98()
{
	if (*(char *)((char *)this + 0x58))
		sub_10166ba0();

	Panel::vfunc98();

	int p1, p2;
	sub_101a9920(&p2, &p1);
	int s1, s2;
	sub_101a98c0(&s2, &s1);

	for (int i = 0; i < *(int *)((char *)this + 0x60); i++)
	{
		GridCell *cell = (GridCell *)sub_10166d90(0, i);
		int x = ((int *)*(int *)((char *)this + 0x70))[i]
			+ ((int *)*(int *)((char *)this + 0x78))[i]
			+ *(int *)((char *)this + 0x68);
		if (cell->m_visible)
		{
			ISurfaceV *s = (ISurfaceV *)sub_101ac8d0();
			s->v11(cell->m_6, cell->m_8, cell->m_a, cell->m_c);
			s = (ISurfaceV *)sub_101ac8d0();
			s->v12(0, x - cell->m_10 - 1, ((PV *)this)->sub_101ab130(), x - cell->m_10);
		}
	}
}
// END FUNCTION
