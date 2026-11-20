// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10364080 size=0x18b
#include "CEntityVSlots.h"
#include "CNPC_VBach.h"

extern "C" int _strcmpi(const char *, const char *);

int CNPC_VBach::vfunc604(int arg)
{
	if (sub_10269aa0(0x7b)) {
		*(float *)&m_n6690 = gpGlobals->curtime + 15.0f;
		m_nSchedLine = 0x26e;
		m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
		return 0x15a;
	}
	CBaseEntity *pWeapon = sub_10007e19();
	if (pWeapon) {
		if (sub_10269aa0(0x7a)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, "item_w_katana") != 0) {
				m_nSchedLine = 0x279;
				m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
				return 0x158;
			}
		} else if (sub_10269aa0(0x79)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, "item_w_rem_m_700_bach") != 0) {
				m_nSchedLine = 0x280;
				m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
				return 0x159;
			}
			return ((CEntityVSlots *)this)->slot605(arg);
		}
	} else {
		if (sub_10269aa0(0x7a)) {
			m_nSchedLine = 0x28c;
			m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
			return 0x158;
		}
		if (sub_10269aa0(0x79)) {
			m_nSchedLine = 0x290;
			m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
			return 0x159;
		}
	}
	int iSchedule = sub_10385e40(arg);
	if (m_n5cc0 != 4 && m_n5cc0 != 0xc)
		m_n6444 = 0;
	if (iSchedule == 0) {
		m_nSchedLine = 0x29d;
		iSchedule = 0x159;
		m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
	}
	return iSchedule;
}
// END FUNCTION

// FUNCTION: 0x103642f0 size=0x19d
#include "CNPC_VBach.h"
#include "CEntityVSlots.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_10587668[];
extern char g_105c1c70[];
extern char g_1062eadc[];

int CNPC_VBach::vfunc605(int arg)
{
	if (sub_10269aa0(0x7b)) {
		*(float *)&m_n6690 = gpGlobals->curtime + 15.0f;
		m_pszSchedFile = g_1062eadc;
		m_nSchedLine = 0x2bc;
		return 0x15a;
	}
	CBaseEntity *pWeapon = sub_10007e19();
	if (pWeapon) {
		if (sub_10269aa0(0x7a)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, g_10587668)) {
				m_pszSchedFile = g_1062eadc;
				m_nSchedLine = 0x2c8;
				return 0x158;
			}
			return ((CEntityVSlots *)this)->slot604(arg);
		}
		if (sub_10269aa0(0x79)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, g_105c1c70)) {
				m_pszSchedFile = g_1062eadc;
				m_nSchedLine = 0x2d3;
				return 0x159;
			}
		}
	} else {
		if (sub_10269aa0(0x7a)) {
			m_pszSchedFile = g_1062eadc;
			m_nSchedLine = 0x2da;
			return 0x158;
		}
		if (sub_10269aa0(0x79)) {
			m_pszSchedFile = g_1062eadc;
			m_nSchedLine = 0x2de;
			return 0x159;
		}
	}
	int iSched = sub_10386560(arg);
	if (m_n5cc0 != 4 && m_n5cc0 != 0xc)
		m_n6444 = 0;
	if (!iSched && sub_10269aa0(0x46)) {
		m_pszSchedFile = g_1062eadc;
		m_nSchedLine = 0x2ed;
		return 0x15f;
	}
	return iSched;
}
// END FUNCTION

// FUNCTION: 0x103645a0 size=0xa68
#include "utlrbtree.h"
#include "utlsortvector.h"
#include <string.h>
#include "CNPC_VBach.h"
#include "CNPC_VHuman.h"
#include "CVStatList_t.h"
#include "CVFeat_t.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"

extern float g_1062d210[];

struct CBachNpcV
{
	void sub_10289ee0(int a);
	void *sub_10335950(const char *pszName);
	void sub_10365780(int a, int b);
};

inline int BachDead(int x) { return x + 1; }
inline int BachFeatValue(void *pChar, int id)
{
	return CVFeatSet::Find(id)->sub_101e56e0(pChar);
}

inline int BachEntIndex(int edict)
{
	return engine->vfunc35(edict);
}

inline void BachTaskComplete(CNPC_VBach *p)
{
	p->sub_10273e80(0);
}

inline void BachTaskFail(CNPC_VBach *p, int line)
{
	p->m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
	p->m_nLine1b48 = line;
	p->vfunc448(4);
}

