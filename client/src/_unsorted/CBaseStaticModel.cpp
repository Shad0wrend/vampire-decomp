// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100dff60 size=0xb
#include "CBaseStaticModel.h"
namespace lifted {
extern int g_105f99d8;
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual bool f10(); };
}
bool CBaseStaticModel::ShouldDraw()
{
    return ((lifted::V *)lifted::g_105f99d8)->f10();
}
// END FUNCTION

// FUNCTION: 0x100e13b0 size=0x3
#include "CBaseStaticModel.h"
ICollideable * CBaseStaticModel::GetClientCollideable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e13c0 size=0x3
#include "CBaseStaticModel.h"
IClientNetworkable * CBaseStaticModel::GetClientNetworkable()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e13e0 size=0x3
#include "CBaseStaticModel.h"
IClientEntity * CBaseStaticModel::GetIClientEntity()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e13f0 size=0x3
#include "CBaseStaticModel.h"
C_BaseEntity * CBaseStaticModel::GetBaseEntity()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100e1400 size=0x3
#include "CBaseStaticModel.h"
IClientThinkable * CBaseStaticModel::GetClientThinkable()
{
    return 0;
}
// END FUNCTION
