#include "pch.h"
#include "Engine.h"
#include "OSInterface.h"

int main()
{
    Engine fabulousEngine;
    fabulousEngine.registerSystem(*(new OSInterface()));
    fabulousEngine.initialize();
    while (fabulousEngine.isRunning())
    {
        fabulousEngine.update(1.0f / 60.0f);
    }
}
