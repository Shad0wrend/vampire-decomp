// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10174950 size=0x1e
#include "VCharWizardUI.h"

// VC6 writes VCharWizardUI's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VCharWizardUI *pcd_emit_10174950() { return new VCharWizardUI; }

// TARGET: ??_GVCharWizardUI@@UAEPAXI@Z
// END FUNCTION
