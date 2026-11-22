// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103805d0 size=0x576
#include "CBaseEntity.h"
#include "CAI_Motor.h"
#include "CUnknown102ee120.h"
#include "ehandle.h"

struct CHengEnemiesView_103805d0 { void sub_102dfed0(Vector *pVec, CBaseEntity *pEnemy); };
void sub_101c0b10();
void sub_101cf600(void *p);

struct CHengVSlots_103805d0
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105(const char *pszModel);
	virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109(); virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115();
	virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119(); virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125();
	virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129(); virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135();
	virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139(); virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145();
	virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149(); virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155();
	virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159(); virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165();
	virtual void s166(); virtual CBaseEntity *s167();
	virtual CBaseEntity *s168();
	virtual void s169(); virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178();
	virtual void s179(); virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188();
	virtual void s189(); virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198();
	virtual void s199(); virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208();
	virtual void s209(); virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216(); virtual void s217(); virtual void s218();
	virtual void s219(); virtual float *s220();
	virtual void s221(); virtual void s222(); virtual void s223(); virtual void s224(); virtual void s225(); virtual void s226(); virtual void s227(); virtual void s228(); virtual void s229(); virtual void s230();
	virtual void s231(); virtual void s232(); virtual void s233(); virtual void s234(); virtual void s235(); virtual void s236(); virtual void s237(); virtual void s238(); virtual void s239(); virtual void s240();
	virtual void s241(); virtual void s242(); virtual void s243(); virtual void s244(); virtual void s245(); virtual void s246(); virtual void s247(); virtual void s248(); virtual void s249(); virtual void s250();
	virtual void s251(); virtual void s252(); virtual void s253(); virtual void s254(); virtual void s255(); virtual void s256(); virtual void s257(); virtual void s258(); virtual void s259(); virtual void s260();
	virtual void s261(); virtual void s262(); virtual void s263(); virtual void s264(); virtual void s265(); virtual void s266(); virtual void s267(); virtual void s268(); virtual void s269(); virtual void s270();
	virtual void s271(); virtual void s272(); virtual void s273(); virtual void s274(); virtual void s275(); virtual void s276(); virtual void s277(); virtual void s278(); virtual void s279(); virtual void s280();
	virtual void s281(); virtual void s282(); virtual void s283(); virtual void s284(); virtual void s285(); virtual void s286(); virtual void s287(); virtual void s288(); virtual void s289(); virtual void s290();
	virtual void s291(); virtual void s292(); virtual void s293(); virtual void s294(); virtual void s295(); virtual void s296(); virtual void s297(); virtual void s298(); virtual void s299(); virtual void s300();
	virtual void s301(); virtual void s302(); virtual void s303(); virtual void s304(); virtual void s305(); virtual void s306(); virtual void s307(); virtual void s308(); virtual void s309(); virtual void s310();
	virtual void s311(); virtual void s312(); virtual void s313(); virtual void s314(); virtual void s315(); virtual void s316(); virtual void s317(); virtual void s318(); virtual void s319(); virtual void s320();
	virtual void s321(); virtual void s322(); virtual void s323(); virtual void s324(); virtual void s325(); virtual void s326(); virtual void s327(); virtual void s328(); virtual void s329(); virtual void s330();
	virtual void s331(); virtual void s332(); virtual void s333(); virtual void s334(); virtual void s335(); virtual void s336(); virtual void s337(); virtual void s338(); virtual void s339(); virtual void s340();
	virtual void s341(); virtual void s342(); virtual void s343(); virtual void s344(); virtual void s345(); virtual void s346(); virtual void s347(); virtual void s348(); virtual void s349(); virtual void s350();
	virtual void s351(); virtual void s352(); virtual void s353(); virtual void s354(); virtual void s355(); virtual void s356(); virtual void s357(); virtual void s358(); virtual void s359(); virtual void s360();
	virtual void s361(); virtual void s362(); virtual void s363(); virtual void s364(); virtual void s365(); virtual void s366(); virtual void s367(); virtual void s368(); virtual void s369(); virtual void s370();
	virtual void s371(); virtual void s372(); virtual void s373(); virtual void s374(); virtual void s375(); virtual void s376(); virtual void s377(); virtual void s378(); virtual void s379(); virtual void s380();
	virtual void s381(); virtual void s382(); virtual void s383(); virtual void s384(); virtual void s385(); virtual void s386(); virtual void s387(); virtual void s388(); virtual void s389(); virtual void s390();
	virtual void s391(); virtual void s392(); virtual void s393(); virtual void s394(); virtual void s395(); virtual void s396(); virtual void s397(); virtual void s398(); virtual void s399(); virtual void s400();
	virtual void s401(); virtual void s402(); virtual void s403(); virtual void s404(); virtual void s405(); virtual void s406(); virtual void s407(); virtual void s408(); virtual void s409(); virtual void s410();
	virtual void s411(); virtual void s412(); virtual void s413(); virtual void s414(); virtual void s415(); virtual void s416(); virtual void s417(); virtual void s418(); virtual void s419(); virtual void s420();
	virtual void s421(); virtual void s422(); virtual void s423(); virtual void s424(); virtual void s425(); virtual void s426(); virtual void s427(); virtual void s428(); virtual void s429(); virtual void s430();
	virtual void s431(); virtual void s432(); virtual void s433(); virtual void s434(); virtual void s435(); virtual void s436(); virtual void s437(); virtual void s438(); virtual void s439(); virtual void s440();
	virtual void s441(); virtual void s442(); virtual void s443(); virtual void s444(); virtual void s445(); virtual void s446(); virtual void s447(); virtual void s448(int a);
	virtual void s449(); virtual void s450(); virtual void s451(); virtual void s452(); virtual void s453(); virtual void s454(); virtual void s455(); virtual void s456(); virtual void s457(); virtual void s458();
	virtual void s459(); virtual void s460(); virtual void s461(); virtual void s462(); virtual void s463(); virtual void s464(); virtual void s465(); virtual void s466(); virtual void s467(); virtual void s468();
	virtual void s469(); virtual void s470(); virtual void s471(); virtual void s472(); virtual void s473(); virtual void s474(); virtual void s475(); virtual void s476(); virtual void s477(); virtual void s478();
	virtual void s479(); virtual void s480(); virtual void s481(); virtual void s482(); virtual void s483(); virtual void s484(); virtual void s485(); virtual void s486(); virtual void s487(); virtual void s488();
	virtual void s489(); virtual void s490(); virtual void s491(); virtual void s492(); virtual void s493(); virtual void s494(); virtual void s495(); virtual void s496(); virtual void s497(); virtual void s498();
	virtual void s499(); virtual void s500(); virtual void s501(); virtual void s502(); virtual void s503(); virtual void s504(); virtual void s505(); virtual void s506(); virtual void s507(); virtual void s508();
	virtual void s509(); virtual void s510(); virtual void s511(); virtual void s512(); virtual void s513(); virtual void s514(); virtual void s515(); virtual void s516(); virtual void s517(); virtual void s518();
	virtual void s519(); virtual void s520(); virtual void s521(); virtual void s522(); virtual void s523(); virtual void s524(); virtual void s525(); virtual void s526(); virtual void s527(); virtual void s528();
	virtual void s529(); virtual void s530(); virtual void s531(); virtual void s532(); virtual void s533(); virtual void s534(); virtual void s535(); virtual void s536(); virtual void s537(); virtual void s538();
	virtual void s539(); virtual void s540(); virtual struct CHengEnemiesView_103805d0 *s541();
	virtual void s542(); virtual void s543(); virtual void s544(); virtual void s545(); virtual void s546(); virtual void s547(); virtual void s548(); virtual void s549(); virtual void s550(); virtual void s551();
	virtual void s552(); virtual void s553(); virtual void s554(); virtual void s555(); virtual void s556(); virtual void s557(); virtual void s558(); virtual void s559(); virtual void s560(); virtual void s561();
	virtual void s562(); virtual void s563(); virtual void s564(); virtual void s565(); virtual void s566(); virtual void s567(); virtual void s568(); virtual void s569(); virtual void s570(); virtual void s571();
	virtual void s572();
	virtual void s573(); virtual void s574(); virtual void s575(); virtual void s576(); virtual void s577(); virtual void s578(); virtual void s579(); virtual void s580(); virtual void s581(); virtual void s582();
	virtual void s583(); virtual void s584(); virtual void s585(); virtual void s586(); virtual void s587(); virtual void s588(); virtual void s589(); virtual void s590(); virtual void s591(); virtual void s592();
	virtual void s593(); virtual void s594(); virtual void s595(); virtual void s596(); virtual void s597(); virtual void s598(); virtual void s599(); virtual void s600(); virtual void s601(); virtual void s602();
	virtual void s603(); virtual void s604(); virtual void s605(); virtual void s606(); virtual void s607(); virtual void s608(); virtual void s609(); virtual void s610(); virtual void s611(); virtual void s612();
	virtual void s613(); virtual void s614(); virtual void s615(); virtual void s616(); virtual void s617(); virtual void s618();
};

