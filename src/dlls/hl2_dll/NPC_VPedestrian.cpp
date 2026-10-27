// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a29f0 size=0x1ae
#include "CNPC_VPedestrian.h"
#include "CUnknown1070b244.h"
#include "CEntitySoundOriginView.h"

extern CUnknown1070b244 *g_1070b244;

int CNPC_VPedestrian::vfunc438()
{
	m_n1b2c = 0x1d;
	if (m_b6678)
	{
		m_b6678 = 0;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_nLine1b34 = 0x1b4;
		return 0xfe;
	}
	if (sub_10014df8(0x24) && !sub_1033e2b0())
	{
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_nLine1b34 = 0x1b9;
		return 0xfa;
	}
	if ((m_flags14b8 & 2) == 2)
	{
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
		m_flags14b8 &= ~2;
		m_nLine1b34 = 0x1c0;
		return 0xf1;
	}
	switch (m_n5cc0)
	{
	case 1:
	case 3:
		if (sub_10014df8(0x25))
		{
			m_f623c = gpGlobals->curtime + 2.0f;
			sub_1000bff5();
			const Vector *pPos = (const Vector *)((CEntitySoundOriginView *)this)->GetOrigin();
			Vector d;
			d = *pPos - m_vec60d0;
			if (d.x * d.x + (d.y * d.y + d.z * d.z) >= 256.0f && (~m_flags14b8 & 0x100000) != 0)
			{
				if (g_1070b244->vfunc2(0, 99) < 25)
				{
					m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
					m_flags14b8 |= 0x100000;
					m_nLine1b34 = 0x1d7;
					return 0x158;
				}
			}
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VPedestrian.cpp";
			m_flags14b8 = (m_flags14b8 & ~0x100000) | 0x100;
			m_nLine1b34 = 0x1de;
			return 0x157;
		}
	}
	return sub_10015ad2();
}
// END FUNCTION
