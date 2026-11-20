// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10003c10 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory192 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10003c10(int num);
};

void CUtlMemory192::sub_10003c10(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 0xc0);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 0xc0);
}
// END FUNCTION

// FUNCTION: 0x10004d80 size=0x43
#include "Vector.h"
Vector Vector::sub_10004d80(float fl) const
{
	Vector res;
	VectorMultiply(*this, fl, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x10027d20 size=0x191
#include "Vector.h"
void sub_100dfc60(const Vector &a, const Vector &b, int r, int g, int bl, bool noDepthTest, float duration);

void sub_10027d20(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, bool noDepthTest, float duration)
{
    Vector o = origin;
    double t0 = maxs.z; o.z = o.z - t0 * 0.5;
    Vector p1 = o + mins;
    Vector p2 = o + maxs;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.x += maxs.x - mins.x;
    p2.x -= maxs.x - mins.x;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.y += maxs.y - mins.y;
    p2.y -= maxs.y - mins.y;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
    p1.x -= maxs.x - mins.x;
    p2.x += maxs.x - mins.x;
    sub_100dfc60(p1, p2, r, g, b, noDepthTest, duration);
}
// END FUNCTION

// FUNCTION: 0x100291c0 size=0x32
#include <string.h>

int *__fastcall sub_100291c0(int *p)
{
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    memset(p + 5, 0, 0x41 * 4);
    *(char *)(p + 0x46) = 0;
    p[0xd] = -1;
    return p;
}
// END FUNCTION

// FUNCTION: 0x1002c080 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_1002c080(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x1002d620 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory36 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1002d620(int num);
};

void CUtlMemory36::sub_1002d620(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 36);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 36);
}
// END FUNCTION

// FUNCTION: 0x1002d690 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1002d690(int num);
};

