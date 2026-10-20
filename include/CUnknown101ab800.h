// CUnknown101ab800: object with a flags word (slots 2/3), a value at +0xc, a cluster list (count at +0x18, ints from +0x1c)
// and values at +0x7c, +0x80, +0x84; real name not yet known.
#pragma once

class CUnknown101ab800
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2();	// the flags word
	virtual void vfunc3(int flags);	// sets the flags word

	char pad04[0x8];
	int m_nValue0c;
	char pad10[0x8];
	int m_nClusters;	// 0x18
	int m_Clusters[1];	// 0x1c, m_nClusters entries
	char pad20[0x7c - 0x20];
	int m_nValue7c;
	int m_nValue80;
	int m_nValue84;

	bool sub_101ab800(int a, const unsigned char *pvs, int unused);	// refreshes the cluster list when bit 16 of the flags is set, then tests whether the pvs bit vector (null = visible) has any of the clusters set
	bool sub_101ab8f0(int a, const unsigned char *pvs, int unused, int pos);	// as sub_101ab800, but first requires pos to be inside one of the two values at +0x80 / +0x84 (engine slot 105 on each); false otherwise
};
