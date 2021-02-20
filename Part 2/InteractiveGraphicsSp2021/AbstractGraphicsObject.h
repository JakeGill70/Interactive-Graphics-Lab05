#pragma once
#ifndef ABSTRACT_GRAPHICS_OBJECT
#define ABSTRACT_GRAPHICS_OBJECT

class AbstractGraphicsObject
{
public:
	virtual ~AbstractGraphicsObject() {}
	virtual void SendToGPU() = 0;
	virtual void Render() = 0;
};

#endif
