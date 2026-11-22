// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 42 blocks
#include "vampire.h"

// FUNCTION: 0x101b97e0 size=0x6
#include "CSoundEnt.h"
int CSoundEnt::vfunc117()
{
    return -2147483648;
}
// END FUNCTION

// FUNCTION: 0x101b9800 size=0x5
inline int pcd_initial_1072c440() { return 0xffffffff; }
int g_1072c440 = pcd_initial_1072c440();
// END FUNCTION

// FUNCTION: 0x101b9840 size=0xf
void sub_101cf250(void *p, int n);

// TARGET: sub_101b9840
void __fastcall sub_101b9840(char *pThis)
{
	sub_101cf250(pThis + 0x10, 2);
}
// END FUNCTION

// FUNCTION: 0x101b9860 size=0xf
void sub_101cf2f0(void *p, int n);

// TARGET: sub_101b9860
void __fastcall sub_101b9860(char *pThis)
{
	sub_101cf2f0(pThis + 0x10, 2);
}
// END FUNCTION

// FUNCTION: 0x101b9880 size=0x3b
extern int g_1070d1b0;
extern int g_1070d1b4;
extern int g_1070d1b8;

void __fastcall sub_101b9880(int *p)
{
    p[0] = -1;
    p[8] = g_1070d1b0;
    p[9] = g_1070d1b4;
    p[10] = g_1070d1b8;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    ((char *)p)[0x14] = 0;
    p[6] = -1;
    p[7] = 0;
}
// END FUNCTION

// FUNCTION: 0x101b98d0 size=0x32
extern int g_1070d1b0;
extern int g_1070d1b4;
extern int g_1070d1b8;

void __fastcall sub_101b98d0(int *p)
{
    p[8] = g_1070d1b0;
    p[9] = g_1070d1b4;
    p[10] = g_1070d1b8;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    *(char *)(p + 5) = 0;
    p[6] = -1;
}
// END FUNCTION

