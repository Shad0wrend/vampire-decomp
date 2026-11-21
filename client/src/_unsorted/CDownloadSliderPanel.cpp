// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10165b00 size=0x1e
#include "CDownloadSliderPanel.h"

// VC6 writes CDownloadSliderPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CDownloadSliderPanel *pcd_emit_10165b00() { return new CDownloadSliderPanel; }

// TARGET: ??_GCDownloadSliderPanel@@UAEPAXI@Z
// END FUNCTION
