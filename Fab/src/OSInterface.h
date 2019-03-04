#pragma once
#include "SystemType.h"
#include "System.h"
namespace sf {
    class Window;
}

class OSInterface : public System 
{
public:
    OSInterface();
    virtual ~OSInterface();

    virtual void initialize() override;
    virtual void update(float dt) override;

private:
    sf::Window* mWindow;
};

