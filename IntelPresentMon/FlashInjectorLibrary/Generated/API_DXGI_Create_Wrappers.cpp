
// This file is auto generated by Scripts/generate_code.py

#include "../Context.h"
#include "API_DXGI_Create_Wrappers.h"

namespace GfxLayer
{
    /* GENRATED FROM THE DXGI HEADER */


    void WrapIDXGIObject(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIObject_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIObject_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIObject_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIDeviceSubObject(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIDeviceSubObject_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIDeviceSubObject_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIDeviceSubObject_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIKeyedMutex(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIKeyedMutex_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIKeyedMutex_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIKeyedMutex_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIDisplayControl(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIDisplayControl_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIDisplayControl_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIDisplayControl_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIOutputDuplication(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIOutputDuplication_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIOutputDuplication_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIOutputDuplication_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGISurface(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGISurface2_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGISurface_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGISurface2_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIResource(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIResource1_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIResource_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIResource1_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIDecodeSwapChain(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIDecodeSwapChain_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIDecodeSwapChain_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIDecodeSwapChain_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIFactoryMedia(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIFactoryMedia_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIFactoryMedia_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIFactoryMedia_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGISwapChainMedia(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGISwapChainMedia_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGISwapChainMedia_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGISwapChainMedia_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGISwapChain(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGISwapChain4_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGISwapChain_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGISwapChain4_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIDevice(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIDevice4_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIDevice_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIDevice4_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIAdapter(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIAdapter4_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIAdapter_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIAdapter4_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIOutput(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIOutput6_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIOutput_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIOutput6_Wrapper(riid, *ppObjectToWrap);
    }

    void WrapIDXGIFactory(REFIID riid, void** ppObject)
    {
        auto&  ctx = Context::GetInstance();
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        auto*  pUnknownWrapper = ctx.FindWrapper(*ppObjectToWrap);
        if (!pUnknownWrapper)
        {
            pUnknownWrapper = new IDXGIFactory7_Wrapper(riid, *ppObjectToWrap);
            ctx.AddWrapper(pUnknownWrapper);
        }
        (*ppObject) = pUnknownWrapper;
    }

    void WrapIDXGIFactory_NoStore(REFIID riid, void** ppObject)
    {
        auto** ppObjectToWrap = reinterpret_cast<IUnknown**>(ppObject);
        (*ppObject) = new IDXGIFactory7_Wrapper(riid, *ppObjectToWrap);
    }


} // GfxLayer
