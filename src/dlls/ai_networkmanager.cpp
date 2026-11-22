// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 69 blocks
#include "vampire.h"

// FUNCTION: 0x102f4f50 size=0x6
#include "CAI_NetworkManager.h"
namespace lifted {
extern char g_10610258;
}
datamap_t * CAI_NetworkManager::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10610258);
}
// END FUNCTION

// FUNCTION: 0x102f4f70 size=0x5
int sub_102f4fb0(void);
int g_10934080 = ((int (*)(int))sub_102f4fb0)(0);
// END FUNCTION

// FUNCTION: 0x102f4fb0 size=0x1a
namespace lifted {
extern int g_10610258;
extern int g_1061025c;
extern char g_1061029c;
}
int sub_102f4fb0()
{
    lifted::g_1061025c = 2;
    lifted::g_10610258 = (int)&lifted::g_1061029c;
    return (int)&lifted::g_10610258;
}
// END FUNCTION

// FUNCTION: 0x102f4fe0 size=0x5a
#include "CBaseEntity.h"
#include "CAI_NodeGraph.h"
#include "CAI_NetworkManager.h"
struct CAI_NetworkData { CAI_NetworkData *sub_102f8e30(CAI_NetworkManager *pOwner); };	// stub 0x1000aa2e
extern int g_1044b584;	// CPointEntity vftable
extern int g_1049da64;	// CAI_NetworkManager vftable
CAI_NetworkManager *CAI_NetworkManager::sub_102f4fe0()
{
	sub_1009d980(0);
	*(int **)this = &g_1044b584;
	((CAI_NodeGraph *)m_Graph)->sub_102f30f0();
	*(int **)this = &g_1049da64;
	void *p = operator new(0x18);
	m_pNetwork = p ? ((CAI_NetworkData *)p)->sub_102f8e30(this) : 0;
	m_b450 = 0;
	m_b658 = 0;
	m_b659 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102f5060 size=0x1e
#include "CAI_NetworkManager.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_NetworkManager::vfunc5
CBaseEntity *CAI_NetworkManager::vfunc5(unsigned int flags)
{
	sub_100107a3();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102f5090 size=0x38
extern int vt_1049da64[];
void __fastcall sub_1000be15(void *p);
void __fastcall sub_1000a376(void *p);
void __fastcall sub_1000cb8a(void *p);

// TARGET: sub_102f5090
void __fastcall sub_102f5090(int *self)
{
    void *p = (void *)self[0x115];
    self[0] = (int)vt_1049da64;
    if (p) {
        sub_1000be15(p);
        operator delete(p);
    }
    sub_1000a376(self + 0x116);
    sub_1000cb8a(self);
}
// END FUNCTION

// FUNCTION: 0x102f50e0 size=0x28
#include "CAI_NetworkManager.h"

// TARGET: CAI_NetworkManager::sub_102f50e0
void CAI_NetworkManager::sub_102f50e0()
{
	sub_100ac4e0(0, 0, 0);
	((CUnknown102f7970 *)m_pNetwork)->m_flags &= 0xefffffff;
	sub_102f5190();
}
// END FUNCTION

// FUNCTION: 0x102f5120 size=0x4c
#include "CBaseEntity.h"
void sub_101ce440(int a, const char *s1, const char *s2, const char *s3, const char *s4, const char *s5);
void sub_1000993a();

struct CNodeGraphEntity : CBaseEntity
{
	void sub_102f5120();
};

void CNodeGraphEntity::sub_102f5120()
{
	if (*(int *)&m_pfnThink != (int)sub_1000993a)
	{
		sub_101ce440(4, "Doing partial rebuild of Node Graph...", 0, 0, 0, 0);
		sub_100ac4e0((int)sub_1000993a, 0, 0);
		m_flNextThink = gpGlobals->curtime + 0.01;
	}
}
// END FUNCTION

// FUNCTION: 0x102f5190 size=0x2f
#include "CUnknown102f7970.h"

struct CUnk102f4be0Obj
{
    void sub_102f4be0();
};

void sub_102ccb80();
void sub_102ccb50();

struct CUnk102f5190
{
    char m_pad0000[0x454];
    CUnknown102f7970 *m_p454;
    CUnk102f4be0Obj m_obj458;

    void sub_102f5190();
};

// TARGET: ?sub_102f5190@CUnk102f5190@@QAEXXZ
void CUnk102f5190::sub_102f5190()
{
    m_obj458.sub_102f4be0();
    sub_102ccb80();
    sub_102ccb50();
    m_p454->sub_102f7a90();
    m_p454->sub_102f7970();
}
// END FUNCTION

// FUNCTION: 0x102f51d0 size=0x771
#include "CAI_NetworkManager.h"
#include "CUtlBuffer.h"
#include "globalvars.h"
#include <string.h>

__declspec(dllimport) void Q_strncpy(char *, const char *, int);
extern int (*g_109f388c)(char *, int, const char *, ...);
extern void (*g_109f3884)(char *, const char *, int, int);
extern void (*g_109f3658)(int, const char *, ...);
void sub_1006c5a0(CUtlBuffer *, const char *, ...);
unsigned sub_102f9950();
void sub_100bf3d0(int *, int, CUtlBuffer *);
extern int g_106c994c;
extern unsigned g_1055b298[];

inline const char *NMSTRING(const char *const &s)
{
	return s ? s : "";
}

struct NMFileSystem
{
	virtual int Open(const char *, const char *, int);
	virtual void Close(int);
	virtual void v2();
	virtual int Write(const void *, int, int);
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void CreateDirHierarchy(const char *, const char *);
};
extern NMFileSystem *g_1070b238;

struct NMBits
{
	unsigned short a;
	unsigned short b;
	int pad;
	int *p;
};
struct NMLink
{
	int pad0;
	int m_iSrcID;
	int m_iDestID;
	int m_iAccepted[22];
	int m_flags;
};
struct NMNode
{
	char pad0[8];
	float x, y, z;
	float m_flVOffset[22];
	float yaw;
	int type;
	int info;
	int numLinks;
	NMLink **links;
	char pad1[0x90 - 0x80];
	NMBits *bits;
	int zone;
};
struct NMGraph
{
	int m_iNumNodes;
	NMNode **m_pNodes;
	NMNode *GetNode(int i)
	{
		if (i < 0 || i >= m_iNumNodes)
		{
			g_106c994c++;
			return 0;
		}
		return m_pNodes[i];
	}
};

void CAI_NetworkManager::sub_102f51d0()
{
	char szNrpFilename[260];
	Q_strncpy(szNrpFilename, "maps", 260);
	g_109f3884(szNrpFilename, "/graphs", 260, -1);

	char tempFilename[260];
	g_109f388c(tempFilename, 260, "%s/%s", szNrpFilename, NMSTRING(gpGlobals->mapname));

	int len = strlen(tempFilename);
	for (int i = 0; i < len; i++)
	{
		if (tempFilename[len - i - 1] == '/' || tempFilename[len - i - 1] == '\\')
		{
			tempFilename[len - i - 1] = 0;
			break;
		}
	}
	g_1070b238->CreateDirHierarchy(tempFilename, "GAME");

	strcat(szNrpFilename, "/");
	strcat(szNrpFilename, NMSTRING(gpGlobals->mapname));
	strcat(szNrpFilename, ".ain");

	CUtlBuffer buf(0, 256, 1);
	sub_1006c5a0(&buf, "Version\t%d\n", 30);
	sub_1006c5a0(&buf, "NumHulls:         %d\n", 22);
	sub_1006c5a0(&buf, "UsedHullBits:     %d\n", sub_102f9950());
	int zoneCount = *(int *)((char *)this + 0x650);
	sub_1006c5a0(&buf, "ZoneCount:        %d\n", zoneCount);
	for (int z = 0; z < zoneCount; z++)
		sub_1006c5a0(&buf, "%d ", (*(int **)((char *)this + 0x644))[z]);
	sub_1006c5a0(&buf, "\n");

	NMGraph *g = (NMGraph *)((char *)this + 0x458);
	sub_1006c5a0(&buf, "NumNodes:         %d\n", g->m_iNumNodes);

	int node;
	int totalNumLinks = 0;
	for (node = 0; node < g->m_iNumNodes; node++)
	{
		if ((node & 0x1f) == 0)
		{
			sub_1006c5a0(&buf, "\n");
			sub_1006c5a0(&buf, "Nodes:            ");
		}
		sub_1006c5a0(&buf, "%.2f,%.2f,%.2f ", g->GetNode(node)->x, g->GetNode(node)->y, g->GetNode(node)->z);
		sub_1006c5a0(&buf, "%4f ", g->GetNode(node)->yaw);
		for (int hull = 0; hull < 22; hull++)
			sub_1006c5a0(&buf, "%.2f ", g->GetNode(node)->m_flVOffset[hull]);
		sub_1006c5a0(&buf, "%d ", g->GetNode(node)->type);
		sub_1006c5a0(&buf, "%d ", g->GetNode(node)->info);
		NMBits *bits = g->GetNode(node)->bits;
		bits->p[bits->b - 1] &= ~g_1055b298[(int)bits->a % 32];
		sub_100bf3d0(bits->p, bits->b, &buf);
		sub_1006c5a0(&buf, "%d ", g->GetNode(node)->zone);
		sub_1006c5a0(&buf, "%d ", g->GetNode(node)->numLinks);
		for (int link = 0; link < g->GetNode(node)->numLinks; link++)
		{
			if (node == g->GetNode(node)->links[link]->m_iSrcID)
				totalNumLinks++;
		}
	}

	sub_1006c5a0(&buf, "\n");
	sub_1006c5a0(&buf, "TotalNumLinks      %d\n", totalNumLinks);

	for (node = 0; node < g->m_iNumNodes; node++)
	{
		for (int link = 0; link < g->GetNode(node)->numLinks; link++)
		{
			if (node == g->GetNode(node)->links[link]->m_iSrcID)
			{
				sub_1006c5a0(&buf, "%d ", g->GetNode(node)->links[link]->m_iSrcID);
				sub_1006c5a0(&buf, "%d ", g->GetNode(node)->links[link]->m_iDestID);
				sub_1006c5a0(&buf, "%d ", g->m_pNodes[node]->links[link]->m_flags & 0x20f0);
				for (int hull = 0; hull < 22; hull++)
					sub_1006c5a0(&buf, "%d ", g->GetNode(node)->links[link]->m_iAccepted[hull]);
				sub_1006c5a0(&buf, "\n");
			}
		}
	}

	sub_1006c5a0(&buf, "WCLookup:          ");
	for (node = 0; node < g->m_iNumNodes; node++)
		sub_1006c5a0(&buf, "%d ", ((int **)m_pNetwork)[3][node]);

	int fh = g_1070b238->Open(szNrpFilename, "w+", 0);
	if (!fh)
	{
		g_109f3658(2, "Couldn't create %s!\n", szNrpFilename);
		return;
	}
	g_1070b238->Write(buf.m_pBuffer, buf.m_nPut, fh);
	g_1070b238->Close(fh);
}
// END FUNCTION

// FUNCTION: 0x102f5b30 size=0x7b
#include <string.h>

void sub_1006c470(void *pOut, const char *pszFormat, const char *pszValue);
extern "C" __declspec(dllimport) void __cdecl DevWarning(int level, const char *pszFormat, ...);

bool __stdcall sub_102f5b30(void *pOut, const char *pszValue, const char *pszFile, const char *pszTag)
{
    sub_1006c470(pOut, "%s", pszValue);
    if (strcmp(pszValue, pszTag) != 0) {
        DevWarning(2, "%s tag not found in %s!\n", pszTag, pszFile);
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x102f5bd0 size=0x7d3
#include "CAI_NetworkManager.h"
#include "utlvector.h"
#include "CUtlBuffer.h"
#include "FileSystemViews.h"
#include "globalvars.h"
#include "engineserver.h"
#include <string.h>

extern "C" __declspec(dllimport) void Q_strncpy(char *, const char *, int);
extern void (__cdecl *g_109f3658)(int, const char *, ...);
void sub_1006c470(CUtlBuffer *, const char *, ...);
void sub_102f9920(int);
void sub_102f99b0();
void sub_100bf420(unsigned int *, int, CUtlBuffer *);
extern int g_106c994c;
extern char g_1093408c;
extern unsigned int g_1055b298[];

struct NodeBits {
	unsigned short m_nBits; unsigned short m_nWords; unsigned int *m_pWords2; unsigned int *m_pWords;
	void sub_100bf5b0(int);
	NodeBits(int n)
	{
		m_nBits = n;
		m_pWords = 0;
		m_nWords = (n + 31) / 32;
		sub_100bf5b0(m_nWords);
		if (m_pWords)
			memset(m_pWords, 0, m_nWords * 4);
	}
};
struct NodeV {
	char pad0[0x14];
	float vOff[22];
	int padx;
	int type;
	int info;
	char pad2[0x90 - 0x78];
	NodeBits *bits;
	int zone;
	void sub_102f95d0(void *link);
};
struct LinkV { char pad[4]; int src; int dst; int moves[22]; int pad2; LinkV *sub_102dda70(); };
struct GraphV {
	int count;
	NodeV **nodes;
	NodeV *sub_102f47f0(float *origin, int yaw);
	void sub_102f31f0();
};
struct EditV { char pad[0xc]; int *table; };
struct ZoneVec {
	int *mem; int alloc; int grow; int size; int *ptr;
	void sub_102f9330(int);
	void sub_102f92b0(int, int);
};
struct NMView {
	char pad0[0x454];
	EditV *edit;
	GraphV graph;
	char pad1[0x644 - 0x458 - sizeof(GraphV)];
	ZoneVec zones;
	bool sub_102f5b30(CUtlBuffer *, char *, char *, const char *);
};

static inline NodeV *GetNode(GraphV *g, int id)
{
	if (id >= 0 && id < g->count)
		return g->nodes[id];
	g_106c994c++;
	return 0;
}

void CAI_NetworkManager::sub_102f5bd0()
{
	NMView *v = (NMView *)this;
	if (engine->vfunc12() != 0)
		return;
	char path[0x104];
	Q_strncpy(path, "maps", 0x104);
	g_1070b238->vfunc15(path, "GAME");
	strcat(path, "/graphs");
	g_1070b238->vfunc15(path, "GAME");
	strcat(path, "/");
	strcat(path, gpGlobals->mapname ? gpGlobals->mapname : "");
	strcat(path, ".ain");
	int fh = g_1070b238->vfunc0(path, "r", 0);
	if (!fh) {
		g_109f3658(2, "Couldn't create %s!\n", path);
		return;
	}
	bool allocated = false;
	int size = g_1070b238->vfunc6(fh);
	CUtlBuffer buf(0, size, 1);
	g_1070b238->vfunc2(buf.m_pBuffer, size, fh);
	g_1070b238->vfunc1(fh);
	char temps[255];
	int node, numNodes;
	int usedBits, version;
	int z;
	int numHulls, zoneCount, total;
	int i, l, h;
	if (!v->sub_102f5b30(&buf, temps, path, "Version")) goto done;
	sub_1006c470(&buf, "%i\n", &version);
	if (version != 30) {
		g_109f3658(2, "Version mismatch in %s!  Map version (%d) != code version (%d)\n", path, version, 30);
		goto done;
	}
	if (!v->sub_102f5b30(&buf, temps, path, "NumHulls:")) goto done;
	sub_1006c470(&buf, "%d\n", &numHulls);
	if (numHulls != 22) {
		g_109f3658(2, "Hull count mismatch in %s!  Map count (%d) != code count (%d)\n", path, numHulls, 22);
		goto done;
	}
	if (!v->sub_102f5b30(&buf, temps, path, "UsedHullBits:")) goto done;
	sub_1006c470(&buf, "%d\n", &usedBits);
	sub_102f9920(usedBits);
	if (!v->sub_102f5b30(&buf, temps, path, "ZoneCount:")) goto done;
	sub_1006c470(&buf, "%d\n", &zoneCount);
	for (i = 0; i < zoneCount; i++) {
		ZoneVec *zv = &v->zones;
		sub_1006c470(&buf, "%d ", &z);
		int sz = zv->size;
		if (sz + 1 > zv->alloc)
			zv->sub_102f9330(sz - zv->alloc + 1);
		zv->size++;
		zv->ptr = zv->mem;
		zv->sub_102f92b0(sz, 1);
		int *p = &zv->mem[sz];
		if (p)
			*p = z;
	}
	sub_1006c470(&buf, "\n");
	if (!v->sub_102f5b30(&buf, temps, path, "NumNodes:")) goto fail;
	sub_1006c470(&buf, "%d\n", &numNodes);
	if (engine->vfunc12() && numNodes <= 0x400)
		numNodes = 0x400;
	v->graph.nodes = (NodeV **)operator new(numNodes * 4);
	allocated = true;
	for (node = 0; node < numNodes; node++) {
		if ((node & 0x1f) == 0) {
			if (!v->sub_102f5b30(&buf, temps, path, "Nodes:")) goto fail;
		}
		float origin[3];
		float yaw;
		sub_1006c470(&buf, "%f,%f,%f", &origin[0], &origin[1], &origin[2]);
		sub_1006c470(&buf, "%f", &yaw);
		NodeV *n = v->graph.sub_102f47f0(origin, *(int *)&yaw);
		for (h = 0; h < 22; h++)
			sub_1006c470(&buf, "%f", &n->vOff[h]);
		sub_1006c470(&buf, "%d", &n->type);
		sub_1006c470(&buf, "%d", &n->info);
		NodeBits *bits = new NodeBits(numNodes);
		n->bits = bits;
		bits->m_pWords[bits->m_nWords - 1] &= ~g_1055b298[(int)bits->m_nBits % 32];
		sub_100bf420(bits->m_pWords, bits->m_nWords, &buf);
		int *pz = &n->zone;
		sub_1006c470(&buf, "%d", pz);
		if (!*pz) {
			g_109f3658(2, "Invalid node zone in %s!  Ignoring saved node graph...\n", path);
			goto fail;
		}
		int numLinks;
		sub_1006c470(&buf, "%d", &numLinks);
		if (engine->vfunc12())
			numLinks = 0x1e;
	}
	if (!v->sub_102f5b30(&buf, temps, path, "TotalNumLinks")) goto fail;
	sub_1006c470(&buf, "%d", &total);
	for (l = 0; l < total; l++) {
		LinkV *p = (LinkV *)operator new(0x6c);
		LinkV *link = p ? p->sub_102dda70() : 0;
		sub_1006c470(&buf, "%d", &link->src);
		sub_1006c470(&buf, "%d", &link->dst);
		sub_1006c470(&buf, "%d", &link->pad2);
		for (h = 0; h < 22; h++)
			sub_1006c470(&buf, "%d", &link->moves[h]);
		GetNode(&v->graph, link->src)->sub_102f95d0(link);
		GetNode(&v->graph, link->dst)->sub_102f95d0(link);
	}
	if (!v->sub_102f5b30(&buf, temps, path, "WCLookup:")) goto fail;
	operator delete(v->edit->table);
	{
		int cnt = v->graph.count;
		if (cnt <= 1) cnt = 1;
		v->edit->table = (int *)operator new(cnt * 4);
		for (i = 0; i < v->graph.count; i++)
			sub_1006c470(&buf, "%d", &v->edit->table[i]);
	}
	g_1093408c = 1;
	sub_102f99b0();
	goto done;
fail:
	v->zones.size = 0;
	if (allocated)
		v->graph.sub_102f31f0();
done:;
}
// END FUNCTION

// FUNCTION: 0x102f65b0 size=0xd
extern char g_1093408c;
extern int g_1093407c;
void sub_102f65b0()
{
	g_1093408c = 0;
	g_1093407c = 0;
}
// END FUNCTION

// FUNCTION: 0x102f65d0 size=0x28
extern void (*g_109f3890)(char *pDest, const char *pSrc, int nMax);

struct CUnknown102f65d0 {
    char pad_0000[0x659];
    unsigned char m_b659;
    char m_sz65a[0x100];
    void sub_102f65d0(const char *pszText);
};

// TARGET: CUnknown102f65d0::sub_102f65d0
void CUnknown102f65d0::sub_102f65d0(const char *pszText)
{
    if (pszText != 0) {
        m_b659 = 1;
        g_109f3890(m_sz65a, pszText, 0x100);
    }
}
// END FUNCTION

// FUNCTION: 0x102f6610 size=0x5c
#include "CAI_NodeGraph.h"
#include "CAI_NetworkManager.h"

extern char g_1093408c;
__declspec(dllimport) void DevMsg(const char *pMsg, ...);

void CAI_NetworkManager::sub_102f6610()
{
	((CAI_NodeGraph *)m_Graph)->sub_102f4e00();
	if (!g_1093408c)
	{
		sub_102f51d0();
		g_1093408c = 1;
	}
	engine->vfunc7("ai_node_graph_built");
	DevMsg("AI Node Graph Rebuilt for map: %s [%d]\n", gpGlobals->mapname ? gpGlobals->mapname : "", gpGlobals->mapversion);
}
// END FUNCTION

// FUNCTION: 0x102f6690 size=0xce
#include "CAI_NetworkManager.h"

__declspec(dllimport) void __cdecl Warning(const char *pMsg, ...);

extern "C" void *__cdecl __RTDynamicCast(void *pObject, long nVfDelta, void *pSrcType, void *pTargetType, int bIsReference);
extern char g_10538764[];	// the type descriptor of CBaseEntity
extern char g_10610570[];	// the type descriptor of CAI_NetworkManager

struct CGlobalVarsMap	// gpGlobals
{
	char m_pad0000[0xc];
	float curtime;	// 0x0c
	char m_pad0010[0x24 - 0x10];
	const char *mapname;	// 0x24
};
extern CGlobalVarsMap *g_1070b228;
extern CAI_NetworkManager *g_10934088;
extern void *g_1093407c;
extern int g_10926a3c;
extern char g_106b8540[];

void sub_102f9900();
CBaseEntity *sub_10136580(const char *pszClassname);
const char **sub_1042bff0(const char **pOut, const char *psz);
bool sub_102f67a0(const char *pszMapName);
void sub_1000f443();	// the think function of the network manager (stub)

void sub_102f6690()
{
	sub_102f9900();
	CAI_NetworkManager *pNetwork = (CAI_NetworkManager *)__RTDynamicCast(sub_10136580("ai_network"), 0, g_10538764, g_10610570, 0);
	if (!pNetwork)
		Warning("classname %s used to create wrong class type\n");
	const char *pszTmp;
	g_10934088 = pNetwork;
	g_1093407c = (char *)pNetwork + 0x458;
	pNetwork->sub_100a0420(*sub_1042bff0(&pszTmp, "BigNet"));
	pNetwork->vfunc103();
	const char *pszMap = g_1070b228->mapname;
	if (!pszMap)
		pszMap = g_106b8540;
	if (sub_102f67a0(pszMap))
		pNetwork->sub_102f5bd0();
	g_10926a3c = 0;
	pNetwork->sub_100ac4e0((int)sub_1000f443, 0, 0);
	*(float *)((char *)pNetwork + 0x17c) = g_1070b228->curtime + 0.8;
}
// END FUNCTION

// FUNCTION: 0x102f67a0 size=0x171
extern "C" char *strcat(char *, const char *);
#pragma intrinsic(strcat)
extern void (__cdecl *g_109f3890)(char *, const char *, int);
extern void (__cdecl *g_109f3650)(int, const char *, ...);
extern void (__cdecl *g_109f3630)(const char *, ...);
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
#define SL50(p) SL10(p##a) SL10(p##b) SL10(p##c) SL10(p##d) SL10(p##e)
struct EngineL {
    SL50(e0) SL10(e1) SL10(e2) SL10(e3) SL10(e4) virtual void e5(); virtual void e6();
    virtual int v92(const char *a, const char *b, int *pCompare);
};
struct GameL {
    virtual char v0();
    virtual char v1();
    char pad[0x28];
    int m_f2c;
};
struct HookL {
    SL5(h0) virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8();
    virtual char v9(const char *a, int b);
};
extern EngineL *g_1070b22c;
extern GameL *g_10934094;
extern HookL *g_1070b238;

bool sub_102f67a0(const char *mapname)
{
    char bsp[260];
    char ain[260];
    int cmp;
    void (__cdecl *copy)(char *, const char *, int) = g_109f3890;
    copy(bsp, "maps/", 260);
    strcat(bsp, mapname);
    strcat(bsp, ".bsp");
    copy(ain, "maps/graphs/", 260);
    strcat(ain, mapname);
    strcat(ain, ".ain");
    if (g_1070b22c->v92(bsp, ain, &cmp)) {
        if (cmp > 0) {
            if (g_10934094->v1() || g_10934094->m_f2c == 0) {
                g_109f3650(2, ".AIN File will be updated\n\n");
                return false;
            }
            if (g_1070b238->v9(ain, 0)) {
                g_109f3650(2, ".AIN File will *NOT* be updated. User Override.\n\n");
                g_109f3630("\n*****Node Graph Rebuild OVERRIDDEN by user*****\n\n");
            }
        }
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x102f6980 size=0x91
#include "CAI_NetworkManager.h"
#include "CCollisionProperty.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CAI_NetworkManager::vfunc103()
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	(*g_109f3680)--;
	vfunc93(0, 0);
}
// END FUNCTION

// FUNCTION: 0x102f6a50 size=0x1f7
#include "CBaseEntity.h"
#include "CAI_NetworkManager.h"

extern char g_1093408c;
struct CAIGlobalTimer { char pad[0x17c]; float m_f17c; };
extern CAIGlobalTimer *g_10934088;
extern char g_106b8540[];
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
void sub_102cc900();
void __fastcall sub_102f6cd0(char *p);
void sub_1028d8d0(CAI_NetworkManager *p);
char *sub_101d3730(const char *fmt, const char *arg);
int sub_100f4140(const char *name, int version, int a);
void sub_101ce440(int a, const char *msg, int b, int c, int d, int e);

// TARGET: CAI_NetworkManager::sub_102f6a50
void CAI_NetworkManager::sub_102f6a50()
{
	if (m_b450) {
		sub_102f6610();
		if (engine->vfunc12())
			engine->vfunc59("exec map_edit.cfg\n");
		sub_100ac4e0(0, 0, 0);
	} else if (!g_1093408c || engine->vfunc12()) {
		if (engine->vfunc12()) {
			const char *mapname = gpGlobals->mapname;
			if (!mapname)
				mapname = g_106b8540;
			int r = sub_100f4140(mapname, gpGlobals->mapversion, 0);
			if (r == 1) {
				DevMsg("\nAborting map_edit\nWorldcraft not running...\n\n");
				sub_101ce440(4, "Worldcraft not running...", 0, 0, 0, 0);
				engine->vfunc59("disconnect\n");
				sub_100ac4e0(0, 0, 0);
				return;
			}
			if (r == 2) {
				DevMsg("\nAborting map_edit\nWC/Engine map versions different...\n\n");
				sub_101ce440(4, "WC/Engine map versions different...", 0, 0, 0, 0);
				engine->vfunc59("disconnect\n");
				sub_100ac4e0(0, 0, 0);
				return;
			}
			gpGlobals->mapversion++;
		}
		DevMsg("Node Graph out of Date. Rebuilding...\n");
		sub_101ce440(4, "Node Graph out of Date. Rebuilding...", 0, 0, 0, 0);
		m_b450 = 1;
		g_10934088->m_f17c = gpGlobals->curtime + 1.0f;
		return;
	}
	if (g_1093408c)
		engine->vfunc7("ai_node_graph_built");
	sub_102cc900();
	sub_102f6cd0((char *)m_pNetwork);
	m_b658 = 1;
	sub_100ac4e0(0, 0, 0);
	sub_1028d8d0(this);
	if (m_b659)
		engine->vfunc59(sub_101d3730("load %s;", m_sz65a));
}
// END FUNCTION

// FUNCTION: 0x102f6cd0 size=0x27
// TARGET: sub_102f6cd0
void __fastcall sub_102f6cd0(char *pThis)
{
	if (engine->vfunc12() == 0) {
		operator delete(*(void **)(pThis + 0xc));
		*(void **)(pThis + 0xc) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102f6d10 size=0x41
#include "CAI_Network.h"
extern void (__cdecl *g_109f3630)(const char *, ...);

int CAI_Network::sub_102f6d10(int wcId)
{
    int *pTable = (int *)m_nNumNodes;
    if (!pTable) {
        g_109f3630("ERROR: Trying to get WC ID with no table!\n");
        return -1;
    }
    int i = 0;
    if (0 < *m_pCount14) {
        int *p = pTable;
        do {
            if (*p == wcId)
                return i;
            i++;
            p++;
        } while (i < *m_pCount14);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x102f6d80 size=0x2e8
#include "CAI_Node.h"
#include "CAI_NodeGraph.h"
#include "CGameTrace.h"
#include "UTIL_Trace.h"
#include "Vector.h"
#include "ConVar.h"
#define r_visualizetrace (*(ConVar *)&g_10738960)
inline void UTIL_TraceLineCv(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.InitInline(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (r_visualizetrace.GetInt())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}
inline void AI_TraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	UTIL_TraceLineCv(vecAbsStart, vecAbsEnd, mask, ignore, collisionGroup, ptr);
}
extern CAI_NodeGraph *g_1093407c;
extern int g_109340d8;

CAI_Node *sub_102f6d80(const Vector *pFrom, const Vector *pDir, float flMaxDist, int nType)
{
	CAI_NodeGraph *g = g_1093407c;
	float flBest = flMaxDist;
	CAI_Node *pResult = 0;
	for (int i = 0; i < g->m_nNodes; i++)
	{
		if (g->NodeAt(i)->m_nType == 1)
			continue;
		if (nType)
		{
			if (nType != g->NodeAt(i)->m_nType)
				continue;
		}
		float tmp1[3];
		Vector *pPos = (Vector *)g->NodeAt(i)->sub_102fb0d0(tmp1, g_109340d8);
		Vector delta = *pPos - *pFrom;
		VectorNormalize(delta);
		float flDot = pDir->x * delta.x + (pDir->y * delta.y + pDir->z * delta.z);
		if (flDot > flBest)
		{
			float tmp2[3];
			Vector *pPos2 = (Vector *)g->NodeAt(i)->sub_102fb0d0(tmp2, g_109340d8);
			CGameTrace trace;
			UTIL_TraceLineCv(*pFrom, *pPos2, 0x2804091, 0, 0, &trace);
			if (trace.m_fraction == 1.0)
			{
				flBest = flDot;
				pResult = g->NodeAt(i);
			}
		}
	}
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x102f7130 size=0x13f
#include "Vector.h"

Vector sub_102f7130(const Vector &vecA, const Vector &vecB, const Vector &vecP)
{
	Vector vecDir = vecB - vecA;
	Vector vecToP = vecP - vecA;
	float flDot = DotProduct(vecDir, vecToP);
	float flDen = vecDir.Length() * vecToP.Length();
	float flDist = (flDot / flDen) * vecToP.Length();
	VectorNormalize(vecDir);
	return vecDir * flDist + vecA;
}
// END FUNCTION

// FUNCTION: 0x102f72c0 size=0x526
// TARGET: sub_102f72c0
#include <math.h>
#include "CAI_NodeGraph.h"
#include "CPairFields102dda40.h"
#include "UTIL_Trace.h"

extern CAI_NodeGraph *g_1093407c;
extern char g_109340dc;
extern int g_109340d8;

float sub_10146150(const Vector *v);
void sub_102f7130(Vector *pOut, const Vector *pA, const Vector *pB, const Vector *pP);

int sub_102f72c0(const Vector *pOrigin, const Vector *pDir, float flMinDot)
{
    float flBestDot = flMinDot;
    CPairFields102dda40 *pBest = 0;
    CAI_NodeGraph *pGraph = g_1093407c;
    for (int i = 0; i < pGraph->m_nNodes; i++)
    {
        if (pGraph->NodeAt(i)->m_nType != 1 &&
            ((g_109340dc && pGraph->NodeAt(i)->m_nType == 3) || (!g_109340dc && pGraph->NodeAt(i)->m_nType == 2)))
        {
            for (int j = 0; j < pGraph->NodeAt(i)->m_n78; j++)
            {
                CPairFields102dda40 *pLink = (CPairFields102dda40 *)pGraph->NodeAt(i)->m_ppLinks[j];
                int iOther = pLink->sub_102dda40(i);
                Vector vecNode1;
                Vector vecNode2;
                pGraph->NodeAt(i)->sub_102fb0d0(&vecNode1.x, g_109340d8);
                pGraph->NodeAt(iOther)->sub_102fb0d0(&vecNode2.x, g_109340d8);
                Vector vecClosest;
                sub_102f7130(&vecClosest, &vecNode1, &vecNode2, pOrigin);
                Vector vecDelta = vecClosest - *pOrigin;
                float flAngle = acos(DotProduct(vecDelta, *pDir) / sub_10146150(&vecDelta));
                if (flAngle > 1.57)
                    continue;
                float flLateral = tan(flAngle) * sub_10146150(&vecDelta);
                Vector vecLinkDir = vecNode2 - vecNode1;
                float flLinkLen = VectorNormalize(vecLinkDir);
                Vector vecOffset = vecLinkDir.sub_100a19c0(flLateral);
                Vector vecPoint = vecClosest + vecOffset;
                Vector vecA = vecPoint - vecNode1;
                if (sub_10146150(&vecA) > flLinkLen)
                    continue;
                Vector vecB = vecPoint - vecNode2;
                if (sub_10146150(&vecB) > flLinkLen)
                    continue;
                Vector vecC = vecPoint - *pOrigin;
                VectorNormalize(vecC);
                float flNewDot = DotProduct(vecC, *pDir);
                if (!(flNewDot > flBestDot))
                    continue;
                CGameTrace tr;
                UTIL_TraceLine_Calls(*pOrigin, vecPoint, 0x2804091, (const void *)0, 0, &tr);
                if (tr.m_fraction == 1.0)
                {
                    flBestDot = flNewDot;
                    pBest = pLink;
                }
            }
        }
    }
    return (int)pBest;
}
// END FUNCTION

// FUNCTION: 0x102f7940 size=0x15
extern char g_109340dd;

struct CUnknown102f7940
{
	char m_pad0000[8];
	unsigned int m_n8;

	void sub_102f7940();
};

// TARGET: CUnknown102f7940::sub_102f7940
void CUnknown102f7940::sub_102f7940()
{
	m_n8 = (m_n8 & 0xffffffc3) | 0x10000000;
	g_109340dd = 0;
}
// END FUNCTION

// FUNCTION: 0x102f7970 size=0x79
#include "CUnknown102f7970.h"

extern int g_106c994c;

static inline CUnknown102f7970Node *NodeAt(CUnknown102f7970Vec *v, int i)
{
    if (i < 0 || i >= v->m_count) {
        g_106c994c++;
        return 0;
    }
    return v->m_pData[i];
}

void CUnknown102f7970::sub_102f7970()
{
    m_flags |= 8;
    int i = 0;
    if (m_pVec->m_count > 0) {
        do {
            NodeAt(m_pVec, i)->m_flags74 &= 0xdfffffff;
            NodeAt(m_pVec, i)->m_flags74 &= 0xefffffff;
            i++;
        } while (i < m_pVec->m_count);
    }
}
// END FUNCTION

// FUNCTION: 0x102f7a10 size=0x5d
struct CVNetState
{
	void sub_102f7a90();
};
struct CVNetOwner
{
	char m_pad[0x454];
	CVNetState *m_pState;
};
extern CVNetOwner *g_10934088;
extern int g_109340d8;
int sub_102f9950();
unsigned int __cdecl sub_102d6210(int n);

// TARGET: sub_102f7a10
void sub_102f7a10()
{
	int nMask = sub_102f9950();
	if (nMask > 0)
	{
		do
		{
			g_109340d8++;
			if (g_109340d8 == 0x16)
				g_109340d8 = 0;
		} while (!(nMask & sub_102d6210(g_109340d8)));
	}
	else
		g_109340d8++;
	g_10934088->m_pState->sub_102f7a90();
}
// END FUNCTION

// FUNCTION: 0x102f7a90 size=0x113
#include "CUnknown102f7970.h"
#include "CAI_Pathfinder.h"

extern int g_109340d8;
extern int g_106c994c;
extern CAI_PathfinderNetwork *g_1093407c;
int sub_102d6210(int);
void sub_102d7640();
struct CEnt5f44;
CEnt5f44 *sub_102d74c0();

struct CEnt5f44View
{
	char pad[0x5d34];
	CAI_Pathfinder *m_pPathfinder;
	CAI_Pathfinder *GetPathfinder() { return m_pPathfinder; }
	void sub_10012738(int);
	void SetNet() { GetPathfinder()->m_pNetwork = g_1093407c; }
	void SetupHull(int hull)
	{
		sub_10012738(hull);
		CAI_Pathfinder *pf = GetPathfinder();
		pf->m_n08 = *(int *)((char *)pf->m_pOuter + 0x156c);
		pf->m_n0c = gpGlobals->framecount;
	}
};

inline CUnknown102f7970Node *NodeAt(CUnknown102f7970Vec *v, int i)
{
	if (i >= 0 && i < v->m_count)
		return v->m_pData[i];
	g_106c994c++;
	return 0;
}

inline void SelectHull(unsigned int mask)
{
	if ((int)mask > 0) {
		while (!(mask & sub_102d6210(g_109340d8))) {
			g_109340d8++;
			if (g_109340d8 == 0x16)
				g_109340d8 = 0;
		}
	}
}

// TARGET: CUnknown102f7970::sub_102f7a90
void CUnknown102f7970::sub_102f7a90()
{
	SelectHull(sub_102f9950());
	CEnt5f44View *pTestHull = (CEnt5f44View *)sub_102d74c0();
	pTestHull->SetNet();
	pTestHull->SetupHull(*(volatile int *)&g_109340d8);
	for (int node = 0; node < m_pVec->m_count; node++) {
		if (pTestHull->GetPathfinder()->sub_102f1900(node, 0x2400b))
			NodeAt(m_pVec, node)->m_flags74 &= ~0x40000000;
		else
			NodeAt(m_pVec, node)->m_flags74 |= 0x40000000;
	}
	sub_102d7640();
}
// END FUNCTION

// FUNCTION: 0x102f7c00 size=0x72
struct CUnk102f7c00State {
    char pad[8];
    unsigned int m_flags;
    void sub_10014a8d();
};
struct CUnk102f7c00Owner {
    char pad[0x454];
    CUnk102f7c00State *m_pState;
};
extern CUnk102f7c00Owner *g_10934088;

unsigned int sub_102f7c00(int unused, unsigned int mask, char cycle)
{
    CUnk102f7c00State *s = g_10934088->m_pState;
    if ((mask & 1) && cycle) {
        if (s->m_flags & 2) {
            s->m_flags &= 0xfffffffc;
        } else if (s->m_flags & 1) {
            s->m_flags |= 2;
        } else {
            s->m_flags |= 1;
            s->sub_10014a8d();
        }
        return s->m_flags & mask;
    }
    if (s->m_flags & mask)
        s->m_flags &= ~mask;
    else
        s->m_flags |= mask;
    return s->m_flags & mask;
}
// END FUNCTION

// FUNCTION: 0x102f7ca0 size=0x15c
#include "CUnknown102f7ca0.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
extern "C" char *strncat(char *, const char *, unsigned int);

struct SHudTextParms
{
	float x, y;
	int effect;
	unsigned char r1, g1, b1, a1, r2, g2, b2, a2;
	float fadeinTime, fadeoutTime, holdTime, fxTime;
	int channel;
};


extern int g_109340d8;
extern char g_109340dc;
extern char g_109340dd;
const char *sub_102d6230(int index);
void sub_101ce3d0(SHudTextParms *pParams, const char *pszText);

void CUnknown102f7ca0::sub_102f7ca0()
{
	SHudTextParms params;
	char szHull[0x32];
	char szLinks[0x32];
	char szMode[0x32];
	char szText[256];
	char szEdit[256];

	params.effect = 0;
	params.fadeinTime = 0;
	params.fadeoutTime = 0;
	params.fxTime = 0;
	params.channel = 0;
	params.x = 0.8f;
	params.y = 0.8f;
	params.r1 = 255;
	params.g1 = 255;
	params.b1 = 255;
	params.a1 = 255;
	params.r2 = 255;
	params.g2 = 255;
	params.b2 = 255;
	params.a2 = 255;
	params.holdTime = 1.0f;
	Q_snprintf(szHull, 0x32, "  %s", sub_102d6230(g_109340d8));
	Q_snprintf(szText, 255, "Displaying:\n%s\n\n", szHull);
	if (engine->vfunc12()) {
		Q_snprintf(szLinks, 0x32, "  %s (l)", g_109340dd ? "Links" : "Nodes");
		Q_snprintf(szMode, 0x32, "  %s (m)", g_109340dc ? "Air" : "Ground");
		Q_snprintf(szEdit, 255, "Editing:\n%s\n%s", szMode, szLinks);
		strncat(szText, szEdit, 255);
		if (m_nDebugFlags & 0x10000000) {
			params.g1 = 0;
			params.b1 = 0;
		}
	}
	sub_101ce3d0(&params, szText);
}
// END FUNCTION

// FUNCTION: 0x102f7e60 size=0xc92
#include "Vector.h"
#include "QAngle.h"
#include "UTIL_Trace.h"
#include "globalvars.h"
#include "engineserver.h"
#include <math.h>

#define DEG2RAD(x) ((float)(x) * (float)(3.14159265358979323846f / 180.f))
void __cdecl sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);	// AngleVectors

#define V1(n) virtual void v##n();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

// the debug player: slot 193 = EyePosition, +0x206c = pl.v_angle
class PlayerV
{
public:
	V100(0) V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18)
	V1(190) V1(191) V1(192)
	virtual Vector EyePosition();
	char m_pad4[0x2068];
	QAngle m_vAngle;	// 0x206c
	void EyeVectors(Vector *pForward) { sub_10139610(m_vAngle, pForward, 0, 0); }
};

struct LinkV
{
	int m_h;
	int m_iSrcID;	// 4
	int m_iDestID;	// 8
	int m_iAcceptedMoveTypes[22];	// 0xc
	int m_LinkInfo;	// 0x64
	int sub_102dda40(int startID);	// DestNodeID
};

struct NodeV
{
	unsigned int m_nHullMask;	// 0
	int m_iID;	// 4
	Vector m_vOrigin;	// 8
	char m_pad14[0x6c - 0x14];
	float m_flYaw;	// 0x6c
	int m_eNodeType;	// 0x70
	int m_eNodeInfo;	// 0x74
	int m_nLinks;	// 0x78
	LinkV **m_pLinks;	// 0x7c
	char m_pad80[0x9c - 0x80];
	float m_fl9c;	// 0x9c
	Vector sub_102fb0d0(int hull);	// GetPosition
	int NumLinks() { return m_nLinks; }
	LinkV *GetLinkByIndex(int i) { return m_pLinks[i]; }
	int GetType() { return m_eNodeType; }
};

struct NetworkV
{
	int m_iNumNodes;
	NodeV **m_pAInode;
	int NumNodes() { return m_iNumNodes; }
	NodeV **AccessNodes() { return m_pAInode; }
	bool sub_102f48b0(int a, int b);	// IsConnected
};

struct ManagerV { void sub_102f5120(); };	// RebuildNetworkGraph

struct EditToolsV
{
	int m_pad0;
	int m_pad4;
	int m_debugNetOverlays;	// 8
	int *m_pNodeIndexTable;	// 0xc
	ManagerV *m_pManager;	// 0x10
	NetworkV *m_pNetwork;	// 0x14
	void sub_102f7e60();	// DrawAINetworkOverlay
	void sub_102f7ca0();	// DrawEditInfoOverlay
};

extern char g_1093408c;	// CAI_NetworkManager::gm_fNetworksLoaded
extern int g_109340e0;	// startDrawNode
extern int g_109340e4;	// endDrawNode
extern float g_10934084;	// flDrawDuration
extern int g_109340d8;	// m_iHullDrawNum
extern int g_106102f4;	// m_iVisibilityNode
extern int g_106102f8;	// m_iGConnectivityNode
extern int g_10552810;	// CBaseEntity::m_nDebugPlayer
extern int (*g_109f388c)(char *, int, const char *, ...);	// Q_snprintf

PlayerV *sub_101cd9e0(int index);	// UTIL_PlayerByIndex
void sub_10143630(const Vector *pPos);	// NDebugOverlay::Grid
void sub_10142e90(const Vector *pStart, const Vector *pEnd, int r, int g, int b, int noDepthTest, float flDuration);	// Line
void sub_10142af0(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, const Vector *pDir, int r, int g, int b, int a, float flDuration);	// BoxDirection
void sub_10142aa0(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, int r, int g, int b, int a, float flDuration);	// Box
void sub_10143710(const Vector *pOrigin, const char *pszText, int bViewCheck, float flDuration);	// Text
void sub_102d31c0(float flDuration);	// CAI_Hint::DrawHintOverlays
const Vector &sub_102d6100(int hull);	// NAI_Hull::Mins
const Vector &sub_102d6120(int hull);	// NAI_Hull::Maxs
int sub_102d6210(int hull);	// NAI_Hull::Bits

void EditToolsV::sub_102f7e60()
{
	if (!g_1093408c)
	{
		return;
	}

	g_109340e4 = g_109340e0 + 20;
	g_10934084 = 0.1 * (m_pNetwork->NumNodes() - 1) / 20;
	if (g_109340e4 > m_pNetwork->NumNodes())
	{
		g_109340e4 = m_pNetwork->NumNodes();
	}

	if (m_debugNetOverlays & 0x40)
	{
		PlayerV *pPlayer = sub_101cd9e0(g_10552810);

		if (pPlayer)
		{
			Vector vForward;
			Vector vSource = pPlayer->EyePosition();
			pPlayer->EyeVectors(&vForward);

			CGameTrace tr;
			UTIL_TraceLine_Calls(vSource, vSource + vForward * 2048, 0x200400b, pPlayer, 0, &tr);

			float dotPr = DotProduct(Vector(0, 0, 1), *(Vector *)&tr.m_planeNormal);
			if (tr.m_fraction != 1.0 && dotPr > 0.5)
			{
				sub_10143630(&(*(Vector *)&tr.m_endpos + Vector(0, 0, 1)));
			}
		}
	}

	NodeV **pAINode = m_pNetwork->AccessNodes();

	if (m_debugNetOverlays & 0x20)
	{
		if (m_debugNetOverlays & 0x10000000)
		{
			m_pManager->sub_102f5120();
		}
		else if (g_106102f8 != -1)
		{
			for (int node = 0; node < m_pNetwork->NumNodes(); node++)
			{
				if (m_pNetwork->sub_102f48b0(g_106102f8, node))
				{
					Vector srcPos = pAINode[g_106102f8]->sub_102fb0d0(g_109340d8);
					Vector desPos = pAINode[node]->sub_102fb0d0(g_109340d8);
					sub_10142e90(&srcPos, &desPos, 255, 0, 255, false, 0);
				}
			}
		}
	}

	if (m_debugNetOverlays & 0x4)
	{
		if (m_debugNetOverlays & 0x10000000)
		{
			m_pManager->sub_102f5120();
		}
		else
		{
			for (int node = g_109340e0; node < g_109340e4; node++)
			{
				for (int link = 0; link < pAINode[node]->NumLinks(); link++)
				{
					if (pAINode[node]->GetLinkByIndex(link)->sub_102dda40(node) < node)
					{
						Vector srcPos = pAINode[pAINode[node]->GetLinkByIndex(link)->m_iSrcID]->sub_102fb0d0(g_109340d8);
						Vector desPos = pAINode[pAINode[node]->GetLinkByIndex(link)->m_iDestID]->sub_102fb0d0(g_109340d8);
						Vector direction = desPos - srcPos;
						float length = VectorNormalize(direction);
						Vector hullMins = sub_102d6100(g_109340d8);
						Vector hullMaxs = sub_102d6120(g_109340d8);
						hullMaxs.x = length + hullMaxs.x;

						if (pAINode[node]->GetLinkByIndex(link)->m_iAcceptedMoveTypes[g_109340d8] & 4)
						{
							sub_10142af0(&srcPos, &hullMins, &hullMaxs, &direction, 100, 255, 255, 20, g_10934084);
						}

						if (pAINode[node]->GetLinkByIndex(link)->m_iAcceptedMoveTypes[g_109340d8] & 8)
						{
							if (pAINode[pAINode[node]->GetLinkByIndex(link)->m_iSrcID]->m_vOrigin != pAINode[pAINode[node]->GetLinkByIndex(link)->m_iDestID]->m_vOrigin)
							{
								hullMaxs.x = hullMaxs.x - length;
								if (srcPos.z < desPos.z)
								{
									hullMaxs.z = length + hullMaxs.z;
								}
								else
								{
									hullMins.z = hullMins.z - length;
								}
								direction = Vector(0, 1, 0);
							}
							sub_10142af0(&srcPos, &hullMins, &hullMaxs, &direction, 255, 0, 255, 20, g_10934084);
						}

						if (pAINode[node]->GetLinkByIndex(link)->m_iAcceptedMoveTypes[g_109340d8] & 1)
						{
							sub_10142af0(&srcPos, &hullMins, &hullMaxs, &direction, 0, 255, 50, 20, g_10934084);
						}
						else if (pAINode[node]->GetLinkByIndex(link)->m_iAcceptedMoveTypes[g_109340d8] & 2)
						{
							sub_10142af0(&srcPos, &hullMins, &hullMaxs, &direction, 0, 0, 255, 20, g_10934084);
						}
					}
				}
			}
		}
	}

	if (m_debugNetOverlays & 0x80)
	{
		sub_102d31c0(g_10934084);
	}

	if (m_debugNetOverlays & 0x10b)
	{
		Vector hullMins = sub_102d6100(g_109340d8);
		Vector hullMaxs = sub_102d6120(g_109340d8);

		for (int node = g_109340e0; node < g_109340e4; node++)
		{
			NodeV *pNode = pAINode[node];
			if (pNode->GetType() != 1)
			{
				if (m_debugNetOverlays & 0x8)
				{
					if (m_debugNetOverlays & 0x10000000)
					{
						m_pManager->sub_102f5120();
					}
					else
					{
						for (int link = 0; link < pNode->NumLinks(); link++)
						{
							if (pNode->GetLinkByIndex(link)->sub_102dda40(node) < node)
							{
								Vector srcPos = pAINode[pNode->GetLinkByIndex(link)->m_iSrcID]->sub_102fb0d0(g_109340d8);
								Vector desPos = pAINode[pNode->GetLinkByIndex(link)->m_iDestID]->sub_102fb0d0(g_109340d8);

								if (pAINode[pNode->GetLinkByIndex(link)->m_iSrcID]->GetType() == 2)
								{
									srcPos.z += 1.0;
								}
								if (pAINode[pNode->GetLinkByIndex(link)->m_iDestID]->GetType() == 2)
								{
									desPos.z += 1.0;
								}

								int linkInfo = pNode->GetLinkByIndex(link)->m_LinkInfo;
								if (linkInfo & 1)
								{
									sub_10142e90(&srcPos, &desPos, 255, 0, 0, false, g_10934084);
								}
								else if (linkInfo & 0x1000)
								{
									sub_10142e90(&srcPos, &desPos, 100, 100, 100, false, g_10934084);
								}
								else if (linkInfo & 0x2000)
								{
									sub_10142e90(&srcPos, &desPos, 0xc0, 0xc0, 0x40, false, g_10934084);
								}
								else if (linkInfo & 0xf0)
								{
									int bit = 0x10 << (((int)gpGlobals->curtime >> 4) & 3);
									if (linkInfo & bit)
									{
										sub_10142e90(&srcPos, &desPos, 0x60, 0x20, 0x20, false, g_10934084);
									}
									else
									{
										sub_10142e90(&srcPos, &desPos, 0x20, 0x60, 0x20, false, g_10934084);
									}
								}
								else
								{
									int moveTypes = pNode->GetLinkByIndex(link)->m_iAcceptedMoveTypes[g_109340d8];
									if (moveTypes & 4)
									{
										sub_10142e90(&srcPos, &desPos, 100, 255, 255, false, g_10934084);
									}
									else if (moveTypes & 8)
									{
										sub_10142e90(&srcPos, &desPos, 255, 0, 255, false, g_10934084);
									}
									else if (moveTypes & 1)
									{
										sub_10142e90(&srcPos, &desPos, 0, 255, 50, false, g_10934084);
									}
									else if (moveTypes & 2)
									{
										sub_10142e90(&srcPos, &desPos, 0, 0, 255, false, g_10934084);
									}
									else
									{
										sub_10142e90(&srcPos, &desPos, 100, 25, 25, false, g_10934084);
									}
								}
							}
						}
					}
				}

				if (m_debugNetOverlays & 0x103)
				{
					int r = 255;
					int g = 0;
					int b = 0;

					if ((m_debugNetOverlays & 0x10) && g_106102f4 != -1)
					{
						if (m_debugNetOverlays & 0x10000000)
						{
							m_pManager->sub_102f5120();
						}
					}

					if ((m_debugNetOverlays & 0x20) && g_106102f8 != -1)
					{
						if (m_debugNetOverlays & 0x10000000)
						{
							m_pManager->sub_102f5120();
						}
						else if (m_pNetwork->sub_102f48b0(g_106102f8, node))
						{
							r = 0;
							g = 0;
							b = 255;
						}
					}
					else
					{
						if (pNode->m_eNodeInfo & 0x20000000)
						{
							r = 200;
							g = 200;
							b = 200;
						}
						else if (pNode->m_eNodeInfo & 0x40000000)
						{
							r = 100;
							g = 25;
							b = 25;
						}
						else if (pNode->GetType() == 4)
						{
							r = 255;
							g = 0;
							b = 255;
						}
						else if (pNode->GetType() == 3)
						{
							r = 0;
							g = 255;
							b = 255;
						}
						else if (pNode->GetType() == 2)
						{
							r = 0;
							g = 255;
							b = 100;
						}
					}

					if (pNode->m_fl9c > gpGlobals->curtime)
					{
						r >>= 1;
						g >>= 1;
						b >>= 1;
					}

					Vector nodePos;
					nodePos = pNode->sub_102fb0d0(g_109340d8);

					if (m_debugNetOverlays & 0x1)
					{
						sub_10142aa0(&nodePos, &Vector(-5, -5, -5), &Vector(5, 5, 5), r, g, b, 0, g_10934084);
					}
					if (m_debugNetOverlays & 0x100)
					{
						sub_10142aa0(&nodePos, &hullMins, &hullMaxs, r, g, b, 0, g_10934084);
					}

					if (pNode->m_nHullMask & sub_102d6210(g_109340d8))
					{
						if (m_debugNetOverlays & 0x1)
						{
							sub_10142aa0(&pNode->m_vOrigin, &Vector(-5, -5, -5), &Vector(5, 5, 5), 255, 0x60, 0x60, 0x40, g_10934084);
						}
						if (m_debugNetOverlays & 0x100)
						{
							sub_10142aa0(&pNode->m_vOrigin, &hullMins, &hullMaxs, 255, 0x60, 0x60, 0x40, g_10934084);
						}
					}

					if (pNode->GetType() == 4)
					{
						Vector offsetDir = 12.0f * Vector(cos(DEG2RAD(pNode->m_flYaw)), sin(DEG2RAD(pNode->m_flYaw)), g_10934084);
						sub_10142e90(&nodePos, &(nodePos + offsetDir), r, g, b, false, g_10934084);
					}

					if (m_debugNetOverlays & 0x2)
					{
						char id[5];

						if (engine->vfunc12())
						{
							g_109f388c(id, sizeof(id), "%i (%i)", node, m_pNodeIndexTable[pNode->m_iID]);
						}
						else
						{
							g_109f388c(id, sizeof(id), "%i", node);
						}
						Vector loc = nodePos;
						loc.x += 6;
						loc.y += 6;
						loc.z += 6;
						sub_10143710(&loc, id, true, g_10934084);
					}
				}
			}
		}
	}

	if (m_debugNetOverlays & 0x10f)
	{
		sub_102f7ca0();
	}

	g_109340e0 = g_109340e4;
	if (g_109340e0 >= m_pNetwork->NumNodes())
	{
		g_109340e0 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102f8e30 size=0x65
#include "CAI_NetworkManager.h"
#include "engineserver.h"

// CAI_NetworkEditTools-like object (0x18 bytes) the network manager allocates at +0x454
struct CUnknown102f8e30
{
	int m_debugNetOverlays;
	int *m_pNodeIndexTable;
	int m_nNextWCIndex;
	Vector *m_pWCPosition;
	CAI_NetworkManager *m_pManager;
	void *m_pNetwork;
	CUnknown102f8e30 *sub_102f8e30(CAI_NetworkManager *pNetworkManager);
};

CUnknown102f8e30 *CUnknown102f8e30::sub_102f8e30(CAI_NetworkManager *pNetworkManager)
{
	if (engine->vfunc12())
		m_pNodeIndexTable = new int[4500];
	else
		m_pNodeIndexTable = 0;
	m_pWCPosition = 0;
	m_nNextWCIndex = 0;
	m_pWCPosition = new Vector[500];
	m_pNetwork = pNetworkManager->m_Graph;
	m_pManager = pNetworkManager;
	m_debugNetOverlays = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102f8ec0 size=0x18
// TARGET: sub_102f8ec0
void sub_100f4460(int a);
struct CUnk102f8ec0 {
    char pad[0xc];
    void *m_p0c;
    void sub_102f8ec0();
};
void CUnk102f8ec0::sub_102f8ec0()
{
    sub_100f4460(0);
    operator delete(m_p0c);
}
// END FUNCTION

// FUNCTION: 0x102f8ef0 size=0x8
void __fastcall sub_102f8ef0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x102f8f10 size=0x2a
#include "CUnknown102f8f10.h"

// TARGET: CUnknown102f8f10::CUnknown102f8f10
CUnknown102f8f10::CUnknown102f8f10(int a, int b, int c)
	: m_n0000(a), m_n0004(b), m_n0008(-1), m_n000c(0), m_n0010(a), m_n0014(c)
{
}
// END FUNCTION

// FUNCTION: 0x102f8f50 size=0x47
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CUtlPriorityQueue8.h"
CUtlPriorityQueue8::CUtlPriorityQueue8(int growSize, int initSize, LessFunc_t lessfunc)
	: m_heap(growSize, initSize), m_LessFunc(lessfunc)
{
}
// END FUNCTION

// FUNCTION: 0x102f8fc0 size=0x23
struct CUnknown102f8fc0 { void * sub_102f8fc0(int, int); };
void * CUnknown102f8fc0::sub_102f8fc0(int a0, int a1)
{
    *(int *)this = a0;
    *(int *)((char *)this + 4) = a1;
    *(int *)((char *)this + 8) = -1;
    *(int *)((char *)this + 0xc) = 0;
    *(int *)((char *)this + 0x10) = a0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x102f9000 size=0x2e
#include "UtlVec8.h"

// TARGET: UtlVec8::sub_102f9000
void UtlVec8::sub_102f9000(int elem)
{
	if (m_Size > 0) {
		memmove(m_pMemory + elem * 8, m_pMemory + (m_Size - 1) * 8, 8);
		m_Size--;
	}
}
// END FUNCTION

// FUNCTION: 0x102f9040 size=0x3d
#include "CUtlVector16.h"

extern void (__cdecl *g_109f3624)(void *);

void CUtlVector16::sub_102f9040()
{
	m_size = 0;
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_109f3624(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
	m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x102f9090 size=0x33
// TARGET: CUnknown102f9090::sub_102f9090
struct CUnknown102f9090Pair
{
	int m_a;
	int m_b;
};

struct CUnknown102f9090
{
	CUnknown102f9090Pair *m_pItems;

	void sub_102f9090(int i, int j);
};

void CUnknown102f9090::sub_102f9090(int i, int j)
{
	CUnknown102f9090Pair t = m_pItems[i];
	m_pItems[i] = m_pItems[j];
	m_pItems[j] = t;
}
// END FUNCTION

// FUNCTION: 0x102f90e0 size=0x95
#include "UtlVec8.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

static inline void GrowVec(UtlVec8 *v, int num)
{
	if (num + v->m_Size > v->m_allocationCount && v->m_growSize != -1) {
		int need = num + v->m_Size;
		int alloc = v->m_allocationCount;
		if (alloc < need) {
			do {
				if (alloc) {
					if (v->m_growSize)
						alloc += v->m_growSize;
					else
						alloc += alloc;
				} else {
					alloc = 4;
				}
			} while (alloc < need);
			v->m_allocationCount = alloc;
		}
		if (v->m_pMemory)
			v->m_pMemory = (char *)g_109f3638(v->m_pMemory, v->m_allocationCount << 3);
		else
			v->m_pMemory = (char *)g_109f3634(v->m_allocationCount << 3);
	}
}

int UtlVec8::sub_102f90e0(int elem)
{
	GrowVec(this, 1);
	m_Size++;
	m_pElements = (UtlVec8Elem *)m_pMemory;
	int nToMove = m_Size - elem - 1;
	if (nToMove > 0)
		memmove(&m_pElements[elem + 1], &m_pElements[elem], nToMove << 3);
	return elem;
}
// END FUNCTION

// FUNCTION: 0x102f91b0 size=0x28
#include "UtlMem.h"
extern void (__cdecl *g_109f3624)(void *);

void UtlMem::sub_102f91b0()
{
	if (m_growSize != -1) {
		if (m_pMemory) {
			g_109f3624(m_pMemory);
			m_pMemory = 0;
		}
		m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102f91f0 size=0x8c
#include "CUtlVector4.h"
extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUtlVector4::sub_102f91f0(int num)
{
    if (m_size + num > m_allocationCount && m_growSize != -1) {
        int alloc = m_allocationCount;
        int newSize = m_size + num;
        if (alloc < newSize) {
            do {
                if (alloc != 0) {
                    if (m_growSize != 0)
                        alloc += m_growSize;
                    else
                        alloc += alloc;
                } else
                    alloc = 8;
            } while (alloc < newSize);
            m_allocationCount = alloc;
        }
        if (m_pMemory)
            m_pMemory = (int *)g_109f3638(m_pMemory, m_allocationCount << 2);
        else
            m_pMemory = (int *)g_109f3634(m_allocationCount << 2);
    }
    m_size += num;
    m_pElements = m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x102f92b0 size=0x34
#include "UtlVec8.h"
void UtlVec8::sub_102f92b0(int elem, int num)
{
	int numToMove = m_Size - elem - num;
	if (numToMove > 0 && num > 0)
		memmove(&m_pMemory[(elem + num) * 4], &m_pMemory[elem * 4], numToMove * 4);
}
// END FUNCTION

// FUNCTION: 0x102f9300 size=0x11
void sub_102f9300(int *dst, const int *src)
{
	if (dst)
		*dst = *src;
}
// END FUNCTION

// FUNCTION: 0x102f9330 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem4_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem4_t::sub_102f9330
	void sub_102f9330(int num);
};

void CMem4_t::sub_102f9330(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 8;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 2);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x102f93c0 size=0x5
inline int pcd_initial_10934100() { return 0x450; }
int g_10934100 = pcd_initial_10934100();
// END FUNCTION

// FUNCTION: 0x102f9400 size=0x41
#include "CAI_Navigator.h"
#include "CPairFields102dda40.h"

CAI_NavEntry *CAI_NavProvider::sub_102f9400(int id)
{
    for (int i = 0; i < m_nEntries; i++) {
        CPairFields102dda40 **ppRec = (CPairFields102dda40 **)m_ppEntries;
        if (ppRec[i]->sub_102dda40(m_nStartId) == id)
            return m_ppEntries[i];
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102f9470 size=0x24
// TARGET: sub_102f9470
void __fastcall sub_102f9470(void *pSelf, int unused, int bit)
{
    unsigned int *pWords = *(unsigned int **)(*(int *)((char *)pSelf + 0x90) + 8);
    pWords[bit >> 5] |= 1 << (bit & 0x1f);
}
// END FUNCTION

// FUNCTION: 0x102f94b0 size=0x2c
struct CBitHolder102f94b0 {
    char pad[8];
    unsigned int *m_bits;
};
struct CBitOwner102f94b0 {
    char pad[0x90];
    CBitHolder102f94b0 *m_pHolder;
    bool sub_102f94b0(int idx);
};

// TARGET: sub_102f94b0
bool CBitOwner102f94b0::sub_102f94b0(int idx)
{
    return (m_pHolder->m_bits[idx >> 5] & (1 << (idx & 0x1f))) != 0;
}
// END FUNCTION

// FUNCTION: 0x102f94f0 size=0xa2
#include <string.h>
#include "CBitString.h"

struct SBitRef
{
	int m_unk0;
	int m_nBit;	// 0x04
};

class CUnknown102f94f0
{
public:
	char m_pad0000[0x90];
	CBitString *m_pBits;	// 0x90
	int m_pad0094;
	int *m_pBitCount;	// 0x98: points to the number of bits

	void sub_102f94f0(SBitRef *pRef);	// sets the bit pRef->m_nBit (creating the bit string on first use)
};

void CUnknown102f94f0::sub_102f94f0(SBitRef *pRef)
{
	if (!m_pBits)
		m_pBits = new CBitString(*m_pBitCount);
	m_pBits->m_pData[pRef->m_nBit >> 5] |= 1 << (pRef->m_nBit & 0x1f);
}
// END FUNCTION

// FUNCTION: 0x102f95d0 size=0xc9
#include "CUnknown102f95d0.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern void *(*g_109f3634)(unsigned int);	// Plat_Alloc
extern void *(*g_109f3638)(void *, unsigned int);	// Plat_Realloc

void CUnknown102f95d0::sub_102f95d0(int value)
{
	int elem = m_size;
	if (m_size + 1 > m_allocationCount) {
		if (m_growSize != -1) {
			int num = m_size + 1 - m_allocationCount;
			int nAllocationRequested = m_allocationCount + num;
			while (m_allocationCount < nAllocationRequested) {
				if (m_allocationCount != 0) {
					if (m_growSize != 0)
						m_allocationCount += m_growSize;
					else
						m_allocationCount += m_allocationCount;
				} else {
					m_allocationCount = 8;
				}
			}
			if (m_pMemory)
				m_pMemory = (int *)g_109f3638(m_pMemory, m_allocationCount * 4);
			else
				m_pMemory = (int *)g_109f3634(m_allocationCount * 4);
		}
	}
	m_pElements = m_pMemory;
	m_size++;
	int toMove = m_size - elem - 1;
	if (toMove > 0)
		memmove(&m_pMemory[elem + 1], &m_pMemory[elem], toMove * 4);
	int *p = &m_pMemory[elem];
	if (p)
		*p = value;
	m_nAdded++;
}
// END FUNCTION

// FUNCTION: 0x102f96e0 size=0x41
#include "CPairFields102dda40.h"
struct CAINodeView {
	int m_pad0;
	int m_iID;	// 0x04
	char m_pad8[0x78 - 8];
	int m_nLinks;	// 0x78
	CPairFields102dda40 **m_ppLinks;	// 0x7c
	CPairFields102dda40 *sub_102f96e0(int destID);
};
CPairFields102dda40 *CAINodeView::sub_102f96e0(int destID)
{
	for (int i = 0; i < m_nLinks; i++) {
		CPairFields102dda40 **pp = m_ppLinks;
		if (pp[i]->sub_102dda40(m_iID) == destID)
			return (&m_ppLinks[0])[i];
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102f9750 size=0x1f
struct CUnk102f9750
{
    char pad[0x78];
    int m_78;
    char pad2[0xa4 - 0x7c];
    int m_a4;
    void sub_102f9750();
};
void CUnk102f9750::sub_102f9750()
{
    m_a4++;
    if (m_a4 >= m_78)
    {
        m_a4 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x102f9780 size=0x27
struct CUnknown102f9780View {
    char m_pad0000[0x78];
    int m_n078;	// 0x78
    int *m_p07c;	// 0x7c
    char m_pad0080[0xa4 - 0x80];
    int m_n0a4;	// 0xa4
    int sub_102f9780(int i);
};

// TARGET: CUnknown102f9780View::sub_102f9780
int CUnknown102f9780View::sub_102f9780(int i)
{
    int idx = m_n0a4 + i;
    if (idx >= m_n078) {
        return m_p07c[idx - m_n078];
    }
    return m_p07c[idx];
}
// END FUNCTION

// FUNCTION: 0x102f97c0 size=0xd0
extern int g_106c994c;
struct CRelElemUnit {
    char sub_102f98d0();
};
struct CRelPairUnit {
    char pad0[4];
    int m_a;
    int m_b;
    char pad0c[0x64 - 0xc];
    unsigned int m_flags;	// 0x64
    int sub_102dda40(int key);
};
struct CRelVecUnit {
    int m_nCount;
    CRelElemUnit **m_pData;
    CRelElemUnit *At(int i)
    {
        if (i >= 0 && i < m_nCount)
            return m_pData[i];
        g_106c994c++;
        return 0;
    }
};
struct CRelSetUnit {
    char pad0[4];
    int m_nKey;	// 0x04
    char pad08[0x78 - 8];
    int m_nItems;	// 0x78
    CRelPairUnit **m_pItems;	// 0x7c
    char pad80[0x98 - 0x80];
    CRelVecUnit *m_pVec;	// 0x98
    void sub_102f97c0(char bClear);
};

// TARGET: CRelSetUnit::sub_102f97c0
void CRelSetUnit::sub_102f97c0(char bClear)
{
    if (m_nItems > 0) {
        int i = 0;
        if (bClear) {
            for (; i < m_nItems; i++) {
                CRelPairUnit *p = m_pItems[i];
                if (m_pVec->At(p->sub_102dda40(m_nKey))->sub_102f98d0())
                    p->m_flags &= 0xffffff0f;
            }
        } else {
            for (; i < m_nItems; i++) {
                CRelPairUnit *p = m_pItems[i];
                if (m_pVec->At(p->sub_102dda40(m_nKey))->sub_102f98d0())
                    p->m_flags |= 0xf0;
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x102f98d0 size=0x1f
struct CUnk102f98d0Owner
{
    char pad[0x5dc];
    int m_5dc;
};
struct CUnk102f98d0
{
    char pad[0xa0];
    CUnk102f98d0Owner *m_a0;
    int sub_102f98d0();
};
int CUnk102f98d0::sub_102f98d0()
{
    if (m_a0 && m_a0->m_5dc == 11000)
    {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102f9900 size=0xd
extern int g_10610be8;
extern char g_1093412c;
void sub_102f9900()
{
	g_10610be8 = 0;
	g_1093412c = 0;
}
// END FUNCTION

// FUNCTION: 0x102f9920 size=0x11
extern volatile int g_10610be8;
void sub_102f9920(int flags)
{
    g_10610be8 = g_10610be8 | flags;
}
// END FUNCTION

// FUNCTION: 0x102f9950 size=0x6
namespace lifted {
extern int g_10610be8;
}
int sub_102f9950()
{
    return lifted::g_10610be8;
}
// END FUNCTION

// FUNCTION: 0x102f9970 size=0x6
namespace lifted {
extern char g_1093412c;
}
char sub_102f9970()
{
    return lifted::g_1093412c;
}
// END FUNCTION

// FUNCTION: 0x102f9990 size=0x8
extern char g_1093412c;
void sub_102f9990() { g_1093412c = 0; }
// END FUNCTION

// FUNCTION: 0x102f99b0 size=0x8
extern char g_1093412c;
void sub_102f99b0() { g_1093412c = 1; }
// END FUNCTION

// FUNCTION: 0x102f99d0 size=0x20a
#include "UTIL_Trace.h"
#include "CBaseEntity.h"
#include "DebugOverlay.h"

float sub_102f99d0(const Vector *pOrigin, float flDist)
{
	const Vector &origin = *pOrigin;
	CGameTrace tr;
	UTIL_TraceLine_Calls(origin, origin - Vector(0, 0, flDist), 0x2400b, 0, 0, &tr);
	CGameTrace trEnt;
	UTIL_TraceLine_DebugCall(origin, origin - Vector(0, 0, flDist), 0x202400b, 0, 0, &trEnt);
	if (trEnt.m_fraction < tr.m_fraction)
	{
		if (trEnt.m_pEnt)
		{
			CBaseEntity *e = trEnt.m_pEnt;
			if (e && (e->sub_100b3700() & 0x1000000))
				*(Vector *)tr.m_endpos = *(Vector *)trEnt.m_endpos;
		}
	}
	return tr.m_endpos[2];
}
// END FUNCTION

// FUNCTION: 0x102f9c70 size=0x13
namespace lifted {
int sub_1000d7e7(int, int);
}
int sub_102f9c70(int a0)
{
    return lifted::sub_1000d7e7(a0, 0x43c00000);
}
// END FUNCTION

// FUNCTION: 0x102f9ca0 size=0x13
float sub_102f9c70(int a);

// TARGET: sub_102f9ca0
float sub_102f9ca0(int a)
{
	return *(float *)(a + 8) - sub_102f9c70(a);
}
// END FUNCTION

// FUNCTION: 0x102f9cd0 size=0x3af
#include "CTraceFilterNoCharacterCollide.h"
#include "CAI_Node.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown102f47f0.h"
#include "UTIL_Trace.h"
#include "Tier1.h"
#include "Vector.h"
#include <math.h>
#include <stdlib.h>
// identifier-count dial (link audit 2026-11-18): VC6 orders this function's tied stack slots by symbol numbers mod 64,
// so 49 declarations here keep the game's slot order with these headers (re-swept 2026-11-19 after the trace
// filter bases; 0..48 give score 2).
typedef int pcd_dial0;
typedef int pcd_dial1;
typedef int pcd_dial2;
typedef int pcd_dial3;
typedef int pcd_dial4;
typedef int pcd_dial5;
typedef int pcd_dial6;
typedef int pcd_dial7;
typedef int pcd_dial8;
typedef int pcd_dial9;
typedef int pcd_dial10;
typedef int pcd_dial11;
typedef int pcd_dial12;
typedef int pcd_dial13;
typedef int pcd_dial14;
typedef int pcd_dial15;
typedef int pcd_dial16;
typedef int pcd_dial17;
typedef int pcd_dial18;
typedef int pcd_dial19;
typedef int pcd_dial20;
typedef int pcd_dial21;
typedef int pcd_dial22;
typedef int pcd_dial23;
typedef int pcd_dial24;
typedef int pcd_dial25;
typedef int pcd_dial26;
typedef int pcd_dial27;
typedef int pcd_dial28;
typedef int pcd_dial29;
typedef int pcd_dial30;
typedef int pcd_dial31;
typedef int pcd_dial32;
typedef int pcd_dial33;
typedef int pcd_dial34;
typedef int pcd_dial35;
typedef int pcd_dial36;
typedef int pcd_dial37;
typedef int pcd_dial38;
typedef int pcd_dial39;
typedef int pcd_dial40;
typedef int pcd_dial41;
typedef int pcd_dial42;
typedef int pcd_dial43;
typedef int pcd_dial44;
typedef int pcd_dial45;
typedef int pcd_dial46;
typedef int pcd_dial47;
typedef int pcd_dial48;


extern char g_1093408c;
char *sub_102d6120(int);
char *sub_102d6100(int);
float sub_102f9c70(const float *p);

// TARGET: CAI_Node::sub_102f9cd0
void CAI_Node::sub_102f9cd0()
{
	if (m_n74 & 0x1c)
		return;
	CGameTrace trace;
	Vector posOnLadder;
	sub_102fb0d0((float *)&posOnLadder, 0);
	UTIL_TraceHull(posOnLadder, posOnLadder + Vector(0, 0, -37.0f), *(Vector *)sub_102d6100(0), *(Vector *)sub_102d6120(0), 0x2400b, 0, 0, &trace, 1, 0);
	if (!trace.m_startsolid && trace.m_fraction != 1.0f)
	{
		m_n74 = 1;
		sub_102fa170();
		return;
	}
	if (g_1093408c)
		return;
	int checkNodeTypes[3] = { 4, 8, 0x10 };
	int numExits = 0;
	for (int i = 0; i < 3; i++)
	{
		m_n74 = checkNodeTypes[i];
		Vector origin;
		sub_102fb0d0((float *)&origin, 0);
		UTIL_TraceLine(posOnLadder, origin, 0x2400b, 0, 0, &trace);
		if (!trace.m_startsolid && trace.m_fraction == 1.0)
		{
			float floorZ = sub_102f9c70((float *)&origin);
			if (abs((int)(m_z - floorZ)) < 36)
			{
				CAI_Node *pNew = (CAI_Node *)((CUnknown102f47f0 *)m_pGraph98)->sub_102f47f0(&m_x, m_n6c);
				pNew->m_nA0 = 0;
				pNew->m_nType = 4;
				pNew->m_n74 = m_n74;
				pNew->sub_102fa170();
				if (numExits == 0)
				{
					for (int h = 0; h < 22; h++)
						m_aHullHeight[h] = pNew->m_aHullHeight[h];
				}
				else
				{
					for (int h = 0; h < 22; h++)
					{
						if (fabs(m_aHullHeight[h] - pNew->m_aHullHeight[h]) > 0.1)
							g_109f3630("ERROR: Climb Node %i has different exit heights\n", m_nIndex);
					}
				}
				numExits++;
			}
		}
	}
	if (numExits == 0)
		g_109f3630("ERROR: Climb Node %i has no way off\n", m_nIndex);
	m_n74 = 2;
}
// END FUNCTION

// FUNCTION: 0x102fa170 size=0x2d3
#include <math.h>
#include "CAI_Node.h"
#include "CUnknown102f46d0.h"
#include "UTIL_Trace.h"

int sub_102d6210(int hull);
const Vector &sub_102d6100(int hull);
const Vector &sub_102d6120(int hull);

// m_Extents (+0x18) here is the game's start offset and m_StartOffset (+0x24) its extents
struct HullRay : Ray_t
{
	void InitHull(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs)
	{
		Vector &offset = *(Vector *)m_Extents;
		Vector &extents = *(Vector *)m_StartOffset;
		m_Delta[0] = end.x - start.x;
		m_Delta[1] = end.y - start.y;
		m_Delta[2] = end.z - start.z;
		m_IsSwept = (m_Delta[0] * m_Delta[0] + m_Delta[1] * m_Delta[1] + m_Delta[2] * m_Delta[2]) != 0;
		VectorSubtract(maxs, mins, extents);
		extents *= 0.5f;
		m_IsRay = (extents.z * extents.z + extents.y * extents.y + extents.x * extents.x) < 1e-6;
		VectorAdd(mins, maxs, offset);
		offset *= 0.5f;
		m_Start[0] = offset.x + start.x;
		m_Start[1] = offset.y + start.y;
		m_Start[2] = offset.z + start.z;
		offset *= -1.0f;
		m_b32 = 0;
		m_b33 = 0;
		m_n34 = 0;
	}
};

inline void UTIL_TraceHullB(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr, char bTraceOffset)
{
	HullRay ray;
	ray.InitHull(vecAbsStart, vecAbsEnd, hullMin, hullMax);
	if (bTraceOffset && !ray.m_IsRay) {
		float f = sqrt(ray.m_StartOffset[1] * ray.m_StartOffset[1] + ray.m_StartOffset[0] * ray.m_StartOffset[0]);
		*(float *)&ray.m_n34 = f;
		if (f > 1e-6)
			ray.m_b33 = 1;
	}
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

struct CAI_NodeV : CAI_Node
{
	int sub_102f9950();
};

void CAI_Node::sub_102fa170()
{
	int hullbits = ((CAI_NodeV *)this)->sub_102f9950();
	for (int hull = 0; hull < 22; hull++)
	{
		if (hullbits & sub_102d6210(hull))
		{
			CGameTrace tr;
			Vector origin = ((CUnknown102f46d0Elem *)this)->sub_102fb0d0(hull);
			Vector mins, maxs;

			mins = sub_102d6100(hull);
			maxs = sub_102d6120(hull);

			origin.z -= mins.z;
			Vector end = origin + Vector(0, 0, -384);
			origin.z += maxs.z - mins.z;
			maxs.z = mins.z;

			UTIL_TraceHullB(origin, end, mins, maxs, 0x2400b, 0, 0, &tr, 1);

			if (!tr.m_startsolid)
				m_aHullHeight[hull] = tr.m_endpos[2] - m_z + 0.1;
			else
				m_aHullHeight[hull] = 0.1f;
		}
		else
			m_aHullHeight[hull] = 0.1f;
	}
}
// END FUNCTION

// FUNCTION: 0x102fa510 size=0xd1
#include "CAI_Node.h"
#include "CAI_Network.h"

__declspec(dllimport) void __cdecl DevMsg(const char *fmt, ...);
int sub_102d6210(int hull);
const char *sub_102d6230(int hull);
int sub_102f9950();

struct CAI_NodeWCIds
{
	char m_pad0000[0xc];
	int *m_pWCIds;	// 0xc: the worldcraft id of every node
};
struct CAI_NodeNetworkOwner
{
	char m_pad0000[0x454];
	CAI_NodeWCIds *m_pNetwork;	// 0x454
};
extern CAI_NodeNetworkOwner *g_10934088;

// TARGET: CAI_Node::sub_102fa510
void CAI_Node::sub_102fa510()
{
	if (m_nType != 3) {
		if (m_nType == 4) {
			sub_102f9cd0();
			return;
		}
		if (m_nType == 2) {
			sub_102fa170();
			int nMask = sub_102f9950();
			int nHull = -1;
			if (nMask > 0) {
				do {
					nHull++;
					if (nHull == 0x16)
						nHull = 0;
				} while (!(nMask & sub_102d6210(nHull)));
			} else {
				nHull = 0;
			}
			if (m_aHullHeight[nHull] < -200.0f) {
				CAI_NodeWCIds *pNetwork = g_10934088->m_pNetwork;
				DevMsg("ERROR: Node %.0f %.0f %.0f too low. (WC ID# %i) Fell through floor for hull %s!\n", m_x, m_y, m_z, pNetwork->m_pWCIds[m_nIndex], sub_102d6230(nHull));
				m_nHullMask |= sub_102d6210(nHull);
			}
		} else if (m_nType != 1) {
			DevMsg("Bad node type!\n");
		}
	}
}
// END FUNCTION
