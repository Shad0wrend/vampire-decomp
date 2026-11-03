// PhysFrame (0x1002ea40): the physics frame step, a free __cdecl function (scope trace name "PhysFrame"), called
// by CPhysicsHook::vfunc7 with the frame time. It clamps the time to [0.1f, 1.0f], runs the physics environment at
// 0x10723940 (slot 26 +0x68 step with the time, slot 44 +0xb0 object count, slot 45 +0xb4 fill object array,
// each object slot 6 +0x18 -> entity, entity slot 226 +0x388), walks the active-entity list at 0x106b89bc (handle
// list, global 0x10566458, entity slot 229 +0x394), then averages the frame time in 0x106b85b8 and calls
// CCollisionEvent::sub_10030910 on 0x106b86d8.
#pragma once

void sub_1002ea40(float flFrameTime);
