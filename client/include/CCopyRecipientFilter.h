// CCopyRecipientFilter: skeleton from the game's RTTI (2026-11-24)
// declared: its base, slot 2, and the member at 0x14
#pragma once
#include "IRecipientFilter.h"

class IClientEntity;

class CCopyRecipientFilter : public IRecipientFilter
{
public:
	int m_unk04; int m_unk08; int m_unk0c; int m_unk10; int m_unk14; int m_unk18; bool m_unk1c; int m_unk20; bool m_unk24;
	virtual int vfunc1();
	virtual int vfunc2();
	virtual bool vfunc4();
	virtual int vfunc5();
	virtual bool vfunc6();
	void *vfunc0(unsigned char bFree);
	virtual bool vfunc8(IClientEntity *pEntity);
};
