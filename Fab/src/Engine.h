#pragma once

class System;
enum class SystemType : uint8_t;

class Engine
{
public:
    Engine();
    ~Engine();

    void initialize();
    void update(float dt);

    void registerSystem(System& system);
    System* getSystem(SystemType type);

    bool isRunning() const;
    void shutdown();

private:
    bool mIsRunning;
    std::vector<System*> mSystems;
};
