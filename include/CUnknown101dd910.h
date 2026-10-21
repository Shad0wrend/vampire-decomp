// CUnknown101dd910: projectile description of a discipline (name provisional): speed, model, particle, dies-on-hit flag.
#pragma once

class CUnknown101dd910
{
public:
	int m_nSpeed;	// 0x00
	const char *m_pszModel;	// 0x04
	const char *m_pszParticle;	// 0x08
	char m_bParticleDiesOnHit;	// 0x0c

	char sub_101dd4f0();	// stub 0x100047ff: whether the projectile description is in use
	void sub_101dd910();	// prints the description with Msg ("[Projectile]:", speed, model, particle, "ParticleDiesOnHit: True"); nothing when sub_101dd4f0() is false
	void sub_101dd480();	// the constructor body (stub 0x10008ec7)
};
