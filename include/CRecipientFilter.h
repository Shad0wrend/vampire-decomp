// CRecipientFilter: IRecipientFilter implementation (primary vtable 0x10476afc).
#pragma once

class CRecipientFilter
{
public:
	virtual CRecipientFilter *vfunc0(unsigned char flags);	// scalar deleting destructor
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual char vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();

	char m_pad0004[4];
	void *m_pMemory;	// 0x0008
	int m_allocCount;	// 0x000C
	int m_growSize;		// 0x0010
	int m_size;			// 0x0014
	void *m_pElements;	// 0x0018
	int m_1c;

	bool sub_101bd010(void *pPlayer);	// "CRecipientFilter::AddRecipient": the player's client index (engine slot 35 of the edict at +0x2e0) is appended unless negative or already present
};
