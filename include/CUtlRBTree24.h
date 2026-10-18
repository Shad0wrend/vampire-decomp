// CUtlRBTree24: Source's CUtlRBTree with 24-byte nodes (int-indexed, 16-byte links, 8-byte element).
#pragma once

class CUtlRBTree24
{
public:
	struct Links_t
	{
		int m_Left;
		int m_Right;
		int m_Parent;
		int m_Tag;
	};
	struct Node_t
	{
		Links_t m_Links;
		char m_Data[8];
	};

	void *m_unk0;
	Node_t *m_pElements;

	static int InvalidIndex() { return -1; }

	const Links_t &sub_10055520(int i) const;	// "CUtlRBTree::Links"
};
