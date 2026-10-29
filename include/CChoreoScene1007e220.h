// CChoreoScene1007e220: the object that owns the actors' bookkeeping lists (placeholder class name of the function at
// 0x1007e220; the real class is not known yet). Removing an actor first walks its channels.
#pragma once
#include "CChoreoScene1007e970.h"

class CChoreoScene1007e220
{
public:
	void sub_1007e220(CChoreoSceneActor1007e970 *pActor);	// unregisters every channel of the actor, then the actor itself
	void sub_1007e290(CChoreoSceneChannel1007e970 *pChannel);	// stub 0x100125a3 of 0x1007e290: unregisters one channel's events (here only called with a channel)
	void sub_1007e320(CChoreoSceneActor1007e970 *pActor);	// removes the actor from the list and deletes it (matched as List1007e320::sub_1007e320)
};
