#pragma once

class Component;
enum class ComponentType : uint8_t;

class GameObject 
{
public:
    GameObject();
    ~GameObject();

    void registerComponent(Component& component);
    Component* getComponent(ComponentType type);
    void removeComponent(ComponentType type);

private:
    std::vector<Component*> _components;
};
