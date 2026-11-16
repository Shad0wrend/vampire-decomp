// IPredictionSystem: the prediction system interface (RTTI .?AVIPredictionSystem@@, vtable 0x1044db7c, 1 slot).
// Its only slot is the virtual destructor (scalar deleting destructor).
#pragma once

#ifdef PCD_INITIALIZERS
class IPredictionSystem;
extern IPredictionSystem *g_10939fdc;	// g_pPredictionSystems
#endif

class IPredictionSystem
{
public:
	virtual ~IPredictionSystem() {}	// slot 0, scalar deleting destructor
#ifdef PCD_INITIALIZERS	// the initializer units: the SDK constructor and fields (game_shared/igamesystem.h's
				// prediction systems), the globals that construct one link themselves in
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
	void *m_pSuppressHost;	// 0x0c
	int m_nStatusPushed;	// 0x10
#endif
};
