// SDbgSink.h: the 0x14 byte object the global 0x109203f0 points at, made with new at load time by the constructor
// 0x102e06f0; the sources that use it define their own copies, so the initializer units alone see this one.
#pragma once
#ifdef PCD_INITIALIZERS
struct SDbgSink
{
	SDbgSink();	// function 0x102e06f0
	char m_pad0000[0x14];
};
#endif
