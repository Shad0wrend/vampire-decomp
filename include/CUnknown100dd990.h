// CUnknown100dd990: object with a type byte at +0x1c and two pairs of vectors (+0x24/+0x30 and +0x4c/+0x58),
// set from the same two input vectors for type 3; called by CBatSwarm::vfunc103 and CRagdollProp::vfunc226.
// Real name not yet known.
#pragma once

struct CUnknown100dd990Vec
{
	float x, y, z;

	CUnknown100dd990Vec &operator=(const CUnknown100dd990Vec &o)
	{
		x = o.x;
		y = o.y;
		z = o.z;
		return *this;
	}
};

class CUnknown100dd990
{
public:
	char m_pad00[0x1c];
	char m_type;	// 0x1c
	char m_pad1d[0x24 - 0x1d];
	CUnknown100dd990Vec m_v24;	// 0x24
	CUnknown100dd990Vec m_v30;	// 0x30
	char m_pad3c[0x4c - 0x3c];
	CUnknown100dd990Vec m_v4c;	// 0x4c
	CUnknown100dd990Vec m_v58;	// 0x58

	void sub_100dd990(int type, const CUnknown100dd990Vec *pA, const CUnknown100dd990Vec *pB);	// stores the type; for type 3 copies both vectors twice, else sub_100dda20()
	void sub_100dda20();
};
