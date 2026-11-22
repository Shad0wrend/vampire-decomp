// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x10368f80 size=0xa7
#include "CNPC_VCamera.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct CNPC_VCameraSlots
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15)
	PV(160) PV(161) PV(162) PV(163) PV(164) PV(165) PV(166)
	virtual void *vfunc167();
};

struct CSquadX
{
	void sub_103161a0(void *pEnemy);
};

// TARGET: CNPC_VCamera::vfunc460
int CNPC_VCamera::vfunc460()
{
	m_n1b38 = 9;
	if (m_n5bb0 <= 0 && m_p5da4 && (sub_10269aa0(0x54) || (m_flags14bc & 0x2000) == 0x2000)) {
		m_flags14bc &= 0x7fffdfff;
		if (((CNPC_VCameraSlots *)this)->vfunc167()) {
			CSquadX *pSquad = m_n5bb0 <= 0 ? (CSquadX *)m_p5da4 : 0;
			pSquad->sub_103161a0(((CNPC_VCameraSlots *)this)->vfunc167());
		}
	}
	m_p1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCamera.cpp";
	m_n1b40 = 0x19c;
	return m_n5cc4 = 3;
}
// END FUNCTION

// FUNCTION: 0x10369060 size=0x2a
#include "CNPC_VCamera.h"

int CNPC_VCamera::vfunc461()
{
	m_n1b38 = 9;
	m_p1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCamera.cpp";
	m_n1b40 = 0x1a7;
	return m_n5cc4 = 3;
}
// END FUNCTION

// FUNCTION: 0x103690a0 size=0x7
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc375(int a0)
{
    return a0;
}
// END FUNCTION

// FUNCTION: 0x103690c0 size=0x7
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc376(int a0)
{
    return a0;
}
// END FUNCTION

// FUNCTION: 0x103690e0 size=0xd
struct CAI_BaseNPCTroikaFwd;
struct CNPC_VCameraFwd {
    void sub_103690e0(int a);
};
struct CAI_BaseNPCTroikaFwd {
    void sub_1028fcc0(int a);
};

// TARGET: sub_103690e0
void CNPC_VCameraFwd::sub_103690e0(int a)
{
    a = *(volatile int *)&a;
    ((CAI_BaseNPCTroikaFwd *)this)->sub_1028fcc0(a);
}
// END FUNCTION

// FUNCTION: 0x10369100 size=0x1
#include "CNPC_VCamera.h"
void CNPC_VCamera::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x10369120 size=0xd2
#include "CNPC_VCamera.h"
#include "CEntityVSlots.h"

extern char g_1093408c;

struct CameraSlots432
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36) EVS10(37) EVS10(38) EVS10(39)
	EVS10(40) EVS10(41) EVS10(42)
	EVS(430) EVS(431)
	virtual void slot432(int a);
};

