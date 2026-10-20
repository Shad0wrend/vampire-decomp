// CUnknown100ce2b0: owner of a queued 0x50 byte event record (pointer at +0x54); class not known yet.
// Only what recovered code needs.
#pragma once

class CBaseEntity;

struct CUnknown100ce2b0Blob	// five dwords passed by value
{
	int a[5];
};

struct CUnknown100ce2b0Rec	// the 0x50 byte event record
{
	float m_flTime;	// 0x00: delay + curtime
	int m_n04;
	int m_n08;
	int m_n0c;	// -1 = none
	int m_n10;	// -1 = none
	int m_n14;
	int m_hSource;	// 0x18: handle of the source entity, -1 = none
	int m_n1c;
	CUnknown100ce2b0Blob m_Blob;	// 0x20 .. 0x33 (the dword at 0x2c is -1 in the constructor)
	int m_n34;
	int m_n38;
	int m_n3c;
	int m_Quad[4];	// 0x40 .. 0x4f

	CUnknown100ce2b0Rec()
	{
		m_n0c = -1;
		m_n10 = -1;
		m_hSource = -1;
		m_Blob.a[0] = 0;
		m_Blob.a[3] = -1;
		m_Blob.a[4] = 0;
	}
};

class CUnknown100ce2b0
{
public:
	char m_pad0000[0x54];
	CUnknown100ce2b0Rec *m_pRecord;	// 0x54

	void sub_100ce210(CUnknown100ce2b0Rec *pRec);	// queues the record (called through the stub at 0x1000f074)
	void sub_100ce2b0(CBaseEntity *pSource, CUnknown100ce2b0Blob blob, float flDelay, const int *pQuad, int n14);	// builds a record (time = curtime + flDelay, the source handle, blob, quad), queues it and remembers it at +0x54
};
