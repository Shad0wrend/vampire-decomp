// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 6 blocks
#include "vampire.h"

// FUNCTION: 0x101362d0 size=0x6
#include "datamap.h"
#include "CLogicRelay.h"
namespace lifted {
extern char g_10579058;
}
datamap_t * CLogicRelay::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10579058);
}
// END FUNCTION

// FUNCTION: 0x101362f0 size=0x5
int * sub_10136330(void);
int * g_1070c634 = ((int * (*)(int))sub_10136330)(0);
// END FUNCTION

// FUNCTION: 0x10136330 size=0x52
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
extern int g_10579058[2];
void sub_1000ebab();
void sub_1000b24e();
void sub_10005e89();
void sub_100089d6();
void sub_1000af6f();

int *sub_10136330()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bWaitForRefire", {0x451, 0}, 1, 2 },
        { 5, "m_bDisabled", {0x450, 0}, 1, 6, "StartDisabled" },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_1000ebab },
        { 0, "InputEnableRefire", {0, 0}, 1, 8, "EnableRefire", 0, (void *)sub_1000b24e },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_10005e89 },
        { 0, "InputToggle", {0, 0}, 1, 8, "Toggle", 0, (void *)sub_100089d6 },
        { 0, "InputTrigger", {0, 0}, 1, 8, "Trigger", 0, (void *)sub_1000af6f },
        { 10, "m_OnTrigger", {0x454, 0}, 1, 0x16, "OnTrigger", g_1055dc70 },
    };
    g_10579058[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10579058[0] = (int)&dataDesc[1];
    return g_10579058;
}
// END FUNCTION

// FUNCTION: 0x101363b0 size=0x25
#include "CLogicRelay.h"

extern char vt_104475c4[];
extern char vt_10469f94[];

// TARGET: sub_101363b0
CLogicRelay *CLogicRelay::sub_101363b0()
{
    sub_100090fc(0);
    *(void **)this = vt_104475c4;
    ((COutputEvent *)((char *)this + 0x454))->sub_100cd2a0();
    *(void **)this = vt_10469f94;
    return this;
}
// END FUNCTION

// FUNCTION: 0x101363f0 size=0x8
#include "CLogicRelay.h"
// TARGET: CLogicRelay::sub_101363f0
unsigned char CLogicRelay::sub_101363f0()
{
    unsigned char b;
    b = sub_1000f7e5();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x10136410 size=0x2b
#include "CLogicRelay.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CLogicRelay::vfunc5
CBaseEntity *CLogicRelay::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x454))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
