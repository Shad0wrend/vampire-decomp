// CUnknown1074e098: the global table object at 0x1074e098 (name provisional) that hands out 0x100+ byte discipline
// records by index (sub_10200370, stub 0x1000ffb0).
#pragma once

struct CUnknown1074e098Record
{
	char m_pad0000[0xfc];
	int m_nSlotOrder;	// 0xfc: requested sub slot order (0 = unset)
};

class CUnknown1074e098
{
public:
	CUnknown1074e098Record *sub_10200370(int index);
};
