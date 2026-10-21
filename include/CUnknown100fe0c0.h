// CUnknown100fe0c0: object with two embedded polymorphic sub-objects (+0x58, +0xe4) initialised from
// sub_100fe0c0; real name not yet known.
#pragma once

struct CUnknown100fe0c0_SubA
{
	virtual void vfunc0(int a);
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
	char pad8[0x20];
	int m_28;
	int m_2c;
	int m_30;
	int m_34;
	float m_38;
	int m_3c;
	int m_40;
	int m_44;
	char m_48;
	char pad49[3];
	float m_4c;
	float m_50;
	int m_54;
	CUnknown100fe0c0_SubA m_58;
	CUnknown100fe0c0_SubB m_e4;

	void sub_100fe0c0(int a0, int a1, int a2, int a3, int a4);
	void sub_100fe150(float flTime);
};
