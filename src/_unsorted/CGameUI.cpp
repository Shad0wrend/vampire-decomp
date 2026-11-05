// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10118390 size=0x6
#include "datamap.h"
#include "CGameUI.h"
namespace lifted {
extern char g_105714b0;
}
datamap_t *CGameUI::vfunc82()
{
    return (datamap_t *)&lifted::g_105714b0;
}
// END FUNCTION

// FUNCTION: 0x10118db0 size=0x353
#include "CBaseEntity.h"
#include "QAngle.h"
#include "CGameUI.h"
#include "CEHandleGet.h"
#include "CEntitySoundOriginView.h"

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

struct CGameUIPlayerView : CEntitySoundOriginView
{
	char m_pad0004[0x206c - 4];
	QAngle m_ang206c;
	char m_pad2078[0x2098 - 0x2078];
	unsigned int m_nButtons2098;
	unsigned int m_nButtons209c;
};

static inline void GameUIFireFloat(COutputEvent &out, float val, void *pActivator, void *pCaller)
{
	((CVariantCopy *)&out)->sub_1000b320(1, &val);
	out.sub_100cd300(*(CVariantCopy *)&out, pActivator, pCaller, 0.0f);
}

// TARGET: CGameUI::vfunc134
void CGameUI::vfunc134()
{
	CGameUIPlayerView *pPlayer = (CGameUIPlayerView *)EHandle_Get(m_h5a8);
	if (!pPlayer) {
		m_flNextThink17c = 0.0f;
		return;
	}
	if (m_fl450 > -1.0f) {
		Vector fwd;
		sub_10139610(pPlayer->m_ang206c, &fwd, 0, 0);
		CEntitySoundOriginView *pThis = (CEntitySoundOriginView *)this;
		const Vector &center = *(const Vector *)&pPlayer->WorldSpaceCenter();
		Vector dir = *(const Vector *)pThis->GetAbsOrigin() - center;
		VectorNormalize(dir);
		if (DotProduct(fwd, dir) < m_fl450) {
			sub_10118b40((CBaseEntity *)pPlayer);
			return;
		}
	}
	if (pPlayer->m_nButtons209c)
		m_Outputs458[2].sub_100cd660(pPlayer, this, 0.0f);
	float f0 = 0.0f, f1 = 0.0f, f2 = 0.0f, f3 = 0.0f;
	m_flNextThink17c = gpGlobals->curtime;
	if (((pPlayer->m_nButtons209c & 0x20) && (m_flags204 & 0x80)) || ((pPlayer->m_nButtons209c & 2) && (m_flags204 & 0x100))) {
		sub_10118b40((CBaseEntity *)pPlayer);
		return;
	}
	if (pPlayer->m_nButtons209c & 0x200)
		m_Outputs458[3].sub_100cd660(pPlayer, this, 0.0f);
	if (pPlayer->m_nButtons209c & 0x400)
		m_Outputs458[4].sub_100cd660(pPlayer, this, 0.0f);
	if (pPlayer->m_nButtons209c & 8)
		m_Outputs458[5].sub_100cd660(pPlayer, this, 0.0f);
	if (pPlayer->m_nButtons209c & 0x10)
		m_Outputs458[6].sub_100cd660(pPlayer, this, 0.0f);
	if (pPlayer->m_nButtons209c & 1)
		m_Outputs458[7].sub_100cd660(pPlayer, this, 0.0f);
	if (pPlayer->m_nButtons209c & 0x800)
		m_Outputs458[8].sub_100cd660(pPlayer, this, 0.0f);
	if (pPlayer->m_nButtons209c & 0x400000)
		m_Outputs458[9].sub_100cd660(pPlayer, this, 0.0f);
	unsigned int b = pPlayer->m_nButtons2098;
	if (b & 0x400)
		f0 = 1.0f;
	else if (b & 0x200)
		f0 = -1.0f;
	if (b & 8)
		f1 = 1.0f;
	else if (b & 0x10)
		f1 = -1.0f;
	if (b & 1)
		f2 = 1.0f;
	if (b & 0x800)
		f3 = 1.0f;
	GameUIFireFloat(m_Outputs458[10], f0, pPlayer, this);
	GameUIFireFloat(m_Outputs458[11], f1, pPlayer, this);
	GameUIFireFloat(m_Outputs458[12], f2, pPlayer, this);
	GameUIFireFloat(m_Outputs458[13], f3, pPlayer, this);
}
// END FUNCTION

// FUNCTION: 0x101191f0 size=0xba
#include "CGameUI.h"
#include "COutputEvent.h"
#include "CConstraintAnchor.h"

void __cdecl sub_100aa7b0(void *pObject);

// TARGET: CGameUI::vfunc5
CGameUI *CGameUI::vfunc5(unsigned int flags)
{
	char *p = (char *)this;
	((COutputEvent *)(p + 0x590))->sub_100cd2d0();
	((COutputEvent *)(p + 0x578))->sub_100cd2d0();
	((COutputEvent *)(p + 0x560))->sub_100cd2d0();
	((COutputEvent *)(p + 0x548))->sub_100cd2d0();
	((COutputEvent *)(p + 0x530))->sub_100cd2d0();
	((COutputEvent *)(p + 0x518))->sub_100cd2d0();
	((COutputEvent *)(p + 0x500))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4e8))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4d0))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4b8))->sub_100cd2d0();
	((COutputEvent *)(p + 0x4a0))->sub_100cd2d0();
	((COutputEvent *)(p + 0x488))->sub_100cd2d0();
	((COutputEvent *)(p + 0x470))->sub_100cd2d0();
	((COutputEvent *)(p + 0x458))->sub_100cd2d0();
	((CConstraintAnchor *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
