// class CAI_Navigator (RTTI .?AVCAI_Navigator@@): AI component; only the first 21 vtable slots are declared
// (slots past 20 not yet seen).
// vfunc9/vfunc10 take (int, 4-byte value); the exact type of the second argument is unknown.
// Bases: CAI_Component at +0 (vptr with 3 slots, owner at +4, modelled by CAI_NavComponentData) and
// CAI_DefMovementSink at +0x10.
#pragma once

#include "CAI_DefMovementSink.h"
#include "Vector.h"

class CAI_Navigator;

class CAI_NavComponentData
{
public:
	CAI_NavComponentData(int pOuter) { m_pOuter = pOuter; m_i0c = -1; }
	virtual CAI_Navigator *vfunc0(unsigned int flags); virtual void vfunc1(); virtual void vfunc2(int a);

	int m_pOuter;	// 0x04
	int m_i08;
	int m_i0c;
};

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
	char m_pad00[0x78];
	int m_nEntries;	// 0x78
	CAI_NavEntry **m_ppEntries;	// 0x7c

	CAI_NavEntry *sub_102f9400(int id);	// stub 0x10012639: the record whose id (sub_100122ab of the record, owner at +4) equals id, or null
};

struct CAI_NavProviderList	// count, array
{
	int m_nCount;	// 0x00
	CAI_NavProvider **m_ppItems;	// 0x04
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
	int m_i28;
	int m_i2c;
	int m_i30;
	CAI_NavVec3 m_v34;	// 0x34
	char m_pad40[0x44 - 0x40];
	int m_nProvider;	// 0x44
	char m_b48;
	char m_pad49[3];
	CAI_NavVec3 m_v4c;	// 0x4c
	char m_b58;
	char m_pad59[3];
	int m_i5c;
	int m_i60;

	void sub_1030bb30();	// resets the route: deletes the waypoint, vectors to vec3_origin (0x1070d1b0), flags and counters to 0 (+0x2c = 1, +0x30 = -1)
	int sub_1030bc00();	// the route's move status (stub 0x1000f240): 0 when it has none, 2 for a finished one
	void sub_1030ba50(int value);	// sets the flag at +0x58 and the value at +0x5c
	void sub_1030b4d0(int value);	// stub 0x1000b6ef
	int sub_1030b580();	// the arrival sequence of the route, -1 when unset (stub 0x1000f6b9)
	int sub_1030b520();	// the arrival activity of the route (stub 0x10001b77)
	void sub_1030b5b0(int sequence);	// stores the arrival sequence (stub 0x100016b3)
	float sub_1030b880();	// a float value of the route handed to the motor with its goal record (stub 0x1001021c)
	Vector *sub_1030b7c0();	// the route's goal position (stub 0x10012805)
};

class CAI_Navigator : public CAI_NavComponentData, public CAI_DefMovementSink
{
public:
	CAI_Navigator(int pOuter);	// 0x102eca50: allocates the 0x84 byte object at +0x30

