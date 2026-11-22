// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100015a0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc24()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100015b0 size=0x7
#include "C_BaseEntity.h"
ICollideable * C_BaseEntity::GetClientCollideable()
{
    return (ICollideable *)((char *)this + 0x190);
}
// END FUNCTION

// FUNCTION: 0x100015e0 size=0x3
#include "C_BaseEntity.h"
IClientEntity * C_BaseEntity::GetIClientEntity()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x100015f0 size=0x3
#include "C_BaseEntity.h"
C_BaseEntity * C_BaseEntity::GetBaseEntity()
{
    return this;
}
// END FUNCTION

// FUNCTION: 0x10001610 size=0x5
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc25(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001620 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc26()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100016a0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc58()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100016c0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc63()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100016d0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc84()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100016f0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc94()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001720 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc106()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10001890 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc112()
{
}
// END FUNCTION

// FUNCTION: 0x100018a0 size=0x5
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc117(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007de10 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc92(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1007de20 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc93(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x1007df70 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc87()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009d3f0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009dda0 size=0x1e
#include "C_BaseEntity.h"

// VC6 writes C_BaseEntity's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseEntity *pcd_emit_1009dda0() { return new C_BaseEntity; }

// TARGET: ??_GC_BaseEntity@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1009e040 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc19()
{
}
// END FUNCTION

// FUNCTION: 0x1009e050 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc20()
{
}
// END FUNCTION

// FUNCTION: 0x1009e060 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc21()
{
}
// END FUNCTION

// FUNCTION: 0x1009f050 size=0xf
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc0(int a0)
{
    *(int *)((char *)this + 0xe4) = *(int *)((char *)a0);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x1009f060 size=0x7
#include "C_BaseEntity.h"
unsigned int * C_BaseEntity::vfunc1()
{
    return (unsigned int *)((char *)this + 0xe4);
}
// END FUNCTION

// FUNCTION: 0x1009f2c0 size=0x5
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc27(int a0, int a1, int a2)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009f2d0 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc38(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x1009f650 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc118(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1009f660 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc119(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1009fce0 size=0x7
#include "C_BaseEntity.h"
CMouthInfo * C_BaseEntity::GetMouth()
{
    return (CMouthInfo *)((char *)this + 0xfc);
}
// END FUNCTION

// FUNCTION: 0x100a06e0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc67()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100a08e0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc71()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100a0bc0 size=0x3
#include "C_BaseEntity.h"
bool C_BaseEntity::vfunc74()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a11f0 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc82()
{
}
// END FUNCTION

// FUNCTION: 0x100a1210 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc61()
{
}
// END FUNCTION

// FUNCTION: 0x100a2e30 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc90()
{
}
// END FUNCTION

// FUNCTION: 0x100a3330 size=0x1
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc33()
{
}
// END FUNCTION

// FUNCTION: 0x100a33c0 size=0x3
#include "C_BaseEntity.h"
int C_BaseEntity::vfunc34()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1011a940 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc96(int a0, int a1, int a2, int a3)
{
}
// END FUNCTION

// FUNCTION: 0x1011ac20 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc99(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1011ac50 size=0x3
#include "C_BaseEntity.h"
void C_BaseEntity::vfunc101(int a0)
{
}
// END FUNCTION
