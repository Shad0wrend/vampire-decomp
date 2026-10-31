// CUnknown102d0270: a second list of spheres (same record as CUnknown102d01e0's) with a point-inside test; real name not yet known.
#pragma once

#include "CUnknown102d01e0.h"

class CUnknown102d0270
{
public:
	char m_pad0000[0x20];
	CUnknown102d01e0_Sphere *m_pSpheres;	// 0x20
	char m_pad0024[0x2c - 0x24];
	int m_nSpheres;	// 0x2c

	bool sub_102d0270(const float *pPoint);	// whether pPoint lies strictly inside one of the spheres
};
