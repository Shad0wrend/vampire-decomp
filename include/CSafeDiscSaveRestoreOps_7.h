// CSafeDiscSaveRestoreOps_7: declared by pcdecomp transplant for 0x1042fa80 from CSafeDiscSaveRestoreOps_1 (0x1042f360);
// only what matched code needs, as plain members.
#pragma once
#include "CSafeDiscSaveRestoreOps_0.h"

class CSafeDiscSaveRestoreOps_7
{
public:
	void vfunc0(int **ppObject, CSafeDiscWriter *pSave);	// slot 0 "Save": hashes *(*ppObject + 2) (and 0x1b78b435/0x5868c545/+0x4b0a6787/0xe4874bca/0x9a5db6cc), hands it to sub_10430520(unsigned int), then pSave->vfunc10(&result, 1)
	void vfunc1(int **ppObject, CSafeDiscReader *pRestore);
};
