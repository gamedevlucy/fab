#include "pch.h"
#include "Component.h"

Component::Component()
    : _type(ComponentType::Count)
{
}

Component::Component(ComponentType type)
    : _type(type)
{

}

Component::~Component() = default;

ComponentType Component::getType() const
{
    return _type;
}

