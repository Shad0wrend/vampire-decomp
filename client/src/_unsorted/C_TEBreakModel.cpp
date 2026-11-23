// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10034e90 size=0x45
#include "C_TEBreakModel.h"
// TARGET: ??0C_TEBreakModel@@QAE@XZ
C_TEBreakModel::C_TEBreakModel()
{
	m_vecOrigin.Init(); m_vecDirection.Init();
	m_unk28 = 0; m_unk2c = 0; m_unk30 = 0;
	m_unk38 = 0; m_unk34 = 0; m_unk3c = 0; m_unk40 = 0; m_unk44 = 0;
}
// END FUNCTION

// FUNCTION: 0x10034ee0 size=0x1e
#include "C_TEBreakModel.h"

// VC6 writes C_TEBreakModel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEBreakModel *pcd_emit_10034ee0(const C_TEBreakModel &other) { return new C_TEBreakModel(other); }

// TARGET: ??_GC_TEBreakModel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10034fa0 size=0x6
#include "C_TEBreakModel.h"
namespace lifted {
extern char g_1027e53c;
}
int C_TEBreakModel::vfunc9()
{
    return (int)&lifted::g_1027e53c;
}
// END FUNCTION

// FUNCTION: 0x10034fb0 size=0x3
#include "C_TEBreakModel.h"
int C_TEBreakModel::vfunc8()
{
    return 0;
}
// END FUNCTION
