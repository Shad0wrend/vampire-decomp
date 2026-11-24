// C_TempEntsSystem: declared by pcdecomp transplant for 0x100c6420 from IParticleEffect (0x10004e30);
// only what matched code needs, as plain members.
#pragma once

class C_TempEntsSystem
{
public:
	void *m_pVtable;
	int m_unk04;
	bool m_bSuppressEvent;
	char m_pad09[7];
	int m_nSuppressCount;

	bool CanPredict() const { return !m_bSuppressEvent; }
	void * vfunc0(char);
	void vfunc30(int filter, int delay, int pos, int dir);
};