struct CBachTaskVS
{
	virtual void vs0();
	virtual void vs1();
	virtual void vs2();
	virtual void vs3();
	virtual void vs4();
	virtual void vs5();
	virtual void vs6();
	virtual void vs7();
	virtual void vs8();
	virtual void vs9();
	virtual void vs10();
	virtual void vs11();
	virtual void vs12();
	virtual void vs13();
	virtual void vs14();
	virtual void vs15();
	virtual void vs16();
	virtual void vs17();
	virtual void vs18();
	virtual void vs19();
	virtual void vs20();
	virtual void vs21();
	virtual void vs22();
	virtual void vs23();
	virtual void vs24();
	virtual void vs25();
	virtual void vs26();
	virtual void vs27();
	virtual void vs28();
	virtual void vs29();
	virtual void vs30();
	virtual void vs31();
	virtual void vs32();
	virtual void vs33();
	virtual void vs34();
	virtual void vs35();
	virtual void vs36();
	virtual void vs37();
	virtual void vs38();
	virtual void vs39();
	virtual void vs40();
	virtual void vs41();
	virtual void vs42();
	virtual void vs43();
	virtual void vs44();
	virtual void vs45();
	virtual void vs46();
	virtual void vs47();
	virtual void vs48();
	virtual void vs49();
	virtual void vs50();
	virtual void vs51();
	virtual void vs52();
	virtual void vs53();
	virtual void vs54();
	virtual void vs55();
	virtual void vs56();
	virtual void vs57();
	virtual void vs58();
	virtual void vs59();
	virtual void vs60();
	virtual void vs61();
	virtual void vs62();
	virtual void vs63();
	virtual void vs64();
	virtual void vs65();
	virtual void vs66();
	virtual void vs67();
	virtual void vs68();
	virtual void vs69();
	virtual void vs70();
	virtual void vs71();
	virtual void vs72();
	virtual void vs73();
	virtual void vs74();
	virtual void vs75();
	virtual void vs76();
	virtual void vs77();
	virtual void vs78();
	virtual void vs79();
	virtual void vs80();
	virtual void vs81();
	virtual void vs82();
	virtual void vs83();
	virtual void vs84();
	virtual void vs85();
	virtual void vs86();
	virtual void vs87();
	virtual void vs88();
	virtual void vs89();
	virtual void vs90();
	virtual void vs91();
	virtual void vs92();
	virtual void vs93();
	virtual void vs94();
	virtual void vs95();
	virtual void vs96();
	virtual void vs97();
	virtual void vs98();
	virtual void vs99();
	virtual void vs100();
	virtual void vs101();
	virtual void vs102();
	virtual void vs103();
	virtual void vs104();
	virtual void vs105();
	virtual void vs106();
	virtual void vs107();
	virtual void vs108();
	virtual void vs109();
	virtual void vs110();
	virtual void vs111();
	virtual void vs112();
	virtual void vs113();
	virtual void vs114();
	virtual void vs115();
	virtual void vs116();
	virtual void vs117();
	virtual void vs118();
	virtual void vs119();
	virtual void vs120();
	virtual void vs121();
	virtual void vs122();
	virtual void vs123();
	virtual void vs124();
	virtual void vs125();
	virtual void vs126();
	virtual void vs127();
	virtual void vs128();
	virtual void vs129();
	virtual void vs130();
	virtual void vs131();
	virtual void vs132();
	virtual void vs133();
	virtual void vs134();
	virtual void vs135();
	virtual void vs136();
	virtual void vs137();
	virtual void vs138();
	virtual void vs139();
	virtual void vs140();
	virtual void vs141();
	virtual void vs142();
	virtual void vs143();
	virtual void vs144();
	virtual void vs145();
	virtual void vs146();
	virtual void vs147();
	virtual void vs148();
	virtual void vs149();
	virtual void vs150();
	virtual void vs151();
	virtual void vs152();
	virtual void vs153();
	virtual void vs154();
	virtual void vs155();
	virtual void vs156();
	virtual void vs157();
	virtual void vs158();
	virtual void vs159();
	virtual void vs160();
	virtual void vs161();
	virtual void vs162();
	virtual void vs163();
	virtual void vs164();
	virtual void vs165();
	virtual void vs166();
	virtual void vs167();
	virtual void vs168();
	virtual void vs169();
	virtual void vs170();
	virtual void vs171();
	virtual void vs172();
	virtual void vs173();
	virtual void vs174();
	virtual void vs175();
	virtual void vs176();
	virtual void vs177();
	virtual void vs178();
	virtual void vs179();
	virtual void vs180();
	virtual void vfunc181(const Vector *a, int b, int c);
	virtual void vs182();
	virtual void vs183();
	virtual void vs184();
	virtual void vs185();
	virtual void vs186();
	virtual void vs187();
	virtual void vs188();
	virtual void vs189();
	virtual void vs190();
	virtual void vs191();
	virtual void vs192();
	virtual void vs193();
	virtual void vs194();
	virtual void vs195();
	virtual void vs196();
	virtual void vs197();
	virtual void vs198();
	virtual void vs199();
	virtual void vs200();
	virtual void vs201();
	virtual void vs202();
	virtual void vs203();
	virtual void vs204();
	virtual void vs205();
	virtual void vs206();
	virtual void vs207();
	virtual void vs208();
	virtual void vs209();
	virtual void vs210();
	virtual void vs211();
	virtual void vs212();
	virtual void vs213();
	virtual void vs214();
	virtual void vs215();
	virtual void vfunc216(const Vector *pOrigin);
	virtual void vs217();
	virtual void vs218();
	virtual void vs219();
	virtual Vector *vfunc220_slot();
	virtual void vs221();
	virtual void vs222();
	virtual void vs223();
	virtual void vs224();
	virtual void vs225();
	virtual void vs226();
	virtual void vs227();
	virtual void vs228();
	virtual void vs229();
	virtual void vs230();
	virtual void vs231();
	virtual void vs232();
	virtual void vs233();
	virtual void vs234();
	virtual void vs235();
	virtual void vs236();
	virtual void vs237();
	virtual void vs238();
	virtual void vs239();
	virtual void vs240();
	virtual void vs241();
	virtual void vs242();
	virtual void vs243();
	virtual void vs244();
	virtual void vs245();
	virtual void vs246();
	virtual void vs247();
	virtual void vs248();
	virtual void vs249();
	virtual void vs250();
	virtual void vs251();
	virtual void vs252();
	virtual void vs253();
	virtual void vs254();
	virtual void vs255();
	virtual void vs256();
	virtual void vs257();
	virtual void vs258();
	virtual void vs259();
	virtual void vs260();
	virtual void vs261();
	virtual void vs262();
	virtual void vs263();
	virtual void vs264();
	virtual void vs265();
	virtual void vs266();
	virtual void vs267();
	virtual void vs268();
	virtual void vs269();
	virtual void vs270();
	virtual void vs271();
	virtual void vs272();
	virtual void vs273();
	virtual void vs274();
	virtual void vs275();
	virtual void vs276();
	virtual void vs277();
	virtual void vs278();
	virtual void vs279();
	virtual void vs280();
	virtual void vs281();
	virtual void vs282();
	virtual void vs283();
	virtual void vs284();
	virtual void vs285();
	virtual void vs286();
	virtual void vs287();
	virtual void vs288();
	virtual void vs289();
	virtual void vs290();
	virtual void vs291();
	virtual void vs292();
	virtual void vs293();
	virtual void vs294();
	virtual void vs295();
	virtual void vs296();
	virtual void vs297();
	virtual void vs298();
	virtual void vs299();
	virtual void vs300();
	virtual void vs301();
	virtual void vs302();
	virtual void vs303();
	virtual void vs304();
	virtual void vs305();
	virtual void vs306();
	virtual void vs307();
	virtual void vs308();
	virtual void vs309();
	virtual void vs310();
	virtual void vs311();
	virtual void vs312();
	virtual void vs313();
	virtual void vs314();
	virtual void vs315();
	virtual void vfunc316(int a);
	virtual void vs317();
	virtual void vs318();
	virtual void vs319();
	virtual void vs320();
	virtual void vs321();
	virtual void vs322();
	virtual void vs323();
	virtual void vs324();
	virtual void vs325();
	virtual void vs326();
	virtual void vs327();
	virtual void vs328();
	virtual void vs329();
	virtual void vs330();
	virtual void vs331();
	virtual void vs332();
	virtual void vs333();
	virtual void vs334();
	virtual void vs335();
	virtual void vs336();
	virtual void vs337();
	virtual void vs338();
	virtual void vs339();
	virtual void vs340();
	virtual void vs341();
	virtual void vs342();
	virtual void vs343();
	virtual void vs344();
	virtual void vs345();
	virtual void vs346();
	virtual void vs347();
	virtual void vs348();
	virtual void vs349();
	virtual void vs350();
	virtual void vs351();
	virtual void vs352();
	virtual void vs353();
	virtual void vs354();
	virtual void vs355();
	virtual void vs356();
	virtual void vs357();
	virtual void vs358();
	virtual void vs359();
	virtual void vs360();
	virtual void vs361();
	virtual void vs362();
	virtual void vs363();
	virtual void vs364();
	virtual void vs365();
	virtual void vs366();
	virtual void vs367();
	virtual void vs368();
	virtual void vs369();
	virtual void vs370();
	virtual void vs371();
	virtual void vs372();
	virtual void vs373();
	virtual void vs374();
	virtual void vs375();
	virtual void vs376();
	virtual void vs377();
	virtual void vs378();
	virtual void vs379();
	virtual void vs380();
	virtual void vs381();
	virtual void vs382();
	virtual void vs383();
	virtual void vs384();
	virtual void vs385();
	virtual void vs386();
	virtual void vs387();
	virtual void vfunc388(void *pItem, int b);
};

