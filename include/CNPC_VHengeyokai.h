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

// CUtlVector<CNPC_VHengeyokaiTimer> embedded at +0x66a4.
struct CNPC_VHengeyokaiTimerVec
{
	CNPC_VHengeyokaiTimer *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CNPC_VHengeyokaiTimer *m_pElements;

	CNPC_VHengeyokaiTimer &Element(int i) { return m_pMemory[i]; }
	void FastRemove(int elem)
	{
		if (m_size > 0) {
			memmove(&Element(elem), &Element(m_size - 1), sizeof(CNPC_VHengeyokaiTimer));
			m_size--;
		}
	}
};

class CNPC_VHengeyokai
{
public:
	virtual void vfunc601(int unused);

	char m_pad0004[0x66a4 - 4];
	CNPC_VHengeyokaiTimerVec m_Timers;	// 0x66a4

	int sub_10382b30(int key);
	bool sub_10382aa0(int key);
};
