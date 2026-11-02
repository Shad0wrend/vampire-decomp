// class CSceneEntity (RTTI .?AVCSceneEntity@@), primary vtable 0x1044f05c, 269 slots.
// Derives from CLogicalEntity / CBaseEntity (all at offset +0x0); until those bases are
// known the slots they contribute are only declared here so that the slot numbers of the
// members we do define are right.
#pragma once

#define SCENE_V(n) virtual void vfunc##n();
#define SCENE_V10(p) SCENE_V(p##0) SCENE_V(p##1) SCENE_V(p##2) SCENE_V(p##3) SCENE_V(p##4) SCENE_V(p##5) SCENE_V(p##6) SCENE_V(p##7) SCENE_V(p##8) SCENE_V(p##9)

class CBaseEntity;
class CBaseFlex;
class CUnknown1007ce20;
class CUnknown1007ed10;

class CSceneOutputList	// the output at +0x4fc (an event list); only the add call is known
{
public:
	char m_pad0000[0x18];

	void sub_100cd660(void *pEnt, void *pSource, int a);	// stub 0x10010794
};

struct CSceneEventActor	// the actor record an event names
{
	const char *sub_10008a99();	// the actor's name (stub 0x10008a99)
};

struct CSceneEventNav	// the navigator at +0x5d34 of an actor NPC
{
	char sub_10012963();	// stub 0x10012963
};

struct CSceneEventNPC	// the NPC object at +0x94 of an actor entity
{
	char m_pad0000[0x5d34];
	CSceneEventNav *m_pNav5d34;	// 0x5d34
};

struct CSceneEventActorEnt	// the entity a scene actor name resolves to
{
	char m_pad0000[0x94];
	CSceneEventNPC *m_pNPC94;	// 0x94
};

struct CSceneEvent	// a scene event; only what the actor checks need
{
	CSceneEventActor *sub_10001b5e();	// the event's actor (stub 0x10001b5e)
	int sub_100029c8();	// the event's type (stub 0x100029c8)
	const char *sub_10075c50();	// the event's text parameter (stub 0x10006fdc)
	const char *sub_10075d00();	// the event's name (stub 0x10007d01)
	float sub_10076b30();	// the event's duration (stub 0x10014835)
	CUnknown1007ce20 *sub_10076710();	// the event's sub-scene (stub 0x10015a78), null when it has none
	int sub_10075ca0();	// the event's last parameter (stub 0x1000b93d), pushed as the last argument of slot 258 by slot 250
	bool sub_100784d0(float *pOut);	// the explicit duration at +0x18c when it is set (non-zero), true; else *pOut = sub_10076b30() and false
	char m_pad0000[0x18c];
	float m_flDuration18c;	// 0x18c: the event's explicit duration (0 when unset)
	float sub_10076280(float flTime);	// stub 0x10002900 (function 0x10076280, ret 4): the intensity of the event at flTime (0 outside the event's time span, else the spline value 0..1); slot 250 pushes the result of sub_10075ca0 before the argument and leaves it on the stack as the fifth argument of slot 258
};

struct CSceneActorRecord	// an actor record of the scene (0x14+ bytes; the scene's sub_1007a2c0(i)): the saved state of the actor's entity
{
	char m_bFlag00;	// 0x00: sub_1029f2e0() of the actor entity's NPC (+0x98), set only when it has one
	char m_pad0001[3];
	int m_n04;	// 0x04: entity slot 94 (+0x178), the move type
	int m_n08;	// 0x08: entity slot 95 (+0x17c)
	int m_n0c;	// 0x0c: entity slot 92 (+0x170)
	int m_n10;	// 0x10: entity slot 211 (+0x34c)
	// 0x14: the actor name (sub_10008a99 reads it; element + 0x14 = name for sub_100821f0), origin +0x17c, angles +0x188 (saved by sub_10072e60)

	const char *sub_10072d90();	// the actor name (stub 0x10008a99), asked with the argument 0
	void sub_10072e60(float x0, float y0, float z0, float x1, float y1, float z1);	// stub 0x10006fcd (ret 24): stores origin (x0..z0) and angles (x1..z1) by value
};

