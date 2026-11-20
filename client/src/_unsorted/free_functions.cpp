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

// FUNCTION: 0x10109010 size=0x8a
#include "Vector.h"
#include "QAngle.h"

inline void SinCos(float radians, float *sine, float *cosine)
{
	__asm {
		fld dword ptr [radians]
		fsincos
		mov edx, dword ptr [cosine]
		mov eax, dword ptr [sine]
		fstp dword ptr [edx]
		fstp dword ptr [eax]
	}
}

void sub_10109010(const QAngle &angles, Vector *forward)
{
	float sp, sy, cp, cy;
	SinCos(angles.y * 0.017453292f, &sy, &cy);
	SinCos(angles.x * 0.017453292f, &sp, &cp);
	forward->x = cp * cy;
	forward->y = cp * sy;
	forward->z = -sp;
}
// END FUNCTION

// FUNCTION: 0x10109420 size=0x1f
void sub_10109420(float *p)
{
    for (int i = 0; i < 12; i++)
    {
        ((int *)p)[i] = 0;
    }
    ((int *)p)[0] = 0x3f800000;
    ((int *)p)[5] = 0x3f800000;
    ((int *)p)[10] = 0x3f800000;
}
// END FUNCTION

// FUNCTION: 0x1010a020 size=0x82
#include "Quaternion.h"

