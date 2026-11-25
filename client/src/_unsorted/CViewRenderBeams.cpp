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

// FUNCTION: 0x101933b0 size=0x95
#include "CViewRenderBeams.h"
void CViewRenderBeams::vfunc2()
{
	m_unk1bc04 = 0;
	m_unk1bc08 = (int)&m_Beams[0];
	for (int i = 0; i < 128; i++) {
		m_Beams[i].sub_10192db0();
		*(Beam_t **)((char *)&m_Beams[i] + 0x24) = &m_Beams[i + 1];
	}
	*(int *)((char *)&m_Beams[127] + 0x24) = 0;
	m_unk1bc14 = (int)m_pFirst;
	m_unk1bc10 = 0;
	for (int j = 0; j < m_nNumBeamTrails; j++) {
		char *p = (char *)m_pFirst;
		*(char **)(p + j * 0x20) = p + j * 0x20 + 0x20;
	}
	*(int *)((char *)m_pFirst + m_nNumBeamTrails * 0x20 - 0x20) = 0;
}
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

// FUNCTION: 0x10194040 size=0x11a
#include "CViewRenderBeams.h"
#include "Vector.h"

struct BeamInfo_t
{
	int m_nType;
	void *m_pStartEnt;
	int m_nStartAttachment;
	void *m_pEndEnt;
	int m_nEndAttachment;
	Vector m_vecStart;
	Vector m_vecEnd;
	int m_nModelIndex;
	const char *m_pszModelName;
	int m_nHaloIndex;
	const char *m_pszHaloName;
	float m_flHaloScale;
	float m_flLife;
	float m_flWidth;
	float m_flEndWidth;
	float m_flFadeLength;
	float m_flAmplitude;
	float m_flBrightness;
	float m_flSpeed;
	int m_nStartFrame;
	float m_flFrameRate;
	float m_flRed;
	float m_flGreen;
	float m_flBlue;
	bool m_bRenderable;
	int m_nSegments;
	int m_nFlags;
	Vector m_vecCenter;
	float m_flStartRadius;
	float m_flEndRadius;

	BeamInfo_t()
	{
		m_nType = 0;
		m_nSegments = -1;
		m_pszModelName = 0;
		m_pszHaloName = 0;
		m_nModelIndex = -1;
		m_nHaloIndex = -1;
		m_bRenderable = true;
		m_nFlags = 0;
	}
};

// TARGET: CViewRenderBeams::vfunc17
void CViewRenderBeams::vfunc17(int type, Vector &start, Vector &end,
	int modelIndex, int haloIndex, float haloScale, float life, float width,
	float endWidth, float fadeLength, float amplitude, float brightness,
	float speed, int startFrame, float framerate, float r, float g, float b)
{
	BeamInfo_t beamInfo;

	beamInfo.m_nType = type;
	beamInfo.m_vecStart = start;
	beamInfo.m_vecEnd = end;
	beamInfo.m_nModelIndex = modelIndex;
	beamInfo.m_nHaloIndex = haloIndex;
	beamInfo.m_flHaloScale = haloScale;
	beamInfo.m_flLife = life;
	beamInfo.m_flWidth = width;
	beamInfo.m_flEndWidth = endWidth;
	beamInfo.m_flFadeLength = fadeLength;
	beamInfo.m_flAmplitude = amplitude;
	beamInfo.m_flBrightness = brightness;
	beamInfo.m_flSpeed = speed;
	beamInfo.m_nStartFrame = startFrame;
	beamInfo.m_flFrameRate = framerate;
	beamInfo.m_flRed = r;
	beamInfo.m_flGreen = g;
	beamInfo.m_flBlue = b;

	vfunc18(beamInfo);
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

// FUNCTION: 0x10195c90 size=0x6f
#include "CViewRenderBeams.h"
#include "Vector.h"

struct BeamInfoV
{
	char pad0[0x14];
	Vector m_vecStart;	// 0x14
	Vector m_vecEnd;	// 0x20
};

struct BeamV
{
	char pad0[0x34];
	Vector m_vecStart;	// 0x34
	Vector m_vecEnd;	// 0x40
	char pad1[0xac - 0x4c];
	Vector m_vecDelta;	// 0xac
};

void CViewRenderBeams::vfunc22(BeamV *pBeam, BeamInfoV *pInfo)
{
	pBeam->m_vecStart = pInfo->m_vecStart;
	pBeam->m_vecEnd = pInfo->m_vecEnd;
	pBeam->m_vecDelta = pInfo->m_vecEnd - pInfo->m_vecStart;
	sub_10193790(pBeam, pInfo);
}
// END FUNCTION
