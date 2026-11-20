// CFire: declared by pcdecomp transplant for 0x10109c10 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

struct CFireIntPair { int a; int b; };	// two dwords passed by value

class CFire : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
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
	void sub_1010b7d0(int a, int b);
	void sub_1010b7d0(float flSize, float flTime);	// "forward to slot 242 of the smoke entity (handle +0x450)"; near miss, see notes
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
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *);
	virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *);
	virtual int vfunc142(struct CTakeDamageInfo *p0);
	virtual int vfunc143(float, int); virtual void vfunc144(void *); virtual int vfunc145(); virtual void vfunc146(void *, const Vector &, void *); virtual bool vfunc147(CBaseEntity *); virtual void vfunc148(); virtual void vfunc149(int, int); virtual void vfunc150(); virtual void vfunc151(class CBaseCombatWeapon *); virtual float vfunc152();
	virtual int vfunc153(); virtual int vfunc154(int, int); virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char); virtual void vfunc156(int); virtual bool vfunc157(int); virtual bool vfunc158(); virtual void vfunc159(); virtual bool vfunc160(const char *); virtual bool vfunc161(const char *); virtual char vfunc162();
	virtual void vfunc163(); virtual bool vfunc164(); virtual void vfunc165(void *); virtual bool vfunc166(CBaseEntity *); virtual CBaseEntity *vfunc167(); virtual CBaseEntity *vfunc168(); virtual void vfunc169(const Vector *); virtual void vfunc170(const Vector *); virtual void vfunc171(); virtual void vfunc172();
	virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int); virtual void vfunc174(CBaseEntity *); virtual void vfunc175(CBaseEntity *); virtual void vfunc176(CBaseEntity *); virtual void vfunc177(CBaseEntity *); virtual void vfunc178(CBaseEntity *); virtual void vfunc179();  virtual void vfunc181(const float *, const float *, const float *); virtual void vfunc182();
	virtual void vfunc183(); virtual void vfunc184(); virtual void vfunc185(struct CFireBulletsInfo *); virtual void vfunc186(); virtual CBaseEntity *vfunc187(); virtual void vfunc188(); virtual void vfunc189(); virtual float vfunc190(); virtual void vfunc191(int); virtual Vector vfunc192();
	virtual Vector vfunc193(); virtual float *vfunc194(); virtual float *vfunc195(); virtual Vector vfunc196(); virtual Vector vfunc197(const Vector &, char, char); virtual float *vfunc198(); virtual void vfunc199(float *, float *); virtual int vfunc200(); virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int); virtual void vfunc202(CBaseEntity *);
	virtual float vfunc203(); virtual float vfunc204(); virtual void vfunc205(); virtual void vfunc206(); virtual bool vfunc207(); virtual void vfunc208(CBaseEntity *); virtual CBaseEntity *vfunc209(); virtual void vfunc210(); virtual unsigned int vfunc211(); virtual void vfunc212(string_t);
	virtual void vfunc213(const float *); virtual float *vfunc214(); virtual Vector *vfunc215(); virtual void vfunc216(const Vector &); virtual float *vfunc217(); virtual void vfunc218(const float *); virtual float *vfunc219(); virtual float *vfunc220(); virtual float *vfunc221(); virtual int vfunc222(int);
	virtual bool vfunc223(); virtual void vfunc224(); virtual void vfunc225(); virtual void vfunc226(int); virtual int vfunc227(struct CTakeDamageInfo *); virtual void vfunc228(int, int); virtual void vfunc229(int); virtual void vfunc230(int, void *); virtual void vfunc231(void *, float, int, int); virtual void vfunc232(int);
	virtual int vfunc233(int *, int); virtual struct CGameTrace vfunc234(const Vector *); virtual void vfunc235(); virtual void vfunc236(); virtual int vfunc237(); virtual void vfunc238(Vector *, Vector *, int, int); virtual bool vfunc239(float); virtual int vfunc240();
	virtual void vfunc241(float flDelay);	// slot 241: refreshes the fire
};

// The CFire fields at +0x450 of the entity as a view over a CFire's address (use (CFireEntityFields *)this):
// the same layout as adding members, without changing sizeof(CFire) for the matched functions that use it.
struct CFireEntityFields
{
	char m_pad0000[0x450];
	unsigned int m_hSmoke450;	// 0x450: the firesmoke entity handle
	char m_pad0454[4];
	int m_nType458;			// 0x458: the fire type (vfunc104 precaches by it)
	float m_flHeat45c;		// 0x45c: the heat given to CreateFire
	float m_flIgniteTime460;	// 0x460: the time the fire was started (sub_10109a20)
	float m_flBurnTime464;		// 0x464: the burn-out time (0.5 s steps)
	float m_flSize468;		// 0x468: the fire size
	float m_flHeat46c;		// 0x46c: the current heat
	float m_flHeatLevel470;		// 0x470: the heat level drawn / played
	float m_flHeatRate474;		// 0x474
	float m_flFade478;		// 0x478: the heat level the smoke fades from
	float m_flLastFade47c;		// 0x47c: the last fade level vfunc241 sent to the smoke (compared against m_flHeat46c, float)
	float m_flScale480;		// 0x480
	char m_pad0484[4];		// 0x484..0x487
	int m_nDamage488;		// 0x488: the damage type argument handed to sub_101fa8d0(2, 8, ...) by the burn damage in vfunc241
	float m_flBurnTime48c;		// 0x48c: the burn-out time of the think
	unsigned char m_b490;		// 0x490: burning (the burn update runs while set)
	char m_pad0491[3];
	char m_Output494[0x18];		// 0x494: an entity output (cast to COutputEvent)
	char m_Output4ac[0x18];		// 0x4ac: an entity output (cast to COutputEvent); vfunc5 destroys the two
};
