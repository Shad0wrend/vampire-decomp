// CBaseFlex : CBaseAnimatingOverlay (the game's RTTI; vtable 0x10450abc, 292 slots): entity with flex animation. Its
// own slots: 5, 31, 79..82, 105 and the new 276..291. Its data starts at sizeof(CBaseAnimatingOverlay) 0x848.
#pragma once
#include "CBaseAnimatingOverlay.h"
#include "utlvector.h"

struct CBaseFlexFileData	// a loaded expression file; only the tables the flex cache patches are named
{
	char m_pad00[0xa0];
	int m_nControllers;	// 0xa0
	int m_nNameTable;	// 0xa4: byte offset of the table of name offsets
	int m_nIndexTable;	// 0xa8: byte offset of the table that receives the controller indices

	const char *ControllerName(int i) { return (char *)this + *(int *)((char *)this + m_nNameTable + i * 4); }
	int &ControllerIndex(int i) { char *pEntry = (char *)this + i * 4; return *(int *)(pEntry + m_nIndexTable); }
};

struct CBaseFlexFileRec	// 0x84 byte cache record
{
	char m_szName[0x80];
	CBaseFlexFileData *m_pData;	// 0x80
};

struct CBaseFlexItemObject	// the object an item at +0xa58 refers to
{
	int sub_100029c8();	// the object's type (the dword at +0; stub 0x100029c8 for 0x10075b70)
	bool sub_1000695b();	// whether the float at +0x188 is set, i.e. not -1.0f (stub 0x1000695b for 0x10075f30)
	const char *sub_10006fdc();	// a name (stub 0x10006fdc for 0x10075c50)
	void *sub_1000b93d();	// stub 0x1000b93d for 0x10075ca0
	float sub_10002900(float flWeight);	// stub 0x10002900 for 0x10076280
};

struct CBaseFlexItem	// 0x1c byte element
{
	CBaseFlexItemObject *m_pObject;
	int m_n04;
	char m_b08;
	char m_pad09[0x1c - 9];
};

struct CFlexPlayerTrack	// the object a flex request (+0) animates; real name not yet known
{
	float sub_10076b30();	// a duration (stub 0x10014835)
	float sub_10077f10(float flFraction);	// stub 0x10008a4e: sets the position inside the track from a fraction
	float sub_10076280(float flWeight);	// stub 0x10002900: applies a weight
};

struct CFlexPlayerSource	// the object a flex request (+4) reads from; real name not yet known
{
	float sub_1007dfa0();	// a weight (stub 0x1000b9a1)
};

struct CFlexRequest	// the argument of CBaseFlex::vfunc291
{
	CFlexPlayerTrack *m_pTrack;	// 0x00
	CFlexPlayerSource *m_pSource;	// 0x04
	int m_n08;
	int m_n0c;	// 0x0c: negative when the request is unused
	int m_nSequence;	// 0x10
	float m_flStartTime;	// 0x14
};

struct CFlexControllerDesc	// 0x14 byte studio flex controller record
{
	char m_pad00[0xc];
	float m_flMin;	// 0x0c
	float m_flMax;	// 0x10
};

struct CFlexStudioHdr	// the model's studio header as seen by the flex controllers
{
	char m_pad00[0x164];
	int m_nControllerIndex;	// 0x164: byte offset of the controller records
	CFlexControllerDesc *GetController(int i) { return (CFlexControllerDesc *)((char *)this + m_nControllerIndex + i * sizeof(CFlexControllerDesc)); }
};

class CBaseFlex : public CBaseAnimatingOverlay
{
public:
	int sub_10094520();	// CBaseAnimating member (stub 0x10012530): the number of flex controllers
	CFlexStudioHdr *sub_100952d0(int a);	// CBaseAnimating member (stub 0x10013d8b): the model's studio header
	void vfunc105(const char *pszModel);	// slot 105 override: CBaseAnimating::vfunc105(pszModel), then slot 279(i, 0) once for each flex controller (sub_10094520 counts them, re-read after each call)
	CBaseFlexFileData *sub_100b62a0(const char *pszName);	// loads the expression file of that name once (cached in the vector at +0xa6c) and patches its controller indices
	int sub_100b5d10(const char *pszName);	// "CBaseFlex::FindFlexController": the index of the flex controller whose name equals pszName (case-insensitive), 0 when none
	int sub_1001337c(int a);	// CBaseFlex member (stub 0x1001337c), called from vfunc280
	float sub_10091080(int sequence);	// CBaseAnimating member (stub 0x10009813), returns a float
	void sub_10090b20();	// CBaseAnimating::RepositionOnAnimationExit (stub 0x10012ada): scope trace (entity name), sets the byte at +0x5b4

	float m_vec848[3];
	int m_toggle854;
	float m_flFlexWeight[(0xa58 - 0x858) / 4];	// 0x858
	CBaseFlexItem *m_pItems;	// 0xa58
	int m_nItemsAlloc;
	int m_nItemsGrow;
	int m_nItems;	// 0xa64
	CBaseFlexItem *m_pItemElements;	// 0xa68
	CUtlVector<CBaseFlexFileRec *> m_FileCache;	// 0xa6c: the expression files loaded so far
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100152ad();	// as in CPhysForce (transplant)
	CBaseFlex *sub_100b58d0();	// as in CKeepUpright (transplant)
	void sub_100b5970();	// the destructor body (called through stub 0x100152ad)
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
    virtual int vfunc79();
public:
	virtual void vfunc276();	// slot 276 (new, 0x100b5ce0): toggles the int at +0x854
	virtual void vfunc277(const float *v);	// slot 277 (new, 0x100b5b00): stores three floats at +0x848
	virtual char * vfunc278();
	virtual void vfunc279(int nController, float flValue);	// CBaseAnimating's flex controller setter
	virtual void vfunc280(int a, float b);
	virtual float vfunc281(int index);	// "GetFlexWeight"-like: the flex controller index's value at +0x858 scaled from 0..1 into the controller's range, 0.0f outside the model's controllers
	virtual float vfunc282(const char *pszName);	// slot 282: vfunc281(sub_100b5d10(pszName))
	virtual void vfunc283();
	virtual void vfunc284();	// walks the items at +0xa58 and dispatches on their type through slots 288-291
	virtual void vfunc285(int nKey);	// clears the item vector when nKey is 0, else removes every item whose second field (+4) equals nKey
	virtual void vfunc286(int a, void *pEvent);	// slot 286 (two stack arguments, thiscall): called by the scene entity's slot 262 with (b, event)
	virtual void vfunc287(CBaseFlexItemObject *pObject);	// removes the item that refers to pObject
	virtual void vfunc288(void *pObject, float flWeight, CBaseFlexFileData *pFile, CBaseFlexFileData *pFile2, bool bFirst);
	virtual void vfunc289(CBaseFlexItem *pItem);
	virtual void vfunc290(CFlexRequest *pRequest);
	virtual void vfunc291(CFlexRequest *pRequest);	// sets the track's position from the time since the request started and applies the source's weight
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc31(int);	// slot 31 (0x100b5a90): a tail call of CBaseAnimatingOverlay::vfunc31
};
