// class CAI_Navigator (RTTI .?AVCAI_Navigator@@): AI component; only the first 21 vtable slots are declared
// (slots past 20 not yet seen).
// vfunc9/vfunc10 take (int, 4-byte value); the exact type of the second argument is unknown.
// Bases: CAI_Component at +0 (vptr with 3 slots, owner at +4, the stamps at +8 / +0xc) and CAI_DefMovementSink
// at +0x10 (COL 0x105249e4).
#pragma once

#include "CAI_Component.h"
#include "CAI_DefMovementSink.h"
#include "Vector.h"

class CAI_Waypoint;

struct CAI_NavFloatPair
{
	float m_flA;
	float m_flB;
	CAI_NavFloatPair() { m_flB = 0.0f; m_flA = -1.0f; }
	void Set(float v) { m_flB = v; m_flA = -1.0f; }
};

class CAI_Navigator;

// Names below are provisional (classes not recovered yet).
struct CAI_NavSource	// supplies a handle through slot 1 (the pOut argument of sub_102f1fa0)
{
	virtual void vfunc0();
	virtual int *vfunc1();
};

struct CAI_NavEntry	// 0x68+ byte record found by id
{
	int m_hHandle;	// 0x00, -1 = none
	char m_pad04[0x64 - 4];
	unsigned int m_flags;	// 0x64
	float m_flTime;	// 0x68
};

struct CAI_NavProvider	// owner of the records: 0x78 count, 0x7c pointer array
{
	char m_pad00[4];
	int m_nStartId;	// 0x04
	char m_pad08[0x78 - 8];
	int m_nEntries;	// 0x78
	CAI_NavEntry **m_ppEntries;	// 0x7c

	Vector *sub_102fb0d0(Vector *pOut, int a);	// stub 0x1000d99a: writes the position of the graph node (hull a) to pOut
	CAI_NavEntry *sub_102f9400(int id);	// stub 0x10012639: the record whose id (sub_100122ab of the record, owner at +4) equals id, or null
};

struct CAI_NavProviderList	// count, array
{
	int m_nCount;	// 0x00
	CAI_NavProvider **m_ppItems;	// 0x04

	int sub_102f3c10(int pOuter, const Vector *pPos);	// stub 0x1000827e: the index of the node nearest to the position, -1 when there is none
};

struct CAI_NavWaypoint
{
	char m_pad00[0x10];
	int m_nEntryId;	// 0x10
};

struct CAI_NavWaypointPtr	// owning pointer
{
	CAI_NavWaypoint *m_p;

	CAI_NavWaypoint *operator->() const { return m_p; }
	operator CAI_NavWaypoint *() const { return m_p; }
	void sub_10319ee0();	// deletes the waypoint and clears the pointer (stub 0x10002ec3)
};

struct CAI_NavVec3
{
	float x, y, z;
};

struct CAI_NavPathNode	// provisional: the object held by CAI_NavRoute::m_pWaypoint (+0x24); used by sub_102f0fe0
{
	CAI_NavVec3 m_v3Pos;		// 0x00
	char m_pad0c[0x28 - 0xc];
	unsigned int m_flags28;		// 0x28 (bit 2 is tested)
	CAI_NavPathNode *m_p2c;		// 0x2c (must be null)
	CAI_NavPathNode *m_p30;		// 0x30: one link (the next / previous node)
	CAI_NavPathNode *m_p34;		// 0x34: the other link
};

struct CAI_NavRoute	// the object at CAI_Navigator +0x30
{
	char m_b00;
	char m_b01;
	char m_pad02[2];
	int m_i04;
	int m_i08;
	int m_i0c;
	char m_b10;
	char m_b11;
	char m_pad12[2];
	CAI_NavVec3 m_v14;	// 0x14
	int m_i20;
	CAI_NavWaypointPtr m_pWaypoint;	// 0x24
	union { int m_i28; float m_fl28; };	// 0x28: the goal tolerance
	int m_i2c;
	int m_i30;
	CAI_NavVec3 m_v34;	// 0x34
	float m_fl40;	// 0x40: the waypoint tolerance
	void SetGoalTolerance(float flTolerance) { m_fl28 = flTolerance; }
	int m_nProvider;	// 0x44
	char m_b48;
	char m_pad49[3];
	CAI_NavVec3 m_v4c;	// 0x4c
	char m_b58;
	char m_pad59[3];
	int m_i5c;
	int m_i60;

