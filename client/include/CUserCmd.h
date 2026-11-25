// CUserCmd (RTTI .?AVCUserCmd@@), 0x60 bytes, vtable 0x1022e8d4 with one slot (the deleting destructor, 0x10105e90).
#pragma once

#include "Vector.h"

class CUserCmd
{
public:
	CUserCmd() { Reset(); }
	virtual ~CUserCmd() {}
	void *vfunc0(char flags);

	void Reset()
	{
		command_number = 0;
		m_fl08 = 0;
		msec = 0;
		frametime = 0;
		viewangles.Init();
		forwardmove = 0.0f;
		sidemove = 0.0f;
		upmove = 0.0f;
		m_b2c = 0;
		buttons = 0;
		m_n34 = 0;
		impulse = 0;
		m_n3c = 0;
		m_n40 = 0;
		m_b44 = 1;
		m_b45 = 1;
		m_b46 = 0;
		m_b47 = 0;
		m_n48 = 0;
		m_n4c = 0;
		m_vec50.Init();
		m_b5c = 0;
	}

	int command_number;	// 0x04
	float m_fl08;	// 0x08
	int msec;	// 0x0c
	float frametime;	// 0x10
	Vector viewangles;	// 0x14
	float forwardmove;	// 0x20
	float sidemove;	// 0x24
	float upmove;	// 0x28
	unsigned char m_b2c;	// 0x2c
	int buttons;	// 0x30
	int m_n34;	// 0x34
	unsigned char impulse;	// 0x38
	int m_n3c;	// 0x3c
	int m_n40;	// 0x40
	unsigned char m_b44;	// 0x44
	unsigned char m_b45;	// 0x45
	unsigned char m_b46;	// 0x46
	unsigned char m_b47;	// 0x47
	int m_n48;	// 0x48
	int m_n4c;	// 0x4c
	Vector m_vec50;	// 0x50
	unsigned char m_b5c;	// 0x5c
};
