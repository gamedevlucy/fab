#pragma once

namespace sf
{
  class Window;
}

class GraphicsApiInterface
{
public:
  GraphicsApiInterface();
  virtual ~GraphicsApiInterface();

  virtual void initializeWindow(sf::Window& window) = 0;
  virtual void initializeGraphics() = 0;
private:
  GraphicsApiInterface(const GraphicsApiInterface& rhs) = delete;
  GraphicsApiInterface& operator=(const GraphicsApiInterface& rhs) = delete;
};
