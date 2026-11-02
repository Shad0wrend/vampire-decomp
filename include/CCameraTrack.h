// CCameraTrack: camera track entity (RTTI CCameraTrack : CCameraKeyFrame : CLogicalEntity : CBaseEntity), vtable 0x10453b9c.
// Constructor (0x100cbe60): CCameraKeyFrame (CBaseEntity(0), CLogicalEntity vftable, the outputs at +0x480 / +0x498,
// CCameraKeyFrame vftable), then the output at +0x4f4, the CCameraTrack vftable, -1.0f at +0x4bc / +0x4d4.
#pragma once

#include "CCameraKeyFrame.h"

struct datamap_t;

class CCameraTrack;

// Embedded member (three of them at +0x480, +0x498, +0x4f4); only its destructor body and one setup call are known.
class CCameraTrackMember
{
public:
	void sub_10015708();	// destructor body
	void sub_10010794(CCameraTrack *pOwner, CCameraTrack *pEntity, int a);	// stub 0x10010794, called by vfunc46 / vfunc47 on the member at +0x480
};

class CCameraTrack : public CCameraKeyFrame
{
public:
	CCameraTrack();	// 0x100cbe60
	CCameraTrack *vfunc5(unsigned int flags);	// scalar deleting destructor

	void vfunc46();	// slot 46: like vfunc47 for the first timer: stores the engine time (slot 119 of the global at 0x1070b22c) at +0x4bc, the entity's handle at +0x4c0 and 1 at +0x4c4, sets up the member at +0x480, then SetNextThink(engine time) and ThinkSet(0x10014d58)

	void sub_1000cb8a();	// base (CCameraKeyFrame) destructor body

	void vfunc47();	// slot 47: stores the engine time (slot 119 of the global at 0x1070b22c) at +0x4d4, the entity's handle at +0x4d8 and 1 at +0x4dc, sets up the member at +0x480, then SetNextThink(engine time) and ThinkSet(0x10014d58)
	float vfunc52();	// slot 52: the float at +0x4b4 when it is above 0.0f, else 0.0f

	char sub_100cc430(float *a, float *b, float *c, float *d, float *e, float *f, int g, int h);	// worker run on the two timers (stub 0x100157b2); true when it changed something
	void sub_100ccea0(class COutputEvent *pOutput, char bSecond);	// stub 0x1000c97d: fires the output (this, this, 0) when the player slot chosen by bSecond (sub_1017d680 / sub_1017d630) is this track
	void sub_100cc360();	// runs the worker on the timer at +0x4d4 (arguments +0x4d4, +0x4d8, +0x4dc, +0x4e0, +0x4f0, +0x4ec, 0, 0) and on the one at +0x4bc (+0x4bc, +0x4c0, +0x4c4, +0x4c8, a zeroed local twice, 1, 0); when either returns true SetNextThink(engine time)

	int sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
	void sub_100ac610(float time, const char *szContext);	// CBaseEntity::SetNextThink (stub 0x1000326f)

	char m_pad04b0[0x4bc - 0x4b0];
	float m_flStartTime4bc;	// 0x04bc
	EHANDLE m_hHandle4c0;	// 0x04c0
	char m_bStarted4c4;	// 0x04c4
	char m_pad04c5[0x4d4 - 0x4c5];
	float m_flStartTime;	// 0x04d4
	EHANDLE m_hHandle;	// 0x04d8
	char m_bStarted;	// 0x04dc
	char m_pad04dd[0x4f4 - 0x4dd];
	COutputEvent m_Output4f4;	// 0x04f4
public:
	datamap_t * vfunc82();
	virtual float vfunc48();
	virtual float vfunc49();
	// slots 50 / 51 are overrides of CBaseEntity's (Vector return by hidden pointer / (unused, Vector *)); the matched
	// bodies were written with these signatures, which here add overloads rather than overrides.
	virtual int vfunc50(int);
	virtual int vfunc51(int, int);
};
