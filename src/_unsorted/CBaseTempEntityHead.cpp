// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100507e0 size=0x20
#include "vampire.h"
#include "CBaseTempEntity.h"
extern char g_1044ba10;
extern void *g_106bdd3c;
// TARGET: CBaseTempEntity::CBaseTempEntity
CBaseTempEntity::CBaseTempEntity(const char *name)
{
    *(void **)this = &g_1044ba10;
    *(const char **)((char *)this + 4) = name;
    *(void **)((char *)this + 8) = g_106bdd3c;
    g_106bdd3c = this;
}
// END FUNCTION
