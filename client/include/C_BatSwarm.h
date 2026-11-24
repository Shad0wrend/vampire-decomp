// C_BatSwarm: hand-written minimal header (members read by matched functions only)
#pragma once
#include "C_BaseAnimating.h"

struct Vector3;
class C_BatSwarm : public C_BaseAnimating
{
public:
	void sub_1002aa30();
	virtual void vfunc38(Vector3 *a, Vector3 *b);
	char m_pad0014[0xdbc - 0x14];
	int m_dbc[3];
	int m_dc8[3];
};