struct CSceneEntityScene	// the scene object at +0x4bc
{
	char sub_1007d190();	// whether the scene is finished (stub 0x10014128)
	void sub_1007d7f0(float flTime);	// stub 0x100039f9, run by the think of the instanced scene with the remainder at +0x4a0
	char sub_1007d1e0();	// stub 0x10008ff3: whether the scene has run out, asked by the think of the instanced scene
};

class CSceneEntity
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CSceneEntity *vfunc5(unsigned int flags);
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	SCENE_V10(1) SCENE_V10(2) SCENE_V10(3) SCENE_V10(4) SCENE_V10(5) SCENE_V10(6) SCENE_V10(7) SCENE_V10(8) SCENE_V10(9)
	SCENE_V10(10) SCENE_V10(11) SCENE_V10(12) SCENE_V10(13) SCENE_V10(14) SCENE_V10(15) SCENE_V10(16) SCENE_V10(17) SCENE_V10(18) SCENE_V10(19)
	SCENE_V10(20) SCENE_V10(21) SCENE_V10(22) SCENE_V10(23)
	SCENE_V(240) SCENE_V(241)
	virtual void vfunc242();	// starts the scene: marks it playing (+0x498), clears the pause and remainder, stamps curtime at +0x4a4 / +0x4a8, sorts the events (sub_1007cfc0(1, 0, 0)), then primes the scene and the actors and fires the start output at +0x4cc
	virtual void vfunc243();	// resets the automation state (called first by vfunc266)
	SCENE_V(244) SCENE_V(245) SCENE_V(246) SCENE_V(247)
	virtual void vfunc248(float a, int b, int c);
	virtual void vfunc249(float a, int b, CSceneEvent *pEvent);	// slot 249 (event finished): logs "%8.4f:  finish %s", then by the event's type hands (b, actor entity of the event, pEvent) to slot 253 (type 2), 255 (10), 257 (6) or 263 (7); a type 11 event sorts the events of its sub-scene (sub_1007cfc0(1, 0, 0))
	virtual void vfunc250(float a, int b, int c);
	virtual char vfunc251(float a, int b, CSceneEvent *pEvent);	// slot 251: resolves the actor of the event through slot 267 (Warning "CSceneEntity unable find actor" and true when it is unknown); false when the event is of type 4 and the actor's NPC (+0x94) has its navigator (+0x5d34) answering sub_10012963, else true
	SCENE_V(252)
	virtual void vfunc253(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent);	// slot 253: the finish handler of a type 2 event
	SCENE_V(254)
	virtual void vfunc255(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent);	// slot 255: the finish handler of a type 10 event
	virtual void vfunc256(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent);	// slot 256: the gesture handler: looks the event's text parameter up as a sequence of the actor and starts it as a gesture on the actor's NPC (Warning "Could not find gesture sequence %s" when either is missing)
	virtual void vfunc257(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent);	// slot 257: the finish handler of a type 6 event
	SCENE_V(258)
	virtual void vfunc259(int unused, void *pEvent, const char *pszTarget);	// slot 259: for the actor of the scene event (object at +0x94 of pEvent) and the entity named pszTarget: sets the actor's move type (4, 0), copies the target's slot 192 vector to +0x5db8 and its slot 219 vector to +0x5dc4 of the actor, runs the actor's sub_10280de0(0x39) and stamps curtime at +0x5cf0
	virtual void vfunc260(int unused, void *pEvent, const char *pszSound, int a4, int a5);	// slot 260: for the actor of the scene event (pointer at +0x98 of pEvent): builds "sound/<name>.mp3" and "*<name>" sound names, makes the actor's entity of this scene's player (sub_10081890) its target, and hands "*<name>" to the actor's sub_102c0520(name, a5, byte at this+0x57f)
	SCENE_V(261)
	virtual void vfunc262(int b, CBaseFlex *pActor, void *pEvent);	// slot 262: primes the scene (sub_100843d0 on the scene at +0x4bc), hands (b, pEvent) to the actor's slot 286 and, when the actor move mode (+0x578) is 3, runs the actor's RepositionOnAnimationExit (sub_10090b20)
	virtual void vfunc263(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent);	// slot 263: the finish handler of a type 7 event
	virtual void vfunc264(CUnknown1007ed10 *pEvent1, int unused, CSceneEvent *pEvent);	// slot 264
	virtual void vfunc265(void *pTarget, void *pEvent);	// slot 265: the speed event: the text parameter of pEvent as a float; pTarget's own start time (+0x78) is set to it, and the running remainder at +0x49c is the old remainder minus the event's elapsed time since +0x4a0, at least 0; +0x4a0 remembers the new value
	virtual void vfunc266(int unused, const char *pszArgs);	// parses "automate <Cancel|Resume> <seconds>" arguments into the automation fields
	virtual CSceneEventActorEnt *vfunc267(const char *pszName);	// slot 267: the actor entity of that name, null when there is none (called by slot 251)
	virtual CBaseEntity *vfunc268(const char *pszName, int a);	// slot 268: the entity of that name (the scene's actor lookup), null when there is none
	void sub_1000b1ef();	// as in CPhysForce (transplant)
	void sub_1000cb8a();	// the base class destructor body, tail called by sub_100809f0
	void sub_100809f0();	// the destructor body (called by vfunc5): vtable, vfunc245 while the byte at +0x498 is set, destroys the seven outputs at +0x4cc..+0x55c (sub_100cd2d0, last first), then the base destructor body
	void sub_10082b80();	// slot 245 (function 0x10082b80, stub 0x1000b97e), called directly by the destructor body while the scene plays
	void *sub_100839c0(const char *pszScene);	// loads the named scene (engine slot 99(name, 2, 0)) and, when found, hands it to the global loader at 0x106c8618 and builds the scene object into the sub-object at +0x4c0
	void sub_10083a60();	// releases the scene object at +0x4bc: finishes it (sub_10084170, sub_100845a0), destroys and frees it, clears the pointer
	void sub_10083a30(const char *pszScene);	// stub 0x100106f9, called directly by vfunc104 with the scene file name at +0x450 ("" when unset)
	void sub_10080cb0(int a);	// stub 0x1001163f, called directly by vfunc104 with the dword at +0x4bc
	void sub_10082db0();	// like sub_10082d20 with slot 61 of each actor entity
	void sub_10082d20();	// stub 0x1000ee71 (called first by slot 245 while the scene plays)
	CSceneEntity *sub_10080830();	// the constructor body (stub of the three scene entity classes' constructors): CBaseEntity constructor, the logical entity fields (-1 at +0x46c..+0x47c), the sub-object at +0x4c0, the seven outputs at +0x4cc..+0x55c, the vtable, the scene state, the "snd_mixahead" console variable at +0x4c8
	void sub_100821f0(int mode);	// moves every actor entity of the scene (the elements of the object at +0x4bc, entity by name = element + 0x14) according to mode: 1 = to this entity's origin / angles, 2 = to the element's stored origin (+0x17c) / angles (+0x188), 3 = bone match "bip01"
	float sub_100ac720(const char *context);	// "CBaseEntity::GetLastThink" (stub 0x1000c8ba), called directly
	void sub_10080b00(CSceneEvent *pEvent);	// "CSceneEntity::LogPrecache": the first call asks the command line for "-log_speech_files"; with it set and a speech event (type 5) appends "<map>\t<entity debug name>\t<lower-cased speech file>.lip\n" to logs/logged_lcs_files.txt (DevWarning when the file cannot be opened)
	const char *sub_100ab4f0();	// stub 0x1000b5cd: the entity's debug name, called directly
	float sub_10080ac0();	// stub 0x10010410: a float value of the scene (the playback speed), run by the think
	void sub_100846c0(void *pScene);	// stub 0x100018c5, run by the think while the scene plays on
	void sub_10084170(void *pScene);	// stub 0x1001200d, run by the think of the instanced scene when the scene has run out
	void sub_100845a0(void *pScene);	// the twin of sub_10084170 (recursive over the scene's sub-scenes): hands every actor of the scene that is an animating entity its slot 246
	void sub_10084260(void *pScene);	// stub 0x10002cfc: the twin of sub_10084170 that resets each actor entity (an NPC: back to the idle sequence check; else the weighted sequence 1 and a restarted playback), recursive over the sub-scenes
	void sub_100847e0(void *pScene);	// stub 0x1000d97c: the twin of sub_10084260 that wakes each actor NPC of the scene (recursive over the sub-scenes)
	void sub_1000d97c(void *pScene);	// the jump stub of sub_100847e0
	void sub_100843d0(void *pScene);	// stub 0x10008a8f, run on the scene when it starts
	void sub_10081ed0();	// stub 0x100114b4, run when the scene starts (CSceneEntity::vfunc242): for every actor record i of the scene at +0x4bc (count sub_1007a2a0, record sub_1007a2c0(i) = CSceneActorRecord) whose entity (vfunc268(sub_10072d90(0) = name, 0), RTDynamicCast CBaseEntity -> CBaseAnimating) exists: record.sub_10072e60(entity slot 217 origin, slot 219 angles by value, 6 dwords), record +0 = sub_1029f2e0() of the entity's NPC (+0x98) when it has one, +4 = slot 94, +8 = slot 95, +0x10 = slot 211, +0xc = slot 92; then with m_n574 == 1: entity slot 216(this slot 217), slot 218(this slot 219), NPC sub_1029f300(1), AddEffectsForNextSequence(0x10) (CBaseAnimating::sub_10090bc0), slot 93(0, 0), inlined SetSolid(0) (CCollisionProperty::sub_100dc480 on entity +0x270, scope trace "CBaseEntity::SetSolid") and AddSolidFlags(4) (sub_100dc580(word at +0x2b4 | 4), trace "CBaseEntity::AddSolidFlags")
	void sub_10082c90();	// stub 0x10003080, run when the scene starts
	CBaseEntity *sub_100823c0(int iActor);	// stub 0x10010294: the entity of the iActor-th actor of the scene at +0x4bc (vfunc268 of its name), null when there is none

	char m_pad0004[0x10c - 4];
	unsigned int m_hPlayer10c;	// 0x10c: entity handle of the scene's player
	char m_pad0110[0x17c - 0x110];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x450 - 0x180];
	const char *m_pszSceneFile450;	// 0x450: the scene file name (null when unset)
	char m_pad0454[0x48c - 0x454];
	int m_n48c;	// 0x48c
	int m_n490;	// 0x490: the value handed to the extra animation slot, replaced by m_n494 for a character that is not male
	int m_n494;	// 0x494
	char m_bPlaying498;	// 0x498
	char m_bPlaying499;	// 0x499
	char m_pad049a[2];
	float m_f49c;	// 0x49c: running remainder of the speed event
	float m_f4a0;	// 0x4a0: the last speed event value
	float m_f4a4;	// 0x4a4: curtime when the scene started
	float m_f4a8;	// 0x4a8: the start time of the scene
	char m_bAutomateTimed;	// 0x4ac: set when a positive time was parsed
	char m_pad04ad[3];
	int m_nAutomateType;	// 0x4b0: 1 = Cancel, 2 = Resume
	float m_flAutomateTime;	// 0x4b4
	int m_nAutomateField;	// 0x4b8
	void *m_pScene4bc;	// 0x4bc
	char m_pad04c0[0x4cc - 0x4c0];
	CSceneOutputList m_list4cc;	// 0x4cc: the start output
	CSceneOutputList m_list4e4;	// 0x4e4: the end output
	CSceneOutputList m_list4fc;	// 0x4fc
	char m_pad0514[0x574 - 0x514];
	int m_n574;	// 0x574
	int m_n578;	// 0x578: the actor move mode handed to sub_100821f0
	char m_b57c;	// 0x57c
	char m_pad057d[1];
	char m_b57e;	// 0x57e
	char m_pad057f[1];
	unsigned int m_h580;	// 0x580: handle of the entity an instanced scene follows
};
