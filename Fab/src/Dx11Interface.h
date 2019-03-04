#pragma once
#include "GraphicsApiInterface.h"

#include <wrl/wrappers/corewrappers.h>
#include <wrl/client.h>
#include <d3d11.h>
#include <d3d11_1.h>
#include <d3d11_2.h>
#include <d3d11_3.h>
#include <d3d11_4.h>
class Dx11Interface : public GraphicsApiInterface
{
public:
  Dx11Interface();
  virtual ~Dx11Interface();


  void initializeWindow(sf::Window& window) override;
  void initializeGraphics() override;
private:
  sf::Window* mWindow;


  Microsoft::WRL::ComPtr<ID3D11Device4> mDevice;
  Microsoft::WRL::ComPtr<ID3D11DeviceContext4> mDeviceContext;

  Microsoft::WRL::ComPtr<IDXGISwapChain> mSwapChain;

};
