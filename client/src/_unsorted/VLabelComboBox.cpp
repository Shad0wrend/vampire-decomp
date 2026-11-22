// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10176420 size=0x1e
#include "VLabelComboBox.h"

// VC6 writes VLabelComboBox's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
VLabelComboBox *pcd_emit_10176420() { return new VLabelComboBox; }

// TARGET: ??_GVLabelComboBox@@UAEPAXI@Z
// END FUNCTION
