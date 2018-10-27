#pragma once
#include "ComponentType.h"

class Component 
{
public:
    Component();
    Component(ComponentType type);
    virtual ~Component();

    // todo figure out how to make this
    // data driven
    virtual void initialize() = 0;
    virtual void update(float dt) = 0;

    virtual ComponentType getType() const final;
private:
    ComponentType _type;
};
