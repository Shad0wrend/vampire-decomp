// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100369f0 size=0x41
#include "C_TEExplosion.h"
// TARGET: ??0C_TEExplosion@@QAE@XZ
C_TEExplosion::C_TEExplosion()
{
	m_vecNormal.Init();
	m_unk28 = 0;
	m_unk2c = 0;
	m_unk30 = 0;
	m_unk34 = 0;
	m_unk3c = 0;
	m_unk40 = 0;
	m_unk44 = 0;
	m_chMaterialType = 'C';
	m_unk48 = 0xff;
}
// END FUNCTION

// FUNCTION: 0x10036a40 size=0x1e
#include "C_TEExplosion.h"

// VC6 writes C_TEExplosion's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_TEExplosion *pcd_emit_10036a40(const C_TEExplosion &other) { return new C_TEExplosion(other); }

// TARGET: ??_GC_TEExplosion@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10036b00 size=0xae
#include "C_TEExplosion.h"
#include "CExplosionOverlay.h"

class CEffectsUnk
{
public:
	virtual void vfunc0(const Vector &origin, float magnitude, float scale, int flags) = 0;
};

int sub_100e40f0();

// TARGET: ?PostDataUpdate@C_TEExplosion@@UAEXH@Z
void C_TEExplosion::PostDataUpdate(int updateType)
{
	sub_10036a80();

	if (!(m_unk28 & 0x40))
	{
		if (CExplosionOverlay *pOverlay = new CExplosionOverlay)
		{
			pOverlay->m_flLifetime = 0.0f;
			pOverlay->m_vPos = m_vecOrigin;
			pOverlay->m_nSprites = 1;

			pOverlay->m_vBaseColors[0].Init(0.5f, 0.45f, 0.4f);

			pOverlay->m_Sprites[0].m_flHorzSize = 0.3f;
			pOverlay->m_Sprites[0].m_flVertSize = 0.15f;

			pOverlay->sub_100efd40();
		}
	}

	((CEffectsUnk *)sub_100e40f0())->vfunc0(m_vecOrigin, (float)m_unk40, m_vecNormal.y, m_unk28);
}
// END FUNCTION

// FUNCTION: 0x10036d10 size=0x5
#include "C_TEExplosion.h"
bool C_TEExplosion::vfunc16(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10036d20 size=0x6
#include "C_TEExplosion.h"
namespace lifted {
extern char g_1027f224;
}
int C_TEExplosion::vfunc9()
{
    return (int)&lifted::g_1027f224;
}
// END FUNCTION

// FUNCTION: 0x10036d30 size=0x3
#include "C_TEExplosion.h"
int C_TEExplosion::vfunc8()
{
    return 0;
}
// END FUNCTION