// TARGET: CNPC_VCamera::vfunc431
void CNPC_VCamera::vfunc431()
{
	if (m_b5b55) {
		m_b5b55 = 0;
		sub_1027efb0();
	}
	if (!sub_1029f2e0()) {
		sub_1026a0f0();
		if (!sub_1026c3d0()) {
			if (!g_1093408c)
				m_flNextThink = gpGlobals->curtime + 0.1f;
		} else {
			((CameraSlots432 *)this)->slot432(0);
			m_flPrev6254[0] = m_flCur6244[0];
			m_flPrev6254[1] = m_flCur6244[1];
			m_flPrev6254[2] = m_flCur6244[2];
			m_flPrev6254[3] = m_flCur6244[3];
			m_flCur6244[0] = m_flNextThink = gpGlobals->curtime + 0.2;
			m_flCur6244[1] = m_flNextThink;
			m_flCur6244[2] = m_flNextThink;
			m_flCur6244[3] = m_flNextThink;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10369240 size=0x5
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc390(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10369260 size=0x5
#include "CNPC_VCamera.h"
bool CNPC_VCamera::vfunc366(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10369280 size=0x5
#include "CNPC_VCamera.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VCamera::vfunc144
// the game's 0x10369280: a tail call (jmp) of CAI_BaseNPCTroika::vfunc144
void CNPC_VCamera::vfunc144(int a0)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc144(a0);
}
// END FUNCTION

// FUNCTION: 0x103692a0 size=0x3
#include "CNPC_VCamera.h"
int CNPC_VCamera::vfunc473()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103692c0 size=0x51a
#include "CBaseEntity.h"
#include "CNPC_VCamera.h"
#include "globalvars.h"
#define M(T, o) (*(T *)((char *)this + (o)))
extern char g_10937cf1;
extern char g_106b8540[];
extern int g_1093407c;
struct RulesView { char pad[1]; };
extern RulesView *g_1070ba0c;
extern "C" int sprintf(char *, const char *, ...);
extern "C" int strcmp(const char *, const char *);
void sub_101cd940(CNPC_VCamera *);
void __fastcall sub_102e0b40(void *);
void __fastcall sub_102ee270(void *);
void __fastcall sub_10273aa0(void *);
void __fastcall sub_10274ca0(void *);
void __fastcall sub_10280d30(void *);
void __fastcall sub_1008f540(void *);
struct CMotorView {
	char pad00[0x1c];
	int n1c;
	char pad20[8];
	char b28;
	char pad29[0x34 - 0x29];
	float f34;
	float sub_102e0a80(float a);
};
struct CZero6 { int a[6]; CZero6() { for (int i = 0; i < 6; i++) a[i] = 0; } };
inline void *operator new(unsigned, void *p) { return p; }
struct CVCamUnit : CNPC_VCamera {
	void sub_10279a50(int a);
	void sub_10273790(const char *s, int a);
	void sub_102b5dc0(int a);
	void sub_102b53d0(int a, const char *s);
	void *sub_1032e120(const char *s);
	char sub_10334c20(void *p);
};
struct CWeaponView { void sub_1024f7b0(); };
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CNPC_VCamera::vfunc420
void CNPC_VCamera::vfunc420()
{
	g_10937cf1 = 1;
	float *org = vfunc220();
	M(float, 0x62a8) = org[0];
	M(float, 0x62ac) = org[1];
	M(float, 0x62b0) = org[2];
	if (!(*(bool (__fastcall **)(void *))(**(int **)&g_1070ba0c + 0x128))(g_1070ba0c)) {
		sub_101cd940(this);
		return;
	}
	CMotorView *motor = (CMotorView *)M(void *, 0x5d44);
	M(char, 0x1480) = 0;
	M(char, 0x1481) = 1;
	M(int, 0x1fc) = 0;
	sub_102e0b40(motor);
	motor = (CMotorView *)M(void *, 0x5d44);
	float yaw = vfunc221()[1];
	if (motor->b28) {
		if (yaw >= 180.0f)
			yaw = yaw - 180.0f;
		else
			yaw = yaw + 180.0f;
	}
	if (motor->n1c == 0x43340000)
		motor->f34 = yaw;
	else
		motor->f34 = motor->sub_102e0a80(yaw);
	M(int, 0x208) = 100;
	M(int, 0x200) = 0;
	M(const char *, 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VCamera.cpp";
	M(int, 0x1b40) = 0x257;
	M(int, 0x5cc4) = 1;
	M(char, 0x1a40) = 0;
	M(int *, 0x5d34)[0x2c / 4] = g_1093407c;
	sub_10280d30(this);
	sub_102ee270(M(void *, 0x5d34));
	sub_1008f540(this);
	M(int, 0x5ddc) = 0;
	M(int, 0x5d8c) = 0;
	((CVCamUnit *)this)->sub_10279a50(0);
	M(char, 0x5cd8) = 0;
	new (&M(char, 0x5c5c)) CZero6;
	sub_10274ca0(this);
	if (gpGlobals->curtime > 1.0) {
		sub_10273aa0(this);
	} else {
		sub_100ac4e0((int)sub_10273aa0, 0, 0);
		m_flNextThink = gpGlobals->curtime + 0.1;
	}
	M(char, 0x1b28) = 0;
	M(int, 0x5b58) = 0;
	M(float, 0x5b5c) = gpGlobals->curtime;
	M(int, 0x5b84) = 0;
	M(int, 0x5b88) = 0;
	M(float, 0x5b8c) = 3.4028235e38f;
	M(int, 0x5b98) = 10;
	M(EHANDLE, 0x5ba8) = (CBaseEntity *)0;
	M(int, 0x5b90) = 0;
	M(char, 0x6278) = 1;
	M(char, 0x6279) = 1;
	M(int, 0x6284) = 0;
	M(int, 0x14b8) = 0;
	M(char, 0x63da) = 0;
	M(float, 0x62c0) = 3.4f;
	M(float, 0x62c4) = 10.0f;
	M(float, 0x62c8) = 3.4f;
	M(Vector, 0x62cc).Init(0, 0, 0);
	m_flCur6244[0] = gpGlobals->curtime;
	m_flCur6244[1] = gpGlobals->curtime;
	m_flCur6244[3] = gpGlobals->curtime;
	m_flCur6244[2] = gpGlobals->curtime;
	m_flPrev6254[0] = m_flCur6244[0];
	m_flPrev6254[1] = m_flCur6244[1];
	m_flPrev6254[2] = m_flCur6244[2];
	m_flPrev6254[3] = m_flCur6244[3];
	((CVCamUnit *)this)->sub_102b53d0(0, "Leaving interesting place (NPCInit)");
	M(int, 0x62fc) = 0;
	M(int, 0x6300) = 0;
	M(int, 0x6318) = 0;
	M(int, 0x631c) = 0;
	M(int, 0x659c) = 0;
	M(int, 0x6320) = 0;
	M(int, 0x6324) = 0;
	M(int, 0x6328) = 0;
	M(int, 0x632c) = 0;
	M(int, 0x6330) = 0;
	M(char, 0x6334) = 0;
	M(EHANDLE, 0x6240) = (CBaseEntity *)0;
	M(float, 0x63dc) = -1.0f;
	if (vfunc513() & 0x200000) {
		if (M(const char *, 0x1a98)) {
			if (strcmp(STRINGR(M(const char *, 0x1a98)), "0") && strcmp(STRINGR(M(const char *, 0x1a98)), "item_w_unarmed")) {
				void *w = ((CVCamUnit *)this)->sub_1032e120(STRINGR(M(const char *, 0x1a98)));
				if (w) {
					if (((CVCamUnit *)this)->sub_10334c20(w))
						vfunc383(w, 0);
					else
						((CWeaponView *)w)->sub_1024f7b0();
				}
			}
		}
		if (M(const char *, 0x5dec)) {
			if (strcmp(STRINGR(M(const char *, 0x5dec)), "0") && strcmp(STRINGR(M(const char *, 0x5dec)), "item_w_unarmed")) {
				void *w = ((CVCamUnit *)this)->sub_1032e120(STRINGR(M(const char *, 0x5dec)));
				if (w) {
					if (((CVCamUnit *)this)->sub_10334c20(w))
						vfunc383(w, 0);
					else
						((CWeaponView *)w)->sub_1024f7b0();
				}
			}
		}
	}
	*M(void **, 0x5d88) = this;
	M(float *, 0x5d88)[4] = 0.5f;
	if (M(const char *, 0x63ac)) {
		char buf[0x40];
		sprintf(buf, "Player %s", STRINGR(M(const char *, 0x63ac)));
		((CVCamUnit *)this)->sub_10273790(buf, 0);
	}
	g_10937cf1 = 0;
	M(char, 0x63e0) = 0;
	((CVCamUnit *)this)->sub_102b5dc0(0);
	M(char, 0x63fc) = 0;
	M(char, 0x63fd) = 0;
	M(int, 0x6400) = 0;
	M(int, 0x6404) = 0;
	M(char, 0x6408) = 0;
	M(int, 0x6414) = 0;
	M(int, 0x6418) = 0;
	M(int, 0x623c) = 0;
	M(int, 0x60a4) = 0;
	M(int, 0x60a8) = 0;
	M(int, 0x6398) = 0;
	M(int, 0x639c) = 0;
	M(int, 0x63a4) = 0;
	M(int, 0x63a8) = 0;
	M(int, 0x6070) = 0;
	M(int, 0x6074) = 0;
	M(char, 0x6078) = 0;
	M(int, 0x607c) = 0;
	M(int, 0x6438) = 0;
	M(EHANDLE, 0x643c) = (CBaseEntity *)0;
	M(int, 0x6440) = 0;
	M(int, 0x6444) = 0;
	M(int, 0x644c) = 0;
}
// END FUNCTION
