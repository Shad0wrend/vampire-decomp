// A table of 0x264-byte records looked up by index (default index at +4, count at +0x14); callers are
// CAI_BaseNPCTroika (0x102adfe0, 0x102c0f70). Each record holds two expression names (+0x44, +0x84) passed to
// CBaseCombatCharacter::LookupExpressionIndex (sub_10106a40).
#pragma once
#include "CBaseCombatCharacter.h"

struct CStanceRec
{
	char m_szName0[0x44];
	char m_szName44[0x40];
	char m_szName84[0x1e0];
};

struct CStanceTable
{
	int m_unk0;
	int m_nDefault;
	CStanceRec *m_pRecs;
	int m_unkc;
	int m_unk10;
	int m_nCount;
	int sub_100ec2e0(int idx, CBaseCombatCharacter *pChar);
	int sub_100ec360(int idx, CBaseCombatCharacter *pChar);
};
