#if !defined(GLWS_EGL_UDRIVER_HPP)
#define GLWS_EGL_UDRIVER_HPP

#include "retracer/glws_egl.hpp"

namespace retracer {
class GlwsEglUdriver : public GlwsEgl
{
public:
    GlwsEglUdriver();
    ~GlwsEglUdriver();
    virtual void processStepEvent();
    virtual Drawable* CreateDrawable(int width, int height, int win, EGLint const* attribList);
};

}

#endif // !defined(GLWS_EGL_UDRIVER_HPP)