// FUNCTION: 0x101b9920 size=0x54
struct S101b9920 {
    int m0;
    int m4;
    bool sub_101b9920();
};
// TARGET: S101b9920::sub_101b9920
bool S101b9920::sub_101b9920()
{
    switch (m4) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
    case 0x100:
    case 0x200:
    case 0x400:
    case 0x800:
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x101b99a0 size=0x18
struct CUnk101b99a0 {
    char pad[4];
    int m_4;
    bool sub_101b99a0();
};

bool CUnk101b99a0::sub_101b99a0()
{
    switch (m_4) {
    case 0x20:
    case 0x40:
    case 0x80:
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x101b99d0 size=0x54
#include "CBaseEntity.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SEntSlots {
	V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
	V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
	V10(c0)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual const Vector *slot217();
};
struct S101b9920 {
    CHandle<SEntSlots> m0;
    int m4;
    char pad8[0x18];
    Vector m20;
    const Vector *sub_101b99d0();
};
// TARGET: S101b9920::sub_101b99d0
const Vector *S101b9920::sub_101b99d0()
{
    if (m4 == 0x10 || m4 == 0x400) {
        if (m0.Get())
            return m0->slot217();
    }
    return &m20;
}
// END FUNCTION

// FUNCTION: 0x101b9a50 size=0x930
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CSound.h"
#include "CSoundEnt.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include "Vector.h"

struct NpcV
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual void v14();
	virtual void v15();
	virtual void v16();
	virtual void v17();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual void v23();
	virtual void v24();
	virtual void v25();
	virtual void v26();
	virtual void v27();
	virtual void v28();
	virtual void v29();
	virtual void v30();
	virtual void v31();
	virtual void v32();
	virtual void v33();
	virtual void v34();
	virtual void v35();
	virtual void v36();
	virtual void v37();
	virtual void v38();
	virtual void v39();
	virtual void v40();
	virtual void v41();
	virtual void v42();
	virtual void v43();
	virtual void v44();
	virtual void v45();
	virtual void v46();
	virtual void v47();
	virtual void v48();
	virtual void v49();
	virtual void v50();
	virtual void v51();
	virtual void v52();
	virtual void v53();
	virtual void v54();
	virtual void v55();
	virtual void v56();
	virtual void v57();
	virtual void v58();
	virtual void v59();
	virtual void v60();
	virtual void v61();
	virtual void v62();
	virtual void v63();
	virtual void v64();
	virtual void v65();
	virtual void v66();
	virtual void v67();
	virtual void v68();
	virtual void v69();
	virtual void v70();
	virtual void v71();
	virtual void v72();
	virtual void v73();
	virtual void v74();
	virtual void v75();
	virtual void v76();
	virtual void v77();
	virtual void v78();
	virtual void v79();
	virtual void v80();
	virtual void v81();
	virtual void v82();
	virtual void v83();
	virtual void v84();
	virtual void v85();
	virtual void v86();
	virtual void v87();
	virtual void v88();
	virtual void v89();
	virtual void v90();
	virtual void v91();
	virtual void v92();
	virtual void v93();
	virtual void v94();
	virtual void v95();
	virtual void v96();
	virtual void v97();
	virtual void v98();
	virtual void v99();
	virtual void v100();
	virtual void v101();
	virtual void v102();
	virtual void v103();
	virtual void v104();
	virtual void v105();
	virtual void v106();
	virtual void v107();
	virtual void v108();
	virtual void v109();
	virtual void v110();
	virtual void v111();
	virtual void v112();
	virtual void v113();
	virtual void v114();
	virtual void v115();
	virtual void v116();
	virtual void v117();
	virtual void v118();
	virtual void v119();
	virtual void v120();
	virtual void v121();
	virtual void v122();
	virtual void v123();
	virtual void v124();
	virtual void v125();
	virtual void v126();
	virtual void v127();
	virtual void v128();
	virtual void v129();
	virtual void v130();
	virtual void v131();
	virtual void v132();
	virtual void v133();
	virtual void v134();
	virtual void v135();
	virtual void v136();
	virtual void v137();
	virtual void v138();
	virtual void v139();
	virtual void v140();
	virtual void v141();
	virtual void v142();
	virtual void v143();
	virtual void v144();
	virtual void v145();
	virtual void v146();
	virtual void v147();
	virtual void v148();
	virtual void v149();
	virtual void v150();
	virtual void v151();
	virtual void v152();
	virtual void v153();
	virtual void v154();
	virtual void v155();
	virtual void v156();
	virtual void v157();
	virtual char v158();
	virtual void v159();
	virtual void v160();
	virtual void v161();
	virtual void v162();
	virtual void v163();
	virtual void v164();
	virtual void v165();
	virtual void v166();
	virtual void v167();
	virtual void v168();
	virtual void v169();
	virtual void v170();
	virtual void v171();
	virtual void v172();
	virtual void v173();
	virtual void v174();
	virtual void v175();
	virtual void v176();
	virtual void v177();
	virtual void v178();
	virtual void v179();
	virtual void v180();
	virtual void v181();
	virtual void v182();
	virtual void v183();
	virtual void v184();
	virtual void v185();
	virtual void v186();
	virtual void v187();
	virtual void v188();
	virtual void v189();
	virtual void v190();
	virtual void v191();
	virtual void v192();
	virtual void v193();
	virtual void v194();
	virtual void v195();
	virtual void v196();
	virtual void v197();
	virtual void v198();
	virtual void v199();
	virtual void v200();
	virtual void v201();
	virtual void v202();
	virtual void v203();
	virtual void v204();
	virtual void v205();
	virtual void v206();
	virtual void v207();
	virtual void v208();
	virtual void v209();
	virtual void v210();
	virtual void v211();
	virtual void v212();
	virtual void v213();
	virtual void v214();
	virtual void v215();
	virtual void v216();
	virtual void v217();
	virtual void v218();
	virtual void v219();
	virtual const Vector &GetAbsOrigin();
	virtual void v221();
	virtual void v222();
	virtual void v223();
	virtual void v224();
	virtual void v225();
	virtual void v226();
	virtual void v227();
	virtual void v228();
	virtual void v229();
	virtual void v230();
	virtual void v231();
	virtual void v232();
	virtual void v233();
	virtual void v234();
	virtual void v235();
	virtual void v236();
	virtual void v237();
	virtual void v238();
	virtual void v239();
	virtual void v240();
	virtual void v241();
	virtual void v242();
	virtual void v243();
	virtual void v244();
	virtual void v245();
	virtual void v246();
	virtual void v247();
	virtual void v248();
	virtual void v249();
	virtual void v250();
	virtual void v251();
	virtual void v252();
	virtual void v253();
	virtual void v254();
	virtual void v255();
	virtual void v256();
	virtual void v257();
	virtual void v258();
	virtual void v259();
	virtual void v260();
	virtual void v261();
	virtual void v262();
	virtual void v263();
	virtual void v264();
	virtual void v265();
	virtual void v266();
	virtual void v267();
	virtual void v268();
	virtual void v269();
	virtual void v270();
	virtual void v271();
	virtual void v272();
	virtual void v273();
	virtual void v274();
	virtual void v275();
	virtual void v276();
	virtual void v277();
	virtual void v278();
	virtual void v279();
	virtual void v280();
	virtual void v281();
	virtual void v282();
	virtual void v283();
	virtual void v284();
	virtual void v285();
	virtual void v286();
	virtual void v287();
	virtual void v288();
	virtual void v289();
	virtual void v290();
	virtual void v291();
	virtual void v292();
	virtual void v293();
	virtual void v294();
	virtual void v295();
	virtual void v296();
	virtual void v297();
	virtual void v298();
	virtual void v299();
	virtual void v300();
	virtual void v301();
	virtual void v302();
	virtual void v303();
	virtual void v304();
	virtual void v305();
	virtual void v306();
	virtual void v307();
	virtual void v308();
	virtual void v309();
	virtual void v310();
	virtual void v311();
	virtual void v312();
	virtual void v313();
	virtual void v314();
	virtual void v315();
	virtual void v316();
	virtual void v317();
	virtual void v318();
	virtual void v319();
	virtual void v320();
	virtual void v321();
	virtual void v322();
	virtual void v323();
	virtual void v324();
	virtual void v325();
	virtual void v326();
	virtual void v327();
	virtual void v328();
	virtual void v329();
	virtual void v330();
	virtual void v331();
	virtual void v332();
	virtual void v333();
	virtual void v334();
	virtual void v335();
	virtual void v336();
	virtual void v337();
	virtual void v338();
	virtual void v339();
	virtual void v340();
	virtual void v341();
	virtual void v342();
	virtual void v343();
	virtual void v344();
	virtual void v345();
	virtual void v346();
	virtual void v347();
	virtual void v348();
	virtual void v349();
	virtual void v350();
	virtual void v351();
	virtual void v352();
	virtual void v353();
	virtual void v354();
	virtual void v355();
	virtual void v356();
	virtual void v357();
	virtual void v358();
	virtual void v359();
	virtual void v360();
	virtual void v361();
	virtual void v362();
	virtual void v363();
	virtual void v364();
	virtual void v365();
	virtual void v366();
	virtual void v367();
	virtual Vector *v368(Vector *pOut);
	virtual void v369();
	virtual void v370();
	virtual void v371();
	virtual void v372();
	virtual void v373();
	virtual void v374();
	virtual void v375();
	virtual void v376();
	virtual void v377();
	virtual void v378();
	virtual void v379();
	virtual void v380();
	virtual void v381();
	virtual void v382();
	virtual void v383();
	virtual void v384();
	virtual void v385();
	virtual void v386();
	virtual void v387();
	virtual void v388();
	virtual void v389();
	virtual void v390();
	virtual void v391();
	virtual void v392();
	virtual void v393();
	virtual void v394();
	virtual void v395();
	virtual void v396();
	virtual void v397();
	virtual void v398();
	virtual void v399();
	virtual void v400();
	virtual void v401();
	virtual void v402();
	virtual void v403();
	virtual void v404();
	virtual void v405();
	virtual void v406();
	virtual void v407();
	virtual void v408();
	virtual void v409();
	virtual void v410();
	virtual void v411();
	virtual void v412();
	virtual void v413();
	virtual void v414();
	virtual void v415();
	virtual void v416();
	virtual void v417();
	virtual void v418();
	virtual void v419();
	virtual void v420();
	virtual void v421();
	virtual void v422();
	virtual void v423();
	virtual void v424();
	virtual void v425();
	virtual void v426();
	virtual void v427();
	virtual void v428();
	virtual void v429();
	virtual void v430();
	virtual void v431();
	virtual void v432();
	virtual void v433();
	virtual void v434();
	virtual void v435();
	virtual void v436();
	virtual void v437();
	virtual void v438();
	virtual void v439();
	virtual void v440();
	virtual void v441();
	virtual void v442();
	virtual void v443();
	virtual void v444();
	virtual void v445();
	virtual void v446();
	virtual void v447();
	virtual void v448();
	virtual void v449();
	virtual void v450();
	virtual void v451();
	virtual void v452();
	virtual void v453();
	virtual void v454();
	virtual void v455();
	virtual void v456();
	virtual void v457();
	virtual void v458();
	virtual void v459();
	virtual void v460();
	virtual void v461();
	virtual void v462();
	virtual void v463();
	virtual void v464();
	virtual void v465();
	virtual void v466();
	virtual void v467();
	virtual void v468();
	virtual void v469();
	virtual void v470();
	virtual void v471();
	virtual void v472();
	virtual void v473();
	virtual void v474();
	virtual void v475();
	virtual float HearingSensitivity();

	char sub_100b5190();
	float sub_102703f0(void *pSound, float *pVolume);
};

struct ListEntV { char pad[0x98]; NpcV *m_pNPC; };
struct CharV { bool sub_101671a0(); };
struct OwnerV { char pad[0xa8]; CharV *m_pChar; float sub_1009d850(void *pSound, float *pVolume); };
struct StealthRulesV
{
	float sub_101bf060(CharV *pListener, NpcV *pTarget);
	float sub_101bea90(CharV *pEntity);
};
extern StealthRulesV g_1072c540;

struct CSoundV
{
	unsigned int m_hOwner;	// 0x00
	int m_iType;	// 0x04
	int m_iVolume;	// 0x08
	int m_pad0c;
	float m_flExpireTime;	// 0x10
	bool m_bNoNotify;	// 0x14
	char m_pad15[0x20 - 0x15];
	Vector m_vecOrigin;	// 0x20
};

CBaseEntity *sub_101cd9e0(int index);
int sub_101cca80(ListEntV **pList, int nMax, const Vector &mins, const Vector &maxs, int mask, int a6);
void sub_10144a30(const Vector &vecPos, const Vector &vecAxis, float flRadius, float flSegments, int r, int g, int b, int a, float flDuration);
void sub_10144290(const Vector &vecPos, const Vector &vecAxis, const Vector &vecSize, int r, int g, int b, int a, float flDuration);
void sub_10144db0(const Vector &vecPos, const Vector &vecDir, float f3, float f4, float f5, int r, int g, int b, int a, float flDuration);
const char *sub_101d3730(const char *pszFormat, ...);
void sub_10143710(const Vector &vecPos, const char *pszText, int unused, float flDuration);

extern CSoundEnt *g_1072c464;
extern unsigned int g_1072c440;

#define SEFLAGS (*(unsigned char *)((char *)g_1072c464 + 0x460))
#define SV ((CSoundV *)this)
#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif

inline Vector MulV(const Vector &v, float f) { return Vector(v.x * f, v.y * f, v.z * f); }
inline Vector MulV2(const Vector &v, float f) { Vector r; r.x = v.x * f; r.y = v.y * f; r.z = v.z * f; return r; }
inline Vector UpZ(const Vector &v) { Vector r; r.x = v.x; r.y = v.y; r.z = v.z + 10.0f; return r; }

// TARGET: CSound::sub_101b9a50
void CSound::sub_101b9a50(int a)
{
	if (SEFLAGS & 8)
	{
		CBaseEntity *pPlayer = sub_101cd9e0(1);
		if (pPlayer != (CBaseEntity *)g_10566458->sub_100290c0(&SV->m_hOwner))
			return;
	}

	float flVolume;
	float flDuration = max(1.0f, SV->m_flExpireTime - gpGlobals->curtime);

	if ((SEFLAGS & 2) && g_10566458->sub_100290c0(&g_1072c440))
	{
		Vector vecCenter = ((NpcV *)g_10566458->sub_100290c0(&g_1072c440))->GetAbsOrigin();
		static Vector s_vecRange(2048.0f, 2048.0f, 2048.0f);
		ListEntV *pList[100];
		int nCount = sub_101cca80(pList, 100, vecCenter - s_vecRange, vecCenter + s_vecRange, 0x2000, 0);
		for (int i = 0; i < nCount; i++)
		{
			NpcV *pNPC = pList[i]->m_pNPC;
			if (!pNPC)
				continue;
			if ((NpcV *)g_10566458->sub_100290c0(&SV->m_hOwner) == pNPC)
				continue;
			if (!pNPC->v158())
				continue;
			if (pNPC->sub_100b5190())
				continue;
			{ Vector vecOrigin = pNPC->GetAbsOrigin();
			flVolume = pNPC->HearingSensitivity() * SV->m_iVolume;
			if (EHandle_Get(SV->m_hOwner))
				((OwnerV *)EHandle_Get(SV->m_hOwner))->sub_1009d850(this, &flVolume);

			if ((SEFLAGS & 0x10) && SV->m_iType == 4)
			{
				OwnerV *pOwner = (OwnerV *)EHandle_Get(SV->m_hOwner);
				if (pOwner)
				{
					CharV *pChar = pOwner->m_pChar;
					if (pChar && flVolume != 0.0f && pChar->sub_101671a0())
					{
						float flMinDepth = g_1072c540.sub_101bf060(pChar, pNPC);
						float flDist = flVolume;
						float flRange = min(flDist, flMinDepth);
						float flVis = g_1072c540.sub_101bea90(pChar);
						Vector vecTmp;
						Vector vecDir = *pNPC->v368(&vecTmp) * -1.0f;
						sub_10144db0(vecOrigin, vecDir, flRange, 10.0f, flVis, 0xff, 0, 0, 100, flDuration);
						sub_10144db0(vecOrigin, vecDir, flDist, 2.0f, flVis, 0, 0xff, 0, 50, flDuration);
						Vector vecPos = vecOrigin + vecDir * flRange;
						sub_10143710(vecPos, sub_101d3730("deaf zone min depth: %.2f", flMinDepth), 0, flDuration);
					}
				}
			}

			if (((CSoundV *)this)->m_bNoNotify)
			{
				float flHeard = flVolume;
				pNPC->sub_102703f0(this, &flHeard);
				if (!(SEFLAGS & 4))
				{
					Vector vecPos = UpZ(vecOrigin);
					sub_10144a30(vecPos, Vector(1.0f, 0.0f, 0.0f), flVolume, 20.0f, 0x80, 0x20, 0x80, a >> 4, flDuration);
					sub_10144a30(vecPos, Vector(1.0f, 0.0f, 0.0f), flHeard, 20.0f, 0x80, 0x20, 0x80, a, flDuration);
				}
				else
				{
					sub_10144290(vecOrigin, Vector(1.0f, 0.0f, 0.0f), Vector(flVolume, flVolume, flVolume), 0x80, 0x20, 0x80, a >> 4, flDuration);
					sub_10144290(vecOrigin, Vector(1.0f, 0.0f, 0.0f), Vector(flHeard, flHeard, flHeard), 0x80, 0x20, 0x80, a, flDuration);
				}
			}
			else
			{
				if (!(SEFLAGS & 4))
				{
					Vector vecPos = UpZ(vecOrigin);
					sub_10144a30(vecPos, Vector(1.0f, 0.0f, 0.0f), flVolume, 20.0f, 0x80, 0x20, 0x80, a, flDuration);
				}
				else
				{
					sub_10144290(vecOrigin, Vector(1.0f, 0.0f, 0.0f), Vector(flVolume, flVolume, flVolume), 0x80, 0x20, 0x80, a, flDuration);
				}
			} }
		}
	}
	else
	{
		flVolume = SV->m_iVolume;
		if (EHandle_Get(SV->m_hOwner))
			((OwnerV *)EHandle_Get(SV->m_hOwner))->sub_1009d850(this, &flVolume);
		if (!(SEFLAGS & 4))
		{
			Vector vecPos = UpZ(SV->m_vecOrigin);
			sub_10144a30(vecPos, Vector(1.0f, 0.0f, 0.0f), flVolume, 20.0f, 0x20, 0x20, 0x80, a, flDuration);
		}
		else
		{
			sub_10144290(SV->m_vecOrigin, Vector(1.0f, 0.0f, 0.0f), Vector(flVolume, flVolume, flVolume), 0x20, 0x20, 0x80, a, flDuration);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101ba5f0 size=0x5
int sub_101ba630(void);
int g_1072c444 = ((int (*)(int))sub_101ba630)(0);
// END FUNCTION

// FUNCTION: 0x101ba630 size=0x1a
namespace lifted {
extern int g_10599c80;
extern int g_10599c84;
extern char g_10599cc4;
}
int sub_101ba630()
{
    lifted::g_10599c84 = 8;
    lifted::g_10599c80 = (int)&lifted::g_10599cc4;
    return (int)&lifted::g_10599c80;
}
// END FUNCTION

// FUNCTION: 0x101ba660 size=0x6
#include "datamap.h"
#include "CSoundEnt.h"
namespace lifted {
extern char g_10599e24;
}
datamap_t *CSoundEnt::vfunc82()
{
    return (datamap_t *)&lifted::g_10599e24;
}
// END FUNCTION

// FUNCTION: 0x101ba680 size=0x5
int sub_101ba6c0(void);
int g_1072c43c = ((int (*)(int))sub_101ba6c0)(0);
// END FUNCTION

// FUNCTION: 0x101ba6c0 size=0x1a
namespace lifted {
extern int g_10599e24;
extern int g_10599e28;
extern char g_10599e6c;
}
int sub_101ba6c0()
{
    lifted::g_10599e28 = 5;
    lifted::g_10599e24 = (int)&lifted::g_10599e6c;
    return (int)&lifted::g_10599e24;
}
// END FUNCTION

// FUNCTION: 0x101ba6f0 size=0xa5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSoundEnt.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"


void CSoundEnt::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)(void *)this;
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)pEnt + 0x270))->sub_100dc480(0);
	}
	pEnt->sub_100b3b00();
	sub_101baf80();
	*(float *)((char *)pEnt + 0x17c) = gpGlobals->curtime + 1.0f;
}
// END FUNCTION

