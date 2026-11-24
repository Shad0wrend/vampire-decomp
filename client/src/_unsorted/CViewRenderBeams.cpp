// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101932d0 size=0x39
#include "CViewRenderBeams.h"
#include "Beam_t.h"
// TARGET: CViewRenderBeams::CViewRenderBeams
CViewRenderBeams::CViewRenderBeams() : m_pFirst(0)
{
}
// END FUNCTION

// FUNCTION: 0x10193320 size=0x1e
#include "CViewRenderBeams.h"

// VC6 writes CViewRenderBeams's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CViewRenderBeams *pcd_emit_10193320(const CViewRenderBeams &other) { return new CViewRenderBeams(other); }

// TARGET: ??_GCViewRenderBeams@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10193450 size=0x12
#include "CViewRenderBeams.h"
namespace lifted {
int sub_101d1296(int);
}
void CViewRenderBeams::vfunc1()
{
    if ((*(int *)((char *)this + 0x1bc0c)) != 0) {
        lifted::sub_101d1296(*(int *)((char *)this + 0x1bc0c));
    }
}
// END FUNCTION

// FUNCTION: 0x10194160 size=0x48
#include "CViewRenderBeams.h"

struct BeamInfoView2
{
	int m_n0;
	char m_pad4[0x40 - 0x4];
	float m_fl40;
};

class BeamHelpers
{
public:
	void sub_10193790(Beam_t *pBeam, void *pInfo);
};

Beam_t *CViewRenderBeams::sub_10194160(void *pInfo)
{
	BeamInfoView2 *info = (BeamInfoView2 *)pInfo;
	Beam_t *pBeam = sub_101938a0(pInfo);
	if ( !pBeam )
		return pBeam;

	*(int *)((char *)pBeam + 0x28) = info->m_n0;
	((BeamHelpers *)this)->sub_10193790(pBeam, pInfo);

	if ( info->m_fl40 == 0.0f )
		*(int *)((char *)pBeam + 0x2c) |= (int)0x80000000;

	return pBeam;
}
// END FUNCTION
