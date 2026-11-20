// CGameText: declared by pcdecomp transplant for 0x10216e00 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"
#include "string_t.h"

struct datamap_t;

class CGameText : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CGameText::KeyValue": color and color2 are parsed as four integers and stored as bytes at +0x460 / +0x464, anything else goes to CBaseEntity::vfunc110
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
public:
	datamap_t * vfunc82();
	void vfunc173(CBaseEntity *p0, CBaseEntity *p1, int p2, int p3);
	string_t m_iszMessage;	// 0x0450
	struct TextParms_t
	{
		float x, y;
		int effect;
		unsigned char r1, g1, b1, a1;
		unsigned char r2, g2, b2, a2;
		float fadeinTime, fadeoutTime, holdTime, fxTime;
		int channel;
	} m_textParms;	// 0x0454
};