// FUNCTION: 0x101ba7d0 size=0x49
#include "CSoundEnt.h"

// TARGET: CSoundEnt::vfunc126
int CSoundEnt::vfunc126(int a)
{
	for (int i = 0; i < 0x40; i++)
		m_SoundPool[i].sub_101b9840();
	int result = sub_100a9f70(a);
	for (int j = 0; j < 0x40; j++)
		m_SoundPool[j].sub_1000a493();
	return result;
}
// END FUNCTION

// FUNCTION: 0x101ba840 size=0x31
#include "CSoundEnt.h"

// TARGET: CSoundEnt::vfunc127
int CSoundEnt::vfunc127(int a)
{
    int result = sub_1000961a(a);
    CSoundEntSlot *pSlot = m_SoundPool;
    for (int i = 0x40; i != 0; i--) {
        pSlot->sub_1000a493();
        pSlot++;
    }
    return result;
}
// END FUNCTION

// FUNCTION: 0x101ba890 size=0xd2
#include "CSoundEnt.h"


extern "C" __declspec(dllimport) void DevMsg(int level, const char *fmt, ...);

void CSoundEnt::vfunc134()
{
    m_flNextThink = gpGlobals->curtime + 0.3;
    int iPrevious = -1;
    int iSound = m_iActiveSound;
    while (iSound != -1) {
        if (*(float *)&m_SoundPool[iSound].m_flExpireTime + 4.0f <= gpGlobals->curtime && m_SoundPool[iSound].m_flExpireTime != 0xbf800000) {
            int iNext = m_SoundPool[iSound].m_iNext;
            sub_101ba9d0(iSound, iPrevious);
            iSound = iNext;
        } else {
            iPrevious = iSound;
            iSound = m_SoundPool[iSound].m_iNext;
        }
    }
    if (m_bShowReport) {
        int n = sub_101bb070(2) - m_cLastActiveSounds;
        DevMsg(2, "Soundlist: %d / %d  (%d)\n", sub_101bb070(2), sub_101bb070(1), n);
        m_cLastActiveSounds = sub_101bb070(2);
    }
    sub_101bb350();
}
// END FUNCTION

