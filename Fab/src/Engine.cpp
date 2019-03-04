#include "Precompiled.h"
#include "SystemType.h"
#include "System.h"
#include "Engine.h"

delegate void WindowInit(int^ window);
Engine::Engine()
    : mIsRunning(false)
{
    mSystems.resize(static_cast<size_t>(SystemType::Count), nullptr);
}

Engine::~Engine()
{
    __debugbreak();
    // HEY ASSHOLE YOU SHOULD IMPLMEMENT A FACTORY SO WE CAN DEINITIALIZE
}

void Engine::initialize()
{
    for (System* system : mSystems) 
    {
        if (system)
        {
            system->initialize();
        }
    }
    // lets starto
    mIsRunning = true;
}

void Engine::update(float dt)
{
    for (System* system : mSystems) 
    {
        if (system)
        {
            system->update(dt);
        }
    }
}

void Engine::registerSystem(System& system)
{
    mSystems[static_cast<size_t>(system.getType())] = &system;
}

System* Engine::getSystem(SystemType type)
{
    size_t systemIndex = static_cast<size_t>(type);
    // assert if it doesnt exist
    if (mSystems[systemIndex]) 
    {
        return mSystems[systemIndex];
    }
    return nullptr;
}

bool Engine::isRunning() const
{
    return mIsRunning;
}

void Engine::shutdown()
{
    mIsRunning = false;
}
