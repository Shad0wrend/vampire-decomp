// CFire: declared by pcdecomp transplant for 0x10109c10 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

struct CFireIntPair { int a; int b; };	// two dwords passed by value

class CFire : public CBaseEntity
{
public:
	CFire *vfunc5(unsigned int flags);
	virtual void vfunc104();	// slot 104 "Precache": the firesmoke / plasma particle systems by the type at +0x458, the two fire sounds
	void vfunc103();	// slot 103 \"CFire::Spawn\": the base Spawn and Precache, the fire box (-8, -8, 0 to 8, 8, 8), the heat level from the heat (x 0.05), sub_1010a450 with the origin and the fire fields, then the removed env_fire warning: creates an env_fire entity (sub_1020a0a0), puts two red messages on it, sizes it from the fire size and runs sub_10014614
	void sub_1010a450(const float *pOrigin, float flSize, int a, int b, unsigned int nFlags, int c);	// stub 0x10004ae3: sets the fire up from the origin and the fire fields (+0x468, +0x480, +0x45c, spawnflags, +0x458)
	void vfunc113();	// slot 113 (0x1010a330): CBaseEntity::vfunc113, then if the flags at +0x204 have 4: the heat-fire field +0x478 is copied to +0x46c and sub_10109e90 runs (tail call)
	void sub_10109e90();	// the tail call of vfunc113 (stub 0x1000105a)
	void sub_10109a20(CBaseEntity *p);	// (0x10109a20) when the field at +0x9c of p is set, the time (curtime) goes into +0x460 of this; then CBaseEntity::vfunc174(p) (stub 0x10009caf, tail call)
	void vfunc123();	// slot 123 \"DrawDebugGeometryOverlays\"-like: while the fire burns (heat at +0x470 above 0, burn-out time at +0x464 ahead) draws its box (colour 0x58, 0xff, 0x80) and a \"Heat\" text line, else (unless sub_1010a8d0 holds) a dimmer box; then CBaseEntity::vfunc123
	bool sub_1010a8d0();	// stub 0x1000e4f8, asked when the fire is not burning
	void sub_100a0130();	// CBaseEntity::vfunc123, called directly (stub 0x10005880)
	CFire *sub_10109990();	// as in CKeepUpright (transplant)
	void vfunc180();
	void sub_1010b3c0();	// removes the smoke entity of the handle at +0x450 (slot 243(0), then UTIL_Remove)
	void sub_1010b530(float flTime);	// sets the burn update (sub_1010b7d0 with 0 and the time), installs the think sub_1010b470, burn-out time (+0x48c) = time + curtime, next think = curtime + 0.1
	void sub_1010b7d0(int a, int b);	// "forward to slot 242 of the smoke entity (handle +0x450)"; near miss, see notes
	void sub_1010b5c0(float flHeat, char bInstant);	// adds heat to the fire (stub 0x10008a03)
	void sub_1010a370(int a, float b);	// creates the \"firesmoke\" entity of this fire (called with the field at +0x458 and a size float; the fields at +0x450 / +0x458 are modelled by the views of the sources)
	void sub_1010b470();	// the fire's think: burns out (sub_1010b9d0) once the burn-out time at +0x48c has passed, else lets the smoke entity at +0x450 fade (sub_1010a900 with the remaining time over the smoke's lifetime at +0x458); thinks again 0.1 seconds later
	bool sub_1010b9d0();	// stub 0x1000147e: puts the fire out: fires the output at +0x4ac, lowers the heat (+0x46c) by 20, stops thinking and either removes the entity (spawnflag 0x80, returns true) or shrinks it to a small box and stops its two fire sounds (returns false)
	void sub_1010a900(float flFade);	// stub 0x10007432: plays the fire sounds with the volume scaled by flFade
	void sub_1010a7f0();	// lights the fire: sizes the entity from the fire size at +0x468 (a box a quarter of it wide and as tall), creates the smoke (sub_1010a370), fires the output at +0x494, installs the think function sub_1010b430 and runs it once
	void sub_1010b430();	// stub 0x1000d33c: thinks again 0.01 seconds later and refreshes the fire (slot 241)
	void sub_1010b840(float flTime);	// the fire's burn update (only while the byte at +0x490 is set): burn-out time (+0x464) = curtime + 0.5, heat (+0x46c) falls by flTime, the heat level (+0x470) rises by a convar rate times flTime up to a convar limit, the float at +0x480 follows 0.3125 x the float at +0x478 (sub_1013d400, frametime x 2); once the heat is used up it is zeroed and, if it was still positive before, the fire is put out (sub_1010b9d0)
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141();
	virtual int vfunc142(int);
	virtual void v143(); virtual void v144(); virtual void v145(); virtual void v146(); virtual void v147(); virtual void v148(); virtual void v149(); virtual void v150(); virtual void v151(); virtual void v152();
	virtual void v153(); virtual void v154(); virtual void v155(); virtual void v156(); virtual void v157(); virtual void v158(); virtual void v159(); virtual void v160(); virtual void v161(); virtual void v162();
	virtual void v163(); virtual void v164(); virtual void v165(); virtual void v166(); virtual void v167(); virtual void v168(); virtual void v169(); virtual void v170(); virtual void v171(); virtual void v172();
	virtual void v173(); virtual void v174(); virtual void v175(); virtual void v176(); virtual void v177(); virtual void v178(); virtual void v179(); virtual void v180(); virtual void v181(); virtual void v182();
	virtual void v183(); virtual void v184(); virtual void v185(); virtual void v186(); virtual void v187(); virtual void v188(); virtual void v189(); virtual void v190(); virtual void v191(); virtual void v192();
	virtual void v193(); virtual void v194(); virtual void v195(); virtual void v196(); virtual void v197(); virtual void v198(); virtual void v199(); virtual void v200(); virtual void v201(); virtual void v202();
	virtual void v203(); virtual void v204(); virtual void v205(); virtual void v206(); virtual void v207(); virtual void v208(); virtual void v209(); virtual void v210(); virtual void v211(); virtual void v212();
	virtual void v213(); virtual void v214(); virtual void v215(); virtual void v216(); virtual void v217(); virtual void v218(); virtual void v219(); virtual void v220(); virtual void v221(); virtual void v222();
	virtual void v223(); virtual void v224(); virtual void v225(); virtual void v226(); virtual void v227(); virtual void v228(); virtual void v229(); virtual void v230(); virtual void v231(); virtual void v232();
	virtual void v233(); virtual void v234(); virtual void v235(); virtual void v236(); virtual void v237(); virtual void v238(); virtual void v239(); virtual void v240();
	virtual void vfunc241(float flDelay);	// slot 241: refreshes the fire
};
