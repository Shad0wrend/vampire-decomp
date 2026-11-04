// CGibShooter: gib shooter entity. Declared standalone: only the members the matched functions touch.
#pragma once

struct datamap_t;

class CGib;
class Vector;

class CGibShooter
{
public:
    char m_pad0000[0x17c];
    int m_nNextThink;    // 0x17c (raw bits of the float)
    char m_pad0180[0x450 - 0x180];
    int m_iGibs;	// 0x0450
    int m_iGibCapacity;	// 0x0454
    int m_iGibMaterial;	// 0x0458
    int m_nGibModel45c;    // 0x45c: the model index of the gib model (engine slot 13, see vfunc104)
    float m_flGibVelocity;    // 0x460: the speed the gibs are shot with
    float m_flVariance;    // 0x464
    float m_flGibLife;    // 0x468: life time of a gib, +-5% random
    int m_nShootMode;    // 0x46c: 0 point gib (InitPointGib), 1 physics prop, 2 effect
    int m_nBodies;    // 0x470: number of gib bodies (the body list size from the model)

    void sub_100f4730(int a, int b, int c, int d);    // slot 173: SetThink(stub 0x1000913d), then the next think time = curtime
    void sub_1000913d();    // think function
    void sub_100ac4e0(void (CGibShooter::*pfn)(), int a, int b);    // SetThink
    CGibShooter *vfunc5(unsigned int flags);    // as in CLogicalEntity (transplant)
    void sub_1000cb8a();    // as in CLogicalEntity (transplant)
    void vfunc103();    // slot 103 (Spawn): slot 104, SetSolid(SOLID_NONE) scope trace, effects bit 6 (+0x19c), defaults for the variance (+0x474 = 0.001f) and the shoot velocity (+0x468 = 100.0f), copies +0x450 to +0x454, resolves +0x45c through engine slot 26 into +0x470, then CBaseEntity::sub_100b3b00()
    void vfunc104();    // slot 104: the gib model index into +0x45c: "models/germanygibs.mdl" when the global at 0x1070ba34 is 1, else "models/gibs/hgibs.mdl" (engine slot 13, not preloaded)
    void sub_100b3b00();    // CBaseEntity::sub_100b3b00 (stub 0x1001514a), called directly
    CGib *vfunc241();    // slot 241 "CGibShooter::CreateGib": with the violence_hgibs convar set to "no gibs" returns null, else creates a "gib" entity (warns when it is the wrong class), sets the gib model, +0x730 = 0xf7 and the body from the model's body list
    void sub_100f4b90();    // the think function (stub 0x1000913d): next think = curtime + m_flDelay; shoot direction = AngleVectors(slot219) then dir += right/forward/up * RandomFloat(-1,1) * m_flVariance (engine rand slot 1), VectorNormalize; by m_nShootMode: 0 vfunc241 + sub_100f49e0, 1 slot 242 physics gib (+ sub_100aaa40(1), sub_100b3b00, AddVelocity slot 41 of the object at +0x36c, 200/60 spin), 2 slot 9 + sub_1012b320 effect; then --m_iGibs, at 0 reset or SetThink(sub_101c0b10)
    void sub_100f49e0(CGib *pGib, const Vector &vecShootDir);    // "CGibShooter::InitPointGib": puts the gib at the shooter's origin, gives it the velocity vecShootDir * m_flGibVelocity and a random spin (x 100..200, y 100..300), a life time of 0.95..1.05 times m_flGibLife (the gib thinks at that time when sooner than its next think), then hands it to sub_101cf600
public:
    datamap_t * vfunc82();
    int vfunc242(int, int, int, int, int, int);
    float m_flDelay;	// 0x0474
};