// FUNCTION: 0x101ba9b0 size=0x1
#include "CSoundEnt.h"
void CSoundEnt::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x101ba9d0 size=0x123
#include "CSoundEnt.h"
#include "CGlobalEntityList.h"

struct CSoundRec
{
	unsigned int m_hOwner;	// 0x00
	int m_iType;	// 0x04
	char m_pad08[8];
	float m_flExpireTime;	// 0x10
	char m_pad14[4];
	int m_iNext;	// 0x18
	char m_pad1c[0x2c - 0x1c];
};

struct CSoundEntData
{
	char m_pad0000[0x450];
	int m_iFreeList;	// 0x450
	int m_iActiveList;	// 0x454
	char m_pad0458[0x464 - 0x458];
	CSoundRec m_SoundPool[1];	// 0x464
};

struct CSoundOwner
{
	const char *sub_100ab4f0();	// the debug name of the entity
};

struct CSoundDebugVar	// the console variable that enables the report
{
	virtual void v0();
	virtual char IsSet();
	char m_pad[0x28];
	int m_nValue;	// 0x2c
};

struct CSoundSlot
{
	CSoundOwner *m_pEntity;
	int m_Serial;
	int m_pad;
};


extern CSoundEntData *g_1072c464;
extern CSoundDebugVar *g_109243ec;
extern CGlobalEntityList *g_10566458;
extern void (__cdecl *g_109f3630)(const char *fmt, ...);

