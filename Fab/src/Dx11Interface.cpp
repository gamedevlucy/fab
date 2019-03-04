#include "Precompiled.h"
#include "Dx11Interface.h"


#include "SFML/System.hpp"
#include "SFML/Window.hpp"


Dx11Interface::Dx11Interface()
{

}

Dx11Interface::~Dx11Interface()
{

}

void Dx11Interface::initializeWindow(sf::Window& window)
{
  mWindow = &window;
  // probably do more things here
}

void Dx11Interface::initializeGraphics()
{
  Microsoft::WRL::ComPtr<ID3D11Device> device;
  Microsoft::WRL::ComPtr<ID3D11DeviceContext> deviceContext;
  HRESULT errorResult = 0;

  DXGI_SWAP_CHAIN_DESC swapChainDescription;
  ZeroMemory( &swapChainDescription, sizeof( swapChainDescription ) );
  swapChainDescription.BufferCount = 1;
  swapChainDescription.BufferDesc.Width = 640;
  swapChainDescription.BufferDesc.Height = 480;
  swapChainDescription.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
  swapChainDescription.BufferDesc.RefreshRate.Numerator = 60;
  swapChainDescription.BufferDesc.RefreshRate.Denominator = 1;
  swapChainDescription.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
  swapChainDescription.OutputWindow = mWindow->getSystemHandle();
  swapChainDescription.SampleDesc.Count = 1;
  swapChainDescription.SampleDesc.Quality = 0;
  swapChainDescription.Windowed = TRUE;

  D3D_FEATURE_LEVEL  FeatureLevelsRequested = D3D_FEATURE_LEVEL_11_1;
  unsigned           numLevelsRequested = 1;
  D3D_FEATURE_LEVEL  FeatureLevelsSupported;


  DWORD createDeviceFlags = 0;
  #ifdef _DEBUG
      createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
  #endif

  errorResult = D3D11CreateDeviceAndSwapChain( 
    nullptr, 
    D3D_DRIVER_TYPE_HARDWARE, 
    nullptr, 
    createDeviceFlags,
    &FeatureLevelsRequested, 
    numLevelsRequested, 
    D3D11_SDK_VERSION, 
    &swapChainDescription, 
    &mSwapChain, 
    &device, 
    &FeatureLevelsSupported,
    &deviceContext 
  );

  if (SUCCEEDED(device.As(&mDevice)))
  {
    deviceContext.As(&mDeviceContext);
  }

}

