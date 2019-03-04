#pragma once

#include "System.h"

class GraphicsApiInterface;

class Graphics : public System
{
public:
  Graphics();
  virtual ~Graphics();

  virtual void initialize() override;
  virtual void update(float dt) override;
  
private:
  GraphicsApiInterface* mApiInterface;
};
