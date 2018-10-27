#include "pch.h"
#include "Engine.h"

int main()
{
    Engine fabulousEngine;
    fabulousEngine.initialize();
    while (fabulousEngine.isRunning()) 
    {
        fabulousEngine.update(1.0f / 60.0f);
    }
}
