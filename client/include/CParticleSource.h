// CParticleSource: the particle-source part of a smoke emitter (hand-made, fields from 0x1004a8b0)
#pragma once
#include "Vector.h"
class CParticleMgr;
class CParticleSource
{
public:
	int m_unk00[14];
	Vector m_pos;
	float m_cr, m_cg, m_cb;
	float m_t;
	int m_idx;
	unsigned char m_r, m_g, m_b, m_pad;
	int m_unk5c;
	float m_f60;
	void sub_1004a8b0(CParticleMgr *);
};
