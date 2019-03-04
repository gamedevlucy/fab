#include "Precompiled.h"
#include "GameObject.h"
#include "ComponentType.h"

#include "Component.h"
GameObject::GameObject() = default;

GameObject::~GameObject()
{

}

void GameObject::registerComponent(Component& component)
{
    _components.push_back(&component);
}

Component* GameObject::getComponent(ComponentType type)
{
    for (Component* component : _components)
    {
        if (component->getType() == type)
        {
            return component;
        }
    }
    return nullptr;
}

void GameObject::removeComponent(ComponentType type)
{
    for (size_t i = 0; i < _components.size(); ++i)
    {
        if (_components[i]->getType() == type)
        {
            //TODO use the factory stuff idk fam
            _components[i] = nullptr;
        }
    }
}