void CUtlMemory12::sub_1002d690(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x10039080 size=0x19
#include "Vector.h"
Vector &Vector::sub_10039080(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x10045630 size=0x3b
#include "Vector.h"

void sub_10045630(Vector *a, Vector *b, Vector *out)
{
    CrossProduct(*a, *b, *out);
}
// END FUNCTION

// FUNCTION: 0x10049f20 size=0x19
struct CUnknown100f2f90 { void * sub_10049f20(int, int, int); };
void * CUnknown100f2f90::sub_10049f20(int a0, int a1, int a2)
{
    *(int *)this = a0;
    *(int *)((char *)this + 4) = a1;
    *(int *)((char *)this + 8) = a2;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10049f40 size=0x43
#include "Vector.h"
Vector Vector::sub_10049f40(const Vector &v) const
{
	Vector res;
	VectorAdd(*this, v, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x10079a40 size=0x47
int sub_10079a40(int n, int *values, int *weights)
{
	if (n < 1)
		return -1;
	if (n == 1)
		return *values;
	int best = 0;
	int bestVal = 0x80000000;
	for (int i = 0; i < n; i++) {
		if (weights[i] > bestVal) {
			bestVal = weights[i];
			best = i;
		}
	}
	return values[best];
}
// END FUNCTION

// FUNCTION: 0x100889f0 size=0x1a2
#include "Quaternion.h"
union CBlendAnimValue
{
	struct
	{
		unsigned char valid;
		unsigned char total;
	} num;
	short value;
};

struct CBlendAnim
{
	float weight;
	int pad04[3];
	int offset[4];
};

struct CBlendBone
{
	char pad00[0x2c];
	float value[4];
	char pad3c[0x48 - 0x3c];
	float scale[4];
};

void sub_1010a0b0(Quaternion &p, Quaternion &q, float t, Quaternion &qt);

void sub_100889f0(void *pHdr, int frame, float s, CBlendBone *pbone, CBlendAnim *panim, Quaternion &q)
{
	int j, k;
	Quaternion q1, q2;
	CBlendAnimValue *panimvalue;

	if (panim->weight == 0)
	{
		q.x = 0;
		q.y = 0;
		q.z = 0;
		q.w = 0;
		return;
	} j = 0; while (j < 4) { if (panim->offset[j] == 0)
		{
			q1[j] = q2[j] = pbone->value[j];
		}
		else
		{
			panimvalue = (CBlendAnimValue *)((unsigned char *)panim + panim->offset[j]);
			k = frame;
			while (panimvalue->num.total <= k)
			{
				k = k - panimvalue->num.total;
				panimvalue = panimvalue + (panimvalue->num.valid + 1);
			}
			if (panimvalue->num.valid > k)
			{
				q1[j] = panimvalue[(int)k + 1].value;
				if (panimvalue->num.valid > k + 1)
				{
					q2[j] = panimvalue[k + 2].value;
				}
				else
				{
					if (panimvalue->num.total > k + 1)
						q2[j] = q1[j];
					else
						q2[j] = panimvalue[panimvalue->num.valid + 2].value;
				}
			}
			else
			{
				q1[j] = panimvalue[panimvalue->num.valid].value;
				if (!(panimvalue->num.total > (1 + k))) q2[j] = panimvalue[panimvalue->num.valid + 2].value; else q2[j] = q1[j];
			}
			q1[j] *= (pbone->scale[j]);
			q2[j] = q2[j] * pbone->scale[j];
		} ++j; }
	int *pa1 = (int *)&q1;
	int *pa2 = (int *)&q2;
	if (((pa1[1] ^ pa2[1]) | (pa1[2] ^ pa2[2]) | (pa2[3] ^ pa1[3]) | (pa2[0] ^ pa1[0])) != 0)
	{
		sub_1010a0b0(q1, q2, s, q);
		return;
	} q = q1;
}
// END FUNCTION

// FUNCTION: 0x10088ba0 size=0x153
#include "Vector.h"
struct mstudioanimvalue_t {
    union {
        struct { unsigned char valid; unsigned char total; } num;
        short value;
    };
};
struct mstudioanim_t {
    float weight;
    int offset[6];
};
struct mstudiobone_t {
    char pad[0x20];
    float value[6];
    float pad38;
    float scale[6];
};
void sub_10088ba0(void *pStudioHdr, int frame, float s, mstudiobone_t *pbone, mstudioanim_t *panim, Vector &pos)
{
    if (panim->weight == 0.0) {
        pos.x = 0;
        pos.y = 0;
        pos.z = 0;
        return;
    }
    for (int j = 0; j < 3; j++) {
        pos[j] = pbone->value[j];
        if (panim->offset[j] != 0) {
            mstudioanimvalue_t *panimvalue = (mstudioanimvalue_t *)((unsigned char *)panim + panim->offset[j]);
            int k = frame;
            if (panimvalue->num.total < panimvalue->num.valid)
                k = 0;
            while (panimvalue->num.total <= k) {
                k -= panimvalue->num.total;
                panimvalue += panimvalue->num.valid + 1;
                if (panimvalue->num.total < panimvalue->num.valid)
                    k = 0;
            }
            if (panimvalue->num.valid > k) {
                if (panimvalue->num.valid > k + 1)
                    pos[j] += (panimvalue[k + 1].value * (1.0 - s) + s * panimvalue[k + 2].value) * pbone->scale[j];
                else
                    pos[j] += panimvalue[k + 1].value * pbone->scale[j];
            } else {
                if (panimvalue->num.total <= k + 1)
                    pos[j] += (panimvalue[panimvalue->num.valid].value * (1.0 - s) + s * panimvalue[panimvalue->num.valid + 2].value) * pbone->scale[j];
                else
                    pos[j] += panimvalue[panimvalue->num.valid].value * pbone->scale[j];
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10089170 size=0x61
int sub_100891e0(int hdr, int seq, int *pOut, int nBones, int *pRemap);
int sub_10089170(int hdr, int seq, int *pOut, int *pRemap)
{
	int i = 0;
	int nBones = *(int *)(hdr + 0xf0);
	if (0 < nBones) {
		do {
			pRemap[i] = i;
			i++;
		} while (i < nBones);
	}
	if (seq < *(int *)(hdr + 0x110)) {
		*pOut = hdr;
		if (seq < 0)
			seq = 0;
		return *(int *)(hdr + 0x114) + seq * 0x2fc + hdr;
	}
	return sub_100891e0(hdr, seq, pOut, nBones, pRemap);
}
// END FUNCTION

// FUNCTION: 0x10089660 size=0x57
struct SBone160 { char m_pad[0xa0]; };
struct SBoneOwner { char m_pad0[0x58]; };
void sub_10108450(void *pSrc, void *pOut);
void sub_10108a50(void *pDst, void *pIn, int a);
void sub_10089660(char *pOwner, int iSrc, int iDst, int a)
{
	char tmp[0x30];
	sub_10108450(pOwner + iSrc * 0xa0 + *(int *)(pOwner + 0xf4) + 0x58, tmp);
	sub_10108a50(pOwner + iDst * 0xa0 + *(int *)(pOwner + 0xf4) + 0x58, tmp, a);
}
// END FUNCTION

// FUNCTION: 0x100896c0 size=0x75
#include "StudioHdr.h"
#include "Quaternion.h"

void sub_100896c0(StudioHdr *pStudioHdr, Vector pos[], Quaternion q[])
{
	for (int i = 0; i < pStudioHdr->m_nBones; i++)
	{
		StudioBone *pbone = pStudioHdr->Bone(i);
		pos[i] = pbone->m_pos;
		q[i].x = pbone->m_quat.x;
		q[i].y = pbone->m_quat.y;
		q[i].z = pbone->m_quat.z;
		q[i].w = pbone->m_quat.w;
	}
}
// END FUNCTION

// FUNCTION: 0x1008e230 size=0x82
#include "CUnknown100c7f30.h"

struct Bone100c7f30 { int m_unk[0x22]; unsigned int flags; int m_unk8c[5]; };
struct Hdr100c7f30 : CUnknown100c7f30Hdr {
    Bone100c7f30 *pBone(int i) { return (Bone100c7f30 *)((char *)this + m_boneOffset) + i; }
};

void CUnknown100c7f30::sub_1008e230(CUnknown100c7f30Hdr *hdr, unsigned int mask)
{
    if (hdr == 0) {
        m_count = 0;
        return;
    }
    unsigned int *out = m_bits;
    unsigned int acc = 0;
    unsigned int bit = 1;
    int n = hdr->m_numBones;
    m_count = n;
    if (n > 0) {
        Bone100c7f30 *pb = ((Hdr100c7f30 *)hdr)->pBone(0);
        if ((int)bit == -1) acc = (-(int)(mask & pb->flags) >> 16) & (int)bit; else acc = (-(int)(mask & pb->flags) >> 16) & (int)bit;
        while (--n != 0) {
            bit += bit;
            pb++;
            if (bit == 0) {
                *out++ = acc;
                bit = 1;
                acc = 0;
            }
            if ((char)(int)n == -1) acc += (-(int)(mask & pb->flags) >> 16) & bit; else acc += (-(int)(mask & pb->flags) >> 16) & bit;
        }
    }
    *out = acc;
}
// END FUNCTION

// FUNCTION: 0x1008e370 size=0xa4
#include "CUnknown100c80d0.h"

void CUnknown100c80d0::sub_1008e370(const unsigned int *pMask, const short *pTable, const void *pSource)
{
	if (pSource && pTable) {
		m_nBits = *(const int *)((const char *)pSource + 0xf0);
		int n = (m_nBits + 31) >> 5;
		if (n != 0) {
			unsigned int *p = &m_words[n];
			do {
				p--;
				n--;
				*p = 0;
			} while (n != 0);
		}
		unsigned int count = *pMask;
		if (count) {
			const unsigned int *pw = pMask;
			unsigned int bit = 1;
			unsigned int bits = *++pw;
			pw++;
			for (;;) {
				if (bits & bit) {
					int s = *pTable;
					if (s >= 0)
						m_words[s >> 5] |= 1 << (s & 0x1f);
				}
				if (--count == 0)
					return;
				bit += bit;
				pTable += 0x1c;
				if (bit == 0) {
					bits = *pw;
					bit = 1;
					pw++;
				}
			}
		}
	} else {
		m_nBits = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1008e420 size=0x8e
#include "CUnknown100c81b0.h"

void CUnknown100c81b0::sub_1008e420(const CBitVecWords *pSource, int count, const CBoneRecord *pRecords, const CStudioBoneCount *pStudio)
{
	if (!pStudio || !pRecords) {
		m_nBits = 0;
		return;
	}
	m_nBits = pStudio->m_nBits;
	int words = (m_nBits + 31) >> 5;
	if (words != 0) {
		unsigned int *p = m_words + words;
		do {
			p = p - 1;
			words = words - 1;
			*p = 0;
		} while (words != 0);
	}
	for (; count != 0; count--, pRecords++) {
		if (pSource->m_words[pRecords->m_nSource >> 5] & (1 << (pRecords->m_nSource & 31))) {
			if (pRecords->m_nIndex >= 0)
				m_words[pRecords->m_nIndex >> 5] |= 1 << (pRecords->m_nIndex & 31);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10098720 size=0x59
float sub_10098720(float x, float lo, float hi)
{
	if (x > hi) {
		x = hi;
		return (x - lo) / (hi - lo);
	}
	if (x < lo) {
		x = lo;
		return (x - lo) / (hi - lo);
	}
	return (x - lo) / (hi - lo);
}
// END FUNCTION

// FUNCTION: 0x100b4d30 size=0x8f
#include "CUtlVector40.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector40::sub_100b4d30(int num)
{
	if (num + m_size > m_allocationCount && m_growSize != -1) {
		int newSize = m_allocationCount + (num + m_size - m_allocationCount);
		while (m_allocationCount < newSize) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 1;
			}
		}
		if (m_pMemory)
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 40);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 40);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x100b4dc0 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_100b4dc0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x100b9b80 size=0x43
#include "Vector.h"
Vector Vector::sub_100b9b80(const Vector &v) const
{
	Vector res;
	VectorSubtract(*this, v, res);
	return res;
}
// END FUNCTION

// FUNCTION: 0x100c1e70 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_100c1e70(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x100c4b10 size=0x81
#include "CUnknown100b6f80.h"

struct CUnknown100b6f80HdrEx : CUnknown100b6f80Hdr
{
	CUnknown100b6f80 *pSetting(int i) const { return (CUnknown100b6f80 *)((char *)this + m_tableOffset90) + i; }
};

struct CUnknown100b6f80Weight { int key; float weight; };

int CUnknown100b6f80::sub_100c4b10(CUnknown100b6f80Hdr *hdr, int index, int *pOut)
{
	*pOut = 0;
	if (m_mode == 1) {
		int i = m_index;
		if (m_mode != 1 || i < 0 || i >= m_count)
			return -1;
		CUnknown100b6f80Weight *p = (CUnknown100b6f80Weight *)((char *)this + m_tableOffset) + i;
		if (!p || p->key == -1)
			return -1;
		CUnknown100b6f80 *s = ((CUnknown100b6f80HdrEx *)hdr)->pSetting(p->key);
		if (!s)
			return -1;
		return s->sub_100c4b10(hdr, index, pOut);
	}
	*pOut = (int)((char *)this + m_tableOffset + index * 12);
	return m_count;
}
// END FUNCTION

// FUNCTION: 0x100caa00 size=0x7b
#include "CUtlLinkedList12.h"

void CUtlLinkedList12::sub_100caa00(int elem)
{
	if (IsInList(elem)) {
		CUtlLinkedList12Node *pBase = m_pMemory;
		CUtlLinkedList12Node *pOldElem = &pBase[elem];
		if (pOldElem->m_Previous != -1)
			pBase[pOldElem->m_Previous].m_Next = pOldElem->m_Next;
		else
			m_Head = pOldElem->m_Next;
		if (pOldElem->m_Next != -1)
			pBase[pOldElem->m_Next].m_Previous = pOldElem->m_Previous;
		else
			m_Tail = pOldElem->m_Previous;
		pOldElem->m_Previous = pOldElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100caa80 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100caa80(int num);
};

void CUtlMemory12::sub_100caa80(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x100d1190 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100d1190(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3a80 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100d3a80(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x100d3e30 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100d3e30(int num);
};

void CUtlMemory12::sub_100d3e30(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x100e27a0 size=0x99
#include "CUtlLinkedList6.h"

void CUtlLinkedList6::sub_100e27a0(unsigned short i)
{
	Unlink(i);
}
// END FUNCTION

// FUNCTION: 0x100e2840 size=0x106
#include "utlrbtree.h"
#include "CUtlLinkedList6.h"

extern "C" __declspec(dllimport) void Error(const char *fmt, ...);

unsigned short CUtlLinkedList6::sub_100e2840(bool multilist)
{
	unsigned short elem;
	if (m_FirstFree == InvalidIndex())
	{
		if (m_TotalElements == m_allocationCount)
		{
			if (m_growSize != -1)
			{
				int nAllocationRequested = m_allocationCount + 1;
				while (m_allocationCount < nAllocationRequested)
				{
					if (m_allocationCount != 0)
					{
						if (m_growSize)
							m_allocationCount += m_growSize;
						else
							m_allocationCount += m_allocationCount;
					}
					else
						m_allocationCount = (31 + sizeof(CUtlLinkedList6Node)) / sizeof(CUtlLinkedList6Node);
				}
				if (m_pMemory)
					m_pMemory = (CUtlLinkedList6Node *)_imp__Plat_Realloc(m_pMemory, m_allocationCount * sizeof(CUtlLinkedList6Node));
				else
					m_pMemory = (CUtlLinkedList6Node *)_imp__Plat_Alloc(m_allocationCount * sizeof(CUtlLinkedList6Node));
			}
		}
		elem = m_TotalElements;
		++m_TotalElements;
		if (elem == InvalidIndex())
			Error("CUtlLinkedList overflow!\n");
	}
	else
	{
		elem = m_FirstFree;
		m_FirstFree = InternalElement(m_FirstFree).m_Next;
	}
	if (!multilist)
		InternalElement(elem).m_Next = InternalElement(elem).m_Previous = elem;
	else
		InternalElement(elem).m_Next = InternalElement(elem).m_Previous = InvalidIndex();
	m_pElements = m_pMemory;
	return elem;
}
// END FUNCTION

// FUNCTION: 0x100e2a10 size=0xc1
#include "CUnknown100fde30.h"

CUnknown100fde30 *CUnknown100fde30::sub_100e2a10()
{
	((CUniformRandomStream *)m_stream1)->CUniformRandomStream::CUniformRandomStream();
	((CUniformRandomStream *)m_stream2)->CUniformRandomStream::CUniformRandomStream();
	m_rec1.CUnknown100fde30Rec::CUnknown100fde30Rec();
	m_rec2.CUnknown100fde30Rec::CUnknown100fde30Rec();
	m_field170 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100eb150 size=0x93
#include "CUnknown100353c0.h"

CUnknown100353c0 *CUnknown100353c0::sub_100eb150(const CUnknown100353c0 *o)
{
	m_w[0] = o->m_w[0];
	m_w[1] = o->m_w[1];
	m_w[2] = o->m_w[2];
	m_w[3] = o->m_w[3];
	m_w[4] = o->m_w[4];
	m_w[5] = o->m_w[5];
	m_inner = o->m_inner;
	m_x = o->m_x;
	m_y = o->m_y;
	m_z = o->m_z;
	m_p = o->m_p;
	m_q = o->m_q;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100efee0 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_100efee0(unsigned short elem)
{
	if (elem < m_NumAlloced && m_pMemory[elem].m_Previous != elem) {
		CUtlLinkedList8Node *pList = m_pMemory;
		CUtlLinkedList8Node *pElem = &pList[elem];
		if (pElem->m_Previous != 0xffff)
			pList[pElem->m_Previous].m_Next = pElem->m_Next;
		else
			m_Head = pElem->m_Next;
		if (pElem->m_Next != 0xffff)
			pList[pElem->m_Next].m_Previous = pElem->m_Previous;
		else
			m_Tail = pElem->m_Previous;
		pElem->m_Previous = pElem->m_Next = elem;
		--m_ElementCount;
	}
}
// END FUNCTION

// FUNCTION: 0x10107500 size=0x43
#include "Vector.h"
#include <math.h>
float Vector::sub_10107500()
{
	float radius = (float)sqrt(x * x + y * y + z * z);
	float iradius = 1.0f / (radius + 1.192092896e-07f);
	x *= iradius;
	y *= iradius;
	z *= iradius;
	return radius;
}
// END FUNCTION

// FUNCTION: 0x10107550 size=0x41
#include "Vector.h"
#include <math.h>

void __fastcall sub_10107550(Vector *v)
{
	float radius = (float)sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
	float iradius = 1.0f / (radius + 1.1920929e-7f);
	v->x *= iradius;
	v->y *= iradius;
	v->z *= iradius;
}
// END FUNCTION

// FUNCTION: 0x10107e40 size=0x61
struct RadianEuler10137e40
{
	float x, y, z;
	inline void Init(float ix, float iy, float iz) { x = ix; y = iy; z = iz; }
};
#define DEG2RAD10137e40(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))
void sub_10107eb0(float *pMatrix, float *pOut);
void sub_1010a790(RadianEuler10137e40 *pAngles, float *pOut);
void sub_10108510(float *pMatrix, int n, float *pOut);
inline void MatrixAngles10137e40(float *matrix, RadianEuler10137e40 &angles)
{
	sub_10107eb0(matrix, (float *)&angles);
	angles.Init(DEG2RAD10137e40(angles.z), DEG2RAD10137e40(angles.x), DEG2RAD10137e40(angles.y));
}
void sub_10107e40(float *pMatrix, float *pQuat, float *pAngles)
{
	RadianEuler10137e40 angles;
	MatrixAngles10137e40(pMatrix, angles);
	sub_1010a790(&angles, pQuat);
	sub_10108510(pMatrix, 3, pAngles);
}
// END FUNCTION

// FUNCTION: 0x10108080 size=0x5c
void sub_10108080(const float *in1, const float in2[3][4], float *out)
{
	float tx = in1[0] - in2[0][3];
	float ty = in1[1] - in2[1][3];
	float tz = in1[2] - in2[2][3];
	out[0] = tx * in2[0][0] + ty * in2[1][0] + tz * in2[2][0];
	out[1] = tx * in2[0][1] + ty * in2[1][1] + tz * in2[2][1];
	out[2] = tx * in2[0][2] + ty * in2[1][2] + tz * in2[2][2];
}
// END FUNCTION
