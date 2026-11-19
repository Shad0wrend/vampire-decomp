// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ded50 size=0x5
#include "CAI_InterestingPlaceMarkersSaveRestoreOps.h"
bool CAI_InterestingPlaceMarkersSaveRestoreOps::vfunc2(SaveRestoreFieldInfo_t *a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ded70 size=0x3
#include "CAI_InterestingPlaceMarkersSaveRestoreOps.h"
void CAI_InterestingPlaceMarkersSaveRestoreOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
}
// END FUNCTION

// FUNCTION: 0x102d9240 size=0xa6
#include "CAI_InterestingPlaceMarkersSaveRestoreOps.h"
#include "CSave.h"
#include "CBaseEntity.h"

struct MarkerEntry_t {
	CBaseEntity *m_pEntity;	// 0x00
	float m_vecA[3];	// 0x04
	float m_vecB[3];	// 0x10
};

struct MarkerOwner_t {
	char m_pad0000[0x580];
	MarkerEntry_t *m_pMarkers;	// 0x580
	int m_nAllocated;	// 0x584
	int m_nCount;	// 0x588
};

struct EHandle_t {
	int m_index;
	EHandle_t() { m_index = -1; }
	void Set(CBaseEntity *pEnt)
	{
		if (pEnt)
			m_index = *pEnt->vfunc1();
		else
			m_index = -1;
	}
};

void CAI_InterestingPlaceMarkersSaveRestoreOps::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
#define pSave ((CSave *)pSave)
	MarkerOwner_t *pOwner = (MarkerOwner_t *)fieldInfo->pOwner;
	pSave->vfunc10(&pOwner->m_nAllocated, 1);
	pSave->vfunc10(&pOwner->m_nCount, 1);
	for (int i = 0; i < pOwner->m_nCount; i++) {
		EHandle_t handle;
		handle.Set(pOwner->m_pMarkers[i].m_pEntity);
		pSave->vfunc36(&handle, 1);
		pSave->vfunc23(pOwner->m_pMarkers[i].m_vecA, 1);
		pSave->vfunc23(pOwner->m_pMarkers[i].m_vecB, 1);
	}
#undef pSave
}
// END FUNCTION

// FUNCTION: 0x102d9320 size=0x119
#include "CAI_InterestingPlaceMarkersSaveRestoreOps.h"

struct IRestoreX {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13();
	virtual int ReadInt();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
	virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22();
	virtual void ReadVector(void *v);
	virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
	virtual void v28(); virtual void v29();
	virtual void ReadEHandle(unsigned int *h, int count, int flag);
};

struct EntEntry { void *p; unsigned int serial; unsigned int pad; };
extern char *g_10566458;
extern void (__cdecl *g_109f3630)(const char *);
void *sub_104312d5(unsigned int);

struct Marker { void *hEnt; char v1[12]; char v2[12]; };

// TARGET: CAI_InterestingPlaceMarkersSaveRestoreOps::vfunc1
void CAI_InterestingPlaceMarkersSaveRestoreOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestoreV)
{
	IRestoreX *pRestore = (IRestoreX *)pRestoreV;
	char *owner = (char *)fieldInfo->pOwner;
	*(int *)(owner + 0x584) = pRestore->ReadInt();
	*(int *)(owner + 0x588) = pRestore->ReadInt();
	if (*(int *)(owner + 0x584) > 20)
		g_109f3630("Warning:  Possible speed issues with an interesting place that has over 20 free slots\n");
	Marker *m = (Marker *)sub_104312d5(*(int *)(owner + 0x584) * 0x1c);
	*(Marker **)fieldInfo->pField = m;
	m = *(Marker **)fieldInfo->pField;
	if (m) {
		int i = 0;
		if (i < *(int *)(owner + 0x588)) {
			do {
				unsigned int h = 0xffffffff;
				pRestore->ReadEHandle(&h, 1, 0);
				void *ent;
				if (h == 0xffffffff) ent = 0;
				else {
					EntEntry *e = (EntEntry *)(g_10566458 + (h & 0x1fff) * 12 + 4);
					ent = (e->serial == (h >> 13)) ? e->p : 0;
				}
				m[i].hEnt = ent;
				pRestore->ReadVector(m[i].v1);
				pRestore->ReadVector(m[i].v2);
				i++;
			} while (i < *(int *)(owner + 0x588));
		}
		for (; i < *(int *)(owner + 0x584); i++)
			m[i].hEnt = 0;
	}
}
// END FUNCTION
