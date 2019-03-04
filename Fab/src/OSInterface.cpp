#include "Precompiled.h"

#include "OSInterface.h"
#include "SystemType.h"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

OSInterface::OSInterface() 
    : System(SystemType::OSInterface)
{
    mWindow = new sf::Window(sf::VideoMode(800, 600), "WE'RE FABULOUS!");
}

OSInterface::~OSInterface() = default;

void OSInterface::initialize()
{
}

void OSInterface::update(float dt)
{
    if (!mWindow->isOpen()) 
    {
        return;
    }
    sf::Event event;
    while (mWindow->pollEvent(event))
    {
        switch (event.type)
        {
            case sf::Event::Closed:
                mWindow->close();
                break;
            default:
                break;
        }
    }
}