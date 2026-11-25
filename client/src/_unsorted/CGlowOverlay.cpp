// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100eed10 size=0x58
#include "CGlowOverlay.h"

CGlowOverlay::CGlowOverlay()
{
	m_ListIndex = 0xffff;
	m_nSprites = 0;
	m_flProxyRadius = -1.0f;

	m_bDirectional = false;
	m_bInSky = false;
	m_bActivated = false;

	for ( int i = 0; i < 4; i++ )
	{
		m_Sprites[i].m_vColor.Init( 0.0f, 0.0f, 0.0f );
		m_Sprites[i].m_flHorzSize = 1.0f;
		m_Sprites[i].m_flVertSize = 1.0f;
		m_Sprites[i].m_Material = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100eed70 size=0x1e
#include "CGlowOverlay.h"

// VC6 writes CGlowOverlay's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CGlowOverlay *pcd_emit_100eed70(const CGlowOverlay &other) { return new CGlowOverlay(other); }

// TARGET: ??_GCGlowOverlay@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100eee50 size=0x3
#include "CGlowOverlay.h"
bool CGlowOverlay::vfunc1()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100ef0c0 size=0xcb
#include "CGlowOverlay.h"

extern float g_102bba88;
extern float g_102bba8c;
extern float g_102bba90;
extern float g_104cfddc;
extern float g_104cfde4;

// TARGET: CGlowOverlay::vfunc2
void CGlowOverlay::vfunc2(float flDot, CGlowSprite *pSprite, float *pflHorzSize, float *pflVertSize, Vector *pColor)
{
	*pflHorzSize = g_102bba88 * pSprite->m_flHorzSize +
		(g_102bba8c * pSprite->m_flHorzSize - g_102bba88 * pSprite->m_flHorzSize) * (flDot - g_104cfddc) / (1.0f - g_104cfddc);
	*pflVertSize = g_102bba88 * pSprite->m_flVertSize +
		(g_102bba8c * pSprite->m_flVertSize - g_102bba88 * pSprite->m_flVertSize) * (flDot - g_104cfddc) / (1.0f - g_104cfddc);

	float flScale = ((g_102bba90 - g_104cfde4) * (flDot - g_104cfddc) / (1.0f - g_104cfddc) + g_104cfde4) * m_flProxyRadius;
	*pColor = pSprite->m_vColor * flScale;
}
// END FUNCTION
