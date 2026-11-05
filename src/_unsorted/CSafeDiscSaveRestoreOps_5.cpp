// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f7b0 size=0x46
#include "CSafeDiscSaveRestoreOps_5.h"

int sub_10430280(unsigned int h);

#define HASH(x) (((((((x) & 0x2b5dc235) ^ 0xd0d39db6) - 0x3a63398c) & 0x54a23dca) ^ (x)) ^ 0xc8127e9d)

// TARGET: CSafeDiscSaveRestoreOps_5::vfunc0
void CSafeDiscSaveRestoreOps_5::vfunc0(int **ppObject, CSafeDiscWriter *pSave)
{
	int v = HASH((*ppObject)[2]);
	ppObject = (int **)sub_10430280(v);
	pSave->vfunc10((int *)&ppObject, 1);
}
// END FUNCTION
