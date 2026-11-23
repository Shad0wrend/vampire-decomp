#pragma once
class IPhysicsCollisionEvent { public: virtual void vfunc0()=0; virtual void vfunc1()=0; virtual void vfunc2()=0; virtual void vfunc3()=0; virtual void vfunc4()=0; virtual void vfunc5()=0; virtual void vfunc6()=0; virtual void vfunc7()=0; virtual void vfunc8()=0; virtual void vfunc9()=0; };
class IPhysicsCollisionSolver { public: virtual void s0()=0; virtual void s1()=0; virtual void s2()=0; virtual void s3()=0; virtual void s4()=0; };
class CCollisionEvent : public IPhysicsCollisionEvent, public IPhysicsCollisionSolver {
public:
 CCollisionEvent();
 virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
 virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4();
 int m_a,m_b,m_c,m_d,m_e,m_f,m_g,m_h,m_i,m_j;
};