struct CSoundHandle
{
	unsigned int m_Index;

	bool IsValid()
	{
		if (m_Index == 0xffffffff)
			return false;
		CSoundSlot *pSlot = (CSoundSlot *)((char *)g_10566458 + 4) + (m_Index & 0x1fff);
		return pSlot->m_Serial == (int)(m_Index >> 13) && pSlot->m_pEntity != 0;
	}

	CSoundOwner *Get()
	{
		if (m_Index != 0xffffffff)
		{
			CSoundSlot *pSlot = (CSoundSlot *)((char *)g_10566458 + 4) + (m_Index & 0x1fff);
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

// TARGET: CSoundEnt::sub_101ba9d0
void CSoundEnt::sub_101ba9d0(int iSound, int iPrevious)
{
	if (!g_1072c464)
		return;
	if (!g_109243ec->IsSet() && g_109243ec->m_nValue)
	{
		CSoundRec *pSound = &g_1072c464->m_SoundPool[iSound];
		const char *pszOwner;
		CSoundHandle *pHandle = (CSoundHandle *)&pSound->m_hOwner;
		if (pHandle->IsValid())
			pszOwner = pHandle->Get()->sub_100ab4f0();
		else
			pszOwner = "**UNKNOWN**";
		g_109f3630("Freeing sound id(%d) type(%d) owner(%s) expire(%.2f) at %f\n", -1, pSound->m_iType, pszOwner, (double)pSound->m_flExpireTime, (double)gpGlobals->curtime);
	}
	if (iPrevious != -1)
		g_1072c464->m_SoundPool[iPrevious].m_iNext = g_1072c464->m_SoundPool[iSound].m_iNext;
	else
		g_1072c464->m_iActiveList = g_1072c464->m_SoundPool[iSound].m_iNext;
	g_1072c464->m_SoundPool[iSound].m_iNext = g_1072c464->m_iFreeList;
	g_1072c464->m_iFreeList = iSound;
}
// END FUNCTION

// FUNCTION: 0x101bab50 size=0x48
#include "CSoundEnt.h"

extern void (__cdecl *g_109f3630)(const char *fmt, ...);

// TARGET: CSoundEnt::sub_101bab50
int CSoundEnt::sub_101bab50()
{
	if (m_iFreeSound == -1)
	{
		g_109f3630("Free Sound List is empty!\n");
		return -1;
	}
	int iNewSound = m_iFreeSound;
	m_iFreeSound = m_SoundPool[iNewSound].m_iNext;
	m_SoundPool[iNewSound].m_iNext = m_iActiveSound;
	m_iActiveSound = iNewSound;
	return iNewSound;
}
// END FUNCTION

// FUNCTION: 0x101babc0 size=0x9c
#include "CAI_BaseNPC_vfunc144.h"
#include "CLogicAuto.h"
#include "CSoundEnt.h"

struct CSoundRec
{
	int m_iNext;
	int m_iType;
	int m_iVolume;
	float m_flTime;
	float m_flExpire;
	char m_bFlag;
	char m_pad15[0x20 - 0x15];
	Vector m_vOrigin;

	void sub_101b9a50(int a);
};

struct CSoundEntView
{
	char m_pad0000[0x460];
	unsigned char m_flDebug;
	char m_pad0461[3];
	CSoundRec m_Sounds[1];

	int sub_101bab50();
};

extern CSoundEntView *g_1072c464;
extern void (__cdecl *g_109f3630)(const char *pszFormat, ...);

void CSoundEnt::sub_101babc0(int iType, const Vector *pOrigin, int iVolume, float flDuration, char bFlag)
{
	if (g_1072c464) {
		int iSound = g_1072c464->sub_101bab50();
		if (iSound == -1) {
			g_109f3630("Could not AllocSound() for InsertSound() (DLL)\n");
			return;
		}
		CSoundRec *pSound = &g_1072c464->m_Sounds[iSound];
		pSound->m_vOrigin = *pOrigin;
		pSound->m_iType = iType;
		pSound->m_iVolume = iVolume;
		pSound->m_flTime = gpGlobals->curtime;
		pSound->m_flExpire = flDuration + gpGlobals->curtime;
		pSound->m_bFlag = bFlag;
		pSound->m_iNext = -1;
		if (g_1072c464->m_flDebug & 3)
			pSound->sub_101b9a50(100);
	}
}
// END FUNCTION

// FUNCTION: 0x101bac90 size=0x245
// TARGET: CSoundEnt::sub_101bac90

#include "CSoundEnt.h"
#include "CSound.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "globalvars.h"
#include "Tier1.h"
#include "Vector.h"

class CSoundDebugVar
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();

	char m_pad0004[0x28];
	int m_n2c;
};

class SList2
{
public:
	void sub_10227a30(int a, int b);
};

extern CSoundEnt *g_1072c464;
extern CSoundDebugVar *g_109243ec;
extern int g_1072bcd8;
extern SList2 g_10750cb4;

void CSoundEnt::sub_101bac90(int iType, const Vector *pOrigin, int iVolume, float flDuration, char bFlag, CBaseEntity *pOwner)
{
	if (g_1072c464 == 0)
		return;

	int iSound = g_1072c464->sub_101bab50();
	if (iSound == -1)
	{
		g_109f3630("Could not AllocSound() for InsertSound() (DLL)\n");
		return;
	}

	CSound *pSound = (CSound *)&g_1072c464->m_SoundPool[iSound];

	pSound->m_vecOrigin = *pOrigin;
	pSound->m_iType = iType;
	pSound->m_iVolume = iVolume;
	*(float *)((char *)pSound + 0x0c) = gpGlobals->curtime;
	*(float *)((char *)pSound + 0x10) = flDuration + gpGlobals->curtime;
	*(char *)((char *)pSound + 0x14) = bFlag;

	*(EHANDLE *)pSound = pOwner;
	if (pOwner)
	{
		CBaseEntity *pPlayer = (CBaseEntity *)pOwner->m_pA8;
		if (pPlayer)
		{
			static int s_nLastVolume = g_1072bcd8;
			if (iVolume == s_nLastVolume)
				g_10750cb4.sub_10227a30((int)pPlayer, 6);
		}
	}

	if (!g_109243ec->vfunc1() && g_109243ec->m_n2c != 0)
	{
		const char *pszType;
		switch (iType)
		{
		case 0: pszType = "NONE"; break;
		case 1: pszType = "COMBAT"; break;
		case 2: pszType = "WORLD"; break;
		case 4: pszType = "PLAYER"; break;
		case 8: pszType = "DANGER"; break;
		case 0x10: pszType = "BULLET_IMPACT"; break;
		case 0x20: pszType = "CARCASS"; break;
		case 0x40: pszType = "MEAT"; break;
		case 0x80: pszType = "GARBAGE"; break;
		case 0x100: pszType = "THUMPER"; break;
		case 0x200: pszType = "BUGBAIT"; break;
		case 0x400: pszType = "PHYSICS_DANGER"; break;
		case 0x800: pszType = "FLINCH"; break;
		default: pszType = "NONE"; break;
		}

		g_109f3630("InsertSound( %s, [%d,%d,%d], %d, %f ) id %d called at %f\n",
				   pszType, (int)pOrigin->x, (int)pOrigin->y, (int)pOrigin->z,
				   iVolume, flDuration, -1, gpGlobals->curtime);
	}

	if ((*(unsigned char *)((char *)g_1072c464 + 0x460) & 3) != 0)
		pSound->sub_101b9a50(100);
}
// END FUNCTION

// FUNCTION: 0x101baf80 size=0xbd
#include "CSoundEnt.h"

struct CSoundView
{
	int m_iNext0;
	int m_n04;
	int m_n08;
	int m_n0c;
	float m_flExpireTime;
	char m_pad14[4];
	int m_iNext;
	char m_pad1c[0x2c - 0x1c];

	void sub_101b9880();
};


struct CGameRulesView
{
	virtual void v0();
	virtual bool slot1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};

struct CSoundEntInitView
{
	char m_pad0000[0x450];
	int m_iFreeSound;
	int m_iActiveSound;
	char m_pad0458[0x45c - 0x458];
	char m_bShowReport;
	char m_pad045d[0x464 - 0x45d];
	CSoundView m_SoundPool[64];

	int sub_101bab50();
};

extern CGameRulesView *g_1070accc;
extern void (__cdecl *g_109f3630)(const char *, ...);

void CSoundEnt::sub_101baf80()
{
	CSoundEntInitView *p = (CSoundEntInitView *)this;
	int i;
	p->m_iFreeSound = 0;
	p->m_iActiveSound = -1;
	for (i = 0; i < 64; i++) {
		p->m_SoundPool[i].sub_101b9880();
		p->m_SoundPool[i].m_iNext = i + 1;
	}
	p->m_SoundPool[i - 1].m_iNext = -1;
	for (i = 0; i < gpGlobals->maxClients; i++) {
		int iSound = p->sub_101bab50();
		if (iSound == -1) {
			g_109f3630("Could not AllocSound() for Client Reserve! (DLL)\n");
			return;
		}
		p->m_SoundPool[iSound].m_flExpireTime = -1;
	}
	if (!g_1070accc->slot1()) {
		int nMode = g_1070accc->m_n2c;
		if (nMode == 1) {
			p->m_bShowReport = nMode;
			return;
		}
	}
	p->m_bShowReport = 0;
}
// END FUNCTION

// FUNCTION: 0x101bb070 size=0x53
#include "CSoundEnt.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);

int CSoundEnt::sub_101bb070(int iListType)
{
	int i;
	int iThisSound = -1;

	if (iListType == 1)
	{
		iThisSound = m_iFreeSound;
	}
	else if (iListType == 2)
	{
		iThisSound = m_iActiveSound;
	}
	else
	{
		DevMsg("Unknown Sound List Type!\n");
	}

	if (iThisSound == -1)
	{
		return 0;
	}

	i = 0;

	while (iThisSound != -1)
	{
		i++;

		iThisSound = m_SoundPool[iThisSound].m_iNext;
	}

	return i;
}
// END FUNCTION

// FUNCTION: 0x101bb0f0 size=0x14
extern char *g_1072c464;

int sub_101bb0f0()
{
	if (!g_1072c464)
		return -1;
	return *(int *)(g_1072c464 + 0x454);
}
// END FUNCTION

// FUNCTION: 0x101bb120 size=0x14
extern char *g_1072c464;

int sub_101bb120()
{
	if (!g_1072c464)
		return -1;
	return *(int *)(g_1072c464 + 0x450);
}
// END FUNCTION

// FUNCTION: 0x101bb150 size=0x9d
#include "CSound.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSoundEnt.h"
#include "ScopeTrace.h"

extern char *g_1072c464;
extern void (__cdecl *g_109f3630)(const char *pszFormat, ...);

CSound *CSoundEnt::sub_101bb150(int index)
{
	ScopeTrace trace("CSoundEnt::SoundPointerForIndex", g_106b8540);
	if (!g_1072c464)
		return 0;
	if (index > 63) {
		g_109f3630("SoundPointerForIndex() - Index too large!\n");
		return 0;
	}
	if (index < 0) {
		g_109f3630("SoundPointerForIndex() - Index < 0!\n");
		return 0;
	}
	return (CSound *)(g_1072c464 + 0x464 + index * 0x2c);
}
// END FUNCTION

// FUNCTION: 0x101bb220 size=0x6b
struct ScopeEntry {
    const char *a;
    const char *b;
    const char *c;
};
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int sub_101bb220(int a)
{
    g_109f3620[*g_109f3680].a = "CSoundEnt::ClientSoundIndex";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = engine->vfunc35(a) - 1;
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x101bb2b0 size=0x1c
extern char *g_1072c464;

// TARGET: sub_101bb2b0
void sub_101bb2b0(unsigned int flags)
{
	if (g_1072c464) {
		*(unsigned int *)(g_1072c464 + 0x460) |= flags;
	}
}
// END FUNCTION

// FUNCTION: 0x101bb2e0 size=0x1e
struct CUnk101bb2e0
{
    char pad[0x460];
    unsigned int m_460;
};
extern CUnk101bb2e0 *g_1072c464;

void sub_101bb2e0(unsigned int flags)
{
    if (g_1072c464)
    {
        g_1072c464->m_460 &= ~flags;
    }
}
// END FUNCTION

// FUNCTION: 0x101bb310 size=0x2a
extern char *g_1072c464;

// TARGET: sub_101bb310
unsigned int sub_101bb310(unsigned int flags)
{
    if (g_1072c464 == 0) {
        return 0;
    }
    *(unsigned int *)(g_1072c464 + 0x460) = *(unsigned int *)(g_1072c464 + 0x460) ^ flags;
    return *(unsigned int *)(g_1072c464 + 0x460) & flags;
}
// END FUNCTION

// FUNCTION: 0x101bb350 size=0x1
void sub_101bb350()
{
}
// END FUNCTION

// FUNCTION: 0x101bb370 size=0x8e
#include "CSoundEnt.h"
#include "CSound.h"

// TARGET: CSoundEnt::sub_101bb370
CSound *CSoundEnt::sub_101bb370(int iType, const Vector *pOrigin)
{
    CSound *pBest = 0;
    float flBest = 268435456.0f;
    for (int iSound = sub_101bb0f0(); iSound != -1; )
    {
        CSound *pSound = sub_101bb150(iSound);
        if (pSound && pSound->m_iType == iType)
        {
            Vector vecDelta;
            VectorSubtract(pSound->m_vecOrigin, *pOrigin, vecDelta);
            float flDist = FastSqrt(vecDelta.y * vecDelta.y + vecDelta.z * vecDelta.z + vecDelta.x * vecDelta.x);
            if (flDist < flBest)
            {
                flBest = flDist;
                pBest = pSound;
            }
        }
        iSound = pSound->m_iNext;
    }
    return pBest;
}
// END FUNCTION

// FUNCTION: 0x101bb430 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1047b87c[];	// CAISound vftable
extern const char g_1059a4cc[];

// TARGET: ai_sound
DLL_EXPORT CBaseEntity *ai_sound()
{
	void *mem = sub_100aa720(0x454);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1047b87c;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_1059a4cc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101bb4a0 size=0x6
#include "datamap.h"
#include "CAISound.h"
namespace lifted {
extern char g_10599f48;
}
datamap_t *CAISound::vfunc82()
{
    return (datamap_t *)&lifted::g_10599f48;
}
// END FUNCTION

// FUNCTION: 0x101bb4c0 size=0x5
int sub_101bb500(void);
int g_1072c460 = ((int (*)(int))sub_101bb500)(0);
// END FUNCTION

// FUNCTION: 0x101bb500 size=0x1a
namespace lifted {
extern int g_10599f48;
extern int g_10599f4c;
extern char g_10599f8c;
}
int sub_101bb500()
{
    lifted::g_10599f4c = 2;
    lifted::g_10599f48 = (int)&lifted::g_10599f8c;
    return (int)&lifted::g_10599f48;
}
// END FUNCTION

// FUNCTION: 0x101bb530 size=0x3b
#include "CAISound.h"
#include "CSoundEnt.h"
#include "inputdata_t.h"
#include "CEntityVSlots.h"
// TARGET: CAISound::sub_101bb530
void CAISound::sub_101bb530(inputdata_t *pInput)
{
	CSoundEnt::sub_101bac90(m_iSoundType, ((CEntityVSlots *)this)->slot217(), pInput->value.IntOrZero(), 0.2f, 0, this);
}
// END FUNCTION

// FUNCTION: 0x101bb580 size=0x1e
#include "CSoundEnt.h"

void sub_100aa7b0(void *p);

// TARGET: CSoundEnt::vfunc5
CBaseEntity *CSoundEnt::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x101bb5b0 size=0x1e
#include "CAISound.h"

void sub_100aa7b0(void *p);

// TARGET: CAISound::vfunc5
CBaseEntity *CAISound::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
