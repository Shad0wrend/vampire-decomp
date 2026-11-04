// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1038b1a0 size=0x16e
// TARGET: ?sub_1038b1a0@CNPC_VManBat@@QAEXM@Z
#include "CNPC_VManBat.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "globalvars.h"

struct CGameChecker
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad[0x28];
	int m_2c;
};

struct CConVarStub
{
	void sub_10246160(int a);
};

struct CMotorStub
{
	void sub_102e1c10(float flYaw, float flArg);
};

extern CGameChecker *g_1093b85c;
extern CConVarStub g_1093b858;

float sub_101d2c70(const Vector *pVec);
float sub_101d2ce0(const Vector *pVec);

void CNPC_VManBat::sub_1038b1a0(float flScale)
{
	if (!g_1093b85c->vfunc1() && g_1093b85c->m_2c) {
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
		*(int *)((char *)this + 0x1b34) = 0x1ad;
		sub_102ae750(0x15b, 0);
		g_1093b858.sub_10246160(0);
		return;
	}

	if (flScale > 1.0)
		flScale = 1.0f;

	Vector vecDir;
	Vector vecAngles;
	vecDir = sub_1038b370(flScale);
	((CBaseEntity *)this)->sub_100b2770(vecDir);

	if (m_nState != 0x30 && m_nState != 0xb0 && m_nState != 0x4b && m_nState != 0x1171) {
		CMotorStub *pMotor = *(CMotorStub **)((char *)this + 0x5d44);
		pMotor->sub_102e1c10(sub_101d2c70(&vecDir), -1.0f);

		vecAngles = *((CEntityVSlots *)this)->slot221();
		vecAngles.x = sub_101d2ce0(&vecDir);
		((CEntityVSlots *)this)->slot64((const float *)&vecAngles);

		if (m_f6678 <= gpGlobals->curtime)
			sub_1038e720(vecDir);
	}
}
// END FUNCTION

// FUNCTION: 0x1038fa50 size=0x23
#include "CAI_BaseNPCTroika.h"

extern char g_10642bcc[];

struct CUnknown1038fa50 {
	char m_pad0000[0x1b30];
	char *m_pszSourceFile;
	int m_nSourceLine;
	void sub_1038fa50(int unused);
};

// TARGET: CUnknown1038fa50::sub_1038fa50
void CUnknown1038fa50::sub_1038fa50(int unused)
{
	m_pszSourceFile = g_10642bcc;
	m_nSourceLine = 0x7d8;
	((CAI_BaseNPCTroika *)this)->sub_102ae750(0x15b, 0);
}
// END FUNCTION

// FUNCTION: 0x1038fa90 size=0x49
#include "CNPC_VManBat.h"
#include "inputdata_t.h"
void CNPC_VManBat::sub_1038fa90(inputdata_t *pInput)
{
	m_n6698 = pInput->value.fieldType == 4 ? pInput->value.iValue : 0;
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
	*(int *)((char *)this + 0x1b34) = 0x7e4;
	sub_1038c170(1);
	sub_102ae750(0x160, 0);
}
// END FUNCTION
