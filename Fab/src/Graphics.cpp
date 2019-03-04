#include "Precompiled.h"
#include "Graphics.h"

#include "Dx11Interface.h"

Graphics::Graphics()
  : System(SystemType::Graphics)
  , mApiInterface(new Dx11Interface())
{

}

Graphics::~Graphics()
{

}

void Graphics::initialize()
{

}

void Graphics::update(float dt)
{

}