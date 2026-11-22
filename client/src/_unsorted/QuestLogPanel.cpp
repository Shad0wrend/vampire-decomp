// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10188050 size=0x1e
#include "QuestLogPanel.h"

// VC6 writes QuestLogPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
QuestLogPanel *pcd_emit_10188050() { return new QuestLogPanel; }

// TARGET: ??_GQuestLogPanel@@UAEPAXI@Z
// END FUNCTION
