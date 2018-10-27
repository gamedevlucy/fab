#include "pch.h"

#include "OSInterface.h"
#include "SystemType.h"

OSInterface::OSInterface() 
    : System(SystemType::OSInterface)
{

}

OSInterface::~OSInterface() = default;

void OSInterface::initialize()
{
}

void OSInterface::update(float dt)
{
}