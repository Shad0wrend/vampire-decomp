// CAI_PlaneSolver (RTTI .?AVCAI_PlaneSolver@@): steering plane solver of the local navigator; one virtual slot.
#pragma once

class CAI_PlaneSolver
{
public:
	CAI_PlaneSolver(int owner);
	virtual void vfunc0();

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
