#pragma once

class Delegate;
class DelegateManager 
{
public:
    DelegateManager();
    ~DelegateManager();

    void registerDelegate(Delegate& delegate);

    // todo figure out how to make this
    // data driven
    virtual void initialize() = 0;
    virtual void update(float dt) = 0;

    virtual ComponentType getType() const final;
private:
    ComponentType mType;
};
