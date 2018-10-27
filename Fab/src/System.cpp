#include "pch.h"

#include "System.h"
#include "SystemType.h"

System::System(SystemType type) 
    : _type(type)
{

}

System::~System() = default;

SystemType System::getType() const
{
    return _type;
}