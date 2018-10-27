#include "pch.h"
#include "SystemType.h"
#include "System.h"
#include "Engine.h"

Engine::Engine()
    : _running(false)
{
    _systems.resize(static_cast<size_t>(SystemType::Count), nullptr);
}

Engine::~Engine()
{
    __debugbreak();
    // HEY ASSHOLE YOU SHOULD IMPLMEMENT A FACTORY SO WE CAN DEINITIALIZE
}

void Engine::initialize()
{
    for (System* system : _systems) 
    {
        if (system)
        {
            system->initialize();
        }
    }
    // lets starto
    _running = true;
}

void Engine::update(float dt)
{
    for (System* system : _systems) 
    {
        if (system)
        {
            system->update(dt);
        }
    }
}

void Engine::registerSystem(System& system)
{
    _systems[static_cast<size_t>(system.getType())] = &system;
}

System* Engine::getSystem(SystemType type)
{
    size_t systemIndex = static_cast<size_t>(type);
    // assert if it doesnt exist
    if (_systems[systemIndex]) 
    {
        return _systems[systemIndex];
    }
    return nullptr;
}

bool Engine::isRunning() const
{
    return _running;
}

void Engine::shutdown()
{
    _running = false;
}
