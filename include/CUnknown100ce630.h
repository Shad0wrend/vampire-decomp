// CUnknown100ce630: owner of a singly linked, time-ordered list of pending items (head at +0x38, the item being
// rescheduled at +0x54); items carry their due time at +0 and the next item at +0x38. Real name not yet known.
#pragma once

struct CUnknown100ce630Item
{
	float m_time;	// 0x00
	char m_pad04[0x34];
	CUnknown100ce630Item *m_pNext;	// 0x38
};

class CUnknown100ce630
{
public:
	char m_pad00[0x38];
	CUnknown100ce630Item *m_pHead;	// 0x38
	char m_pad3c[0x54 - 0x3c];
	CUnknown100ce630Item *m_pCurrent;	// 0x54

	bool sub_100ce630(float delay);	// unlinks the current item from the list, due again at curtime + delay, and re-inserts it
	void sub_100ce210(CUnknown100ce630Item *pItem);	// inserts an item into the list
};
