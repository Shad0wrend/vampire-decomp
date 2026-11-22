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
