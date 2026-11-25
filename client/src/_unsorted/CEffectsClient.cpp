// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100e1ae0 size=0x1e
#include "CEffectsClient.h"

// VC6 writes CEffectsClient's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEffectsClient *pcd_emit_100e1ae0() { return new CEffectsClient; }

// TARGET: ??_GCEffectsClient@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100e1b10 size=0x3
// TARGET: sub_100e1b10
void __stdcall sub_100e1b10(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x100e1e30 size=0xa9
#include "CEffectsClient.h"
#include "CPVSFilter.h"
#include "Vector.h"

void sub_10046b50(const Vector &origin, int a);

// TARGET: CEffectsClient::vfunc6
void CEffectsClient::vfunc6(const Vector &origin, int a)
{
    CPVSFilter filter(origin);
    C_RecipientFilter *pFilter = &filter;
    if (CanSend()) {
        if (pFilter->vfunc2())
            sub_10046b50(origin, a);
    }
}
// END FUNCTION

// FUNCTION: 0x100e1ee0 size=0xae
#include "CEffectsClient.h"
#include "CPVSFilter.h"
#include "Vector.h"

void sub_10046fb0(const Vector &origin, int a, int b);

// TARGET: CEffectsClient::vfunc7
void CEffectsClient::vfunc7(const Vector &origin, int a, int b)
{
    CPVSFilter filter(origin);
    C_RecipientFilter *pFilter = &filter;
    if (CanSend()) {
        if (pFilter->vfunc2())
            sub_10046fb0(origin, a, b);
    }
}
// END FUNCTION

// FUNCTION: 0x100e2060 size=0x3
// TARGET: sub_100e2060
bool sub_100e2060()
{
	return false;
}
// END FUNCTION
