// CBaseFlex: entity with flex animation (CBaseAnimatingOverlay -> CBaseAnimating -> ... -> CBaseEntity). Bases flattened.
#pragma once
#include "CBaseEntity.h"
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

class CBaseFlex : public CBaseEntity
{
public:
	int sub_10094520();	// CBaseAnimating member (stub 0x10012530): the number of flex controllers
	CFlexStudioHdr *sub_100952d0(int a);	// CBaseAnimating member (stub 0x10013d8b): the model's studio header
	void vfunc105(const char *pszModel);	// slot 105 override: CBaseAnimating::vfunc105(pszModel), then slot 279(i, 0) once for each flex controller (sub_10094520 counts them, re-read after each call)
	CBaseFlexFileData *sub_100b62a0(const char *pszName);	// loads the expression file of that name once (cached in the vector at +0xa6c) and patches its controller indices
	int sub_100b5d10(const char *pszName);	// "CBaseFlex::FindFlexController": the index of the flex controller whose name equals pszName (case-insensitive), 0 when none
	int sub_1001337c(int a);	// CBaseFlex member (stub 0x1001337c), called from vfunc280
	void sub_100b5b00(const float *v);	// slot 277 override: stores three floats at +0x848
	void sub_100b5ce0();	// slot 276 override: toggles the int at +0x854
	float sub_10091080(int sequence);	// CBaseAnimating member (stub 0x10009813), returns a float
	void sub_10090b20();	// CBaseAnimating::RepositionOnAnimationExit (stub 0x10012ada): scope trace (entity name), sets the byte at +0x5b4

	char m_pad03e0[0x848 - 0x3e0];
	float m_vec848[3];
	int m_toggle854;
	float m_flFlexWeight[(0xa58 - 0x858) / 4];	// 0x858
	CBaseFlexItem *m_pItems;	// 0xa58
	int m_nItemsAlloc;
	int m_nItemsGrow;
	int m_nItems;	// 0xa64
	CBaseFlexItem *m_pItemElements;	// 0xa68
	CUtlVector<CBaseFlexFileRec *> m_FileCache;	// 0xa6c: the expression files loaded so far
	CBaseFlex *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
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
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141();
	virtual void vfunc142();
	virtual void vfunc143();
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166();
	virtual void vfunc167();
	virtual void vfunc168();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174();
	virtual void vfunc175();
	virtual void vfunc176();
	virtual void vfunc177();
	virtual void vfunc178();
	virtual void vfunc179();
	virtual void vfunc180();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185();
	virtual void vfunc186();
	virtual void vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual void vfunc190();
	virtual void vfunc191();
	virtual void vfunc192();
	virtual void vfunc193();
	virtual void vfunc194();
	virtual void vfunc195();
	virtual void vfunc196();
	virtual void vfunc197();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207();
	virtual void vfunc208();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212();
	virtual void vfunc213();
	virtual void vfunc214();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217();
	virtual void vfunc218();
	virtual void vfunc219();
	virtual void vfunc220();
	virtual void vfunc221();
	virtual void vfunc222();
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226();
	virtual void vfunc227();
	virtual void vfunc228();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232();
	virtual void vfunc233();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237();
	virtual void vfunc238();
	virtual void vfunc239();
	virtual void vfunc240();
	virtual void vfunc241();
	virtual void vfunc242();
	virtual void vfunc243();
	virtual void vfunc244();
	virtual void vfunc245();
	virtual void vfunc246();
	virtual void vfunc247();
	virtual void vfunc248();
	virtual void vfunc249();
	virtual void vfunc250();
	virtual void vfunc251();
	virtual void vfunc252();
	virtual void vfunc253();
	virtual void vfunc254();
	virtual void vfunc255();
	virtual void vfunc256();
	virtual void vfunc257();
	virtual void vfunc258();
	virtual void vfunc259();
	virtual void vfunc260();
	virtual void vfunc261();
	virtual void vfunc262();
	virtual void vfunc263();
	virtual void vfunc264();
	virtual void vfunc265();
	virtual void vfunc266();
	virtual void vfunc267();
	virtual void vfunc268();
	virtual void vfunc269();
	virtual void vfunc270();
	virtual void vfunc271();
	virtual void vfunc272();
	virtual void vfunc273();
	virtual void vfunc274();
	virtual void vfunc275();
	virtual void vfunc276();
	virtual void vfunc277();
	virtual char * vfunc278();
	virtual void vfunc279(int nController, float flValue);	// CBaseAnimating's flex controller setter
	virtual void vfunc280(int a, int b);
	virtual float vfunc281(int index);	// "GetFlexWeight"-like: the flex controller index's value at +0x858 scaled from 0..1 into the controller's range, 0.0f outside the model's controllers
	virtual void vfunc282();
	virtual void vfunc283();
	virtual void vfunc284();	// walks the items at +0xa58 and dispatches on their type through slots 288-291
	virtual void vfunc285(int nKey);	// clears the item vector when nKey is 0, else removes every item whose second field (+4) equals nKey
	virtual void vfunc286(int a, void *pEvent);	// slot 286 (two stack arguments, thiscall): called by the scene entity's slot 262 with (b, event)
	virtual void vfunc287(CBaseFlexItemObject *pObject);	// removes the item that refers to pObject
	virtual void vfunc288(void *pObject, float flWeight, CBaseFlexFileData *pFile, CBaseFlexFileData *pFile2, bool bFirst);
	virtual void vfunc289(CBaseFlexItem *pItem);
	virtual void vfunc290(CBaseFlexItem *pItem);
	virtual void vfunc291(CFlexRequest *pRequest);	// sets the track's position from the time since the request started and applies the source's weight
};
