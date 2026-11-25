// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1017b330 size=0x1e
#include "VSlider.h"

// VC6 writes VSlider's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VSlider *pcd_emit_1017b330(const VSlider &other) { return new VSlider(other); }

// TARGET: ??_GVSlider@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1017b440 size=0xae
#include "VSlider.h"
void VSlider::vfunc98()
{
    if (m_pA4) {
        int x, y, p, q;
        vfunc112((int)&x, (int)&y);
        sub_101a98c0(&p, &q);
        m_pA4->sub_101a9890(p + x, q);
    }
    if (m_pA8)
        m_pA8->v0();
    if (m_pAC) {
        int x, y, p, q;
        vfunc112((int)&p, (int)&y);
        sub_101a98c0(&q, &x);
        m_pAC->v1(p, 0);
        m_pAC->v0();
    }
}
// END FUNCTION
