// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c55d0 size=0x10
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
int sub_101ab2f0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); };
}
void vgui2::AnimatingImagePanel::vfunc101()
{
    lifted::sub_101ab2f0();
    ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101c57e0 size=0x27
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
extern char g_102da744;
struct C101ab750 { int sub_101ab750(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual int f14(int, int); };
}
int vgui2::AnimatingImagePanel::vfunc76(int a0)
{
    int t0 = ((lifted::C101ab750 *)this)->sub_101ab750(a0);
    if ((*(int *)((char *)this + 0x78)) != 0) {
        return ((lifted::V *)a0)->f14((int)&lifted::g_102da744, *(int *)((char *)this + 0x78));
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x101c5890 size=0x23
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
extern char g_102da754;
extern char g_1067b4a0;
int sub_101ab860();
int sub_101d3192(int, int, int, int);
}
int vgui2::AnimatingImagePanel::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_1067b4a0, 0x400, (int)&lifted::g_102da754, lifted::sub_101ab860());
    return (int)&lifted::g_1067b4a0;
}
// END FUNCTION

// FUNCTION: 0x101c5910 size=0x6
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
extern char g_102da708;
}
int vgui2::AnimatingImagePanel::vfunc102()
{
    return (int)&lifted::g_102da708;
}
// END FUNCTION
