// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
void CAI_InterestingPlaceMarkersSaveRestoreOps::vfunc1(SaveRestoreFieldInfo_t *fieldInfo, void *pRestoreV)
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