struct CHengTwin_103805d0 { void sub_10273e80(char flag); };
struct CHengeyokaiView_103805d0
{
	char m_pad0000[0x168];
	int m_n168;
	int m_n16c;
	char m_pad170[0x17c - 0x170];
	float m_fl17c;
	char m_pad180[0x19c - 0x180];
	unsigned int m_n19c;
	char m_pad1a0[0x14bc - 0x1a0];
	unsigned int m_n14bc;
	char m_pad14c0[0x1568 - 0x14c0];
	int m_n1568;
	char m_pad156c[0x1b44 - 0x156c];
	const char *m_psz1b44;
	int m_n1b48;
	char m_pad1b4c[0x5d34 - 0x1b4c];
	CUnknown102ee120 *m_p5d34;
	char m_pad5d38[0x5d44 - 0x5d38];
	CAI_Motor *m_pMotor5d44;
	char m_pad5d48[0x5dd0 - 0x5d48];
	Vector m_vec5dd0;
	char m_pad5ddc[0x6320 - 0x5ddc];
	int m_n6320;
	char m_pad6324[0x6664 - 0x6324];
	EHANDLE m_h6664;
	char m_pad6668[0x6674 - 0x6668];
	float m_fl6674;
	char m_pad6678[0x6680 - 0x6678];
	int m_n6680;

	CHengVSlots_103805d0 *VS() { return (CHengVSlots_103805d0 *)this; }
	CAI_Motor *GetMotor() { return m_pMotor5d44; }
	void sub_103805d0(int *pTask);	// CNPC_VHengeyokai::vfunc442 (slot 442, RunTask-like)
	void sub_10013336(int *pTask);	// CNPC_VHuman::vfunc442
	void sub_10382bb0();
	void sub_10289ee0(int activity);
	void sub_10273e80(char flag);
	char sub_10278c80();
	bool sub_10269aa0(int condition);
	bool sub_103822a0(CBaseEntity *pEnt);
	void sub_103828a0();
	void sub_10383130();
	void sub_103831c0();
	void sub_10273070(char bForce);
	void sub_100ac4e0(void (*pfn)(), int a, int b);
};

#define VSL(p) ((CHengVSlots_103805d0 *)(p))

