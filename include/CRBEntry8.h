// CRBEntry8: the 8-byte element of the CUtlRBTree<CRBEntry8, int> instance whose sentinel is at 0x106bddc4 (guard
// 0x109f0b1d), the tree CBaseCombatCharacter::UpdateAuspex fills with the entity pointers it highlights; real name
// not yet known (two dwords: an entity pointer and a second pointer).
#pragma once

struct CRBEntry8
{
	void *m_pFirst;
	void *m_pSecond;
};
