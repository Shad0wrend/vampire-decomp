// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103defc0 size=0x104
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"

struct ZTuning103defc0 { float sub_101e8bf0(); };
struct ZGlobals103defc0 { char m_pad[0xc]; float m_curtime; };
struct ZWeapon103defc0 { void sub_1024f7b0(); };
extern ZTuning103defc0 g_10739d08;
extern ZGlobals103defc0 *g_1070b228;

struct ZView103defc0 : CAI_BaseNPCTroika
{
	void sub_1029a0b0();
	char sub_10334c20(void *pWeapon);
	void sub_10332aa0(int a, int b, int c);
	void sub_103defc0();
};

void ZView103defc0::sub_103defc0()
{
	*((char *)this + 0x667c) = 1;
	sub_1029a0b0();
	void *pWeapon = sub_1032e120("item_w_zombie_fists");
	if (pWeapon)
	{
		if (sub_10334c20(pWeapon))
			vfunc383(pWeapon, 0);
		else
			((ZWeapon103defc0 *)pWeapon)->sub_1024f7b0();
	}
	sub_10332aa0(1, 1, 10);
	vfunc66();
	unsigned int &h = *(unsigned int *)((char *)this + 0x628c);
	sub_10279a50((int)EHandle_Get(h));
	sub_10279cc0((CBaseEntity *)EHandle_Get(h));
	*(float *)((char *)this + 0x66d8) = g_10739d08.sub_101e8bf0() + g_1070b228->m_curtime;
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
	*(int *)((char *)this + 0x1b34) = 0xd6;
	sub_102ae750(0x161, 0);
}
// END FUNCTION

// FUNCTION: 0x103e05e0 size=0xb6
#include "CNPC_VZombie.h"
#include "CPASFilter.h"

struct CZombieEngineSound
{
	virtual void v0();
	virtual void v1();
	virtual void v2(CRecipientFilter *pFilter, int a, const float *pOrigin, const float *pAngles, int nSound);
};
extern CZombieEngineSound *g_10540528;
void sub_10139970(const Vector *pDir, Vector *pAngles);

// TARGET: CNPC_VZombie::sub_103e05e0
void CNPC_VZombie::sub_103e05e0(int nSound)
{
	Vector vecOrigin, vecDir, vecAngles;
	sub_10331da0(&vecOrigin, &vecDir);
	sub_10139970(&vecDir, &vecAngles);
	CPASFilter filter(&vecOrigin.x);
	g_10540528->v2(&filter, 0, &vecOrigin.x, &vecAngles.x, nSound);
}
// END FUNCTION
