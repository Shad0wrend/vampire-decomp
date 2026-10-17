// CAI_PlaneSolver (RTTI .?AVCAI_PlaneSolver@@): steering plane solver of the local navigator; one virtual slot.
// The data lives in a non-polymorphic base (its constructor runs before CAI_PlaneSolver stores its vtable pointer).
#pragma once

extern float g_1049df80;
extern double g_10445e08;
extern void *(*g_109f3634)(int);

class CAI_PlaneSolverBase
{
public:
	CAI_PlaneSolverBase(int owner)
	{
		m_owner = owner;
		m_f08 = 3.402823466e+38F;
		m_f0c = 3.402823466e+38F;
		m_f10 = 3.402823466e+38F;
		m_b14 = 0;
		m_i18 = 0;
		m_f28 = 3.402823466e+38F;
		m_f2c = 3.402823466e+38F;
		m_b30 = 0;
		m_f34 = -1.0F;
		m_f38 = g_1049df80 - g_10445e08;
		m_i3c = 0;
		m_i40 = 0;
		m_i44 = 0;
		m_i48 = 0;
		m_i4c = 0;
		m_pBuf50 = 0;
		m_i58 = 0;
		m_i5c = 0;
		m_pBuf60 = 0;
		m_i54 = 8;
		m_pBuf50 = g_109f3634(0x8c0);
		m_pBuf60 = m_pBuf50;
	}

	int m_owner;			// 0x04
	float m_f08;
	float m_f0c;
	float m_f10;
	char m_b14;
	char m_pad15[3];
	int m_i18;
	char m_pad1c[0x28 - 0x1c];
	float m_f28;
	float m_f2c;
	char m_b30;
	char m_pad31[3];
	float m_f34;
	float m_f38;
	int m_i3c;
	int m_i40;
	int m_i44;
	int m_i48;
	int m_i4c;
	void *m_pBuf50;			// 0x50: 0x8c0 byte buffer
	int m_i54;
	int m_i58;
	int m_i5c;
	void *m_pBuf60;
};

class CAI_PlaneSolver : public CAI_PlaneSolverBase
{
public:
	CAI_PlaneSolver(int owner);
	virtual void vfunc0();
};
