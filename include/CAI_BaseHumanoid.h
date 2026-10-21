// CAI_BaseHumanoid: humanoid NPC base. Only the members and slots that decompiled code needs are declared (slots as plain members).
#pragma once

#include "Vector.h"

class CAI_BaseHumanoid
{
public:
	char pad0[0xfec];
	int m_state0fec;
	char pad1[0x5f50 - 0xff0];
	Vector m_vec5f50;	// 0x5f50
	char pad2[0x5f94 - 0x5f5c];
	int m_unk5f94;
	int m_pad5f98;
	const char *m_pSceneName;	// 0x5f9c
	unsigned int m_hScene;	// 0x5fa0

	bool vfunc586();
	float vfunc516();
	const char *vfunc589(int type);	// returns the string registered for the given kind (1, 2, 3, 5/7 at +0x5fa8/+0x5fb0/+0x5fac/+0x5fb4), or the override string at +0x5fa4 when set (and the kind is not 7); null when unset
	void vfunc193(int *pOut);	// copies the vector at +0x5f50 to pOut, after sub_10010be5()
	void sub_10010be5();
	CAI_BaseHumanoid *vfunc5(unsigned int flags);	// scalar deleting destructor: purges the three vectors at +0x6038, +0x6024 and +0x5f88 (grow size at +8, size at +0xc, element pointer at +0x10 of each), runs the base destructor body (stub 0x1000aa51) and, with bit 0 of flags, deletes this
	void sub_1000aa51();	// base destructor body, called directly
	void vfunc277(const float *v);	// slot 277: clears bit 0 of the int at +0x5f4c, then tail-calls CBaseFlex::sub_100b5b00(v)
	void sub_10260670(const char *pszName);	// sets the scene name at +0x5f9c: clears it for an empty name, else (unless it is already the current name) starts the scene through sub_10084b40 (handle into +0x5fa0) and stores the name when the handle resolves
};
