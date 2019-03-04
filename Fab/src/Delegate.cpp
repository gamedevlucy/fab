#include "Precompiled.h"
#include "Delegate.h"

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