	void sub_1030bf50();	// the route's destructor body (stub 0x1000a3cb, free __fastcall in the matched sub_1030bf50): hands the waypoint pointer at +0x24 to 0x1031a050; the owner then frees the route with operator delete
	void sub_1030bb30();	// resets the route: deletes the waypoint, vectors to vec3_origin (0x1070d1b0), flags and counters to 0 (+0x2c = 1, +0x30 = -1)
	int sub_1030ba70();
	int sub_1030bc00();	// the route's move status (stub 0x1000f240): 0 when it has none, 2 for a finished one
	void sub_1030ba50(int value);	// sets the flag at +0x58 and the value at +0x5c
	void sub_1030b4d0(int value, char b);
	void sub_1030b950(const float *pVec);
	void sub_1030be20(const int *pVec);
	int sub_1030b8e0();
	char *sub_1030ba30();
	void sub_1030b550(int sequence);	// stub 0x1000b6ef
	int sub_1030b580();	// the arrival sequence of the route, -1 when unset (stub 0x1000f6b9)
	int sub_1030b520();	// the arrival activity of the route (stub 0x10001b77)
	void sub_1030b5b0(int sequence);	// stores the arrival sequence (stub 0x100016b3)
	float sub_1030b880();	// a float value of the route handed to the motor with its goal record (stub 0x1001021c)
	Vector *sub_1030b7c0();	// the route's goal position (stub 0x10012805)
};

struct CAI_NavGoal	// the record CAI_Navigator::vfunc17 fills for the motor
{
	Vector m_vecStart;	// 0x00: the route's goal position
	Vector m_vecDelta;	// 0x0c: start minus the owner's origin, normalised (2D without the flag at +0x18)
	Vector m_vecDir;	// 0x18: a copy of the direction
	float m_f24;	// 0x24: the motor's value
	float m_flDist;	// 0x28: the length before normalising
	float m_f2c;	// 0x2c: the motor's value times its factor at +0x30, at most m_flDist
	int m_i30;	// 0x30: the navigator's dword at +0x18
	void *m_p34;	// 0x34: sub_102ecc40 (the entity the navigator is after)
	unsigned int m_flags;	// 0x38: bit 0 = route finished, bit 2 = waypoint linked to another entry
	CAI_NavRoute *m_pRoute;	// 0x3c
};

class CAI_Navigator : public CAI_Component, public CAI_DefMovementSink
{
public:
	CAI_Waypoint *sub_102ff3e0(int startNode, float flMinDist, Vector *pDir);
	CAI_Navigator(int pOuter);	// 0x102eca50: allocates the 0x84 byte object at +0x30
	// CAI_DefMovementSink's slots 0 and 2..7 with its signatures: the game's words are this class's functions matched
	// under other names (sub_102f02a0, sub_102ef1a0, sub_102ef350, sub_102ef0e0, sub_102ef760, sub_102ef6a0, sub_102ef6d0)
	virtual float sink0(); virtual void sink2(); virtual void sink3(); virtual void sink4(); virtual void sink5(int *pResult);
	virtual void sink6(); virtual void sink7();
	float sub_102f02a0();	// slot 0 of the CAI_DefMovementSink secondary vtable: the speed scale

