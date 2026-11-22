// CUnknown101f39d0: a node of a name tree (name provisional): id at +0, name at +0x10, child nodes at +0x1c / +0x20.
#pragma once

class CUnknown101f39d0
{
public:
	int m_nId;	// 0x00
	char m_pad04[0x0c];
	const char *m_pszName;	// 0x10
	char m_pad14[0x08];
	int m_nChildren;	// 0x1c
	CUnknown101f39d0 **m_ppChildren;	// 0x20

	int sub_10154df0(const char *pszPath);	// FindByPath (recursive, stub 0x1000d7d3): the id of the node named by a backslash separated path below this node, -1 when none; works in global scratch buffers
};
