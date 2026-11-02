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

struct StudioSeqDesc	// 0x2fc bytes each (the sequence lookups at 0x10427df0 read these)
{
	char m_pad00[8];
	unsigned int m_flags;	// 0x08: bit 0x100 / 0x200 are the two exclusion flags the activity lookup's char arguments test
	int m_nActivity;	// 0x0c: the activity the sequence plays
	int m_nActivityWeight;	// 0x10: its weight (the lookup stores it next to the sequence index)
	char m_pad14[0x2b8 - 0x14];
	int m_nMaxWeight;	// 0x2b8: compared with the lookup's last argument (the lookup keeps the sequence when either is negative or the argument <= it... i.e. rejects when 0 <= arg < this)
	char m_pad2bc[0x2fc - 0x2bc];
};

struct StudioBone	// 0xa0 bytes each (Studio_BuildMatrices 0x100c3600 reads these)
{
	char m_pad00[4];
	int m_iParent;	// 0x04: parent bone index, -1 for a root
	char m_pad08[0x88 - 8];
	unsigned char m_bFlags88;	// 0x88: bit 1 (value 2) = the bone's rotation is not inherited from the parent (only the translation is: rotation = the root matrix * bone rotation)
	char m_pad89[0xa0 - 0x89];
};

struct StudioBoneMask	// the bit list of bones to build (0x100c3600's last argument): bit i is tested at m_bits[i >> 5] & (1 << (i & 31))
{
	int m_nSize;	// 0x00
	unsigned int m_bits[1];	// 0x04
};

struct StudioHdr
{
	char m_pad0000[0xf0];
	int m_nBones;	// 0xf0: number of bones
	int m_nBoneIndex;	// 0xf4: offset of the bone records (StudioBone, 0xa0 bytes each)
	char m_pad00f8[0x110 - 0xf8];
	int m_nLocalSeq;	// 0x110: number of local sequences
	int m_nLocalSeqIndex;	// 0x114: offset of the local sequence descriptors (StudioSeqDesc, 0x2fc bytes each)
	void *m_pSeqCache118;	// 0x118: zero until sub_10427a70 (0x1000.. stub 0x100115f4) has built the sequence data (sub_10427dc0 calls it)
	char m_pad011c[0x194 - 0x11c];
	int m_nIncludeModels;	// 0x194
	int m_nIncludeIndex;	// 0x198: offset of the include model records

	StudioIncludeModel *IncludeModel(int i) { return (StudioIncludeModel *)((char *)this + m_nIncludeIndex) + i; }
	StudioSeqDesc *LocalSeq(int i) { return (StudioSeqDesc *)((char *)this + m_nLocalSeqIndex) + i; }
};
