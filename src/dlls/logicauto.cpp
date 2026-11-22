// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 8 blocks
#include "vampire.h"

// FUNCTION: 0x10130c10 size=0x8
#include "CLogicAuto.h"
// TARGET: CLogicAuto::sub_10130c10
unsigned char CLogicAuto::sub_10130c10()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x10130c30 size=0x6
#include "datamap.h"
#include "CLogicAuto.h"
namespace lifted {
extern char g_10575a68;
}
datamap_t * CLogicAuto::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10575a68);
}
// END FUNCTION

// FUNCTION: 0x10130c50 size=0x5
int * sub_10130c90(void);
int * g_1070c5c4 = ((int * (*)(int))sub_10130c90)(0);
// END FUNCTION

// FUNCTION: 0x10130c90 size=0x52
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
extern ISaveRestoreOps *g_1055dc70;
extern int g_10575a68[2];

int *sub_10130c90()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 10, "m_OnMapLoad", {0x450, 0}, 1, 0x16, "OnMapLoad", g_1055dc70 },
    };
    g_10575a68[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10575a68[0] = (int)&dataDesc[1];
    return g_10575a68;
}
// END FUNCTION

// FUNCTION: 0x10130d10 size=0x15
#include "CLogicAuto.h"
void CLogicAuto::sub_10130d10()
{
	m_flTime = gpGlobals->curtime + 0.2;
}
// END FUNCTION

// FUNCTION: 0x10130d40 size=0x4e
#include "CLogicAuto.h"
#include "CBaseEntity.h"
void CLogicAuto::vfunc130(int a)
{
	((CBaseEntity *)this)->CBaseEntity::vfunc130(a);
	if ((char)a) {
		m_flTime = gpGlobals->curtime + 0.2;
	} else if (m_flags204 & 2) {
		m_flTime = gpGlobals->curtime + 0.2;
	}
}
// END FUNCTION

// FUNCTION: 0x10130db0 size=0x27
#include "CLogicAuto.h"

struct CLogicAutoSub450 {
    void sub_10010794(int a, CLogicAuto *b, int c);
};

void __cdecl sub_10014614(CLogicAuto *p);

// TARGET: CLogicAuto::vfunc134
void CLogicAuto::vfunc134()
{
    ((CLogicAutoSub450 *)((char *)this + 0x450))->sub_10010794(0, this, 0);
    if (*(unsigned char *)((char *)this + 0x204) & 1) {
        sub_10014614(this);
    }
}
// END FUNCTION

// FUNCTION: 0x10130df0 size=0x2b
#include "CLogicAuto.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CLogicAuto::vfunc5
CBaseEntity *CLogicAuto::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x450))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
