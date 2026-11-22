// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x102cad10 size=0x7d
#include "CUnknown102cad10.h"

int sub_1043e780(const char *, const char *);
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);

CUnknown102cad10Schedule *CUnknown102cad10::sub_102cad10(const char *name, CUnknown102cad10Schedule **list, int count)
{
	int i;

	if (name == 0) {
		DevMsg("%s set to unnamed schedule!\n", sub_1009f200());
		return 0;
	}

	for (i = 0; i < count; i++) {
		if (!list[i]->m_pName) {
			DevMsg("Unnamed schedule!\n");
			continue;
		}
		if (sub_1043e780(name, list[i]->m_pName) == 0)
			return list[i];
	}
	return 0;
}
// END FUNCTION
