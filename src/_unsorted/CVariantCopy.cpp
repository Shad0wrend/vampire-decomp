// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1002ca10 size=0x41
#include "CVariantCopy.h"

struct V3Raw { float x, y, z; };

CVariantCopy::CVariantCopy(const CVariantCopy &other)
{
	rgba[0] = other.rgba[0];
	m_value = other.m_value;
	flVal = other.flVal;
	iszVal = other.iszVal;
	*(V3Raw *)vecVal = *(const V3Raw *)other.vecVal;
	m_value = other.m_value;
	m_hEntity = other.m_hEntity;
	m_fieldType = other.m_fieldType;
}
// END FUNCTION
