#pragma once
struct IMaterial;
class CParticleSphereRenderer {
public:
	char m_unk0[0x5c];
	bool m_bUsingPixelShaders;
	void sub_1004a860(IMaterial *pMaterial);
};