struct CBachTaskFl
{
	char m_pad0000[0x5ddc];
	CBaseEntity *m_p5ddc;	// 0x5ddc
	char m_pad5de0[0x6698 - 0x5de0];
	float m_fl6698;	// 0x6698
};
#define m_p5ddc (((CBachTaskFl *)this)->m_p5ddc)
#define m_fl6698 (((CBachTaskFl *)this)->m_fl6698)
#define VS(p) ((CBachTaskVS *)(p))

// TARGET: CNPC_VBach::vfunc442
void CNPC_VBach::vfunc442(int *pTask)
{
	switch (*pTask)
	{
	case 0xb0:
	case 0xb1:
	{
		CBaseEntity *pWeapon = sub_10007e19();
		if (pWeapon)
		{
			if (_strcmpi(pWeapon->sub_1009f200(), "item_w_rem_m_700_bach"))
			{
				m_b66a4 = 1;
				((CNPC_VHuman *)this)->vfunc442(pTask);
				m_fl5db4 -= 0.35f;
				return;
			}
			float flTime = gpGlobals->curtime;
			m_fl5db4 = flTime;
			if (m_b66a0)
			{
				if (m_n6674)
				{
					m_fl6694 = m_fl5db4 = gpGlobals->curtime + 1e9f;
				}
				else
				{
					m_b66a0 = 0;
					m_n6678 = 0;
					m_fl6694 = (m_fl5db4 = flTime + 0.15f) + 1e9f;
				}
			}
			else
			{
				if (!m_b66a2)
				{
					m_fl5db4 = flTime + 0.2f;
					int nFeat = 1;
					if (vfunc167())
						nFeat = BachFeatValue(vfunc167()->m_p9c, 0xc);
					m_fl5db4 += nFeat * 0.08f;
				}
				else
				{
					m_fl5db4 = flTime + *(const float *)&m_n6698;
					m_fl6698 = 0;
					m_b66a2 = 0;
				}
				int nA = BachFeatValue(vfunc167()->m_p9c, 0xa);
				int nB = BachFeatValue(vfunc167()->m_p9c, 9);
				if (nA < nB)
					nA = nB;
				m_fl6694 = m_fl5db4 += nA * 0.1f;
				m_fl5db4 += 1.5f;
			}
			if (m_p5ddc)
				return;
			((CBachNpcV *)this)->sub_10289ee0(5);
			return;
		}
		BachTaskComplete(this);
		return;
	}
	case 0x34:
	case 0x35:
	{
		CBaseEntity *pWeapon = sub_10007e19();
		if (pWeapon && _strcmpi(pWeapon->sub_1009f200(), "item_w_rem_m_700_bach"))
		{
			((CNPC_VHuman *)this)->vfunc442(pTask);
			m_b66a4 = 0;
			return;
		}
		if (!m_b66a4)
		{
			BachTaskComplete(this);
			return;
		}
		((CNPC_VHuman *)this)->vfunc442(pTask);
		m_b66a4 = 0;
		return;
	}
	case 0xba:
	case 0xbb:
	case 0xbc:
	case 0xbd:
		BachTaskComplete(this);
		return;
	case 0x14b:
	{
		void *pItem = ((CBachNpcV *)this)->sub_10335950("item_w_katana");
		if (pItem)
			VS(this)->vfunc388(pItem, 0);
		m_fl668c = gpGlobals->curtime + 0.5f;
		BachTaskComplete(this);
		return;
	}
	case 0x14a:
	{
		void *pItem = ((CBachNpcV *)this)->sub_10335950("item_w_rem_m_700_bach");
		if (pItem)
			VS(this)->vfunc388(pItem, 0);
		m_b66a4 = 0;
		m_fl668c = gpGlobals->curtime + 0.5f;
		BachTaskComplete(this);
		return;
	}
	case 0x14c:
	{
		sub_103656a0();
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		enginesound->vfunc3(&filter, BachEntIndex(m_pEdict2e0), 2, "Character/Boss/Bach/bach_holy_light.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		m_b66a1 = 0;
		BachTaskComplete(this);
		return;
	}
	case 0x14d:
	{
		CNPC_VBach *pWeapon = (CNPC_VBach *)sub_10007e19();
		if (pWeapon)
		{
			CVStatListSet::Of(this)->Find(3)->sub_102008e0(0xf, 1);
			pWeapon->vfunc326();
			VS(pWeapon)->vfunc316(0);
		}
		sub_10273e80(0);
		return;
	}
	case 0x14e:
		if (m_n669c == 0)
		{
			((CBachNpcV *)this)->sub_10365780(0x4268, 2);
			return;
		}
		if (m_n669c == 1)
		{
			((CBachNpcV *)this)->sub_10365780(0x4269, 2);
			return;
		}
		if (m_n669c == 2)
		{
			((CBachNpcV *)this)->sub_10365780(0x426a, 2);
			return;
		}
		if (m_n669c == 3)
		{
			((CBachNpcV *)this)->sub_10365780(0x426b, 2);
			return;
		}
		m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
		m_nLine1b48 = 0x350;
		vfunc448(4);
		return;
	case 0x14f:
	{
		if (!m_p5ddc)
		{
			BachTaskFail(this, 0x355);
			return;
		}
		sub_1026dc30(1);
		m_b66a7 = 0;
		VS(this)->vfunc216((const Vector *)((CNPC_VBach *)m_p5ddc)->vfunc217());
		Vector vecOrigin = *VS(this)->vfunc220_slot();
		VS(this)->vfunc181(&vecOrigin, 0, 0);
		vfunc62(&vecOrigin.x);
		sub_1009d1e0();
		sub_100b3b00();
		if (++m_n669c > 3)
			m_n669c = 0;
		CVStatListSet::Of(this)->Find(3)->sub_102008e0(0xd, 5);
		m_fl6688 += 6.0f;
		m_fl6684 = gpGlobals->curtime + 3.0f;
		m_b66a5 = 1;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		enginesound->vfunc3(&filter, BachEntIndex(m_pEdict2e0), 2, "Character/Boss/Bach/bach_shield.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		sub_10273e80(0);
		return;
	}
	case 0x150:
		if (m_n669c == 1)
		{
			sub_1026dc00(1);
			((CBachNpcV *)this)->sub_10365780(0x426c, 2);
			m_b66a7 = 1;
			return;
		}
		if (m_n669c == 0)
		{
			sub_1026dc00(1);
			((CBachNpcV *)this)->sub_10365780(0x426d, 2);
			return;
		}
		if (m_n669c == 3)
		{
			sub_1026dc00(1);
			m_b66a7 = 1;
		}
		m_b66a2 = 1;
		m_fl6698 = g_1062d210[m_n669c];
		BachTaskFail(this, 0x387);
		return;
	case 0x151:
	{
		if (!m_b66a7)
			sub_1026dc30(1);
		void *pItem = ((CBachNpcV *)this)->sub_10335950("item_w_rem_m_700_bach");
		if (pItem)
			VS(this)->vfunc388(pItem, 0);
		m_b66a4 = 0;
		m_b66a2 = 1;
		m_fl6698 = g_1062d210[m_n669c];
		BachTaskComplete(this);
		return;
	}
	}
	((CNPC_VHuman *)this)->vfunc442(pTask);
	// WORKAROUND: the dead inline calls spend VC6's inline budget (count tuned under CBaseEntity's 134..240 slots)
	(void)BachDead(0); (void)BachDead(1); (void)BachDead(2);
}
// END FUNCTION

// FUNCTION: 0x103652b0 size=0x315
#include "vampire.h"
#include "CNPC_VBach.h"
#include "CUnknown102e0150.h"
#include "CAI_Motor.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

// TARGET: CNPC_VBach::vfunc444
void CNPC_VBach::vfunc444(void *pTask)
{
	int type = *(int *)pTask;
	if (type < 0xb0 || (type > 0xb1 && type != 0x14a)) {
		sub_10384ab0(pTask);
		return;
	}
	if (type > 0xb1)
		return;
	CBaseEntity *pWeapon = sub_10007e19();
	if (!pWeapon)
		return;
	if (_strcmpi(pWeapon->sub_1009f200(), "item_w_rem_m_700_bach") != 0) {
		m_b66a4 = 1;
		sub_10384ab0(pTask);
		return;
	}
	Vector vec;
	Vector tmp;
	if (m_h5ba8.Get() && (m_n5cc0 == 4 || m_n5cc0 == 0xc)) {
		vec = *(Vector *)((CNPC_VBach *)m_h5ba8.Get())->vfunc217();
	} else if (vfunc167()) {
		vec = *vfunc541()->sub_102dfed0(&tmp, vfunc167());
	} else {
		m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
		m_nLine1b48 = 0x428;
		vfunc448(6);
	}
	m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
	if (m_b66a0) {
		if (m_n6674) {
			m_fl6694 = (m_fl5db4 = gpGlobals->curtime + 1e9f);
		} else {
			m_fl6694 = (m_fl5db4 = gpGlobals->curtime + 0.15f) + 1e9f;
			m_b66a0 = 0;
			m_n6678 = 0;
		}
	}
	if (gpGlobals->curtime >= m_fl6694) {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int edict = m_pEdict2e0;
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "Character/Boss/Bach/snipe_warn6.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		m_fl6694 = m_fl6694 + 999999.0f;
		sub_10365840();
	}
	if (gpGlobals->curtime >= m_fl5db4) {
		m_b66a4 = 1;
		sub_10273e80(0);
	}
}
// END FUNCTION

// FUNCTION: 0x10365780 size=0x5c
#include "CNPC_VBatSwarm.h"

int sub_1000633e(void *pNPC, int a, int b, float f, int c, int d);

bool CNPC_VBatSwarm::sub_10365780(int a, int b)
{
	m_pHint5ddc = (void *)sub_1000633e(this, a, b, 5000.0f, 0, 0);
	if (m_pHint5ddc)
	{
		sub_1000ac68(0);
		return true;
	}
	m_pszFailFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
	m_nFailLine = 0x48a;
	vfunc448(4);
	return false;
}
// END FUNCTION

// FUNCTION: 0x10365a90 size=0x53c
#include <math.h>
#include "CNPC_VBach.h"
#include "globalvars.h"
#include "engineserver.h"
#include "engineiface.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"

#define BVS(n) virtual void vs##n();
#define BVS10(p) BVS(p##0) BVS(p##1) BVS(p##2) BVS(p##3) BVS(p##4) BVS(p##5) BVS(p##6) BVS(p##7) BVS(p##8) BVS(p##9)
struct CBachCampVS
{
	BVS10() BVS10(1) BVS10(2) BVS10(3) BVS10(4) BVS10(5) BVS10(6) BVS10(7) BVS10(8) BVS10(9)
	BVS10(10) BVS10(11) BVS10(12) BVS10(13) BVS10(14) BVS10(15) BVS10(16) BVS10(17) BVS10(18) BVS10(19)
	BVS(200)
	virtual bool vfunc201(CBaseEntity *pEnt, int mask, int *pResult, int i);
};

struct CNPC_VBachCamp
{
	char m_pad0000[0x2e0];
	int m_pEdict2e0;	// 0x2e0
	char m_pad02e4[0x1b30 - 0x2e4];
	const char *m_pszSchedFile;	// 0x1b30
	int m_nSchedLine;	// 0x1b34
	char m_pad1b38[0x6664 - 0x1b38];
	float m_fl6664;
	float m_fl6668;
	float m_fl666c;
	float m_fl6670;
	int m_n6674;
	int m_n6678;
	int m_n667c;
	char m_pad6680[0x669c - 0x6680];
	int m_n669c;
	char m_b66a0;
	char m_b66a1;

	void sub_10365a90();
};

CBaseEntity *sub_101cda50();
struct CUnk102ae750Link { void sub_102ae750(int a, int b); };

inline int BachDead(int x) { return x + 1; }
inline int BachDead2(int x) { return BachDead(x) + 1; }
inline const Vector &EnemyPos(CNPC_VBach *p) { return *(Vector *)p->vfunc217(); }

// TARGET: CNPC_VBachCamp::sub_10365a90
void CNPC_VBachCamp::sub_10365a90()
{
	CNPC_VBach *pEnemy = (CNPC_VBach *)((CNPC_VBach *)this)->vfunc167();
	int nMask = 0;
	bool bSound = true;
	bool bTrigger = false;
	if (!pEnemy) {
		pEnemy = (CNPC_VBach *)sub_101cda50();
		if (!pEnemy)
			return;
	}
	bool bHit = false;
	for (int i = 0; i < 10; i++) {
		if (((CBachCampVS *)this)->vfunc201(pEnemy, 0x2804091, &nMask, i)) {
			bHit = true;
			break;
		}
	}
	if (!bHit) {
		if (m_n6674 == 0) {
			m_n6674 = 1;
			m_fl6670 = gpGlobals->curtime;
			const Vector &p1 = EnemyPos(pEnemy);
			if ((float)fabs(p1.x - m_fl6664) * (float)fabs(EnemyPos(pEnemy).y - m_fl6668) < 20000.0f) {
				if (++m_n6678 >= 2) {
					if (!m_b66a0)
						bTrigger = true;
					m_b66a0 = 1;
				}
			} else {
				m_n6678 = 0;
			}
			const Vector &p = EnemyPos(pEnemy);
			m_fl6664 = p.x;
			m_fl6668 = p.y;
			m_fl666c = p.z;
		} else if (gpGlobals->curtime - m_fl6670 > 4.0f) {
			float dx = fabs(EnemyPos(pEnemy).x - m_fl6664);
			float dy = fabs(EnemyPos(pEnemy).y - m_fl6668);
			if (dy > dx)
				dx = dy;
			if (dx < 200.0f) {
				if (!m_b66a0)
					bTrigger = true;
				m_b66a0 = 1;
			}
			const Vector &p = EnemyPos(pEnemy);
			m_fl6664 = p.x;
			m_fl6668 = p.y;
			m_fl666c = p.z;
			m_fl6670 = gpGlobals->curtime;
		}
		if (m_n667c == 10 || m_n667c == 7) {
			m_b66a0 = 1;
			bTrigger = true;
			const Vector &p = EnemyPos(pEnemy);
			m_fl6664 = p.x;
			m_fl6668 = p.y;
			m_fl666c = p.z;
			m_fl6670 = gpGlobals->curtime;
		}
		if (m_b66a0 && m_n667c != 0 && m_b66a1) {
			switch (m_n667c) {
			case 5: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_5", 300.0f); break;
			case 6: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_6", 80.0f); break;
			case 7: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_7", -26.0f); break;
			case 10: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_10", -26.0f); break;
			case 9: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_9", 85.0f); break;
			}
		} else if (m_b66a0 && m_n667c != 0 && !m_b66a1 && m_n669c == 0) {
			if (m_n667c == 8)
				((CNPC_VBach *)this)->sub_10365860("grenade_spawn_8", 15.0f);
		} else {
			bSound = false;
		}
		if (bTrigger) {
			if (bSound) {
				CPASAttenuationFilter filter((CEntitySoundOriginView *)(CNPC_VBach *)this);
				int edict = m_pEdict2e0;
				enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "Character/Boss/Bach/bach_grenade.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
			} else {
				CPASAttenuationFilter filter((CEntitySoundOriginView *)(CNPC_VBach *)this);
				int edict = m_pEdict2e0;
				enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "Character/Boss/Bach/bach_camp_warn.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
				(void)BachDead2(0); (void)BachDead2(1);
			}
		}
	} else {
		if (m_n6674) {
			m_n6674 = 0;
			if (m_b66a0) {
				m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
				m_nSchedLine = 0x57b;
				((CUnk102ae750Link *)this)->sub_102ae750(0x15f, 0);
			}
		}
	}
}
// END FUNCTION
