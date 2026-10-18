// CNPC_VHengeyokai: the Hengeyokai NPC.
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct CNPC_VHengeyokaiTimer
{
	int m_key;
	float m_time;
};

class CNPC_VHengeyokai
{
public:
	virtual void vfunc601(int unused);

	char m_pad0004[0x66a4 - 4];
	CNPC_VHengeyokaiTimer *m_pTimers;	// 0x66a4
	char m_pad66a8[0x66b0 - 0x66a8];
	int m_nTimers;	// 0x66b0

	int sub_10382b30(int key);
	bool sub_10382aa0(int key);

	// Inlined CUtlVector::FastRemove.
	void FastRemove(int elem)
	{
		if (m_nTimers > 0) {
			memmove(&m_pTimers[elem], &m_pTimers[m_nTimers - 1], sizeof(CNPC_VHengeyokaiTimer));
			m_nTimers--;
		}
	}
};
