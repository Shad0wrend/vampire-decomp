// CUnknown100fe0c0: object with two embedded polymorphic sub-objects (+0x58, +0xe4) initialised from
// sub_100fe0c0; real name not yet known.
#pragma once

struct CUnknown100fe0c0_SubA
{
	virtual void vfunc0(int a);
	virtual float vfunc1(int a, int b);
	virtual int vfunc2(int a, int b);
	char pad[0x88];
};

struct CUnknown100fe0c0_SubB
{
	virtual void vfunc0(int a);
	virtual float vfunc1(float flMin, float flMax);	// RandomFloat
};

class CUnknown100fe0c0
{
public:
	int m_0;
	int m_4;
	int m_8;
	int m_c;
	int m_10;
	int m_14;
	float m_18;
	int m_1c;
	int m_20;
	int m_24;
	int m_28;
	float m_2c;
	int m_30;
	int m_34;
	float m_38;
	float m_3c;
	float m_40;
	float m_44;
	char m_48;
	char pad49[3];
	float m_4c;
	float m_50;
	int m_54;
	CUnknown100fe0c0_SubA m_58;
	CUnknown100fe0c0_SubB m_e4;

	void sub_100e2c10(int a0, int a1, float a2, int a3, float a4);
	void sub_100e2c80(float flTime);
};
