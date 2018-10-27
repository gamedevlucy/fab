#pragma once
#include "SystemType.h"
#include "System.h"

class OSInterface : public System 
{
public:
    OSInterface();
    virtual ~OSInterface();

    virtual void initialize() override;
    virtual void update(float dt) override;

private:
};

//