// CBaseAnimatingOverlay : CBaseAnimating (the game's RTTI; vtable 0x10450024, 276 slots, 0x848 bytes: CBaseFlex's data
// starts at 0x848). Its own slots: 5, 31, 79..82, 250, 255, 258 and the new 265..275.
#pragma once
#include "CBaseAnimating.h"

struct datamap_t;

struct CAnimationLayer	// 0x30 byte record
{
	int m_n00;
	int m_nSequence;	// 0x04
	int m_n08;
	float m_f0c;
	float m_f10;
	float m_f14;
	float m_f18;
	float m_f1c;
	int m_n20;
	char m_b24;
	int m_n28;
	char m_pad2c[4];
};

struct CAnimationLayer28	// 0x1c byte overlay record (array at +0x7f4, used by vfunc265 / vfunc266)
{
	int m_n00;	// the sequence (-1 = idle)
	int m_n04;	// order counter, advanced mod 4
	float m_fl08;	// weight
	float m_fl0c;	// fade time
	int m_n10;	// kind: 0x18, or the second sequence
	int m_n14;	// data block filled by sub_100c43e0
	float m_fl18;	// 0x18: the layer's time
};

class CBaseAnimatingOverlay : public CBaseAnimating
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor
	// Slots 134..264 again (our CBaseEntity declares 0..133, our CBaseAnimating none past them): placeholders with
	// the signature our base headers give each slot; 250, 255 and 258 are this class's own.
	virtual void vfunc134(); virtual float vfunc135(float flTime); virtual void vfunc136(); virtual int vfunc137();
	virtual void vfunc138(); virtual void vfunc139(); virtual bool vfunc140(CBaseEntity *pAttacker); virtual void vfunc141(class CVDmg_t *pInfo, const Vector *pDir, struct CGameTrace *pTrace);
	virtual int vfunc142(CTakeDamageInfo *pInfo); virtual int vfunc143(float flHealth, int bitsDamageType); virtual void vfunc144(void *pInfo); virtual void vfunc145();
	virtual void vfunc146(void *pInfo, const Vector &vecDir, void *pTrace); virtual void vfunc147(); virtual void vfunc148(); virtual void vfunc149();
	virtual void vfunc150(); virtual void vfunc151(); virtual float vfunc152(); virtual int vfunc153();
	virtual int vfunc154(int a, int b); virtual void vfunc155(struct CGameTrace *pTrace, int decalIndex, char bFlag, int a4, class CBasePlayer *pPlayer, int nType, char bTrace); virtual void vfunc156(); virtual void vfunc157();
	virtual bool vfunc158(); virtual void vfunc159(); virtual bool vfunc160(const char *name); virtual bool vfunc161(const char *name);
	virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164(); virtual void vfunc165(void *pEdict);
	virtual void vfunc166(); virtual void vfunc167(); virtual void vfunc168(); virtual void vfunc169();
	virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173();
	virtual void vfunc174(CBaseEntity *pOther); virtual void vfunc175(CBaseEntity *pOther); virtual void vfunc176(CBaseEntity *pOther); virtual void vfunc177();
	virtual void vfunc178(CBaseEntity *pOther); virtual void vfunc179(); virtual void vfunc180(); virtual void vfunc181();
	virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184(); virtual void vfunc185(struct CFireBulletsInfo *pInfo);
	virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual void vfunc190(); virtual void vfunc191(); virtual void vfunc192(); virtual Vector vfunc193();
	virtual void vfunc194(); virtual void vfunc195(); virtual int vfunc196(int a); virtual int vfunc197(int a, int b, int c, int d);
	virtual void vfunc198(); virtual void vfunc199(float *vVelocity, float *vAngVelocity); virtual void vfunc200(); virtual bool vfunc201(CBaseEntity *pEntity, int traceMask, CBaseEntity **ppBlocker, int nOrigin);
	virtual void vfunc202(CBaseEntity *pOwner); virtual void vfunc203(); virtual void vfunc204(); virtual void vfunc205();
	virtual void vfunc206(); virtual bool vfunc207(); virtual void vfunc208(CBaseEntity *pEnt); virtual void vfunc209();
	virtual void vfunc210(); virtual void vfunc211(); virtual void vfunc212(int set); virtual void vfunc213(const float *size);
	virtual float * vfunc214(); virtual void vfunc215(); virtual void vfunc216(); virtual float * vfunc217();
	virtual void vfunc218(const float *absAngles); virtual float * vfunc219(); virtual float * vfunc220(); virtual float * vfunc221();
	virtual int vfunc222(int a); virtual void vfunc223(); virtual void vfunc224(); virtual void vfunc225();
	virtual void vfunc226(int a); virtual void vfunc227(); virtual void vfunc228(int a, int b); virtual void vfunc229();
	virtual void vfunc230(int a, int b); virtual void vfunc231(); virtual void vfunc232(int a); virtual int vfunc233(int *pList, int maxObjects);
	virtual void vfunc234(); virtual void vfunc235(); virtual void vfunc236(); virtual int vfunc237();
	virtual void vfunc238(int a, int b, int c, int d); virtual void vfunc239(); virtual int vfunc240(); virtual void vfunc241(char *pszOut, int *pEvent);
	virtual void vfunc242(); virtual void vfunc243(const char *pszModel, bool bDeathFX); virtual void vfunc244(); virtual void vfunc245();
	virtual void vfunc246(); virtual void vfunc247(); virtual void vfunc248(); virtual float vfunc249();
	virtual float vfunc250(float a);	// slot 250: CBaseAnimating::vfunc250(a), then advances the first four overlay layers that have a rate and, once finished, calls slot 112(layer, activity)
	virtual char vfunc251(); virtual int vfunc252(int a, int b, int c); virtual int vfunc253(int a, int b, int c); virtual int vfunc254(int a, int b, int c);
	virtual void vfunc255(void *pPos, void *pQ, int mask);	// slot 255 "CBaseAnimatingOverlay::GetSkeleton": the base pose (sequence +0x6f0, cycle +0x6f8, pose parameters +0x690), then each of the first four layers with a positive weight is posed into local bone arrays and slerped in (SlerpBones), then the pose / controller workers
	virtual void vfunc256(int iBone, float *pMatrix); virtual void vfunc257(int a, int b);
	virtual void vfunc258(float flInterval, void *pListener);	// slot 258: CBaseAnimating::vfunc258, then the four animation layers at +0x734 (stride 0x30) advance their anim events
	virtual void vfunc259(void *pEvent); virtual void vfunc260(); virtual void vfunc261(); virtual bool vfunc262(int iAttachment, float *pMatrix);
	virtual Vector vfunc263(); virtual void vfunc264();
	// its new slots 265..275
	virtual void vfunc265(int activity, float flWeight, float flFade, int pszEvent, int nExtra);	// slot 265: while alive and not flagged no-flinch (+0x730) takes the oldest of the four 0x1c byte layers (array at +0x7f4, its time at +0x18), starts the sequence selected for the activity in it (order counter +4 advanced mod 4, weight +8, fade +0xc, kind 0x18, end time now + weight + fade) and, with a second sequence name, looks that up and fills the layer's data block (+0x14) through sub_100c43e0
	virtual void vfunc266();	// slot 266: sets every one of the first three 0x1c byte overlay records at +0x7f4 to the idle state: dword 0 = -1 and the time at +0x18 = gpGlobals->curtime - 1.0f
	virtual int vfunc267();
	virtual void vfunc268(int index, int a, int sequence, char flag);	// slot 268: initialises the 0x30 byte animation overlay record [index] (array at +0x738) with the sequence, the weights and fade times; clears the fade weights again when the sequence's flag bit 1 is set
	virtual void vfunc269(int index);	// slot 269: clears the layer's weight (+0x10) and sequence (+4)
	virtual char vfunc270(int activity);	// slot 270: true when slot 271 finds a layer for the activity
	virtual int vfunc271(int a);	// slot 271: the first layer from slot 267's start index with weight (+0x10) set and activity (+0x20) a; -1 when none
	virtual int vfunc272();	// slot 272: the first free overlay layer among the first four (its weight at +0x10 is 0), slot 267 is asked first for the start index; -1 when none
	virtual void vfunc273(int a, char bAdd, int b);	// slot 273: the layer slot 271(a) finds gets its dword at +8 cleared; with none and bAdd set, AddGesture(a, b)
	virtual void vfunc274(int a);	// slot 274: the layer slot 271(a) finds gets its weight (+0x10) and sequence (+4) cleared; nothing when there is none
	virtual void vfunc275();	// slot 275: clears the sequence (+4) and the weight (+0x10) of the first four layers
	void sub_10004c3c();
	bool sub_100992d0(int index, float flDivisor, int nValue);	// the layer [index] (-1 = none): its rate at +0xc = sub_10091080(its sequence) / flDivisor, its dword at +0x14 = nValue; true when the layer exists
	int sub_10099140(int sequence, float flDivisor, int b);	// AddGestureSequence(sequence, b); with a layer and flDivisor > 0 its rate at +0xc = sequence duration / flDivisor; returns the layer or -1
	int sub_10099250(int activity, float flDivisor, int b);	// AddGesture(activity, b); with a layer and flDivisor > 0 its rate at +0xc = sequence duration / flDivisor; returns the layer or -1
	void sub_10099320(int a, float b, int c);	// 0x10099320: r = slot 271(a); sub_100992d0(r, b, c) (the layer's rate and value)
	float sub_10091080(int sequence);	// CBaseAnimating::sub_10091080 (stub 0x10009813), called directly: the cycle rate of the sequence
	char *sub_1008d990(int sequence);	// CBaseAnimating::sub_1008d990 (stub 0x1000b4f6): the sequence description, 0 when invalid
	virtual void vfunc31(int a);	// slot 31 "CBaseAnimatingOverlay::DumpEntity"-like: 24 times the no-flinch byte (+0x730) and the record of the overlay layer (flags, finished, sequence, cycle, rate, weight, activity, auto kill) through the Dump helpers, then CBaseAnimating::vfunc31(a)
	void sub_1008b530(int a);	// CBaseAnimating::vfunc31 (stub 0x10007144), called directly
	float sub_1008f120(float a);	// CBaseAnimating::vfunc250 (stub 0x1000b32a), called directly
	int sub_1008dc40(int activity, int b);	// CBaseAnimating::sub_1008dc40 (stub 0x100125c1): "SelectWeightedSequence", called directly
	int sub_100990f0(int sequence, int b);	// "CBaseAnimatingOverlay::AddGestureSequence": slot 272 picks a free layer, slot 268 starts it; returns the layer or -1
	int sub_100991b0(int activity, int b);	// "CBaseAnimatingOverlay::AddGesture": slot 270(activity) true: slot 271(activity); else selects a sequence for the activity (DevMsg "model missing activity" and -1 when there is none), AddGestureSequence and records the activity in the layer
	int sub_10092270(int a);	// CBaseAnimating::sub_10092270 (stub 0x10009ac5), called directly: looks up a sequence by its name argument, -1 when there is none
	void *sub_100952d0(int a);	// CBaseAnimating::sub_100952d0 "GetModelPtr" (stub 0x100125...), called directly
	float sub_10091230(int sequence);	// CBaseAnimating::sub_10091230 (stub 0x10001429): the cycles per second of the sequence, called by the layer advance
	char sub_10090ef0(int sequence);	// CBaseAnimating::sub_10090ef0 (stub 0x10014ffb): whether the sequence loops (bit 0 of the answer), called by the layer advance

	char m_pad04a4[0x730 - 0x4a4];
	bool m_bNoFlinch;	// 0x0730
	char m_pad0731[0x738 - 0x731];
	union
	{
		CAnimationLayer m_Layers[4];	// 0x738: the four animation layers
		struct
		{
			char m_pad0738[0x7f4 - 0x738];
			CAnimationLayer28 m_Flinch[3];	// 0x7f4: the three flinch layers (vfunc265 / vfunc266)
		};
	};
public:
	virtual int vfunc79();
	virtual int vfunc80();
	virtual int vfunc81();
	virtual datamap_t *vfunc82();
};

// Callee of vfunc250: advances a layer's cycle and fade weight. The game passes the address of the layer minus 4 as this.
struct CAnimationLayerAdvance
{
	float sub_10098830(float dt, CBaseAnimatingOverlay *pEntity);	// "CAnimationLayer::StudioFrameAdvance": cycle += cycles per second * rate * dt (wrapping or clamping by the loop flag, setting the finished flag at +4), then the fade-in / fade-out weight spline, clamped to the maximum weight (+0x18); returns dt
	void sub_10098cd0(int unused, void *pListener, void *pEntity);	// dispatches the sequence's anim events crossed by the layer's cycle step to pListener (slot 259); this is the layer minus 4 like above
};
