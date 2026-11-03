// CBaseAnimatingOverlay: declared by pcdecomp transplant for 0x10098a60 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

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

class CBaseAnimatingOverlay
{
public:
	CBaseAnimatingOverlay *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void vfunc268(int index, int a, int sequence, char flag);	// slot 268: initialises the 0x30 byte animation overlay record [index] (array at +0x738) with the sequence, the weights and fade times; clears the fade weights again when the sequence's flag bit 1 is set
	void vfunc273(int a, char bAdd, int b);	// slot 273 (plain member): the layer slot 271(a) finds gets its dword at +8 cleared; with none and bAdd set, AddGesture(a, b)
	void vfunc274(int a);	// slot 274 (plain member): the layer slot 271(a) finds gets its weight (+0x10) and sequence (+4) cleared; nothing when there is none
	char vfunc270(int activity);	// slot 270: true when slot 271 finds a layer for the activity
	int vfunc271(int a);	// slot 271: the first layer from slot 267's start index with weight (+0x10) set and activity (+0x20) a; -1 when none
	int vfunc272();	// slot 272: the first free overlay layer among the first four (its weight at +0x10 is 0), slot 267 is asked first for the start index; -1 when none
	bool sub_100992d0(int index, float flDivisor, int nValue);	// the layer [index] (-1 = none): its rate at +0xc = sub_10091080(its sequence) / flDivisor, its dword at +0x14 = nValue; true when the layer exists
	void vfunc275();	// slot 275: clears the sequence (+4) and the weight (+0x10) of the first four layers
	int sub_10099140(int sequence, float flDivisor, int b);	// AddGestureSequence(sequence, b); with a layer and flDivisor > 0 its rate at +0xc = sequence duration / flDivisor; returns the layer or -1
	int sub_10099250(int activity, float flDivisor, int b);	// AddGesture(activity, b); with a layer and flDivisor > 0 its rate at +0xc = sequence duration / flDivisor; returns the layer or -1
	void sub_10099320(int a, float b, int c);	// 0x10099320: r = slot 271(a); sub_100992d0(r, b, c) (the layer's rate and value)
	float sub_10091080(int sequence);	// CBaseAnimating::sub_10091080 (stub 0x10009813), called directly: the cycle rate of the sequence
	char *sub_1008d990(int sequence);	// CBaseAnimating::sub_1008d990 (stub 0x1000b4f6): the sequence description, 0 when invalid
	void vfunc31(int a);	// slot 31 "CBaseAnimatingOverlay::DumpEntity"-like: 24 times the no-flinch byte (+0x730) and the record of the overlay layer (flags, finished, sequence, cycle, rate, weight, activity, auto kill) through the Dump helpers, then CBaseAnimating::vfunc31(a)
	void sub_1008b530(int a);	// CBaseAnimating::vfunc31 (stub 0x10007144), called directly
	float vfunc250(float a);	// slot 250: CBaseAnimating::vfunc250(a), then advances the first four overlay layers that have a rate and, once finished, calls slot 112(layer, activity)
	float sub_1008f120(float a);	// CBaseAnimating::vfunc250 (stub 0x1000b32a), called directly
	int sub_1008dc40(int activity, int b);	// CBaseAnimating::sub_1008dc40 (stub 0x100125c1): "SelectWeightedSequence", called directly
	int sub_100990f0(int sequence, int b);	// "CBaseAnimatingOverlay::AddGestureSequence": slot 272 picks a free layer, slot 268 starts it; returns the layer or -1
	int sub_100991b0(int activity, int b);	// "CBaseAnimatingOverlay::AddGesture": slot 270(activity) true: slot 271(activity); else selects a sequence for the activity (DevMsg "model missing activity" and -1 when there is none), AddGestureSequence and records the activity in the layer
	void vfunc255(void *pPos, void *pQ, int mask);	// slot 255 "CBaseAnimatingOverlay::GetSkeleton": the base pose (sequence +0x6f0, cycle +0x6f8, pose parameters +0x690), then each of the first four layers with a positive weight is posed into local bone arrays and slerped in (SlerpBones), then the pose / controller workers
	void vfunc265(int activity, float flWeight, float flFade, int pszEvent, int nExtra);	// slot 265: while alive and not flagged no-flinch (+0x730) takes the oldest of the four 0x1c byte layers (array at +0x7f4, its time at +0x18), starts the sequence selected for the activity in it (order counter +4 advanced mod 4, weight +8, fade +0xc, kind 0x18, end time now + weight + fade) and, with a second sequence name, looks that up and fills the layer's data block (+0x14) through sub_100c43e0
	int sub_10092270(int a);	// CBaseAnimating::sub_10092270 (stub 0x10009ac5), called directly: looks up a sequence by its name argument, -1 when there is none
	void *sub_100952d0(int a);	// CBaseAnimating::sub_100952d0 "GetModelPtr" (stub 0x100125...), called directly
	float sub_10091230(int sequence);	// CBaseAnimating::sub_10091230 (stub 0x10001429): the cycles per second of the sequence, called by the layer advance
	char sub_10090ef0(int sequence);	// CBaseAnimating::sub_10090ef0 (stub 0x10014ffb): whether the sequence loops (bit 0 of the answer), called by the layer advance

	char m_pad0000[0x738];
	CAnimationLayer m_Layers[15];	// 0x738
public:
	int vfunc79();
	int vfunc80();
	int vfunc81();
	datamap_t * vfunc82();
	int vfunc267();
};

// Callee of vfunc250: advances a layer's cycle and fade weight. The game passes the address of the layer minus 4 as this.
struct CAnimationLayerAdvance
{
	float sub_10098830(float dt, CBaseAnimatingOverlay *pEntity);	// "CAnimationLayer::StudioFrameAdvance": cycle += cycles per second * rate * dt (wrapping or clamping by the loop flag, setting the finished flag at +4), then the fade-in / fade-out weight spline, clamped to the maximum weight (+0x18); returns dt
	void sub_10098cd0(int unused, void *pListener, void *pEntity);	// dispatches the sequence's anim events crossed by the layer's cycle step to pListener (slot 259); this is the layer minus 4 like above
};
