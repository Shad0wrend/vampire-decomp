// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10174950 size=0x1e
#include "VCharWizardUI.h"

// VC6 writes VCharWizardUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VCharWizardUI *pcd_emit_10174950(const VCharWizardUI &other) { return new VCharWizardUI(other); }

// TARGET: ??_GVCharWizardUI@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10174970 size=0x48
#include "VCharWizardUI.h"
extern int g_105fb1f8;
typedef vgui2::TextEntry TE;
typedef vgui2::Label LB;
// TARGET: ??1VCharWizardUI@@UAE@XZ
VCharWizardUI::~VCharWizardUI()
{
	sub_10174b20();
	g_105fb1f8 = 0;
	((TE *)((char *)this + 0x238))->TE::~TE();
	((LB *)((char *)this + 0x180))->LB::~LB();
}
// END FUNCTION

// FUNCTION: 0x10174c60 size=0x1b
#include "VCharWizardUI.h"
extern bool g_105fb201;
int VCharWizardUI::sub_10174c60() { if (sub_100f05b0() && g_105fb201) return 1; return 0; }
// END FUNCTION
