#pragma once
#ifndef GRAPHICS_STRUCTURES
#define GRAPHICS_STRUCTURES

#include <glad\glad.h>

struct Vector3D {
    GLfloat x, y, z;
};

struct RGB {
    GLfloat red, green, blue;
};

struct RGBA : RGB {
    GLfloat alpha;
};

struct Vertex {
    Vector3D position;
    RGB color;
};

#endif
