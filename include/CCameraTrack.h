// CCameraTrack: camera track entity (CCameraKeyFrame -> CLogicalEntity -> CBaseEntity). Declared flat; only the vtable head is modelled.
#pragma once

class CCameraTrack;

#define CCT_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// Embedded member (three of them at +0x480, +0x498, +0x4f4); only its destructor body and one setup call are known.
class CCameraTrackMember
{
public:
	void sub_10015708();	// destructor body
	void sub_10010794(CCameraTrack *pOwner, CCameraTrack *pEntity, int a);	// stub 0x10010794, called by vfunc46 / vfunc47 on the member at +0x480
};

class CCameraTrack
{
public:
	virtual void vfunc0();
	virtual unsigned int *vfunc1();	// "GetRefEHandle": pointer to the entity's handle
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CCameraTrack *vfunc5(unsigned int flags);	// scalar deleting destructor
	// slots 6..45
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	CCT_V10(sa1) CCT_V10(sa2) CCT_V10(sa3)
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45();
	virtual void vfunc46();	// slot 46: like vfunc47 for the first timer: stores the engine time (slot 119 of the global at 0x1070b22c) at +0x4bc, the entity's handle at +0x4c0 and 1 at +0x4c4, sets up the member at +0x480, then SetNextThink(engine time) and ThinkSet(0x10014d58)

	void sub_1000cb8a();	// base (CCameraKeyFrame) destructor body

	void vfunc47();	// slot 47: stores the engine time (slot 119 of the global at 0x1070b22c) at +0x4d4, the entity's handle at +0x4d8 and 1 at +0x4dc, sets up the member at +0x480, then SetNextThink(engine time) and ThinkSet(0x10014d58)
	float vfunc52();	// slot 52: the float at +0x4b4 when it is above 0.0f, else 0.0f

	char sub_100cc430(float *a, float *b, float *c, float *d, float *e, float *f, int g, int h);	// worker run on the two timers (stub 0x100157b2); true when it changed something
	void sub_100ccea0(class COutputEvent *pOutput, char bSecond);	// stub 0x1000c97d: fires the output (this, this, 0) when the player slot chosen by bSecond (sub_1017d680 / sub_1017d630) is this track
	void sub_100cc360();	// runs the worker on the timer at +0x4d4 (arguments +0x4d4, +0x4d8, +0x4dc, +0x4e0, +0x4f0, +0x4ec, 0, 0) and on the one at +0x4bc (+0x4bc, +0x4c0, +0x4c4, +0x4c8, a zeroed local twice, 1, 0); when either returns true SetNextThink(engine time)

	int sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
	void sub_100ac610(float time, const char *szContext);	// CBaseEntity::SetNextThink (stub 0x1000326f)

	char m_pad0004[0x480 - 4];
	CCameraTrackMember m_member480[0x18];	// 0x0480 (the first of the embedded members)
	char m_pad0498[0x4bc - 0x498];
	float m_flStartTime4bc;	// 0x04bc
	unsigned int m_hHandle4c0;	// 0x04c0
	char m_bStarted4c4;	// 0x04c4
	char m_pad04c5[0x4d4 - 0x4c5];
	float m_flStartTime;	// 0x04d4
	unsigned int m_hHandle;	// 0x04d8
	char m_bStarted;	// 0x04dc
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	virtual Datamap82 vfunc82();
public:
	virtual float vfunc48();
	virtual float vfunc49();
public:
	virtual int vfunc50(int);
	virtual int vfunc51(int, int);
};
