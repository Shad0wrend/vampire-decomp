// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10188050 size=0x1e
#include "QuestLogPanel.h"

// VC6 writes QuestLogPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
QuestLogPanel *pcd_emit_10188050() { return new QuestLogPanel; }

// TARGET: ??_GQuestLogPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10189420 size=0x3
#include "QuestLogPanel.h"
void QuestLogPanel::vfunc124(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101895b0 size=0x6
#include "QuestLogPanel.h"
namespace lifted {
extern char g_102d3808;
}
int QuestLogPanel::vfunc102()
{
    return (int)&lifted::g_102d3808;
}
// END FUNCTION

// FUNCTION: 0x101895c0 size=0x3
#include "QuestLogPanel.h"
void QuestLogPanel::vfunc125(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x101895e0 size=0x1
#include "QuestLogPanel.h"
void QuestLogPanel::vfunc119()
{
}
// END FUNCTION