void sub_1010a020(const Quaternion &p, const Quaternion &q, Quaternion &qt)
{
	int i;
	float a = 0;
	float b = 0;
	for (i = 0; i < 4; i++) {
		a += (p[i] - q[i]) * (p[i] - q[i]);
		b += (p[i] + q[i]) * (p[i] + q[i]);
	}
	if (a > b) {
		for (i = 0; i < 4; i++)
			qt[i] = -q[i];
	} else if (&qt != &q) {
		for (i = 0; i < 4; i++)
			qt[i] = q[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010a2b0 size=0x61
#include <math.h>
float sub_1010a2b0(float *q)
{
	float radius, iradius;
	radius = q[3] * q[3] + q[2] * q[2] + q[1] * q[1] + q[0] * q[0];
	if (radius) {
		radius = sqrt(radius);
		iradius = 1.0f / radius;
		q[3] *= iradius;
		q[2] *= iradius;
		q[1] *= iradius;
		q[0] *= iradius;
	}
	return radius;
}
// END FUNCTION

// FUNCTION: 0x1010a570 size=0xdb
struct Q { float x, y, z, w; };
void sub_1010a570(const Q &q, float *m)
{
    m[0] = 1.0 - 2.0 * q.y * q.y - 2.0 * q.z * q.z;
    m[4] = 2.0 * q.x * q.y + 2.0 * q.w * q.z;
    m[8] = 2.0 * q.x * q.z - 2.0 * q.w * q.y;
    m[1] = 2.0 * q.x * q.y - 2.0 * q.w * q.z;
    m[5] = 1.0f - 2.0f * q.x * q.x - 2.0f * q.z * q.z;
    m[9] = 2.0 * q.y * q.z + 2.0 * q.w * q.x;
    m[2] = 2.0 * q.x * q.z + 2.0 * q.w * q.y;
    m[6] = 2.0 * q.y * q.z - 2.0 * q.w * q.x;
    m[10] = 1.0f - 2.0f * q.x * q.x - 2.0f * q.y * q.y;
}
// END FUNCTION

// FUNCTION: 0x1010ba80 size=0x56
#include "Vector.h"
void sub_1010ba80(const Vector &a, const Vector &v, const Vector &c, Vector &out)
{
	for (int i = 0; i < 3; i++) {
		if (c[i] < a[i])
			out[i] = a[i];
		else if (c[i] > v[i])
			out[i] = v[i];
		else
			out[i] = c[i];
	}
}
// END FUNCTION

// FUNCTION: 0x1010bc90 size=0x85
#include "Vector.h"
float sub_1010bae0(const Vector &a, const Vector &b, const Vector &c, Vector &out);
void sub_1010bc90(const Vector &a, const Vector &b, const Vector &c, Vector &out, float *pT)
{
	Vector d;
	float t = sub_1010bae0(a, b, c, d);
	if (t > 1.0f)
		t = 1.0f;
	else if (t < 0.0f)
		t = 0.0f;
	if (pT)
		*pT = t;
	out.x = d.x * t + b.x;
	out.y = d.y * t + b.y;
	out.z = d.z * t + b.z;
}
// END FUNCTION

// FUNCTION: 0x1010c410 size=0x5f
float sub_1010c410(float a, float b)
{
    float d = a - b;
    if (a > b) {
        while (d > 180.0f)
            d -= 360.0f;
    } else {
        while (d <= -180.0f)
            d += 360.0f;
    }
    return d;
}
// END FUNCTION

// FUNCTION: 0x1010c470 size=0x32
float __cdecl sub_1010c470(float a, float b)
{
    float d = a - b;
    if (d <= -180.0f) {
        return d + 360.0f;
    }
    if (d > 180.0f) {
        d = d - 360.0f;
    }
    return d;
}
// END FUNCTION

// FUNCTION: 0x1010c4b0 size=0x49
float sub_1010c4b0(float angle)
{
	while (angle > 180.0f)
		angle -= 360.0f;
	while (angle <= -180.0f)
		angle += 360.0f;
	return angle;
}
// END FUNCTION

// FUNCTION: 0x1010f390 size=0x4b
struct SCopy {
    int a, b, c, d;
    char e, f;
    char g[2];
    SCopy &sub_1010f390(const SCopy &o);
};
SCopy &SCopy::sub_1010f390(const SCopy &o)
{
    a = o.a; b = o.b; c = o.c; d = o.d;
    e = o.e; f = o.f;
    for (unsigned i = 0; i < 2; i++)
        g[i] = o.g[i];
    return *this;
}
// END FUNCTION

// FUNCTION: 0x1010f870 size=0x42
#include "CUtlVector96.h"
extern "C" void *memmove(void *, const void *, unsigned int);

void CUtlVector96::sub_1010f870(int elem, int num)
{
    int numToMove = m_size - elem - num;
    if (numToMove > 0 && num > 0)
        memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * sizeof(UtlElem96));
}
// END FUNCTION

// FUNCTION: 0x10117ba0 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_10117ba0(unsigned short elem)
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

// FUNCTION: 0x10117c70 size=0x8d
#include "CUtlLinkedList8.h"

void CUtlLinkedList8::sub_10117c70(unsigned short elem)
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

// FUNCTION: 0x10119d90 size=0x6b
#include "matrix3x4_t.h"
#include <math.h>

void sub_10108510(const matrix3x4_t &mat, int iCol, Vector &out);

int sub_10119d90(const matrix3x4_t &mat, const Vector &dir)
{
	int iBest = 0;
	float flBest = -1.0f;
	for (int i = 0; i < 3; i++) {
		Vector axis;
		sub_10108510(mat, i, axis);
		float flDot = fabs(DotProduct(axis, dir));
		if (flDot > flBest) {
			flBest = flDot;
			iBest = i;
		}
	}
	return iBest;
}
// END FUNCTION

// FUNCTION: 0x10119fe0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10119fe0(int num);
};

void CUtlMemory12::sub_10119fe0(int num)
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

// FUNCTION: 0x1011a2c0 size=0xfb
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct SImpactRec {
    int m_a;
    int m_b;
    int m_c;
    int m_d;
    float m_f;
    unsigned short m_key;
    unsigned short m_s;
};

struct S10032fb0 {
    SImpactRec *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    int m_Size;
    SImpactRec *m_pElements;
    void sub_1011a3c0(int num);

    SImpactRec &Element(int i) { return m_pMemory[i]; }
    void GrowVector(int num)
    {
        if (m_Size + num > m_nAllocationCount)
            sub_1011a3c0(m_Size + num - m_nAllocationCount);
        m_Size += num;
        m_pElements = m_pMemory;
    }
    void ShiftElementsRight(int elem, int num)
    {
        int numToMove = m_Size - elem - num;
        if (numToMove > 0)
            memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(SImpactRec));
    }
    int InsertBefore(int elem)
    {
        GrowVector(1);
        ShiftElementsRight(elem, 1);
        return elem;
    }
};

