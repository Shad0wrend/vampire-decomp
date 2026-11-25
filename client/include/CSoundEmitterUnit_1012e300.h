#pragma once
// stand-in class for the sound emitter unit at 0x1012e300 (members by offset)
struct SEVec { int *m_pMemory; int m_nAllocationCount; int m_nGrowSize; int m_Size; int *m_pElements; };
class CSoundEmitterUnit_1012e300
{
public:
	void sub_1012f530();
	char m_pad[0x20];
	SEVec m_a;
	SEVec m_b;
};
