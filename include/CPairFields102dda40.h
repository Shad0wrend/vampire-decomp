// CPairFields102dda40: the AI network link (a CAI_Link: a dynamic link handle, two node ids, the move types each hull accepts,
// the link flags and the stale time). sub_102dda40 is DestNodeID.
#pragma once

#include "ehandle.h"

struct CPairFields102dda40
{
	EHANDLE m_hDynamicLink;	// 0x00
	int m_iSrcID;	// 0x04
	int m_iDestID;	// 0x08
	int m_iAcceptedMoveTypes[22];	// 0x0c: per hull type
	unsigned int m_LinkInfo;	// 0x64: bit 0 stale, bit 12 off
	float m_timeStale;	// 0x68

	int sub_102dda40(int startID);	// "CAI_Link::DestNodeID": the other end of the link
};