void sub_1011a2c0(S10032fb0 *pVec, int a, int b, int c, int d, unsigned int key, unsigned short s, float f)
{
    for (int i = pVec->m_Size - 1; i >= 0; i--) {
        SImpactRec &rec = pVec->Element(i);
        if (key == rec.m_key) {
            if (f > rec.m_f) {
                rec.m_d = d;
                rec.m_a = a;
                rec.m_b = b;
                rec.m_c = c;
                rec.m_s = s;
            }
            rec.m_f += f;
            return;
        }
    }
    int idx = pVec->InsertBefore(pVec->m_Size);
    SImpactRec &rec = pVec->Element(idx);
    rec.m_a = a;
    rec.m_b = b;
    rec.m_c = c;
    rec.m_d = d;
    rec.m_key = (unsigned short)key;
    rec.m_s = s;
    rec.m_f = f;
}
// END FUNCTION

// FUNCTION: 0x1011fd10 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fd10(int num);
};

void CUtlMemory20::sub_1011fd10(int num)
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
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1011fd80 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fd80(int num);
};

void CUtlMemory20::sub_1011fd80(int num)
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
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1011fdf0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1011fdf0(int num);
};

void CUtlMemory20::sub_1011fdf0(int num)
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
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x10127320 size=0x87
#include "Vector.h"
struct CRagdollBoneMatrix { float m_f[12]; };
struct CRagdollPhysObject
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37();
	virtual void vfunc38(const CRagdollBoneMatrix *pMatrix);
};
struct CRagdollElement
{
	char m_pad0000[0xc];
	CRagdollPhysObject *m_pObject;	// 0x0c
	char m_pad0010[4];
	int m_iParent;	// 0x14
};
struct CRagdollLayout
{
	char m_pad0000[8];
	CRagdollElement m_elements[1];	// 0x08, 0x18 bytes each
};
struct CRagdollStudio { char m_pad0000[4]; CRagdollBoneMatrix *m_pBones; };
void sub_10107f80(CRagdollElement *pElem, const CRagdollBoneMatrix *pParent, Vector *pOut);
void sub_10108540(Vector *pIn, int axes, CRagdollBoneMatrix *pMatrix);
bool sub_10127320(CRagdollLayout *pRagdoll, CRagdollStudio *pStudio, int index)
{
	int bone = ((int *)((char *)pRagdoll + 0x2d8))[index];
	if (bone < 0)
		return false;
	CRagdollElement *pElem = &pRagdoll->m_elements[index];
	pElem->m_pObject->vfunc38(&pStudio->m_pBones[bone]);
	if (pElem->m_iParent >= 0) {
		Vector v;
		int parentBone = ((int *)((char *)pRagdoll + 0x2d8))[pElem->m_iParent];
		sub_10107f80(pElem, &pStudio->m_pBones[parentBone], &v);
		sub_10108540(&v, 3, &pStudio->m_pBones[bone]);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10128d80 size=0x4d
struct SFuncField {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    void *pSaveRestoreOps;
    int inputFunc;
    void *td;
    int fieldSizeInBytes;
    int unk;
};
struct SFuncMap {
    SFuncField *dataDesc;
    int dataNumFields;
    const char *dataClassName;
    SFuncMap *baseMap;
};
const char *sub_10128d80(SFuncMap *pMap, int pFunc)
{
    for (; pMap; pMap = pMap->baseMap) {
        for (int i = 0; i < pMap->dataNumFields; i++) {
            if ((pMap->dataDesc[i].flags & 0x20) && pMap->dataDesc[i].inputFunc == pFunc)
                return pMap->dataDesc[i].fieldName;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10129560 size=0x4c
#include "CSave.h"

class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	ISaveRestoreOps *pSaveRestoreOps;
	void *inputFunc;
	datamap_t *td;
	int fieldSizeInBytes;
	int unk;
};

int CSave::sub_10129560(const void *pBaseData, typedescription_t *pFields, int nFields)
{
	int nNonEmpty = 0;
	for (int i = 0; i < nFields; i++) {
		if (sub_10129250((char *)pBaseData + pFields[i].fieldOffset[0], &pFields[i]))
			nNonEmpty++;
	}
	return nNonEmpty;
}
// END FUNCTION

// FUNCTION: 0x1012aec0 size=0x34
#include "CRestore.h"
struct CRestoreSaveRecord30 { int m_nId; char m_pad04[0x2c]; };
struct CRestoreSaveTable { char m_pad0000[0x1318]; int m_nRecords; CRestoreSaveRecord30 *m_pRecords; };
CRestoreSaveEnt *CRestore::sub_1012aec0(int index)
{
	CRestoreSaveTable *pTable = (CRestoreSaveTable *)m_pData2;
	if (pTable && index >= 0) {
		int i = 0;
		if (pTable->m_nRecords > 0) {
			CRestoreSaveRecord30 *pRec = pTable->m_pRecords;
			do {
				if (pRec->m_nId == index)
					return (CRestoreSaveEnt *)pRec;
				i++;
				pRec++;
			} while (i < pTable->m_nRecords);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1012c3d0 size=0xa4
#include "CUtlVector40.h"
#include "CUnknown101a59f0.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
struct E40 { int d[10]; };

int CUtlVector40::sub_1012c3d0(int num, const void *pToCopy)
{
	int elem = m_size;
	if (num != 0) {
		if (m_size + num > m_allocationCount)
			((CUnknown101a59f0 *)this)->sub_1012c640(m_size - m_allocationCount + num);
		m_size += num;
		m_pElements = m_pMemory;
		int toMove = m_size - elem - num;
		if (toMove > 0 && num > 0)
			memmove(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, toMove * 40);
		if (pToCopy != 0 && num > 0) {
			int off = elem * 40;
			for (int i = num; i > 0; i--) {
				*(E40 *)(m_pMemory + off) = *(const E40 *)pToCopy;
				pToCopy = (const E40 *)pToCopy + 1;
				off += 40;
			}
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1012c4c0 size=0xae
#include "CUnknown101a5800.h"
#include "CUnknown101a59f0.h"

int CUnknown101a5800::sub_1012c4c0(int elem, int num, const CVecElem40_t *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_size + num > m_allocationCount)
		((CUnknown101a59f0 *)this)->sub_1012c640(m_size + num - m_allocationCount);
	m_size += num;
	m_pElements = m_pMemory;
	int toMove = m_size - elem - num;
	if (toMove > 0 && num > 0)
		memmove(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, toMove * 40);
	if (pToCopy != 0 && num > 0) {
		int off = elem * 40;
		for (int i = num; i > 0; i--) {
			*(CVecElem40_t *)(m_pMemory + off) = *pToCopy;
			pToCopy++;
			off += 40;
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x1012c570 size=0x8f
#include "CUtlVector40.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector40::sub_1012c570(int num)
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

// FUNCTION: 0x1012c600 size=0x3e
#include "UtlVec40.h"

void UtlVec40::sub_1012c600(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0) {
		sub_101d0f30(m_pMemory + (elem + num) * 40, m_pMemory + elem * 40, numToMove * 40);
	}
}
// END FUNCTION

// FUNCTION: 0x101314a0 size=0x95
#include "CUtlVector130.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUtlVector130::sub_101314a0(int num)
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
			m_pMemory = (char *)Plat_Realloc(m_pMemory, m_allocationCount * 130);
		else
			m_pMemory = (char *)Plat_Alloc(m_allocationCount * 130);
	}
	m_size += num;
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10131e60 size=0xcf
#include "CUnknown101b9140.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

static inline int InsertMultipleBefore(CUnknown101b9140 *v, int elem, int num, const CUnknown101b9140Elem *pToCopy)
{
	if (num == 0)
		return elem;
	if (v->m_Size + num > v->m_nAllocationCount)
		v->sub_101315b0(v->m_Size - v->m_nAllocationCount + num);
	v->m_Size += num;
	v->m_pElements = (CUnknown101b9140Elem *)v->m_pMemory;
	int numToMove = v->m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&v->m_pElements[elem + num], &v->m_pElements[elem], numToMove * 8);
	for (int i = 0; i < num; i++) {
		CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)v->m_pMemory)[elem + i];
		if (p) {
			p->m_w = 0xffff;
			p->m_d = 0;
		}
	}
	if (pToCopy) {
		for (int i = 0; i < num; i++) {
			CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)v->m_pMemory)[elem + i];
			p->m_w = pToCopy[i].m_w;
			p->m_d = pToCopy[i].m_d;
		}
	}
	return elem;
}

int CUnknown101b9140::sub_10131e60(int num, const CUnknown101b9140Elem *pToCopy)
{
	return InsertMultipleBefore(this, m_Size, num, pToCopy);
}
// END FUNCTION

// FUNCTION: 0x10132db0 size=0xc6
#include "CUnknown101b9140.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

int CUnknown101b9140::sub_10132db0(int elem, int num, const CUnknown101b9140Elem *pToCopy)
{
	if (num == 0)
		return elem;
	if (m_Size + num > m_nAllocationCount)
		sub_101315b0(m_Size - m_nAllocationCount + num);
	m_Size += num;
	m_pElements = (CUnknown101b9140Elem *)m_pMemory;
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&m_pElements[elem + num], &m_pElements[elem], numToMove * 8);
	for (int i = 0; i < num; i++) {
		CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)m_pMemory)[elem + i];
		if (p) {
			p->m_w = 0xffff;
			p->m_d = 0;
		}
	}
	if (pToCopy) {
		for (int i = 0; i < num; i++) {
			CUnknown101b9140Elem *p = &((CUnknown101b9140Elem *)m_pMemory)[elem + i];
			p->m_w = pToCopy[i].m_w;
			p->m_d = pToCopy[i].m_d;
		}
	}
	return elem;
}
// END FUNCTION

// FUNCTION: 0x10138700 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10138700(int num);
};

void CUtlMemory12::sub_10138700(int num)
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

// FUNCTION: 0x10138770 size=0xbd
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

bool CUtlRBTree12::sub_10138770(unsigned short i) const
{
	const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this;
	unsigned short parent = tree->Links(i).m_Parent;
	return tree->Links(parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x1013c790 size=0x19
#include "Vector.h"
Vector &Vector::sub_1013c790(const Vector &v)
{
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
// END FUNCTION

// FUNCTION: 0x1013c970 size=0x7c
#include "CUnknown1006bea0.h"

extern "C" void *memcpy(void *, const void *, unsigned);
extern "C" void *memset(void *, int, unsigned);

void CUnknown1006bea0::sub_1013c970(void *dest, int count)
{
    int avail = m_size - m_pos;
    if (avail < count) {
        memcpy(dest, m_pData + m_pos, avail);
        memset(dest, 0, count - avail);
        m_pos += avail;
        m_flags |= 2;
    } else {
        memcpy(dest, m_pData + m_pos, count);
        m_pos += count;
    }
}
// END FUNCTION

// FUNCTION: 0x1013c9f0 size=0x41
#include "CUnknown1006bea0.h"
#include <ctype.h>

void CUnknown1006bea0::sub_1013c9f0()
{
    if ((m_flags15 & 1) && !m_flags) {
        int size = m_size;
        while (m_pos < size && isspace(m_pData[m_pos]))
            m_pos++;
    }
}
// END FUNCTION

// FUNCTION: 0x1013d330 size=0x6b
#include "CUnknown1024b370.h"
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *p);

inline void Purge(CUnknown1024b370Mem &m)
{
    if (m.m_growSize != -1) {
        if (m.m_pMemory) {
            Plat_Free(m.m_pMemory);
            m.m_pMemory = 0;
        }
        m.m_allocationCount = 0;
    }
}

void CUnknown1024b370::sub_1013d330()
{
    sub_1013d730();
    int g = m_mem1.m_growSize;
    m_n24 = 0;
    if (g != -1) {
        if (m_mem1.m_pMemory) {
            Plat_Free(m_mem1.m_pMemory);
            m_mem1.m_pMemory = 0;
        }
        m_mem1.m_allocationCount = 0;
    }
    int g2 = m_mem1.m_growSize;
    void *p = m_mem1.m_pMemory;
    m_p28 = p;
    if (g2 != -1) {
        if (p) {
            Plat_Free(p);
            m_mem1.m_pMemory = 0;
        }
        m_mem1.m_allocationCount = 0;
    }
    Purge(m_mem0);
}
// END FUNCTION

// FUNCTION: 0x1013ddc0 size=0xbd
#include "CUtlRBTree12.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

bool CUtlRBTree12::sub_1013ddc0(unsigned short i) const
{
	const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *tree = (const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)this;
	unsigned short parent = tree->Links(i).m_Parent;
	return tree->Links(parent).m_Left == i;
}
// END FUNCTION

// FUNCTION: 0x10140290 size=0xec
#include "CUnknown101d62d0.h"

CUnknown101d62d0Record *CUnknown101d62d0::sub_10140290()
{
	if (m_nAllocated == m_nCount) {
		m_nAllocated++;
		if (m_ppRecords) {
			CUnknown101d62d0Record **p = new CUnknown101d62d0Record *[m_nAllocated];
			int i = 0;
			if (m_nCount > 0) {
				do {
					p[i] = m_ppRecords[i];
					i++;
				} while (i < m_nCount);
			}
			for (; i < m_nAllocated; i++)
				p[i] = 0;
			delete m_ppRecords;
			m_ppRecords = p;
		} else {
			m_ppRecords = new CUnknown101d62d0Record *[m_nAllocated];
			for (int i = 0; i < m_nAllocated; i++)
				m_ppRecords[i] = 0;
		}
		m_nCount++;
	} else {
		m_nCount++;
	}
	if (m_ppRecords[m_nCount - 1] == 0) {
		CUnknown101d62d0Record *p = new CUnknown101d62d0Record;
		m_ppRecords[m_nCount - 1] = p ? p->sub_10140140() : 0;
	}
	return m_ppRecords[m_nCount - 1];
}
// END FUNCTION

// FUNCTION: 0x101405b0 size=0xf1
#include "CUnknown101d6750.h"

struct S101d61e0 {
	S101d61e0 *sub_101401e0(int);
	int m_data[11];
};

S101d61e0 *CUnknown101d6750::sub_101405b0()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S101d61e0 **p = new S101d61e0 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S101d61e0 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S101d61e0 *p = new S101d61e0;
		m_pItems[m_count - 1] = p ? p->sub_101401e0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION

// FUNCTION: 0x10146a90 size=0xf1
#include "CUnknown101db210.h"

struct S6 {
	S6 *sub_101467d0(int);
	int m_data[6];
};

S6 *CUnknown101db210::sub_10146a90()
{
	if (m_allocCount == m_count) {
		m_allocCount++;
		if (m_pItems) {
			S6 **p = new S6 *[m_allocCount];
			int i = 0;
			if (m_count > 0) {
				do {
					p[i] = m_pItems[i];
					i++;
				} while (i < m_count);
			}
			for (; i < m_allocCount; i++)
				p[i] = 0;
			delete m_pItems;
			m_pItems = p;
		} else {
			m_pItems = new S6 *[m_allocCount];
			for (int i = 0; i < m_allocCount; i++)
				m_pItems[i] = 0;
		}
		m_count++;
	} else {
		m_count++;
	}
	if (m_pItems[m_count - 1] == 0) {
		S6 *p = new S6;
		m_pItems[m_count - 1] = p ? p->sub_101467d0(m_count - 1) : 0;
	}
	return m_pItems[m_count - 1];
}
// END FUNCTION
