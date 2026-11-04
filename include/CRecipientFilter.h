// CRecipientFilter (RTTI .?AVCRecipientFilter@@, vtable 0x10476afc): Source's recipient filter (dlls/recipientfilter.h,
// 2004 public SDK form), the base of every filter the game builds on the stack (CBroadcastRecipientFilter.h, ...).
//
// Constructor (0x1019ce00, stub 0x100035d5) is out of line: the vector's inline constructor, the vptr, Reset
// (0x1019ced0). Destructor: implicit and inline, it only destroys m_Recipients (CUtlVector<int>, utlvector.h): no
// vtable stores in a stack filter's destruction. How much of the vector's teardown VC6 inlines depends on how deep
// the filter class is (CBroadcastRecipientFilter: all of it; CRelieableBroadcast / CPASAttenuationFilter: the loop
// over the elements calls the out-of-line CUtlMemory<int>::Base, stub 0x10013e12), so write the filter class the
// game used and let the compiler decide.
#pragma once

#include "Vector.h"
#include "IRecipientFilter.h"
#include "utlvector.h"

class CBasePlayer;

class CRecipientFilter : public IRecipientFilter
{
public:
	CRecipientFilter();	// 0x1019ce00 (stub 0x100035d5)

	virtual void vfunc1();	// IsReliable
	virtual int vfunc2();	// GetRecipientCount
	virtual int vfunc3(int slot);	// GetRecipientIndex(slot): the entity index, -1 for a slot out of range (0x1019cfb0)
	virtual char vfunc4();	// 0x1019d320: m_1c == 1
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();

	// Source's names (the symbol map knows them; the sub_ names below are the same functions)
	void Reset();	// 0x1019ced0: clears the flags and the recipients; m_1c = 0, m_20 = m_24 = -1
	void MakeReliable();	// 0x1019cf50 (stub 0x1001186f): m_bReliable = true
	void AddAllPlayers();	// 0x1019cff0 (stub 0x1000d9f9)
	void AddRecipient(CBasePlayer *player);	// 0x1019d040 (stub 0x1001531b)
	void AddRecipientsByPVS(const Vector &origin);	// 0x1019d210 (stub 0x100043db)
	void AddRecipientsByPAS(const Vector &origin);	// 0x1019d280 (stub 0x10004caa)
	void UsePredictionRules();	// 0x1019d3d0 (stub 0x10005ce0)

	bool m_bReliable;	// 0x04
	bool m_bInitMessage;	// 0x05
	CUtlVector<int> m_Recipients;	// 0x08: memory +0x8, allocation count +0xc, grow size +0x10, size +0x14, elements +0x18
	int m_1c;	// 0x1c
	int m_20;	// 0x20
	int m_24;	// 0x24
	bool m_bUsingPredictionRules;	// 0x28
	bool m_bIgnorePredictionCull;	// 0x29

	// the same functions under their provisional names (matched code uses them)
	bool sub_101bd010(void *pPlayer);	// "CRecipientFilter::AddRecipient": the player's client index (engine slot 35 of the edict at +0x2e0) is appended unless negative or already present
	void sub_1019d040(void *pPlayer);	// AddRecipient (variant with prediction rules): skips the suppressed host when m_bUsingPredictionRules is set, then appends the client index unless already present
	void sub_1019ce00();	// the constructor body (stub 0x100035d5)
	void sub_1019cff0();	// AddAllPlayers (stub 0x1000d9f9)
	void sub_1019d280(const float *pOrigin);	// AddRecipientsByPAS (stub 0x10004caa)
	void sub_1019d1c0(unsigned int bits);	// adds every player whose bit (client index - 1) is set (stub 0x1000d52b)
	void sub_1019d210(const float *pOrigin);	// AddRecipientsByPVS (stub 0x100043db)
	void sub_1019cf50();	// MakeReliable (stub 0x1001186f)
	void sub_1019d3d0();	// UsePredictionRules (stub 0x10005ce0)
	void sub_1019d2f0(int clientIndex);	// "CRecipientFilter::RemoveRecipient" by client index (stub 0x1000c19e)
	void sub_1019d4b0(const Vector &origin, float flAttenuation);	// CPASAttenuationFilter::Filter (stub 0x1000dfa3): drops the players farther than 1 / attenuation
	void sub_1019d1c0(int playerBits);	// AddPlayersFromBitMask (stub 0x1000d52b): adds every player whose bit is set
	void sub_1019cf00();	// counts the connected clients (client indices 1 .. maxClients of the globals) into m_24 once, after m_24 was reset to -1 (called by vfunc6)
};
