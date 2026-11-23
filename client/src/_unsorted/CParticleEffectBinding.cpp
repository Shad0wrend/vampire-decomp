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
