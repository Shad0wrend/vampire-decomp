// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10115d40 size=0x83
#include "CParticleEffectBinding.h"
// TARGET: ??0CParticleEffectBinding@@QAE@XZ
CParticleEffectBinding::CParticleEffectBinding()
{
	m_unk30 = 0;
	m_unk2c = 0;
	m_unk34 = 0x9c;
	m_Min.Init(-50.0f, -50.0f, -50.0f);
	m_Max.Init(50.0f, 50.0f, 50.0f);
	m_unk08 = 0xffff;
	m_unk28 = 0xffff;
	m_unk24 = 0;
	m_unk26 = 0;
}
// END FUNCTION

// FUNCTION: 0x10115e10 size=0x8f
#include "CParticleEffectBinding.h"
extern "C" __declspec(dllimport) void Plat_Free(void *);
struct PEBElem { unsigned short pad0, pad2, m_Prev, m_Next; };
CParticleEffectBinding::~CParticleEffectBinding()
{
	if (m_unk30)
		m_unk30->sub_101176b0(this);
	sub_10116e10();
	if (m_List.m_s14 != 0)
	{
		unsigned short prev = 0xffff;
		for (int i = m_List.m_s14 - 1; i >= 0; --i)
		{
			((PEBElem *)m_List.m_a)[(unsigned short)i].m_Next = prev;
			((PEBElem *)m_List.m_a)[(unsigned short)i].m_Prev = i;
			prev = i;
		}
		m_List.m_s10 = 0;
		m_List.m_s0c = -1;
		m_List.m_s0e = -1;
		m_List.m_s12 = 0;
	}
	if (m_List.m_c != -1)
	{
		if (m_List.m_a)
		{
			Plat_Free((void *)m_List.m_a);
			m_List.m_a = 0;
		}
		m_List.m_b = 0;
	}
}
// END FUNCTION
