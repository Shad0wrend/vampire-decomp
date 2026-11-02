// CLogicRelay: declared by pcdecomp transplant for 0x10136260 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

class CLogicRelay : public CBaseEntity
{
public:
	CLogicRelay *sub_101363b0();
	unsigned char sub_101363f0();	// CLogicRelay::vfunc117 body (CLogicalEntity::vfunc117 at stub 0x1000f7e5, & 0xfd)
	int sub_1000f7e5();	// CLogicalEntity::vfunc117 (stub 0x1000f7e5), called directly
	void sub_100090fc(int flag);	// the CConstraintAnchorBase constructor body (0x100090fc), called on this
	void sub_101364e0(inputdata_t *pInputData);	// "CLogicRelay::InputTrigger" (plain member): fires m_OnTrigger with the activator unless disabled or waiting for the refire; spawn flag 1 removes the relay, without flag 2 it waits for the refire and queues the "EnableRefire" input after the output's longest delay + 0.001

	char m_pad0000[0x450 - sizeof(CBaseEntity)];
	char m_bDisabled;	// 0x450
	char m_bWaitForRefire;	// 0x451
	char m_pad0452[2];
	COutputEvent m_OnTrigger;	// 0x454
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc117();
    CLogicRelay *vfunc5(unsigned int flags);	// as in CNPC_VGargoyle (transplant)
};
