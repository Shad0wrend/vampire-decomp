// CClientShadowMgr (RTTI .?AVCClientShadowMgr@@): cl_dll/clientshadowmgr.cpp. Only what matched code reads.
#pragma once
#include "CUtlLinkedList240.h"

struct ClientShadow_t
{
	int m_unk00;
	int m_unk04;
	unsigned short m_Flags;	// 0x08, bit 0 tested
	unsigned short m_unk0a;
	int m_unk0c;
};

class CClientShadowMgr
{
public:
	int m_unk00;	// vtable stand-in
	int m_unk04;	// IClientLeafShadowEnum vtable
	int m_unk08;
	int m_unk0c;
	int m_unk10;
	int m_unk14;
	int m_unk18;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
	int m_unk28;
	CUtlLinkedList240 m_Shadows;	// 0x2c

	void sub_100d66d0(int a0, unsigned short h);
	void sub_100d6ca0(int a0, unsigned short h, int *a2, int *a3);
	void sub_100d7130(int a0, unsigned short h, int *a2);
};
