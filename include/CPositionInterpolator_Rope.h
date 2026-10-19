// CPositionInterpolator_Rope (RTTI .?AVCPositionInterpolator_Rope@@): rope position interpolator, base IPositionInterpolator.
#pragma once

class CPositionInterpolator_Rope
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual bool vfunc4(const char *pKey, const char *pValue);	// KeyValue: "Slack" (value - 100) and "Type" (0 -> 10, 1 -> 4, else 2)

	char m_pad0004[0x208];
	float m_flSlack;	// 0x20c
	bool m_bChanged;	// 0x210
	int m_nType;	// 0x214
};
