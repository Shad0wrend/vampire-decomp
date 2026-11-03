#pragma once

// CPhysicsHook : CBaseGameSystem (IGameSystem), vtable 0x1044916c
class CPhysicsHook {
public:
    bool vfunc0(); // Init: scope trace, asks the factory for VPhysics030 / VPhysicsCollision007 / VPhysicsSurfaceProps001 and loads scripts/surfaceproperties.txt into the surface props
    void vfunc2(); // LevelInitPreEntity: scope trace, creates the physics environment (global 0x10723940) from the physics factory (global 0x10723934) and sets its simulation parameters, gravity, collision/solver hooks; allocates the object list at 0x106b89bc and sets +0x18
    void vfunc3(); // LevelInitPostEntity
    void vfunc4(); // LevelShutdownPreEntity
    void vfunc5(); // LevelShutdownPostEntity: scope trace, when the physics environment (global 0x10723940) exists tears it down and clears +0x10
    void vfunc7(); // FrameUpdatePostEntityThink
    CPhysicsHook *vfunc8(unsigned int flags); // scalar deleting destructor: the CUtlVector at +4, then CBaseGameSystem's destructor
    void sub_1000cfbd(); // CBaseGameSystem::~CBaseGameSystem (stub), called directly

    void *m_vtbl;    // 0x00
    char m_04[4];    // 0x04: passed by address to sub_1000a8cb
    char m_08[0x10]; // 0x08
    char m_18;       // 0x18
};
