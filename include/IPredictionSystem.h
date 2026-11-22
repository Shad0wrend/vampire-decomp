// IPredictionSystem: the prediction system interface (RTTI .?AVIPredictionSystem@@, vtable 0x1044db7c, 1 slot).
// Its only slot is the virtual destructor (scalar deleting destructor).
#pragma once

class CBaseEntity;
class IPredictionSystem;
extern IPredictionSystem *g_10939fdc;	// g_pPredictionSystems

// The SDK's class (game_shared/ipredictionsystem.h): the globals that construct one link themselves in.
class IPredictionSystem
{
public:
	virtual ~IPredictionSystem() {}	// slot 0, scalar deleting destructor
	IPredictionSystem()
	{
		m_pNextSystem = g_10939fdc;
		g_10939fdc = this;
		m_bSuppressEvent = false;
		m_pSuppressHost = 0;
		m_nStatusPushed = 0;
	}

	IPredictionSystem *m_pNextSystem;	// 0x04
	bool m_bSuppressEvent;	// 0x08
	CBaseEntity *m_pSuppressHost;	// 0x0c
	int m_nStatusPushed;	// 0x10: DisableFiltering() while above 0
};
