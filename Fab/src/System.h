#pragma once
#include "SystemType.h"

class System 
{
public:
    System(SystemType type);
    virtual ~System();

    virtual void initialize() = 0;
    virtual void update(float dt) = 0;

    virtual SystemType getType() const final;
private:
    SystemType _type;
};

//