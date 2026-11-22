// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 5 blocks
#include "vampire.h"

// FUNCTION: 0x102f45f0 size=0xa9
#include "CLogicAuto.h"
#include "CUnknown102f45f0.h"

extern void (*g_109f3630)(const char *fmt, ...);

void CUnknown102f45f0::sub_102f45f0(const CachedPos_t *pPos, int node, int field)
{
	if (m_cache[m_nNextCache].m_flTime == gpGlobals->curtime)
		g_109f3630("AI NearestNode Cache is full\n");
	m_cache[m_nNextCache].m_vecPos = *pPos;
	m_cache[m_nNextCache].m_nNode = node;
	m_cache[m_nNextCache].m_nField14 = field;
	m_cache[m_nNextCache].m_flTime = gpGlobals->curtime;
	m_nNextCache++;
	if (m_nNextCache == 20)
		m_nNextCache = 0;
}
// END FUNCTION

// FUNCTION: 0x102f46d0 size=0xa2
#include "CUnknown102f46d0.h"
extern Vector g_1070d1b0;

Vector CUnknown102f46d0::sub_102f46d0(void *pObj, int index)
{
    if (!m_pData)
        return g_1070d1b0;
    if (index >= 0 && index <= m_count) {
        if (!pObj)
            return g_1070d1b0;
        return m_pData[index]->sub_102fb0d0(*(int *)((char *)pObj + 0x156c));
    }
    return g_1070d1b0;
}
// END FUNCTION

// FUNCTION: 0x102f47b0 size=0x29
struct CUnknown102f47b0 {
    int m_nCount;
    char **m_ppElements;
    float sub_102f47b0(int i);
};

// TARGET: CUnknown102f47b0::sub_102f47b0
float CUnknown102f47b0::sub_102f47b0(int i)
{
    if (m_ppElements != 0 && i >= 0 && i <= m_nCount)
        return *(float *)(m_ppElements[i] + 0x6c);
    return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x102f47f0 size=0x81
#include "CUnknown102f47f0.h"
extern void (*g_109f3630)(const char *, ...);

CUnknown102fc5d0 *CUnknown102f47f0::sub_102f47f0(const float *pVec, int c)
{
    if (!m_pNodes || !*m_pNodes)
        m_pNodes = (CUnknown102fc5d0 **)operator new(0x1770);
    if (m_nNodes >= 0x5dc) {
        g_109f3630("ERROR: too many nodes in map, deleting last node.\n", 0x5dc);
        m_nNodes--;
    }
    CUnknown102fc5d0 *p = new CUnknown102fc5d0;
    CUnknown102fc5d0 *node = p ? p->sub_102fc5d0((int)this, m_nNodes, pVec, c) : 0;
    m_pNodes[m_nNodes] = node;
    m_nNodes++;
    return m_pNodes[m_nNodes - 1];
}
// END FUNCTION

// FUNCTION: 0x102f48b0 size=0x67
extern char g_1061052c[];
extern void (*g_109f3630)(const char* fmt, ...);

struct NodeObj { char pad[0x94]; int m_type; };
struct NodeGraph {
	int m_nNodes;
	NodeObj** m_pNodes;
	bool sub_102f48b0(int a, int b);
};

// TARGET: NodeGraph::sub_102f48b0
bool NodeGraph::sub_102f48b0(int a, int b)
{
	if (a > m_nNodes || b > m_nNodes) {
		g_109f3630(g_1061052c);
		return false;
	}
	if (a == b)
		return true;
	int ta = m_pNodes[a]->m_type;
	int tb = m_pNodes[b]->m_type;
	if (ta == 1 || tb == 1)
		return false;
	if (ta == 3 || tb == 3)
		return true;
	return ta == tb;
}
// END FUNCTION
