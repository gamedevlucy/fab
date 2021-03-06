#include "Precompiled.h"
#include "Engine.h"
#include "OSInterface.h"
#include "Graphics.h"

int main()
{
    Engine fabulousEngine;
    fabulousEngine.registerSystem(*(new OSInterface()));
    fabulousEngine.registerSystem(*(new Graphics()));
    fabulousEngine.initialize();
    while (fabulousEngine.isRunning())
    {
        fabulousEngine.update(1.0f / 60.0f);
    }
}
