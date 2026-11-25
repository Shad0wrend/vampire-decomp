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

	bool CanPredict() const
	{
		if ( m_nSuppressCount > 0 )
			return false;
		return !m_bSuppressEvent;
	}
	void vfunc24(int filter, int a1, int a2, int a3, int a4, int a5, int a6);
	void vfunc27(int filter, int a1, int a2, int a3, int a4, int a5, int a6);
	void vfunc40(int filter, int a1, int a2, int a3, int a4, int a5, int a6);
	void vfunc32(int, int, int, int, int, int);
	void vfunc35(int, int, int, int, int, int);
	void vfunc42(int, int, int, int, int, int);
	void * vfunc0(char);
	void vfunc31(int filter, int delay, int pos, int dir, int extra);
	void vfunc28(int filter, int delay, int pos, int dir, int extra);
	void vfunc29(int filter, int delay, int pos);
	void vfunc2(int filter, int delay, int pos, int dir, int extra);
	void vfunc30(int filter, int delay, int pos, int dir);
	void vfunc5(int filter, int delay, int pos, int dir);	// as in C_TempEntsSystem (transplant)
	void vfunc12(int filter, int delay, int pos, int dir);	// as in C_TempEntsSystem (transplant)
	void vfunc22(int filter, int delay, int pos, int dir);	// as in C_TempEntsSystem (transplant)
	void vfunc33(int filter, int delay, int pos, int dir);
	void vfunc34(int filter, int delay, int pos, int dir, int extra, int extra2);	// as in C_TempEntsSystem (transplant)
	void vfunc38(int filter, int delay, int pos, int dir);	// as in C_TempEntsSystem (transplant)
	void vfunc41(int filter, int delay, int pos, int dir);	// as in C_TempEntsSystem (transplant)
	void vfunc43(int filter, int a, int b, int c, int d, int e);
};