	virtual CAI_Navigator *vfunc0(unsigned int flags); virtual void vfunc1(); virtual void vfunc2(int a); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();
	virtual void vfunc9(int a, float b);
	virtual void vfunc10(int a, float b);
	virtual void vfunc11(); virtual void vfunc12(); virtual int vfunc13(int a); virtual int vfunc14(int a);
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20();
	void sub_10011c98();	// as in CDataObjectAccessSystem (transplant)
	void sub_102f1fa0(float flDelay, CAI_NavSource *pSource);	// finds the record of the route's waypoint (provider list at +0x2c), sets bit 0 of its flags, its time to curtime + flDelay and its handle from pSource (-1 without)
	bool sub_102efd50();	// "MoveGround"-like step: with no route status warns about a wrong nav type for types 1 / 3 (telling the motor at +0x20 slot 8 / 5) and stops (sub_102eeba0(0)); a finished status (2) with another nav type than 2 fails; else clears the pending move (sub_102f13d0(0), byte +0x51) and succeeds
	void sub_10008832(int a);	// CUnknown102eeba0::sub_102eeba0 (stub 0x10008832), called with this
	void sub_100053b7(int a);	// stub of 0x102f13d0
	bool sub_102f13d0(unsigned char bArg);	// stores the argument as a float at +0x3c, then (owner state 0 or 2, and a route waypoint that is not blocked: same entry as its linked one, flags 0x2a clear) runs the three move checks sub_102f0e80 / sub_102f0fe0 (at most every half second, or whenever +0x3c is set) and sub_102f13a0; true when one of them succeeded
	bool sub_102f0e80(char *pbDone);	// stub 0x1001512c
	bool sub_102f0fe0(char *pbDone);	// stub 0x100042b4
	bool sub_102f13a0(char *pbDone);	// stub 0x100029fa
	int sub_102ecc00();	// the dword at +0x5d3c of the owner (stub 0x10013011)
	void sub_102ee6a0();	// stub 0x10012963
	int sub_102ee620();	// stub 0x100037e2: the navigation type (8 is the one the Moleman / Combatman schedule selection waits for)
	char sub_102ee2e0();	// stub 0x10009c23: whether the navigator is busy with a move that the alternate-action end has to stop
	int sub_102ee430();	// "GetArrivalSequence" (stub 0x1000fae2): the route's arrival sequence; when unset selects one for the route's arrival activity (idle when that has none, with a DevMsg) and remembers it in the route
	void sub_102ed390(int a1, int a2, int a3, int a4, int a5, int a6, int a7);	// asks the owner (slot 220) with the route's value at +0x28, then stores the answer in the route
	bool sub_102edae0(const Vector *pPosition, float flDistance, int c, Vector *pOut);	// "FindBackAwayPoint": refreshes the stamps of this and of the pathfinder (the owner's object at +0x5d3c), asks the pathfinder for a node to back away to and, when there is one, copies the node's position to pOut and succeeds
	bool sub_102edbb0(const Vector *pPosition, float flDistance, int c, Vector *pOut);	// as sub_102edae0, asking the pathfinder's A* search (sub_10301010)
	bool sub_102edc80(const Vector *pPosition, float flDistance, int c, int d, Vector *pOut, int e);	// as sub_102edae0 with the five argument node search (sub_10301720); pOut is the fifth argument
	bool sub_102edd50(const Vector *pPosition, float flDistance, int c, int d, int e, Vector *pOut, int f);	// as sub_102edae0 with the six argument node search (sub_10302320); pOut is the sixth argument
	bool sub_102ed9c0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, Vector *pOut);	// as sub_102edae0 with the seven argument node search (sub_10302e50); pOut is the eighth argument
	Vector *sub_102ee9c0(Vector *pOut, int index);	// the position of graph node `index` (stub 0x10008869)
	bool sub_102ed540(float flMin, float flMax, int c);	// up to 5 tries: a random distance in [flMin, flMax] (re-rolled each try) along a random heading, handed to sub_102ed610 with flMin; the first success wins; else sub_102ed940(1.0f, vec3_origin, c)
	bool sub_102ed610(const Vector *pDir, float flDist, float flMax, int c);	// stub 0x10005ad3: tries the point flDist along pDir from the owner's origin
	bool sub_102ed940(float f, const Vector *pVec, int c);	// stub 0x10007afe: refreshes the stamps of this and of the pathfinder, then hands the owner's origin on
	float sub_1030a650(float flValue);	// twice the argument clamped to [range of the owner's hull (object at owner +0x5d40, hull index at +8), 0x1049df84]
	bool sub_102f1dc0(int a, int b);	// per-frame path request step (ret 8): refreshes the stamps of this and of the pathfinder, drops the route's waypoint; while the owner's flag 0x20 (+0x5d8c) is set waits for the deadline at +0x48 (failure: slot 10(0xc, 1)) and retries sub_102f2330(b) after +0x4c, else tries it at once; success clears the flag and, unless the owner's slot 529 holds (or the current task is 0x6e), fails the task with slot 2(0); true on success
	bool sub_102f2330(int b);	// stub 0x10001e51: "DoFindPath", called directly
	bool sub_102ed430(const Vector *pPosition, int a, int b, int c);	// path to the node nearest pPosition (sub_102f3c10 asks the owner's graph): stamps the owner's value at +0x156c and the frame count into +8 / +0xc, asks the pathfinder (sub_102ff3e0 with a, b), sets up the route (flag value 4, the node, its arrival data) and stores the squared distance from pPosition to the route's goal position in the float at +0x14; false when any step fails (ret 0x10: four stack arguments, the last one unused)
	Vector *sub_102ee140();	// stub 0x100071fd: the position the route is heading for
	void sub_102f0400();	// stub 0x10006744, run when the motor reports 1
	int sub_102ee3f0();	// stub 0x10011f77: the owner's task id for the finished move
	float sub_102f1cf0();	// the distance from the owner's origin (slot 220) to the route's goal position: 2D while the flag at +0x18 is clear, else 3D

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
	char m_pad3c[4];
	float m_f40;
	float m_f44;
	float m_f48;
	float m_f4c;
	char m_b50;
	int m_i54;
	float m_f58;
	float m_f5c;
	float m_f60;
	float m_f64;
};
