// CCycleCount.h: the SDK's CCycleCount and CFastTimer (tier0/fasttimer.h) as the initializer units see them. The
// sources that time code define their own copies with the rdtsc samplers, so the whole file is guarded.
#pragma once
#ifdef PCD_INITIALIZERS
class CCycleCount
{
public:
	CCycleCount() { m_Int64 = 0; }
	unsigned __int64 m_Int64;
};

class CFastTimer
{
public:
	CCycleCount m_Duration;
};
#endif
