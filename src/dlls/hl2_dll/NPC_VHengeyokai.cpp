// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
