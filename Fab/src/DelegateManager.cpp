#include "Precompiled.h"
#include "Component.h"

Component::Component()
    : mType(ComponentType::Count)
{
}

Component::Component(ComponentType type)
    : mType(type)
{

}

Component::~Component() = default;

ComponentType Component::getType() const
{
    return mType;
}

