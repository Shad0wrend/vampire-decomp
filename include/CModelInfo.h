// CModelInfo: the engine's model-manager interface pointed to by g_1070b250 (next to the sound / random / trace
// interfaces). Slot 2 is GetModel(modelindex) (a model_t*), slot 20 is GetStudiomodel(model): the StudioHdr*.
// The type and pointer live in a namespace so sources that declare their own `extern X *g_1070b250;` keep compiling
// (the judge resolves both to one address), as engineiface.h / engineserver.h do.
#pragma once

struct StudioHdr;

namespace EngineGlobals {
class CModelInfo
{
public:
	virtual void vfunc0(); virtual void vfunc1();
	virtual void *vfunc2(int modelindex);	// GetModel: the model_t* of a model index
	virtual void vfunc3(); virtual void vfunc4(); virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7();
	virtual void vfunc8(); virtual void vfunc9(); virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12();
	virtual void vfunc13(); virtual void vfunc14(); virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17();
	virtual void vfunc18(); virtual void vfunc19();
	virtual StudioHdr *vfunc20(void *pModel);	// GetStudiomodel: the studio header of a model_t* (0 when none)
};
extern CModelInfo *g_1070b250;
}
