// CUnknown101dd910: projectile description of a discipline (name provisional): speed, model, particle, dies-on-hit flag.
#pragma once

class IKVNodeView;

class CUnknown101dd910
{
public:
	int m_nSpeed;	// 0x00
	const char *m_pszModel;	// 0x04
	const char *m_pszParticle;	// 0x08
	char m_bParticleDiesOnHit;	// 0x0c
	char m_bSyncs;	// 0x0d
	char m_pad000e[2];

	void sub_101dd620(void *pSource, void *pTarget, int nMask, int nRange, int nExtra);	// fires the projectile at the target (ret 0x14, stub 0x10002068)
	char sub_101dd4f0();	// stub 0x100047ff: whether the projectile description is in use
	void sub_101dd910();	// prints the description with Msg ("[Projectile]:", speed, model, particle, "ParticleDiesOnHit: True"); nothing when sub_101dd4f0() is false
	void sub_101dd480();	// the constructor body (stub 0x10008ec7)
	char sub_101dd510(IKVNodeView *pKV);	// loads the description from the "Projectile" child of the node (Speed, Model, Particle, ParticleDiesOnHit, "Syncs" flag at +0xd, the SoundFX list at +0x10 and the interrupt effects at +0x20) and precaches the model; false for a null node
};
