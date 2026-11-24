// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1007f2e0 size=0x6
#include "C_BaseParticleEntity.h"
namespace lifted {
extern char g_102ac998;
}
int C_BaseParticleEntity::vfunc16()
{
    return (int)&lifted::g_102ac998;
}
// END FUNCTION

// FUNCTION: 0x1007f2f0 size=0x3
#include "C_BaseParticleEntity.h"
int C_BaseParticleEntity::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007f490 size=0x6
#include "C_BaseParticleEntity.h"
namespace lifted {
extern char g_102ac96c;
}
int C_BaseParticleEntity::vfunc17()
{
    return (int)&lifted::g_102ac96c;
}
// END FUNCTION

// FUNCTION: 0x1007f4f0 size=0x3f
#include "C_BaseEntity.h"
#include "CParticleEffectBinding.h"
extern int vt_101e5584[];
C_BaseEntity *__fastcall sub_1007f4f0(C_BaseEntity *self, int edx, unsigned flags)
{
	((CParticleEffectBinding *)((char *)self + 0x414))->~CParticleEffectBinding();
	int **ip = self ? (int **)((char *)self + 0x410) : 0;
	*ip = vt_101e5584;
	self->C_BaseEntity::~C_BaseEntity();
	if (flags & 1)
		C_BaseEntity::operator delete(self);
	return self;
}
// END FUNCTION

// FUNCTION: 0x1007f530 size=0x1
#include "C_BaseParticleEntity.h"
void C_BaseParticleEntity::vfunc120()
{
}
// END FUNCTION
