#pragma once
// The 0x5f318-byte record that 0x1025afe0 copies with its compiler-generated operator= (0x1025b930).
// The member operator= of the part types are how VC6 copies them (block copies; B4's dead if (0) lines
// keep the numbering of the generated CValRecord::operator= as the game has it).
struct CValRec_B1r { int d[0x424f]; };
struct CValRec_B1 { int d[0x424f]; CValRec_B1 &operator=(const CValRec_B1 &o) { *(CValRec_B1r *)this = *(const CValRec_B1r *)&o; return *this; } };
struct CValRec_B2r { int d[0x39e9]; };
struct CValRec_B2 { int d[0x39e9]; CValRec_B2 &operator=(const CValRec_B2 &o) { *(CValRec_B2r *)this = *(const CValRec_B2r *)&o; return *this; } };
struct CValRec_B3r { int d[0x29]; };
struct CValRec_B3 { int d[0x29]; CValRec_B3 &operator=(const CValRec_B3 &o) { *(CValRec_B3r *)this = *(const CValRec_B3r *)&o; return *this; } };
struct CValRec_B4r { int d[0x11]; };
struct CValRec_B4 { int d[0x11]; CValRec_B4 &operator=(const CValRec_B4 &o) { if (0) { int q = o.d[1]; d[1] = q; } if (0) { int q = o.d[1]; d[1] = q; } *(CValRec_B4r *)this = *(const CValRec_B4r *)&o; return *this; } };
struct CValRec_B5r { int d[0x22]; };
struct CValRec_B5 { int d[0x22]; CValRec_B5 &operator=(const CValRec_B5 &o) { *(CValRec_B5r *)this = *(const CValRec_B5r *)&o; return *this; } };
struct CValRec_Sub {
    int a0; char s4[0x80]; char s84[0x80]; int m104; int m108; int m10c; int m110; int m114; char s118[0x80]; CValRec_B4 b198; char s1dc[0x80];
    int m25c; int m260; int m264; int m268; int m26c; int m270; CValRec_B5 b274[2]; int m384; int m388; int m38c; int m390; int m394; int m398; int m39c; int m3a0; int m3a4; int m3a8; int m3ac; int m3b0; int m3b4; int m3b8; int m3bc; int m3c0; int m3c4; int m3c8; int m3cc; int m3d0; int m3d4; int m3d8; int m3dc; int m3e0; int m3e4; int m3e8; int m3ec; int m3f0; int m3f4; int m3f8; int m3fc; int m400; int m404; int m408; int m40c; char s410[0x80]; CValRec_B2 b490; int t1[10]; int t2[10];
};
struct CValRecord {
    char c0; int i4; char s8[0x80]; char s88[0x80]; char s108[0x2000]; char s2108[0x40]; char s2148[0x40];
    char s2188[0x80]; char s2208[0x80]; char s2288[0x80]; char s2308[0x80]; char s2388[0x80]; char s2408[0x10];
    char c2418; int n241c; int n2420; int n2424; int n2428; int n242c; int n2430; int n2434; int n2438; int n243c; int n2440; int n2444; int n2448; int n244c; char s2450[0x80]; int i24d0; char s24d4[0x80]; int n2554; int n2558; int n255c; char s2560[0x80];
    int i25e0; char s25e4[0x80]; int i2664; CValRec_B1 b2668[2]; CValRec_Sub sub[3];
    int i4fe6c; int i4fe70[5]; int n4fe84; int n4fe88; int n4fe8c; int n4fe90; int n4fe94; int n4fe98; int n4fe9c; int n4fea0; int n4fea4; int n4fea8; int n4feac; int n4feb0; int n4feb4; int n4feb8; int n4febc; int n4fec0; int n4fec4; int n4fec8; int n4fecc; int n4fed0; int n4fed4; int n4fed8; int n4fedc; int n4fee0; int n4fee4; int n4fee8; int n4feec; char s4fef0[0x80]; char s4ff70[0x80]; char s4fff0[0x80];
    char s50070[0x80]; char s500f0[0x80]; char s50170[0x80]; char s501f0[0x80]; char s50270[0x80]; char s502f0[0x80];
    int i50370; char c50374; CValRec_B2 b50378; int i5eb1c; CValRec_B3 b5eb20; int n5ebc4; int n5ebc8; int n5ebcc; int n5ebd0; int n5ebd4; int n5ebd8; int n5ebdc; int n5ebe0; int n5ebe4; int n5ebe8; int n5ebec; char s5ebf0[0x500];
    char s5f0f0[0x80]; char s5f170[0x80]; char s5f1f0[0x80]; char s5f270[0x80];
    int i5f2f0; int i5f2f4[4]; int i5f304[4]; char c5f314;
};