// TARGET: CHengeyokaiView_103805d0::sub_103805d0
void CHengeyokaiView_103805d0::sub_103805d0(int *pTask)
{
	CBaseEntity *pEnemy;
	Vector vec;
	switch (*pTask) {
	case 0x132:
		sub_10382bb0();
		sub_10289ee0(0x126);
		return;
	case 0x133:
		sub_10382bb0();
		sub_10289ee0(0x126);
		return;
	case 0x130:
		m_n6680 = 2;
		if (m_h6664.Get()) {
			m_vec5dd0 = *(Vector *)VSL(m_h6664.Get())->s220();
			m_p5d34->sub_102ee1c0(m_n6320);
			m_p5d34->sub_102f2fe0(m_n6320);
			sub_10273e80(0);
			return;
		}
		m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHengeyokai.cpp";
		m_n1b48 = 0x3b3;
		VSL(this)->s448(1);
		return;
	case 200:
		if (m_h6664.Get()) {
			sub_102e0b40((float *)m_pMotor5d44);
			GetMotor()->sub_102e2020(VSL(m_h6664.Get())->s220(), 0);
			VSL(this)->s572();
		}
		if (sub_10278c80())
			sub_10273e80(0);
		break;
	case 0xc9:
		pEnemy = VSL(this)->s167();
		VSL(this)->s541()->sub_102dfed0(&vec, pEnemy);
		if (sub_10269aa0(0x1b) && sub_103822a0(pEnemy)) {
			((CHengTwin_103805d0 *)this)->sub_10273e80(0);
			return;
		}
		sub_102e0b40((float *)m_pMotor5d44);
		m_pMotor5d44->sub_102e2020(&vec.x, 0);
		VSL(this)->s572();
		m_fl6674 = gpGlobals->curtime + 1.0f;
		return;
	case 0xca:
		pEnemy = VSL(this)->s168();
		VSL(this)->s541()->sub_102dfed0(&vec, pEnemy);
		if (!sub_103822a0(pEnemy)) {
			sub_102e0b40((float *)m_pMotor5d44);
			m_pMotor5d44->sub_102e2020(&vec.x, 0);
			VSL(this)->s572();
			return;
		}
		((CHengTwin_103805d0 *)this)->sub_10273e80(0);
		return;
	case 0x36:
	case 0x37:
		VSL(this)->s618();
		sub_10013336(pTask);
		break;
	default:
		sub_10013336(pTask);
		break;
	case 0x134:
		sub_10289ee0(0x127);
		return;
	case 0x135:
		sub_103828a0();
		sub_10273e80(0);
		return;
	case 0x136:
		sub_10383130();
		sub_10273e80(0);
		return;
	case 0x14a:
		sub_103831c0();
		sub_10273e80(0);
		return;
	case 0x14c:
		VSL(this)->s105("models/character/monster/Hengeyokai/hengeyokai.mdl");
		m_n19c |= 0x10;
		m_n168 = 0;
		m_n16c = 0;
		m_n1568 = 0x12;
		sub_10273070(1);
		sub_101cf600(this);
		sub_10273e80(0);
		return;
	case 0x14d:
		sub_100ac4e0(sub_101c0b10, 0, 0);
		m_fl17c = gpGlobals->curtime + 0.01f;
		sub_10273e80(0);
		return;
	case 0x14e:
		m_n14bc = *(unsigned int *)&m_n14bc | 0x80000800;
		sub_10273e80(0);
		return;
	case 0x14b:
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10380cb0 size=0x22a
#include "CBaseEntity.h"
#include "CNPC_VHengeyokai.h"
#include "CAI_Motor.h"

struct CHengeyokaiEnemiesView { void sub_102dfed0(Vector *pVec, CBaseEntity *pEnemy); };
struct CHengeyokaiTaskView { char sub_10278c80(); void sub_10382d20(); };
struct CHengeyokaiMotorView { void sub_102e0a60(float flYaw); };

// TARGET: CNPC_VHengeyokai::vfunc444
void CNPC_VHengeyokai::vfunc444(int *pTask)
{
	switch (*pTask) {
	case 0xc9:
	{
		CBaseEntity *pEnemy = vfunc164();
		Vector vec;
		((CHengeyokaiEnemiesView *)vfunc541())->sub_102dfed0(&vec, pEnemy);
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
		m_pMotor5d44->sub_102e20b0(&vec.x, -1.0f);
		if (sub_103822a0(pEnemy)) {
			if (sub_10269aa0(0x1b) || gpGlobals->curtime >= m_fl6674)
				sub_10273e80(0);
		}
		break;
	}
	case 0xca:
	{
		CBaseEntity *pEnemy = vfunc165();
		Vector vec;
		((CHengeyokaiEnemiesView *)vfunc541())->sub_102dfed0(&vec, pEnemy);
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
		m_pMotor5d44->sub_102e20b0(&vec.x, -1.0f);
		if (sub_103822a0(pEnemy))
			sub_10273e80(0);
		break;
	}
	case 0x132:
	case 0x133:
		((CHengeyokaiTaskView *)this)->sub_10382d20();
		if (vfunc248()) {
			((CHengeyokaiMotorView *)m_pMotor5d44)->sub_102e0a60(180.0f);
			sub_10273e80(0);
		}
		break;
	case 0x134:
		if (vfunc248())
			sub_10273e80(0);
		break;
	case 0x14b:
		sub_10383470();
		break;
	case 200:
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
		goto chase;
	case 0x31:
		if (!(m_flags5d8c & 0x2000))
			vfunc572();
	chase:
		m_pMotor5d44->sub_102e1e20(-1);
		if (((CHengeyokaiTaskView *)this)->sub_10278c80())
			sub_10273e80(0);
		break;
	default:
		sub_10011928(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10380f70 size=0x3
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10380f90 size=0x18
#include "CNPC_VHengeyokai.h"

char CNPC_VHengeyokai::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x10380fc0 size=0x3b0
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VHengeyokai.h"
#include "CEntityVSlots.h"
#include "Vector.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "ScopeTrace.h"
#include "CTraceFilterSimpleTwoEnt.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738960.h"
#include "CUnknown10738964.h"

struct CHengScale { virtual void vfunc0(); virtual char vfunc1(); char pad[0x24]; float m_fl28; int m_n2c; };
struct CHengHull { virtual void vfunc0(); virtual const float *GetMins(); virtual const float *GetMaxs(); };
struct SHengView : CEntityVSlots {
	char pad[0x270 - 4];
	CHengHull m_hull;
	char pad2[0x368 - 0x274];
	int m_n368;
};
extern CHengScale *g_1093b23c;
void sub_10139610(const Vector *angles, Vector *fwd, Vector *right, Vector *up);
void sub_10146570(const float *a, const float *b, int c, int d, int e, int f, float g);
int __fastcall sub_1008bf00(void *p);
int sub_1023bd00();
struct CUnknown1004f860 { void sub_1004f860(); };

// TARGET: CNPC_VHengeyokai::sub_10380fc0
void *CNPC_VHengeyokai::sub_10380fc0(int *pState)
{
	SHengView *self = (SHengView *)this;
	Vector vecStart = *self->slot220();
	vecStart.z += 4.0f;
	Vector vecEnd;
	sub_10139610(self->slot221(), &vecEnd, 0, 0);
	float flScale = g_1093b23c->vfunc1() ? g_104454c4 : g_1093b23c->m_fl28;
	vecEnd = vecStart + vecEnd * flScale;
	int n0 = self->m_n368;
	CTraceFilterSimpleTwoEnt filter(self, (void *)sub_1008bf00(self), n0);
	CGameTrace trace;
	Ray_t ray;
	CHengHull *pHull = &self->m_hull;
	const float *pMins = pHull->GetMins();
	const float *pMaxs = pHull->GetMaxs();
	{
		ScopeTrace scope("UTIL_TraceHull", g_106b8540, g_106b8540);
		((CUnknown1004f860 *)&ray)->sub_1004f860();
		ray.sub_1006dec0(vecStart, &vecEnd.x, pMins, pMaxs, 1, 0);
		g_1070b254->vfunc4(&ray, 0x202400b, (CTraceFilterNoCharacterCollide *)&filter, &trace);
		if (g_10738960.sub_1005f190())
			sub_10146570(trace.m_startpos, trace.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
	}
	if (trace.m_fraction == 1.0f)
		return 0;
	void *pHit = trace.m_pEnt;
	if (pHit == (void *)sub_1023bd00())
		return 0;
	if (!self->slot69(pHit))
		return 0;
	int n368 = self->m_n368;
	CTraceFilterSimpleTwoEnt filter2(self, (void *)sub_1008bf00(self), n368);
	vecStart.z += self->slot522();
	vecEnd.z += self->slot522();
	CGameTrace trace2;
	pMins = pHull->GetMins();
	pMaxs = pHull->GetMaxs();
	{
		ScopeTrace scope2("UTIL_TraceHull", g_106b8540, g_106b8540);
		ray.sub_1006dec0(vecStart, &vecEnd.x, pMins, pMaxs, 1, 0);
		g_1070b254->vfunc4(&ray, 0x202400b, (CTraceFilterNoCharacterCollide *)&filter2, &trace2);
		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570(trace2.m_startpos, trace2.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
	}
	void *pHit2 = trace2.m_pEnt;
	if (trace2.m_fraction != 1.0f && pHit2 != (void *)sub_1023bd00() && self->slot69(pHit2))
		*pState = 0;
	else
		*pState = 1;
	return pHit;
}
// END FUNCTION

// FUNCTION: 0x10381460 size=0x1f5
#include "CNPC_VHengeyokai.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CTraceFilterWorldOnly.h"
#include "UTIL_Trace.h"
#include "IPhysicsObject.h"

struct IPhysTune2
{
	virtual void v0();
	virtual bool vfunc1();
	char m_pad[0x24];
	float m_fl28;
};
extern IPhysTune2 *g_1093b29c;
extern IPhysTune2 *g_1093b1f4;

// TARGET: CNPC_VHengeyokai::sub_10381460
void CNPC_VHengeyokai::sub_10381460(void *pTarget)
{
	CBaseEntity *pEnt = (CBaseEntity *)pTarget;
	if (!pEnt)
		return;
	IPhysicsObject *pPhys = (IPhysicsObject *)pEnt->m_obj36c;
	if (!pPhys)
		return; else { Vector vecAng;
	Vector vecVel;
	vecAng.Init();
	((CEntityVSlots *)this)->slot199(&vecVel, 0);
	float t0 = vecVel.x; float flTemp = t0;
	vecVel.x = vecVel.y;
	vecVel.y = -flTemp;
	Vector vecOrigin = *((CEntityVSlots *)pEnt)->slot220();
	CGameTrace trace;
	CTraceFilterWorldOnly filter;
	UTIL_TraceLine_Calls(vecOrigin, vecOrigin + vecVel, 0x202400b, &filter, &trace);
	if (trace.m_fraction != 1.0f)
		vecVel = -vecVel;
	vecVel = vecVel * (g_1093b29c->vfunc1() ? 0.0f : g_1093b29c->m_fl28);
	vecVel.z += (g_1093b1f4->vfunc1() ? 0.0f : g_1093b1f4->m_fl28);
	pPhys->vfunc41(&vecVel, &vecAng); }
}
// END FUNCTION

// FUNCTION: 0x103816e0 size=0x4a
struct V3 { float x, y, z; };
#define D(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
struct E {
	D(a) D(b) D(c) D(d) D(e) D(f)
	virtual void g0(); virtual void g1();
	virtual void set(V3 *v);
};
typedef V3 *(__fastcall *PGetV)(E *);
typedef float (__fastcall *PGetF)(E *);
void __fastcall sub_103816e0(E *e, int, int)
{
	void **vt = *(void ***)e;
	V3 v = *((PGetV)vt[220])(e);
	v.z = ((PGetF)(*(void ***)e)[522])(e) + v.z;
	e->set(&v);
}
// END FUNCTION

// FUNCTION: 0x10381750 size=0x1a
#include "CNPC_VHengeyokai.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;
char CNPC_VHengeyokai::vfunc599(int unused)
{
	g_10924edc->b();
	return m_b6078 = 1;
}
// END FUNCTION

// FUNCTION: 0x10381780 size=0x17
#include "CNPC_VHengeyokai.h"
struct S10924edc { virtual void a(); virtual void b(); };
extern S10924edc *g_10924edc;

// TARGET: CNPC_VHengeyokai::vfunc600
bool CNPC_VHengeyokai::vfunc600(int unused)
{
	m_b6078 = 1;
	g_10924edc->b();
	return true;
}
// END FUNCTION

// FUNCTION: 0x103817b0 size=0xe
#include "CNPC_VHengeyokai.h"
struct CUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern CUnk10924edc *g_10924edc;
// TARGET: CNPC_VHengeyokai::vfunc601
void CNPC_VHengeyokai::vfunc601(int unused)
{
	g_10924edc->v1();
}
// END FUNCTION

// FUNCTION: 0x103817d0 size=0x3
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::vfunc602()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103817f0 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VHengeyokai.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1063bd94[];

void CNPC_VHengeyokai::vfunc617()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_1063bd94[g_1070b244->vfunc2(0, 3)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x10381960 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VHengeyokai.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1063bda4[];

void CNPC_VHengeyokai::vfunc618()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_1063bda4[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x10381ad0 size=0x5
#include "CNPC_VHengeyokai.h"
#include "CBaseEntity.h"

// TARGET: CNPC_VHengeyokai::vfunc175
// the game's 0x10381ad0: a tail call (jmp) of CBaseEntity::vfunc175
void CNPC_VHengeyokai::vfunc175(CBaseEntity *a0)
{
	((CBaseEntity *)this)->CBaseEntity::vfunc175(a0);
}
// END FUNCTION

// FUNCTION: 0x10381af0 size=0x5
#include "CNPC_VHengeyokai.h"
#include "CAI_BaseNPCTroika.h"

// TARGET: CNPC_VHengeyokai::vfunc24
// the game's 0x10381af0: a tail call (jmp) of CAI_BaseNPCTroika::vfunc24
void CNPC_VHengeyokai::vfunc24(int a0)
{
	((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc24(a0);
}
// END FUNCTION

// FUNCTION: 0x10381b10 size=0x24
extern char g_10739a4c[];

struct CUnknownGlobal10739a4c {
	void sub_1000d954(void *pArg);
};

struct CUnknown10381b10 {
	void sub_10381b10();
};

// TARGET: CUnknown10381b10::sub_10381b10
void CUnknown10381b10::sub_10381b10()
{
	((CUnknownGlobal10739a4c *)g_10739a4c)->sub_1000d954(this);
	*(int *)((char *)this + 0xe80) = 0;
	*(int *)((char *)this + 0xe88) = 0;
	*(int *)((char *)this + 0xe84) = 0;
}
// END FUNCTION

// FUNCTION: 0x10381b50 size=0x3d
#include "CNPC_VHengeyokai.h"

bool __fastcall sub_10381c80(CNPC_VHengeyokai *p);

// TARGET: CNPC_VHengeyokai::vfunc375
int CNPC_VHengeyokai::vfunc375(int nAct)
{
	if (sub_10381c80(this))
	{
		switch (nAct)
		{
		case 1:
			return 0x128;
		case 9:
		case 0x13:
			return 0x129;
		}
	}
	return sub_10006b40(nAct);
}
// END FUNCTION

// FUNCTION: 0x10381ba0 size=0x24
class CUnknown10381ba0
{
public:
	char pad0[0x14b8];
	unsigned int m_flags14b8;

	void sub_10381ba0(char on);
};

// TARGET: CUnknown10381ba0::sub_10381ba0
void CUnknown10381ba0::sub_10381ba0(char on)
{
	if (on)
		m_flags14b8 |= 16;
	else
		m_flags14b8 &= ~16;
}
// END FUNCTION

// FUNCTION: 0x10381be0 size=0xc
#include "CUnknown10381be0.h"
bool CUnknown10381be0::sub_10381be0()
{
	bool r = (m_flags14b8 >> 4) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10381c00 size=0x54
#include "CNPC_VHengeyokai.h"
void CNPC_VHengeyokai::sub_10381c00(char bOn)
{
	if (bOn) {
		m_flags14b8 |= 0x20;
		float flDelay; flDelay = enginerandom->vfunc1(5.0f, 8.0f);
		m_fl666c = flDelay + gpGlobals->curtime;
		m_b667d = 0;
	} else {
		m_flags14b8 &= ~0x20;
	}
}
// END FUNCTION

// FUNCTION: 0x10381c80 size=0xc
unsigned char __fastcall sub_10381c80(char *self)
{
	unsigned char v = (unsigned char)(*(unsigned int *)(self + 0x14b8) >> 5);
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x10381ca0 size=0x20
#include "globalvars.h"

// TARGET: sub_10381ca0
int __fastcall sub_10381ca0(char *self)
{
    if (gpGlobals->curtime >= *(float *)(self + 0x666c))
        return 1;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10381cd0 size=0x155
#include "CBaseEntity.h"
#include "CNPC_VHengeyokai.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

extern CGlobalEntityList g_106eb5d8;

bool CNPC_VHengeyokai::sub_10381cd0()
{
    CBaseEntity *pEnt = 0;
    CBaseEntity *pClosest = 0;
    float flClosest = 1050625.0f;
    while (1) {
        pEnt = g_106eb5d8.sub_100f7c30(pEnt, "fish", ((CEntityVSlots *)this)->slot220(), 1024.0f, (CBaseEntity *)this, 0);
        if (pEnt == 0)
            goto done;
        if (sub_10382aa0((int)pEnt))
            continue;
        {
            Vector vecA, vecB;
            ((CEntityVSlots *)pEnt)->slot199(&vecA, &vecB);
            if (vecA.x == 0.0f && vecA.y == 0.0f && vecA.z == 0.0f) {
                Vector *pEntPos = ((CEntityVSlots *)pEnt)->slot220();
                Vector *pThisPos = ((CEntityVSlots *)this)->slot220();
                float dx = pThisPos->x - pEntPos->x;
                float dy = pThisPos->y - pEntPos->y;
                float dz = pThisPos->z - pEntPos->z;
                float flDist = dz * dz + dx * dx + dy * dy;
                if (flDist < flClosest) {
                    pClosest = pEnt;
                    flClosest = flDist;
                }
            }
        }
    }
done:
    EHANDLE &h = *(EHANDLE *)&m_h6664;
    h = pClosest;
    if (!pClosest)
        return false;
    sub_102c4380((CBaseEntity *)EHandle_Get(m_h6664));
    return sub_10381e90(pClosest);
}
// END FUNCTION

// FUNCTION: 0x10381e90 size=0x13e
#include "CNPC_VHengeyokai.h"
#include "CRagdollProp.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct HengOriginView {
    V100(a) V100(b) V10(c0) V10(c1)
    virtual const Vector *GetOrigin();
};
struct HengPhysObjView {
    V10(a) V10(b) V10(c)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
    virtual void GetPosition(Vector *pPos, Vector *pAngles);
};
extern const char *g_1063bd88[];
extern char g_10538764[];
extern char g_1057c684[];
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long lVfDelta, void *pSrcType, void *pTargetType, int bIsReference);
bool CNPC_VHengeyokai::sub_10381e90(CBaseEntity *pEnt)
{
    int i;
    bool bFound = false;
    float flBest = 1050625.0f;
    CRagdollProp *pRagdoll = (CRagdollProp *)__RTDynamicCast(pEnt, 0, g_10538764, g_1057c684, 0);
    if (pRagdoll) {
        const char **ppName = g_1063bd88;
        i = 0;
        while (**ppName) {
            HengPhysObjView *pObj = (HengPhysObjView *)pRagdoll->vfunc265(*ppName);
            if (pObj) {
                Vector pos, ang;
                pObj->GetPosition(&pos, &ang);
                const Vector *pOrigin = ((HengOriginView *)this)->GetOrigin();
                float dx = pOrigin->x - pos.x;
                float dy = pOrigin->y - pos.y;
                float dz = pOrigin->z - pos.z;
                float flDist; flDist = dx * dx + dy * dy + (dz * dz);
                if (flDist < flBest) {
                    bFound = true;
                    m_vecBonePos = pos;
                    m_n6668 = i;
                    flBest = flDist;
                }
            }
            ++ppName;
            i++;
        }
    } else {
        bFound = true;
        m_vecBonePos = *((HengOriginView *)this)->GetOrigin();
        m_n6668 = 0;
    }
    return bFound;
}
// END FUNCTION

// FUNCTION: 0x10382020 size=0x1f7
#include "CNPC_VHengeyokai.h"
#include "CEntityVSlots.h"
#include "QAngle.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "AITrace.h"

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

bool CNPC_VHengeyokai::sub_10382020(void *pTarget)
{
	if (!pTarget)
		return false;

	CGameTrace trace;
	Vector eye;
	Vector vecForward;
	Vector vecEnd;
	Ray_t ray;

	sub_10139610(*(QAngle *)((CEntityVSlots *)this)->slot221(), 0, &vecForward, 0);

	{
		Vector vecStart = *((CEntityVSlots *)this)->slot193(&eye) - vecForward * -80.0f;
		((CEntityVSlots *)pTarget)->slot193(&vecEnd);
		ray.Init(vecStart, vecEnd);
	}
	{
		CTraceFilterSimple filter(this, 0);
		g_1070b254->vfunc4(&ray, 0x600400b, (CTraceFilterNoCharacterCollide *)&filter, &trace);

		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570((const Vector *)&trace.m_startpos, (const Vector *)&trace.m_endpos, 0xff, 0, 0, 1, -1.0f);

		if (trace.m_fraction != 1.0)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x103822a0 size=0x10e
#include "CBaseEntity.h"
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CNPC_VHengeyokai.h"

float sub_101d2c70(const Vector *pDelta);
float sub_1013d580(float a, float b);

bool CNPC_VHengeyokai::sub_103822a0(CBaseEntity *pEnt)
{
	CEntityVSlots *pOther = (CEntityVSlots *)pEnt;
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	if (pOther && EHandle_Get(m_h6664))
	{
		Vector vecOther = *pOther->slot220();
		Vector delta = vecOther - *pSelf->slot220();
		float flYaw = sub_101d2c70(&delta);
		float flPitch = ((float *)pSelf->slot221())[1];
		float flDiff = sub_1013d580(flYaw, flPitch);
		if (-20.0f <= flDiff && flDiff <= 20.0f)
			return true;
		return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10382400 size=0x1ee
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "IPhysicsObject.h"
#include "CRagdollProp.h"
#include "CNPC_VHengeyokai.h"

void sub_101cd970(CBaseEntity *pEnt);

// TARGET: CNPC_VHengeyokai::sub_10382400
void CNPC_VHengeyokai::sub_10382400(void *pArg)
{
	CRagdollProp *pEnt = (CRagdollProp *)pArg;
	if (g_10566458->sub_100290c0(&m_h6690))
		sub_101cd970(g_10566458->sub_100290c0(&m_h6690));
	m_h6690 = -1;
	if (pEnt && g_10566458->sub_100290c0(&m_h6664)) {
		Vector vecA(0, 0, 0);
		const Vector *pOrigin = (const Vector *)pEnt->vfunc217();
		Vector vecB;
		vecB.x = pOrigin->x;
		vecB.y = pOrigin->y;
		vecB.z = pOrigin->z + 48.0f;
		sub_102c4cc0(&vecA, ((CRagdollProp *)EHandle_Get(m_h6664))->vfunc217(), &vecB);
		CRagdollProp *pRagdoll = dynamic_cast<CRagdollProp *>((CBaseEntity *)EHandle_Get(m_h6664));
		if (pRagdoll) {
			Vector vecZ(0, 0, 0);
			pRagdoll->vfunc266((int)&vecA, (int)&vecZ);
		} else {
			CBaseEntity *pOwner = (CBaseEntity *)EHandle_Get(m_h6664);
			IPhysicsObject *pPhys = (IPhysicsObject *)pOwner->m_obj36c;
			if (pPhys) {
				Vector vecVel, vecAng;
				Vector vecZ(0, 0, 0);
				pPhys->vfunc40(&vecVel.x, &vecAng.x);
				pPhys->vfunc39(&vecA.x, &vecZ.x);
			}
		}
	}
	m_h6664 = -1;
	sub_102c43b0(0.75f);
	sub_10381c00(0);
}
// END FUNCTION

// FUNCTION: 0x10382670 size=0x1be
#include "CBaseAnimating.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "CNPC_VHengeyokai.h"
#include "CBaseEntity.h"
#include "CRagdollPropSpecial.h"
#include "CPhysicsAnimlink.h"
#include "CUnknown101578b0.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_10538764[];
extern char g_1057fff0[];
extern float g_1070d1b0[];
CPhysicsAnimlink *sub_100a9ab0(const char *pszName, const float *pA, const float *pB, void *pC);
int sub_10430130(unsigned int v);

struct CHengeyokaiAnimView
{
	char m_pad0[0xf0];
	int m_nBones;
	int m_nOffset;
};

#define HV(n) virtual void vfunc##n();
#define HV10(p) HV(p##0) HV(p##1) HV(p##2) HV(p##3) HV(p##4) HV(p##5) HV(p##6) HV(p##7) HV(p##8) HV(p##9)
struct CHengeyokaiRagView
{
	HV(0) HV(1) HV(2) HV(3) HV(4) HV(5) HV(6) HV(7) HV(8) HV(9)
	HV10(1) HV10(2) HV10(3) HV10(4) HV10(5) HV10(6) HV10(7) HV10(8) HV10(9)
	HV10(10) HV10(11) HV10(12) HV10(13) HV10(14) HV10(15) HV10(16) HV10(17) HV10(18)
	HV(190)
	virtual void vfunc191(float value);
	HV(192) HV(193) HV(194) HV(195) HV(196) HV(197) HV(198) HV(199)
	HV10(20) HV10(21) HV10(22) HV10(23) HV10(24) HV10(25)
	HV(260) HV(261) HV(262) HV(263) HV(264)
	virtual void *vfunc265(int value);
};

namespace block_10382670 {
struct CHengeyokaiUnit : CNPC_VHengeyokai
{
	void sub_10381ba0(char b);
};
void CHengeyokaiUnit::sub_10381ba0(char b)
{
	if (b)
		m_flags14b8 |= 0x10;
	else
		m_flags14b8 &= ~0x10;
}
}
using namespace block_10382670;

namespace block_10157890 {
#pragma auto_inline(off)

struct V : CUnknown101578b0 { void sub_10157890(char value); };
void V::sub_10157890(char value)
{
	m_bFlag103c = value;
}

#pragma auto_inline(on)
}
#define HASH(x) (((((((x) & 0x3f3c1135) ^ 0x544222df) + 0x4ba5398d) & 0xc0c3eeca) ^ (x)) ^ 0x151a77f8)
// TARGET: CNPC_VHengeyokai::sub_10382670
bool CNPC_VHengeyokai::sub_10382670(void *pEnt, const char *pszBone)
{
	if (!pEnt)
		return false;
	CPhysicsAnimlink *pLink = sub_100a9ab0("phys_animlink", g_1070d1b0, g_1070d9d0, 0);
	if (!pLink)
		return false;
	CHengeyokaiAnimView *pAnim = sub_100952d0(-1);
	int iBone;
	for (int i = 0; i < pAnim->m_nBones; i++)
	{
		int *p = (int *)(pAnim->m_nOffset + (char *)pAnim + i * 0xa0);
		const char *pszName = (char *)p + *p;
		if (!_strcmpi("Bip01 R Hand", pszName))
		{
			iBone = i;
			break;
		}
	}
	if (0 > iBone)
		return false;
	void *pPhys = *(void **)((char *)pEnt + 0x36c);
	if (!pPhys)
		return false;
	CHengeyokaiRagView *pRagdoll = (CHengeyokaiRagView *)__RTDynamicCast(pEnt, 0, g_10538764, g_1057fff0, 0);
	if (pRagdoll)
	{
		((block_10157890::V *)(((CUnknown101578b0 *)pRagdoll)))->sub_10157890(1);
		int h = HASH(m_Secure6698.m_Value);
		int n = sub_10430130(h);
		pRagdoll->vfunc191(n);
		pPhys = pRagdoll->vfunc265((int)pszBone);
		if (!pPhys)
			return false;
	}
	Vector vecA(0, 0, 0);
	Vector vecB(0, 0, 0);
	pLink->sub_1014f210((CBaseAnimating *)this, iBone, pPhys, (int)&vecA, (int)&vecB);
	m_h6690 = *pLink->vfunc1();
	((CHengeyokaiUnit *)this)->sub_10381ba0(0);
	sub_10381c00(1);
	return true;
}
// END FUNCTION

// FUNCTION: 0x103828a0 size=0x9c
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
namespace block_103828a0 {
unsigned char __fastcall sub_10381c80(char *self)	// as its own block (0x10381c80)
{
	unsigned char v = (unsigned char)(*(unsigned int *)(self + 0x14b8) >> 5);
	v &= 1;
	return v;
}
}
using namespace block_103828a0;
struct HV {
    char pad[0x6690];
    volatile unsigned int m_h6690;
    void sub_10013110(float f);
    void sub_10014899(int a);
};
void sub_1000e255(CBaseEntity *pEnt);
inline bool Valid(CGlobalEntityList *l, unsigned int h)
{
    if (h == 0xffffffff)
        return false;
    CGlobalEntityList_Slot *s = &l->m_Slots[h & 0x1fff];
    if (s->m_Serial != (int)(h >> 13))
        return false;
    if (s->m_pEntity == 0)
        return false;
    return true;
}
inline CGlobalEntityList_Ent *HandleGet(CGlobalEntityList *l, unsigned int h)
{
    if (h == 0xffffffff)
        return 0;
    CGlobalEntityList_Slot *s = &l->m_Slots[h & 0x1fff];
    return (unsigned int)s->m_Serial == (h >> 13) ? s->m_pEntity : 0;
}
// TARGET: sub_103828a0
void __fastcall sub_103828a0(char *p)
{
    HV *v = (HV *)p;
    if (sub_10381c80(p)) {
        *(int *)(p + 0x6664) = -1;
        v->sub_10013110(0.75f);
        if (Valid(g_10566458, v->m_h6690))
            sub_1000e255((CBaseEntity *)HandleGet(g_10566458, v->m_h6690));
        v->m_h6690 = 0xffffffff;
        v->sub_10014899(0);
    }
}
// END FUNCTION

// FUNCTION: 0x10382970 size=0xed
#include "utlmemory.h"
#include "utlvector.h"
#include "CUnknown10382970.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned long size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *pMem, unsigned long size);


struct TimedElem
{
	int m_id;
	float m_time;
};

struct TimedVector
{
	TimedElem *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	int m_nSize;
	TimedElem *m_pElements;

	void Grow(int num)
	{
		if (m_nGrow == -1)
			return;
		int nAllocationRequested = m_nAlloc + num;
		while (m_nAlloc < nAllocationRequested) {
			if (m_nAlloc != 0) {
				if (m_nGrow)
					m_nAlloc = m_nAlloc + m_nGrow;
				else
					m_nAlloc = m_nAlloc * 2;
			} else {
				m_nAlloc = 4;
			}
		}
		if (m_pMemory)
			m_pMemory = (TimedElem *)Plat_Realloc(m_pMemory, m_nAlloc * 8);
		else
			m_pMemory = (TimedElem *)Plat_Alloc(m_nAlloc << 3);
	}

	void GrowVector(int num)
	{
		if (m_nSize + num > m_nAlloc)
			Grow(m_nSize + num - m_nAlloc);
	}

	void InsertBefore(int elem, const TimedElem &src)
	{
		GrowVector(1);
		m_nSize++;
		m_pElements = m_pMemory;
		int toMove = m_nSize - elem - 1;
		if (toMove > 0)
			memmove(&m_pMemory[elem + 1], &m_pMemory[elem], toMove * sizeof(TimedElem));
		TimedElem *p = &m_pMemory[elem];
		if (p) {
			p->m_id = src.m_id;
			p->m_time = src.m_time;
		}
	}
};

void CUnknown10382970::sub_10382970(int id)
{
	TimedElem e = { id, gpGlobals->curtime + 20.0f };
	TimedVector *v = (TimedVector *)&m_pTimedMemory;
	v->InsertBefore(v->m_nSize, e);
}
// END FUNCTION

// FUNCTION: 0x10382aa0 size=0x69
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CNPC_VHengeyokai.h"
bool CNPC_VHengeyokai::sub_10382aa0(int key)
{
	int idx = sub_10382b30(key);
	if (idx != -1) {
		if (gpGlobals->curtime < m_Timers.Element(idx).m_time)
			return true;
		m_Timers.FastRemove(idx);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10382b30 size=0x5b
#include "CNPC_VHengeyokai.h"
struct EntSub { void *ent; unsigned int serial; };
struct EntInfo { int pad; EntSub s; };
extern EntInfo *g_10566458;

int CNPC_VHengeyokai::sub_10382b30(int key)
{
    for (int i = 0; i < m_Timers.m_size; i++) {
        unsigned int h = m_Timers.m_pMemory[i].m_key;
        void *ent;
        if (h != 0xffffffff) {
            EntSub *s = &g_10566458[h & 0x1fff].s;
            if (s->serial == (h >> 13))
                ent = s->ent;
            else
                ent = 0;
        } else
            ent = 0;
        if (ent == (void *)key)
            return i;
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10382bb0 size=0x114
#include "CNPC_VHengeyokai.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#define S1(n) virtual void s##n();
#define S10(p) S1(p##0) S1(p##1) S1(p##2) S1(p##3) S1(p##4) S1(p##5) S1(p##6) S1(p##7) S1(p##8) S1(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CTargetSlots {
	S100(0) S100(1) S10(20) S10(21)
	virtual Vector *slot220(float f);
};
struct CMotorUnit : CAI_Motor {
	void sub_102e0a40(float flYaw);
	void sub_102e0a60(float flRate);
	void sub_102e0b40();
	void sub_10007248(Vector *pPos);
	void SetIdealYaw(float flYaw);
};
static inline float AngleY(const Vector *p)
{
	return p->y;
}
inline void CMotorUnit::SetIdealYaw(float flYaw)
{
	if (m_28)
	{
		if (flYaw >= 180.0f)
			flYaw = flYaw - 180.0f;
		else
			flYaw = flYaw + 180.0f;
	}
	if (*(float *)&m_1c == 180.0f)
		m_34 = flYaw;
	else
		m_34 = sub_102e0a80(flYaw);
}

void CNPC_VHengeyokai::sub_10382bb0()
{
	CEntityVSlots *pSelf = (CEntityVSlots *)this;
	if (EHandle_Get(m_h6664))
	{
		((CMotorUnit *)m_pMotor5d44)->sub_102e0a40(AngleY(pSelf->slot221()));
		((CMotorUnit *)m_pMotor5d44)->sub_102e0a60(20.0f);
		((CMotorUnit *)m_pMotor5d44)->sub_102e0b40();
		if (pSelf->slot167())
		{
			CTargetSlots *pTarget = (CTargetSlots *)pSelf->slot167();
			CMotorUnit *pMotor = (CMotorUnit *)m_pMotor5d44;
			pMotor->sub_10007248(pTarget->slot220(-1.0f));
			return;
		}
		float flYaw = AngleY(pSelf->slot221());
		((CMotorUnit *)m_pMotor5d44)->SetIdealYaw(flYaw);
	}
}
// END FUNCTION

// FUNCTION: 0x10382d20 size=0xe
namespace lifted {
struct C1000e6e7 { int sub_1000e6e7(int); };
}
struct CUnknown10382d20 { int sub_10382d20(); };
int CUnknown10382d20::sub_10382d20()
{
    return ((lifted::C1000e6e7 *)(*(int *)((char *)this + 0x5d44)))->sub_1000e6e7(-1);
}
// END FUNCTION

// FUNCTION: 0x10382d40 size=0x1a2
#include "CBaseEntity.h"
#include "CNPC_VHengeyokai.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CUnknown1070b244.h"
#include "CUnknown102e0150.h"

extern CUnknown1070b244 *g_1070b244;

int CNPC_VHengeyokai::sub_10382d40()
{
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	CEntityVSlots *pEnemy = (CEntityVSlots *)pThis->slot167();
	char bBlocked;
	if (pEnemy)
		bBlocked = pThis->slot530(pEnemy);
	else
		bBlocked = 1;
	sub_10269aa0(9);
	if (!bBlocked)
	{
		if (!m_b667c)
		{
			if (g_1070b244->vfunc2(0, 99) >= 0x50)
				goto fail;
		}
		else
		{
			if (g_1070b244->vfunc2(0, 99) >= 0x28)
				goto fail;
		}
	}
	if (!sub_10381cd0())
	{
fail:
		m_n6678 = 2;
		m_b667c = 0;
		return 0;
	}
	CEntityVSlots *pTarget = (CEntityVSlots *)EHandle_Get(m_h6664);
	const Vector *pMyOrigin = pThis->slot220();
	Vector vecToTarget = *pTarget->slot220() - *pMyOrigin;
	if (!bBlocked && pEnemy)
	{
		Vector vecLastKnown;
		pThis->slot541()->sub_102dfed0(&vecLastKnown, (CBaseEntity *)pEnemy);
		if (!(vecToTarget.LengthSqr() < (vecLastKnown - *pThis->slot220()).LengthSqr()))
		{
			m_h6664 = 0xffffffff;
			sub_102c43b0(0);
			return 0;
		}
	}
	sub_10381ba0(1);
	m_b667c = 1;
	return 0x16b;
}
// END FUNCTION

// FUNCTION: 0x10382f60 size=0xee
#include "CNPC_VHengeyokai.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct NpcV {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15)
	EV(160) EV(161) EV(162) EV(163) EV(164) EV(165) EV(166)
	virtual NpcV *ev167();
	EV(168) EV(169)
	EV10(17) EV10(18) EV10(19) EV10(20) EV10(21)
	virtual float *ev220();
};

int CNPC_VHengeyokai::sub_10382f60()
{
	*(int *)((char *)this + 0x6678) = 0;
	if (!sub_10269d30(0x1a)) {
		NpcV *self = (NpcV *)this;
		if (self->ev167()) {
			NpcV *pEnemy = self->ev167();
			float *pOther = pEnemy->ev220();
			float *pMine = self->ev220();
			float dx = pMine[0] - pOther[0];
			float dy = pMine[1] - pOther[1];
			float dz = pMine[2] - pOther[2];
			float flDist = dx * dx + dy * dy + dz * dz;
			if (flDist > 160000.0f)
				return g_1070b244->vfunc2(0, 99) < 70 ? 0x15c : 0x16a;
			if (flDist > 40000.0f)
				return g_1070b244->vfunc2(0, 99) < 40 ? 0x15c : 0x16a;
			return 0x16a;
		}
	}
	return 0x15c;
}
// END FUNCTION

// FUNCTION: 0x10383090 size=0x39
#include "CNPC_VHengeyokai.h"

// TARGET: CNPC_VHengeyokai::vfunc435
void CNPC_VHengeyokai::vfunc435(int arg)
{
	sub_100048f9(arg);
	if ((~*(unsigned int *)((char *)this + 0x14b8) & 8) != 0)
	{
		int n = m_n6678;
		*(int *)((char *)this + 0x6680) = 0;
		if (n > 0)
		{
			m_n6678 = n - 1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103830e0 size=0x37
#include "CBaseAnimating.h"

struct CUnknown103830e0
{
	char m_pad0000[0x1b30];
	const char *m_pszFile1b30;
	int m_nLine1b34;

	void sub_103830e0();
	void sub_102ae750(int a, int b);
};

// TARGET: CUnknown103830e0::sub_103830e0
void CUnknown103830e0::sub_103830e0()
{
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHengeyokai.cpp";
	m_nLine1b34 = 0x985;
	sub_102ae750(0x16e, 0);
	((CBaseAnimating *)this)->sub_1008d5f0(0.0f);
	((CBaseAnimating *)this)->sub_1008d6d0(1);
}
// END FUNCTION

// FUNCTION: 0x10383130 size=0x28
#include "CNPC_VHengeyokai.h"

// TARGET: CNPC_VHengeyokai::sub_10383130
void CNPC_VHengeyokai::sub_10383130()
{
	sub_1008d5f0(0);
	sub_1008d6d0(0);
	sub_102c4310("Hengeyokai_freeze_emitter", this, 1, -1, 0);
}
// END FUNCTION

// FUNCTION: 0x10383170 size=0x34
extern char g_1063f48c[];

struct CMingXiaoView {
    char pad0[0x1b30];
    const char *m_psz1b30;
    int m_n1b34;
    void sub_10013cf5(int a, int b, int c);
    void sub_1000198d(int a, int b);
    void sub_10383170(int unused);
};

// TARGET: CMingXiaoView::sub_10383170
void CMingXiaoView::sub_10383170(int unused)
{
    sub_10013cf5(1, 1, 10);
    m_psz1b30 = g_1063f48c;
    m_n1b34 = 0x99e;
    sub_1000198d(0x170, 0);
}
// END FUNCTION

// FUNCTION: 0x103831c0 size=0x217
#include "CEntityVSlots.h"
#include "globalvars.h"

struct CHengeyokaiMorphView : public CEntityVSlots
{
	char m_pad0004[0x168 - 4];
	int m_n168;
	int m_n16c;
	char m_pad0170[0x19c - 0x170];
	unsigned int m_flags19c;
	char m_pad01a0[3];
	char m_b1a3;
	char m_pad01a4[0x204 - 0x1a4];
	unsigned int m_flags204;
	char m_pad0208[0x1480 - 0x208];
	char m_b1480;
	char m_pad1481[0x155c - 0x1481];
	unsigned int m_h155c;
	float m_f1560;
	char m_pad1564[4];
	int m_n1568;
	char m_pad156c[0x1b30 - 0x156c];
	const char *m_pszFile1b30;
	int m_nLine1b34;
	char m_pad1b38[4];
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char m_pad1b44[0x5cc0 - 0x1b44];
	int m_n5cc0;
	int m_n5cc4;
	char m_pad5cc8[0x6348 - 0x5cc8];
	int m_a6348[5];
	char m_pad635c[0x63b4 - 0x635c];
	float m_f63b4;
	char m_pad63b8[0x6420 - 0x63b8];
	int m_a6420[5];

	void sub_10273070(int a);
	void sub_10097310(CHengeyokaiMorphView *pOwner);
	void sub_102ae750(int nLine, int b);
	void sub_103831c0();
};

void __stdcall sub_10272650(int a);
void sub_101cf600(CHengeyokaiMorphView *pEnt);
void *sub_10136580(const char *pszClassname);
void sub_101d1280(CHengeyokaiMorphView *pEnt);

// TARGET: CHengeyokaiMorphView::sub_103831c0
void CHengeyokaiMorphView::sub_103831c0()
{
	CHengeyokaiMorphView *pThis = this;
	sub_10272650(0x12a);
	pThis->m_flags19c |= 0x10;
	pThis->m_n168 = 0;
	pThis->m_n16c = 0;
	pThis->m_n1568 = 0x12;
	pThis->sub_10273070(1);
	sub_101cf600(pThis);
	void *pNew = sub_10136580("npc_VHengeyokai");
	CHengeyokaiMorphView *pOther = 0;
	if (pNew)
		pOther = *(CHengeyokaiMorphView **)((char *)pNew + 0x98);
	pOther->m_flags204 |= 4;
	pOther->slot62((const float *)pThis->slot217());
	pOther->slot64((const float *)pThis->slot221());
	pOther->slot202(pThis);
	pOther->sub_10097310(pThis);
	pOther->m_f63b4 = 4096.0f;
	sub_101d1280(pOther);
	pOther->m_flags19c |= 0x60;
	pOther->slot614();
	pOther->slot105("models/character/monster/Hengeyokai/hengeyokai.mdl");
	pOther->m_flags19c &= 0xffffff9f;
	pOther->m_b1a3 = 1;
	pOther->m_n168 = 0x1f;
	pOther->m_n16c = 2;
	pOther->m_h155c = *pThis->slot1();
	const char *pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHengeyokai.cpp";
	float flTime; flTime = gpGlobals->curtime;
	pThis->m_f1560 = flTime;
	pOther->m_n5cc0 = 5;
	pOther->m_f1560 = flTime;
	pOther->m_b1480 = 1;
	pOther->m_pszFile1b3c = pszFile;
	pOther->m_n5cc4 = 5;
	pOther->m_nLine1b40 = 0x9cb;
	pOther->m_pszFile1b30 = pszFile;
	pOther->m_nLine1b34 = 0x9cc;
	pOther->sub_102ae750(0x16f, 0);
	pOther->m_a6348[0] = pThis->m_a6348[0];
	pOther->m_a6348[1] = pThis->m_a6348[1];
	pOther->m_a6348[2] = pThis->m_a6348[2];
	pOther->m_a6348[3] = pThis->m_a6348[3];
	pOther->m_a6348[4] = pThis->m_a6348[4];
	pOther->m_a6420[0] = pThis->m_a6420[0];
	pOther->m_a6420[1] = pThis->m_a6420[1];
	pOther->m_a6420[2] = pThis->m_a6420[2];
	pOther->m_a6420[3] = pThis->m_a6420[3];
	pOther->m_a6420[4] = pThis->m_a6420[4];
	pThis->m_n168 = 0x1e;
	pThis->m_n16c = 2;
	pThis->m_h155c = *pOther->slot1();
}
// END FUNCTION
