// StudioHdr: the fields of the studio model header (the object CBaseAnimating::GetModelPtr returns) that
// decompiled code reads. Only what the sequence lookups need.
#pragma once

struct StudioHdr;

struct StudioVirtualModel	// the object behind an include model: slot 1 gives the included model's header
{
	virtual void vfunc0();
	virtual StudioHdr *vfunc1(StudioHdr *pOwner, int index);
};

struct StudioIncludeModel	// 0x74 bytes: a model whose sequences are included
{
	char m_pad00[4];
	StudioVirtualModel *m_pVirtual;	// 0x04
	int m_nBase;	// 0x08: first sequence index
	int m_nCount;	// 0x0c: sequence count
	char m_pad10[0x44 - 0x10];
	short m_aPoseParamRemap[24];	// 0x44: the pose parameter of the owner each of the included model's parameters follows (-1: none)
};

struct StudioHdr
{
	char m_pad0000[0x110];
	int m_nLocalSeq;	// 0x110: number of local sequences
	char m_pad0114[0x194 - 0x114];
	int m_nIncludeModels;	// 0x194
	int m_nIncludeIndex;	// 0x198: offset of the include model records

	StudioIncludeModel *IncludeModel(int i) { return (StudioIncludeModel *)((char *)this + m_nIncludeIndex) + i; }
};
