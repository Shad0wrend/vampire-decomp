// CUnknown102d01e0: a list of spheres (centre and radius, 16 bytes each) with a point-inside test; real name not yet known.
#pragma once

struct CUnknown102d01e0_Sphere
{
	float x, y, z;
	float radius;
};

class CUnknown102d01e0
{
public:
	char m_pad0000[0xc];
	CUnknown102d01e0_Sphere *m_pSpheres;	// 0x0c
	char m_pad0010[0x18 - 0x10];
	int m_nSpheres;	// 0x18

	bool sub_102d01e0(const float *pPoint);	// whether pPoint lies strictly inside one of the spheres
};
