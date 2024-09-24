#include "pch.h"
#include "Windows.Xbox.Input.Controller.h"
#include "Windows.Xbox.Input.Controller.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IController> Controller::Controllers()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Controller::ControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerAddedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Controller::ControllerAdded(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Controller::ControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerRemovedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Controller::ControllerRemoved(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Controller::ControllerPairingChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerPairingChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Controller::ControllerPairingChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Controller::ControllerOrderChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::ControllerOrderChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Controller::ControllerOrderChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::IController Controller::GetControllerById(uint64_t controllerId)
    {
        throw hresult_not_implemented();
    }
    void Controller::GetControllerMetadata(uint64_t controllerId, winrt::Windows::Xbox::Input::MetadataVersion const& metadataVersion, com_array<uint8_t>& ppMetadata)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IController> Controller::GetControllersOrderedLeftToRight(winrt::Windows::Xbox::Input::ControllerOrderFilter const& orderFilter)
    {
        throw hresult_not_implemented();
    }
    uint64_t Controller::Id()
    {
        throw hresult_not_implemented();
    }
    hstring Controller::Type()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User Controller::User()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::IAudioDeviceInfo> Controller::AudioDevices()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::GameControllerVersionInfo Controller::FirmwareVersionInfo()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::GameControllerVersionInfo Controller::HardwareVersionInfo()
    {
        throw hresult_not_implemented();
    }
    uint16_t Controller::HardwareProductId()
    {
        throw hresult_not_implemented();
    }
    uint16_t Controller::HardwareVendorId()
    {
        throw hresult_not_implemented();
    }
}