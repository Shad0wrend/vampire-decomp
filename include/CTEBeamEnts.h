// CTEBeamEnts: beam-between-entities temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CRecipientFilter;

class CTEBeamEnts
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEBeamEnts *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pOrigin, const float *pAngles);	// "Test": sets up default beam values, then sends it to everybody through slot 4
	virtual void vfunc4(CRecipientFilter *pFilter, float flDelay);	// sends the message

	void sub_1000dcfb();	// destructor body
	CTEBeamEnts *sub_1005b360(int a);	// constructor body: base constructor (0x1000b1a4), vtable, fields 0x44/0x48; returns this

	char m_pad0004[0x0c - 4];
	int m_nModelIndex;	// 0x0c
	char m_pad0010[4];
	int m_n14;	// 0x14
	int m_n18;	// 0x18
	float m_f1c;	// 0x1c
	float m_f20;	// 0x20
	char m_pad0024[0x2c - 0x24];
	float m_f2c;	// 0x2c
	int m_n30;	// 0x30
	int m_n34;	// 0x34
	int m_n38;	// 0x38
	int m_n3c;	// 0x3c
	int m_n40;	// 0x40
	int m_n44;	// 0x44
	int m_n48;	// 0x48
};
