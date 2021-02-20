#include "OpenGLGraphicsObject.h"

OpenGLGraphicsObject::~OpenGLGraphicsObject()
{
    glDeleteVertexArrays(1, &_vaoId);
    if (_objectData != nullptr) {
        delete[] _objectData;
    }
}

void OpenGLGraphicsObject::SendToGPU()
{
}

void OpenGLGraphicsObject::Render()
{
}