	virtual ~CAI_Navigator();	// 0x102ecb90 (stub 0x10011c98)
	CAI_Navigator *vfunc0(unsigned int flags);	// slot 0 written out: the scalar deleting destructor 0x102ecb20 (the compiler's ??_GCAI_Navigator)
	virtual void vfunc1(); virtual void vfunc2(int a); virtual void vfunc3(int a); virtual void vfunc4(int);
	virtual void vfunc5(float flInterval, int a);	// slot 5 "CAI_Navigator::Move": scope trace; does nothing while sub_102ee2e0 holds or the owner's slot 525 accepts the interval; with the owner's flag byte +0x1a40 set stamps the components and steps the route (slots 12 / 13 / 14 by the route's move type, at most 16 times), else stops the motor (+0x20)
	virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();
	bool vfunc1(int a, int b, int c);	// slot 1 of the CAI_DefMovementSink table: 0x102eefb0 (matched as CAI_DefMovementSink::sub_102eefb0; `this` is that base, as VC6 passes it to an override of a second base's slot)
	virtual void vfunc9(int a, float b);
	virtual void vfunc10(int a, float b);
	virtual void vfunc11(int a); virtual int vfunc12(int a); virtual int vfunc13(int a); virtual int vfunc14(int a);
	virtual int vfunc15(void *pGoal, int a); virtual bool vfunc16(int *pOut); virtual void vfunc17(CAI_NavGoal *pGoal);
	void vfunc18(); void vfunc19(); void vfunc20();	// plain: the game's CAI_Navigator table has 18 slots (link audit, decl-audit)
	bool sub_102ee6d0(Vector *pResult, float flDistance);
	void sub_102f28e0();	// 0x102f28e0 (called by CAI_BaseNPC::vfunc123 on the navigator at owner+0x5d34): debug-draws the route's path nodes (m_p30 -> m_pWaypoint linked list through +0x30, 3x3x3 box at each node from its +0x28/+0x2c position) and the two goal-direction markers from sub_102ee1a0 / sub_102f2fc0
	void sub_102f1fa0(float flDelay, CAI_NavSource *pSource);	// finds the record of the route's waypoint (provider list at +0x2c), sets bit 0 of its flags, its time to curtime + flDelay and its handle from pSource (-1 without)
	bool sub_102efd50();	// "MoveGround"-like step: with no route status warns about a wrong nav type for types 1 / 3 (telling the motor at +0x20 slot 8 / 5) and stops (sub_102eeba0(0)); a finished status (2) with another nav type than 2 fails; else clears the pending move (sub_102f13d0(0), byte +0x51) and succeeds
	void sub_102eeb70();	// stub 0x1000e26e, called first by vfunc10
	void sub_10008832(int a);	// CUnknown102eeba0::sub_102eeba0 (stub 0x10008832), called with this
	void sub_100053b7(int a);	// stub of 0x102f13d0
	bool sub_102f13d0(unsigned char bArg);	// stores the argument as a float at +0x3c, then (owner state 0 or 2, and a route waypoint that is not blocked: same entry as its linked one, flags 0x2a clear) runs the three move checks sub_102f0e80 / sub_102f0fe0 (at most every half second, or whenever +0x3c is set) and sub_102f13a0; true when one of them succeeded
	bool sub_102f0e80(char *pbDone);	// stub 0x1001512c
	bool sub_102f0e00(const float *pfThreshold, char *pbDone);	// stub 0x100132fa, called directly by sub_102f0e80 with the threshold global 0x1060fcd8
	bool sub_102f06e0(void *pWaypoint, char *pbDone);	// stub 0x100135c5, called directly by sub_102f0e80 with the next waypoint
	bool sub_102f0fe0(char *pbDone);	// stub 0x100042b4
	bool sub_102f13a0(char *pbDone);	// stub 0x100029fa
	void sub_102ee380(int a, int b);	// stamps this and the pathfinder, then hands (a, b) to the pathfinder's sub_102fdcc0
	void sub_102ee300(int a, int b, int c, int d, int e);	// as sub_102ee380, handing five arguments to the pathfinder's sub_10300140
	int sub_102ecc00();	// the dword at +0x5d3c of the owner (stub 0x10013011)
	bool sub_102f2060(int bArg);	// 0x102f2060: picks the route builder (local / node) and advances the route
	bool sub_102ee6a0();	// stub 0x10012963
	CBaseEntity *sub_102ee160();	// stub 0x10015906: the entity the navigator is after, compared with the one the entity list gives for the NPC's handle at +0x5ce0
	void sub_102ed310(CBaseEntity *pEnt, const Vector *pPosition);	// stub 0x10008abc
	void sub_102ee200();	// stub 0x10007b4e
	int sub_102ee620();	// stub 0x100037e2: the navigation type (8 is the one the Moleman / Combatman schedule selection waits for)
	char sub_102ee2e0();	// stub 0x10009c23: whether the navigator is busy with a move that the alternate-action end has to stop
	int sub_102ee430();	// "GetArrivalSequence" (stub 0x1000fae2): the route's arrival sequence; when unset selects one for the route's arrival activity (idle when that has none, with a DevMsg) and remembers it in the route
	void sub_102ed390(int a1, int a2, int a3, int a4, int a5, int a6, int a7);	// asks the owner (slot 220) with the route's value at +0x28, then stores the answer in the route
	bool sub_102edae0(const Vector *pPosition, float flDistance, int c, Vector *pOut);	// "FindBackAwayPoint": refreshes the stamps of this and of the pathfinder (the owner's object at +0x5d3c), asks the pathfinder for a node to back away to and, when there is one, copies the node's position to pOut and succeeds
	bool sub_102edbb0(const Vector *pPosition, float flDistance, int c, Vector *pOut);	// as sub_102edae0, asking the pathfinder's A* search (sub_10301010)
	bool sub_102edc80(const Vector *pPosition, float flDistance, int c, int d, Vector *pOut, int e);	// as sub_102edae0 with the five argument node search (sub_10301720); pOut is the fifth argument
	bool sub_102edd50(const Vector *pPosition, float flDistance, int c, int d, int e, Vector *pOut, int f);	// as sub_102edae0 with the six argument node search (sub_10302320); pOut is the sixth argument
	bool sub_102ed9c0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, Vector *pOut);
	int sub_10302e50(const Vector *pPos, class CBaseEntity *pEnt, float flMin, float flMax, float flTime, const Vector *pDir, char bFlag);	// as sub_102edae0 with the seven argument node search (sub_10302e50); pOut is the eighth argument
	Vector *sub_102ee9c0(Vector *pOut, int index);	// the position of graph node `index` (stub 0x10008869)
	bool sub_102ed540(float flMin, float flMax, int c);	// up to 5 tries: a random distance in [flMin, flMax] (re-rolled each try) along a random heading, handed to sub_102ed610 with flMin; the first success wins; else sub_102ed940(1.0f, vec3_origin, c)
	bool sub_102ed610(const Vector *pDir, float flDist, float flMax, int c);	// stub 0x10005ad3: tries the point flDist along pDir from the owner's origin
	bool sub_102ed940(float f, const Vector *pVec, int c);	// stub 0x10007afe: refreshes the stamps of this and of the pathfinder, then hands the owner's origin on
	float sub_1030a650(float flValue);	// twice the argument clamped to [range of the owner's hull (object at owner +0x5d40, hull index at +8), 0x1049df84]
	bool sub_102f1dc0(int a, int b);	// per-frame path request step (ret 8): refreshes the stamps of this and of the pathfinder, drops the route's waypoint; while the owner's flag 0x20 (+0x5d8c) is set waits for the deadline at +0x48 (failure: slot 10(0xc, 1)) and retries sub_102f2330(b) after +0x4c, else tries it at once; success clears the flag and, unless the owner's slot 529 holds (or the current task is 0x6e), fails the task with slot 2(0); true on success
	bool sub_102f2330(int b);	// stub 0x10001e51: "DoFindPath", called directly
	void sub_102ecd00(int a);
	bool sub_102ed430(const Vector *pPosition, int a, int b, int c);	// path to the node nearest pPosition (sub_102f3c10 asks the owner's graph): stamps the owner's value at +0x156c and the frame count into +8 / +0xc, asks the pathfinder (sub_102ff3e0 with a, b), sets up the route (flag value 4, the node, its arrival data) and stores the squared distance from pPosition to the route's goal position in the float at +0x14; false when any step fails (ret 0x10: four stack arguments, the last one unused)
	Vector *sub_102ee140();	// stub 0x100071fd: the position the route is heading for
	float sub_102f2fc0();	// stub 0x100049b7: the route's float at +0x20 (goal tolerance)
	bool sub_102f2ea0();	// with the owner's origin within the goal tolerance (2D, squared distance kept at +0x14) and the height difference within the owner's slot 522, runs vfunc8 and succeeds; never for nav types 1 / 3
	void sub_102ee220(const Vector *pPosition);	// stub 0x1000481d: hands the navigator a position to head for
	CBaseEntity *sub_102f05b0(void *pEnt);	// stub 0x100031ac
	void sub_102f0400();	// stub 0x10006744, run when the motor reports 1
	void sub_102ee2a0();	// stub 0x100078b0, run by the alternate action end
	int sub_102ee3f0();	// stub 0x10011f77: the owner's task id for the finished move
	float sub_102f1cf0();	// the distance from the owner's origin (slot 220) to the route's goal position: 2D while the flag at +0x18 is clear, else 3D
	bool sub_102f05d0(const Vector *pTarget);	// true while the float at +0x3c is set; else asks the owner (slot 368) about the flat direction to pTarget and fails when it points away (dot with the answer's x / y at most the threshold 0x1049d984)
	bool sub_102ede30(int a, int b);
	bool sub_102ede30(float a, int b);	// \"CAI_Navigator::PrependLocalAvoidance\": scope \"CAI_Navigator_PrependLocalAvoidance\"; BuildTriangulationRoute from the owner's origin (slot 220) to the route's goal position and, when there is a route, hands it to the waypoint list at route+0x24 (ret 8)
	bool sub_102ecd20(void *pGoal, int nFlags);	// 0x102ecd20 (ret 8, returns al; called by CNPC_VZombie::vfunc442 case 0x150 with a 0x2c byte goal built on the stack: [0]=4, [1..3] position, [4..7] four -1 handles, then globals 0x104d1d00 / 0x10940390 / 0x10934060..68 at the tail; nFlags = 4): the generic "SetGoal" of the navigator: stamps +8/+0xc, applies the goal record (type [0], position, target handle [5], speed [8], flags [9] bit 1 = path to a graph node found by sub_102f3c10 / sub_102f41b0 / sub_102fd240), sets up the route (+0x30)
	void *sub_102ecc40();	// stub 0x10009322: the entity the navigator is after, chosen by the navigation type (the owner's focus entity for types 1, 2 and 7, else the entity of the route's handle at +0x30)

	// Typed views of the component pointers kept as ints below (matched code reads them as ints):
	class CAI_Motor *Motor() { return (class CAI_Motor *)m_i20; }	// 0x20: the NPC's motor (vfunc15 / MoveEnact: CAI_Motor::sub_102e23a0, slot 10)
	class CAI_LocalNavigator *LocalNav() { return (class CAI_LocalNavigator *)m_i28; }	// 0x28: the local navigator (vfunc15 calls its slot 3 "MoveCalc" with a copy of the 0x7c byte goal)

	int m_i14;
	int m_i18;
	char m_b1c;
	int m_i20;
	int m_i24;
	int m_i28;
	CAI_NavProviderList *m_pProviders;	// 0x2c
	CAI_NavRoute *m_p30;
	char m_b34;
	int m_i38;
	float m_f3c;	// 0x3c
	float m_f40;
	float m_f44;
	float m_f48;
	float m_f4c;
	char m_b50;
	char m_b51;	// 0x51: cleared by sub_102efd50 (the pending move)
	int m_i54;
	CAI_NavFloatPair m_pair58;
	CAI_NavFloatPair m_pair60;
};
