// IClientNetworkable: client.dll's IClientNetworkable as the game's vtables show it (client entity layer, 2026-11-22); slot numbers are the game's
// Names are Source 2003/2004's where the game's code in that slot does what Source's function does; vfuncN
// (primary chain) and <Stem>_vfuncN (a secondary interface: a plain vfuncN would merge with another
// interface's slot N in a class deriving from both): name unknown. Evidence: G:/decomp/projects/
// vtmb-client-experiments/2026-11-22-client-entity-layer/slotmap.py
#pragma once

class IClientUnknown;
class ClientClass;
class bf_read;

class IClientNetworkable
{
public:
	virtual IClientUnknown *GetIClientUnknown() = 0;	// slot 0: C_BaseTempEntity: this-4; C_BaseEntity: a thunk to the renderable one
	virtual void Release() = 0;	// slot 1: C_BaseTempEntity: empty
	virtual ClientClass *GetClientClass() = 0;	// slot 2: the class's static ClientClass
	virtual void NotifyShouldTransmit(int state) = 0;	// slot 3: ShouldTransmitState_t in Source; ret 4
	virtual void OnPreDataChanged(int updateType) = 0;	// slot 4: DataUpdateType_t in Source; ret 4
	virtual void OnDataChanged(int updateType) = 0;	// slot 5: ret 4
	virtual void PreDataUpdate(int updateType) = 0;	// slot 6: ret 4
	virtual void PostDataUpdate(int updateType) = 0;	// slot 7: ret 4
	virtual bool IsDormant() = 0;	// slot 8: C_BaseTempEntity: false
	virtual int entindex() = 0;	// slot 9: C_BaseEntity: mov eax,[ecx+0x3c] (the index at +0x44)
	virtual void ReceiveMessage(int classID, bf_read &msg) = 0;	// slot 10: ret 8: Source 2004's form
	virtual void *GetDataTableBasePtr() = 0;	// slot 11: C_BaseTempEntity: this-4
};
