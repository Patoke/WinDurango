#pragma once
#include "Windows.Xbox.Input.BodyController.g.h"

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


namespace winrt::Windows::Xbox::Input::implementation
{
    struct BodyController : BodyControllerT<BodyController>
    {
        BodyController() = default;

        static winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IBodyController> BodyControllers();
        static winrt::event_token BodyControllerAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerAddedEventArgs> const& handler);
        static void BodyControllerAdded(winrt::event_token const& token) noexcept;
        static winrt::event_token BodyControllerRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::BodyControllerRemovedEventArgs> const& handler);
        static void BodyControllerRemoved(winrt::event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        winrt::Windows::Xbox::System::User User();
        uint32_t BiometricUserId();
        winrt::event_token BiometricUserChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBiometricUserChangedEventArgs> const& handler);
        void BiometricUserChanged(winrt::event_token const& token) noexcept;
        winrt::Windows::Xbox::Input::IBodyControllerReading GetCurrentReading();
        winrt::event_token ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IBodyControllerReadingChangedEventArgs> const& handler);
        void ReadingChanged(winrt::event_token const& token) noexcept;
        winrt::Windows::Foundation::Collections::IVectorView<uint64_t> AssociatedControllerIds();
        winrt::event_token AssociatedControllerAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerAddedEventArgs> const& handler);
        void AssociatedControllerAdded(winrt::event_token const& token) noexcept;
        winrt::event_token AssociatedControllerRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::BodyController, winrt::Windows::Xbox::Input::IAssociatedControllerRemovedEventArgs> const& handler);
        void AssociatedControllerRemoved(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct BodyController : BodyControllerT<BodyController, implementation::BodyController>
    {
    };
}
