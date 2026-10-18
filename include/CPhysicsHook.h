#pragma once

// CPhysicsHook : CBaseGameSystem (IGameSystem), vtable 0x1044916c
class CPhysicsHook {
public:
    void vfunc3(); // LevelInitPostEntity
    void vfunc4(); // LevelShutdownPreEntity
    void vfunc7(); // FrameUpdatePostEntityThink

    void *m_vtbl;    // 0x00
    char m_04[4];    // 0x04: passed by address to sub_1000a8cb
    char m_08[0x10]; // 0x08
    char m_18;       // 0x18
};
